function CTerrain(_heightmap=undefined, _subimage=0, _chunkSize=128) constructor
{
	Texture = sprite_get_texture(bg_floor, 0);

	Position = [0, 0, 0];

	Size = [0, 0];

	Scale = [1, 1, 1];

	__height = ds_grid_create(1, 1);

	__normalX = ds_grid_create(1, 1);
	ds_grid_clear(__normalX, 0);

	__normalY = ds_grid_create(1, 1);
	ds_grid_clear(__normalY, 0);

	__normalZ = ds_grid_create(1, 1);
	ds_grid_clear(__normalZ, 1);

	__normalSmoothX = ds_grid_create(1, 1);
	ds_grid_clear(__normalSmoothX, 0);

	__normalSmoothY = ds_grid_create(1, 1);
	ds_grid_clear(__normalSmoothY, 0);

	__normalSmoothZ = ds_grid_create(1, 1);
	ds_grid_clear(__normalSmoothZ, 1);

	ChunkSize = _chunkSize;

	Chunks = ds_grid_create(1, 1);
	ds_grid_clear(Chunks, undefined);

	static VertexFormat = undefined;

	if (VertexFormat == undefined)
	{
		vertex_format_begin();
		vertex_format_add_position_3d();
		vertex_format_add_normal();
		vertex_format_add_texcoord();
		VertexFormat = vertex_format_end();
	}

	static from_heightmap = function (_sprite, _subimage=0)
	{
		var _spriteWidth = sprite_get_width(_sprite);
		var _spriteHeight = sprite_get_height(_sprite);

		Size[@ 0] = _spriteWidth;
		Size[@ 1] = _spriteHeight;

		ds_grid_resize(__height, _spriteWidth, _spriteHeight);
		ds_grid_clear(__height, 0);

		ds_grid_resize(__normalX, _spriteWidth, _spriteHeight);
		ds_grid_clear(__normalX, 0);

		ds_grid_resize(__normalY, _spriteWidth, _spriteHeight);
		ds_grid_clear(__normalY, 0);

		ds_grid_resize(__normalZ, _spriteWidth, _spriteHeight);
		ds_grid_clear(__normalZ, 1);

		ds_grid_resize(__normalSmoothX, _spriteWidth, _spriteHeight);
		ds_grid_clear(__normalSmoothX, 0);

		ds_grid_resize(__normalSmoothY, _spriteWidth, _spriteHeight);
		ds_grid_clear(__normalSmoothY, 0);

		ds_grid_resize(__normalSmoothZ, _spriteWidth, _spriteHeight);
		ds_grid_clear(__normalSmoothZ, 1);

		var _surface = surface_create(_spriteWidth, _spriteHeight);
		surface_set_target(_surface);
		draw_sprite(_sprite, _subimage, 0, 0);
		surface_reset_target();

		var _buffer = buffer_create(_spriteWidth * _spriteHeight * 4, buffer_fast, 1);
		buffer_get_surface(_buffer, _surface, 0);
		surface_free(_surface);
		buffer_seek(_buffer, buffer_seek_start, 1);

		var _j = 0;
		repeat (_spriteHeight)
		{
			var _i = 0;
			repeat (_spriteWidth)
			{
				__height[# _i++, _j] = buffer_read(_buffer, buffer_u8);
				buffer_seek(_buffer, buffer_seek_relative, 3);
			}
			++_j;
		}

		buffer_delete(_buffer);

		for (var i = ds_grid_width(Chunks) - 1; i >= 0; --i)
		{
			for (var j = ds_grid_height(Chunks) - 1; j >= 0; --j)
			{
				var _chunk = Chunks[# i, j];
				if (_chunk != undefined)
				{
					vertex_delete_buffer(_chunk);
				}
			}
		}

		var _chunksX = max(ceil(_spriteWidth / ChunkSize), 1);
		var _chunksY = max(ceil(_spriteHeight / ChunkSize), 1);

		ds_grid_resize(Chunks, _chunksX, _chunksY);
		ds_grid_clear(Chunks, undefined);
	};

	static get_height_index = function (_i, _j)
	{
		return __height[#
			clamp(_i, 0, ds_grid_width(__height) - 1),
			clamp(_j, 0, ds_grid_height(__height) - 1)
		];
	};

	static build_normals = function ()
	{
		var _i = 0;
		repeat (ds_grid_width(__height))
		{
			var _j = 0;
			repeat (ds_grid_height(__height))
			{
				var _nx = get_height_index(_i - 1, _j) - get_height_index(_i + 1, _j);
				var _ny = get_height_index(_i, _j - 1) - get_height_index(_i, _j + 1);
				var _nz = 2.0;
				var _r = sqrt((_nx * _nx) + (_ny * _ny) + (_nz * _nz));
				_nx /= _r;
				_ny /= _r;
				_nz /= _r;
				__normalX[# _i, _j] = _nx;
				__normalY[# _i, _j] = _ny;
				__normalZ[# _i, _j] = _nz;
				++_j;
			}
			++_i;
		}
	};

	static build_smooth_normals = function ()
	{
		var _width = ds_grid_width(__height);
		var _height = ds_grid_height(__height);
		for (var x1 = 0; x1 < _width; ++x1)
		{
			for (var y1 = 0; y1 < _height; ++y1)
			{
				var _nx = ds_grid_get_mean(__normalX, x1 - 1, y1 - 1, x1 + 1, y1 + 1);
				var _ny = ds_grid_get_mean(__normalY, x1 - 1, y1 - 1, x1 + 1, y1 + 1);
				var _nz = ds_grid_get_mean(__normalZ, x1 - 1, y1 - 1, x1 + 1, y1 + 1);
				var _r = sqrt((_nx * _nx) + (_ny * _ny) + (_nz * _nz));
				_nx /= _r;
				_ny /= _r;
				_nz /= _r;
				__normalSmoothX[# x1, y1] = _nx;
				__normalSmoothY[# x1, y1] = _ny;
				__normalSmoothZ[# x1, y1] = _nz;
			}
		}
	};

	static build_chunk = function (_chunkI, _chunkJ)
	{
		var _chunk = Chunks[# _chunkI, _chunkJ];
		if (_chunk != undefined)
		{
			vertex_delete_buffer(_chunk);
		}

		var _height = __height;
		var _terrainWidth = ds_grid_width(_height);
		var _terrainHeight = ds_grid_height(_height);
		var _rows = min(_terrainWidth - 1 - _chunkI * ChunkSize, ChunkSize);
		var _cols = min(_terrainHeight - 1 - _chunkJ * ChunkSize, ChunkSize);
	
		var _vbuffer = vertex_create_buffer();
		vertex_begin(_vbuffer, VertexFormat);

		var _i = _chunkI * ChunkSize;
		repeat (_rows)
		{
			var _j = _chunkJ * ChunkSize;
			repeat (_cols)
			{
				var _z1 = _height[# _i, _j];
				var _z2 = _height[# _i + 1, _j];
				var _z3 = _height[# _i + 1, _j + 1];
				var _z4 = _height[# _i, _j + 1];

				var _x1 = _i;
				var _y1 = _j;
				var _x2 = _i + 1;
				var _y2 = _j;
				var _x3 = _i + 1;
				var _y3 = _j + 1;
				var _x4 = _i;
				var _y4 = _j + 1;

				var _u1 = _i / _terrainWidth;
				var _v1 = _j / _terrainHeight;
				var _u2 = (_i + 1) / _terrainWidth;
				var _v2 = _j / _terrainHeight;
				var _u3 = (_i + 1) / _terrainWidth;
				var _v3 = (_j + 1) / _terrainHeight;
				var _u4 = _i / _terrainWidth;
				var _v4 = (_j + 1) / _terrainHeight;

				var _n1X = __normalSmoothX[# _i, _j];
				var _n1Y = __normalSmoothY[# _i, _j];
				var _n1Z = __normalSmoothZ[# _i, _j];

				var _n2X = __normalSmoothX[# _i + 1, _j];
				var _n2Y = __normalSmoothY[# _i + 1, _j];
				var _n2Z = __normalSmoothZ[# _i + 1, _j];

				var _n3X = __normalSmoothX[# _i + 1, _j + 1];
				var _n3Y = __normalSmoothY[# _i + 1, _j + 1];
				var _n3Z = __normalSmoothZ[# _i + 1, _j + 1];

				var _n4X = __normalSmoothX[# _i, _j + 1];
				var _n4Y = __normalSmoothY[# _i, _j + 1];
				var _n4Z = __normalSmoothZ[# _i, _j + 1];

				// 1
				// |\
				// 4-3
				vertex_position_3d(_vbuffer, _x1, _y1, _z1);
				vertex_normal(_vbuffer, _n1X, _n1Y, _n1Z);
				vertex_texcoord(_vbuffer, _u1, _v1);

				vertex_position_3d(_vbuffer, _x3, _y3, _z3);
				vertex_normal(_vbuffer, _n3X, _n3Y, _n3Z);
				vertex_texcoord(_vbuffer, _u3, _v3);

				vertex_position_3d(_vbuffer, _x4, _y4, _z4);
				vertex_normal(_vbuffer, _n4X, _n4Y, _n4Z);
				vertex_texcoord(_vbuffer, _u4, _v4);

				// 1-2
				//  \|
				//   3
				vertex_position_3d(_vbuffer, _x1, _y1, _z1);
				vertex_normal(_vbuffer, _n1X, _n1Y, _n1Z);
				vertex_texcoord(_vbuffer, _u1, _v1);

				vertex_position_3d(_vbuffer, _x2, _y2, _z2);
				vertex_normal(_vbuffer, _n2X, _n2Y, _n2Z);
				vertex_texcoord(_vbuffer, _u2, _v2);

				vertex_position_3d(_vbuffer, _x3, _y3, _z3);
				vertex_normal(_vbuffer, _n3X, _n3Y, _n3Z);
				vertex_texcoord(_vbuffer, _u3, _v3);

				++_j;
			}
			++_i;
		}

		vertex_end(_vbuffer);
		vertex_freeze(_vbuffer);
		Chunks[# _chunkI, _chunkJ] = _vbuffer;
	};

	static build_mesh = function ()
	{
		var _chunksX = ds_grid_width(Chunks);
		var _chunksY = ds_grid_height(Chunks);

		var i = 0;
		repeat (_chunksX)
		{
			var j = 0;
			repeat (_chunksY)
			{
				build_chunk(i, j);
				++j;
			}
			++i;
		}
	};

	static submit = function ()
	{
		var _matrix = matrix_build(Position[0], Position[1], Position[2], 0, 0, 0, Scale[0], Scale[1], Scale[2]);
		var _normalMatrix = matrix_build_normalmatrix(_matrix);
		var _chunkFromX = 0;
		var _chunkFromY = 0;
		var _chunkToX = ds_grid_width(Chunks);
		var _chunkToY = ds_grid_height(Chunks);

		matrix_set(matrix_world, _matrix);
		shader_set_uniform_matrix_array(shader_get_uniform(shader_current(), "u_mNormalMatrix"), _normalMatrix);

		var _i = _chunkFromX;
		repeat (_chunkToX - _chunkFromX)
		{
			var _j = _chunkFromY;
			repeat (_chunkToY - _chunkFromY)
			{
				var _chunk = Chunks[# _i, _j];
				if (_chunk != undefined)
				{
					vertex_submit(_chunk, pr_trianglelist, Texture);
				}
				++_j;
			}
			++_i;
		}

		matrix_set(matrix_world, matrix_build_identity());
	};

	static destroy = function ()
	{
		ds_grid_destroy(__splatmapGrid);
		ds_grid_destroy(__height);
		ds_grid_destroy(__normalX);
		ds_grid_destroy(__normalY);
		ds_grid_destroy(__normalZ);
		ds_grid_destroy(__normalSmoothX);
		ds_grid_destroy(__normalSmoothY);
		ds_grid_destroy(__normalSmoothZ);

		for (var i = ds_grid_width(Chunks) - 1; i >= 0; --i)
		{
			for (var j = ds_grid_height(Chunks) - 1; j >= 0; --j)
			{
				var _chunk = Chunks[# i, j];
				if (_chunk != undefined)
				{
					vertex_delete_buffer(_chunk);
				}
			}
		}

		ds_grid_destroy(Chunks);
	};

	if (_heightmap != undefined)
	{
		from_heightmap(_heightmap, _subimage);
		build_normals();
		build_smooth_normals();
		build_mesh();
	}
}
