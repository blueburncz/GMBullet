/* Draw terrain */
shader_set(sh_terrain);
terrain.submit();
shader_reset();

/* Draw static mesh */
shader_set(sh_mesh);
matrix_set(matrix_world, matrix_build(0, 0, -120, 0, 0, 0, 200, 200, 200));
vertex_submit(vbuffer, pr_trianglelist, -1);
shader_reset();

/* Draw Boxes */
shader_set(sh_default);

with (obj_box)
{
	var tex = sprite_get_texture(spr_body, !btCollisionObject_isActive(body));
	matrix_set(matrix_world, matrix);
	vertex_submit(other.vb_cube, pr_trianglelist, tex);
}

/* Draw Spheres */
with (obj_sphere)
{
	var tex = sprite_get_texture(spr_body, !btCollisionObject_isActive(body));
	matrix_set(matrix_world, matrix);
	d3d_model_draw(other.mdl_sphere, 0, 0, 0, tex);
}

/* Draw raycast result */
with (obj_camera)
{
	var _rayFromWorld = btVector3_create(x, y, z);
	var _rayToWorld = btVector3_create(x + look_x * 1000, y + look_y * 1000, z + look_z * 1000);
	var _closestHit = btClosestRayResultCallback_create(_rayFromWorld, _rayToWorld);
	var _collisionWorld = btDiscreteDynamicsWorld_getCollisionWorld(other.dynamicsWorld);
	btCollisionWorld_rayTest(_collisionWorld, _rayFromWorld, _rayToWorld, _closestHit);
	if (btRayResultCallback_hasHit(_closestHit))
	{
		var _point = [];
		btClosestRayResultCallback_getHitPointWorldArray(_closestHit, _point);
		var _matrix = matrix_build(_point[0], _point[1], _point[2], 0, 0, 0, 0.5, 0.5, 0.5);
		matrix_set(matrix_world, _matrix);
		d3d_model_draw(other.mdl_sphere, 0, 0, 0, sprite_get_texture(spr_body, 1));
	}
	btVector3_destroy(_rayFromWorld);
	btVector3_destroy(_rayToWorld);
}

d3d_transform_set_identity();
shader_reset();

if (debug)
{
	btCollisionWorld_debugDrawWorld(dynamicsWorld);
	var _size = btDebugDrawInMemory_getSize(debugDraw);
	if (_size > 0)
	{
		if (buffer_get_size(debugDrawBuffer) < _size)
		{
			buffer_resize(debugDrawBuffer, _size);
		}
		btDebugDrawInMemory_toBuffer(debugDraw, debugDrawBuffer);
		buffer_set_used_size(debugDrawBuffer, _size);
		var _vbuffer = vertex_create_buffer_from_buffer(debugDrawBuffer, btGetDebugDrawVertexFormat());
		shader_set(btShDebugDraw);
		vertex_submit(_vbuffer, pr_linelist, -1);
		shader_reset();
		vertex_delete_buffer(_vbuffer);
	}
}
