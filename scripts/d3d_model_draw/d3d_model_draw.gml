/// @description Draws the model at position (x, y, z).
/// @param ind The index of the model to be drawn.
/// @param x The x position to draw the model. 
/// @param y The y position to draw the model.
/// @param z The z position to draw the model.
/// @param texid The texture to use for drawing the model (use -1 to use no texture).
/// @returns
function d3d_model_draw(argument0, argument1, argument2, argument3, argument4) {

	var m = argument0;

	var tex = argument4;
	var vertsize = 36;
	var vertuvoffset = 28;
	if (tex!=-1 && tex != m[e__YYM.Texture])
	{	

		var texuvs = texture_get_uvs(tex);
		var uspan = texuvs[2] - texuvs[0];
		var vspan = texuvs[3] - texuvs[1];
		var ubase  = texuvs[0];
		var vbase  = texuvs[1];

	
		// Copy and scale\bias the unmolested UV coords to our buffers
		var __i;
	
		if ((m[e__YYM.PointB] != undefined) && (m[e__YYM.PointUVB] != undefined))
		{
			var numverts = buffer_tell(m[e__YYM.PointUVB]) / 8;
				
			buffer_seek(m[e__YYM.PointUVB], buffer_seek_start, 0);
			var __uvpos = vertuvoffset;
			var __src = m[e__YYM.PointUVB];
			var __dest = m[e__YYM.PointB];
			for(__i = 0; __i < numverts; __i++)
			{
				var __u = buffer_read(__src, buffer_f32);
				var __v = buffer_read(__src, buffer_f32);
			
				__u = (__u * uspan) + ubase;
				__v = (__v * vspan) + vbase;
						
				buffer_poke(__dest, __uvpos, buffer_f32, __u);
				buffer_poke(__dest, __uvpos + 4, buffer_f32, __v);
			
				__uvpos += vertsize;
			}
		}
	
		if ((m[e__YYM.LineB] != undefined) && (m[e__YYM.LineUVB] != undefined))
		{
			var numverts = buffer_tell(m[e__YYM.LineUVB]) / 8;
				
			buffer_seek(m[e__YYM.LineUVB], buffer_seek_start, 0);
			var __uvpos = vertuvoffset;
			var __src = m[e__YYM.LineUVB];
			var __dest = m[e__YYM.LineB];
			for(__i = 0; __i < numverts; __i++)
			{
				var __u = buffer_read(__src, buffer_f32);
				var __v = buffer_read(__src, buffer_f32);
			
				__u = (__u * uspan) + ubase;
				__v = (__v * vspan) + vbase;
						
				buffer_poke(__dest, __uvpos, buffer_f32, __u);
				buffer_poke(__dest, __uvpos + 4, buffer_f32, __v);
			
				__uvpos += vertsize;
			}
		}
	
		if ((m[e__YYM.TriB] != undefined) && (m[e__YYM.TriUVB] != undefined))
		{
			var numverts = buffer_tell(m[e__YYM.TriUVB]) / 8;
				
			buffer_seek(m[e__YYM.TriUVB], buffer_seek_start, 0);
			var __uvpos = vertuvoffset;
			var __src = m[e__YYM.TriUVB];
			var __dest =m[e__YYM.TriB];
			for(__i = 0; __i < numverts; __i++)
			{
				var __u = buffer_read(__src, buffer_f32);
				var __v = buffer_read(__src, buffer_f32);
			
				__u = (__u * uspan) + ubase;
				__v = (__v * vspan) + vbase;
						
				buffer_poke(__dest, __uvpos, buffer_f32, __u);
				buffer_poke(__dest, __uvpos + 4, buffer_f32, __v);
			
				__uvpos += vertsize;
			}
		}
	
	
		m[@e__YYM.Texture] = tex;

		// remove the current Vertex Buffers if present
		if (m[e__YYM.PointVB] != undefined) {
			vertex_delete_buffer(m[e__YYM.PointVB]);
			m[@e__YYM.PointVB] = undefined;
		} // end if

		if (m[e__YYM.LineVB] != undefined) {
			vertex_delete_buffer(m[e__YYM.LineVB]);
			m[@e__YYM.LineVB] = undefined;
		} // end if
	
		if (m[e__YYM.TriVB] != undefined) {
			vertex_delete_buffer(m[e__YYM.TriVB]);
			m[@e__YYM.TriVB] = undefined;
		} // end if
	}


	var currColour = draw_get_colour() | ((draw_get_alpha()*255.0) << 24);
	// if colour is different from the previous cached entry then rebuild the model
	if ((currColour != m[e__YYM.Colour]) && ((m[e__YYM.NumPointCols] > 0) || (m[e__YYM.NumLineCols] > 0) || (m[e__YYM.NumTriCols] > 0))) {

		var __numPointCols = m[e__YYM.NumPointCols];
		var __numLineCols = m[e__YYM.NumLineCols];
		var __numTriCols = m[e__YYM.NumTriCols];

		// go through and change all the entries with no colour in them to be the same as the draw colour
		var __i;
	
		if (m[e__YYM.PointB] != undefined)
		{
			var __offsets = m[e__YYM.PointCols];
			var __dest = m[e__YYM.PointB];
			for(__i = 0; __i < __numPointCols; __i++)
			{
				buffer_poke(__dest, __offsets[__i], buffer_u32, currColour);
			}
		}
	
		if (m[e__YYM.LineB] != undefined)
		{
			var __offsets = m[e__YYM.LineCols];
			var __dest = m[e__YYM.LineB];
			for(__i = 0; __i < __numLineCols; __i++)
			{
				buffer_poke(__dest, __offsets[__i], buffer_u32, currColour);
			}
		}
	
		if (m[e__YYM.TriB] != undefined)
		{
			var __offsets = m[e__YYM.TriCols];
			var __dest = m[e__YYM.TriB];
			for(__i = 0; __i < __numTriCols; __i++)
			{
				buffer_poke(__dest, __offsets[__i], buffer_u32, currColour);
			}
		}

		// remove the current Vertex Buffers if present
		if (m[e__YYM.PointVB] != undefined) {
			vertex_delete_buffer(m[e__YYM.PointVB]);
			m[@e__YYM.PointVB] = undefined;
		} // end if

		if (m[e__YYM.LineVB] != undefined) {
			vertex_delete_buffer(m[e__YYM.LineVB]);
			m[@e__YYM.LineVB] = undefined;
		} // end if
	
		if (m[e__YYM.TriVB] != undefined) {
			vertex_delete_buffer(m[e__YYM.TriVB]);
			m[@e__YYM.TriVB] = undefined;
		} // end if
	
		m[@e__YYM.Colour] = currColour;
	} // end if

	// set the translation to this (argument1, argument2, argument3)
	var mW = matrix_get( matrix_world );
	var mT = matrix_build( argument1, argument2, argument3, 0, 0, 0, 1, 1, 1 );
	var mNew = matrix_multiply( mT, mW );
	matrix_set( matrix_world, mNew );

	var __oldrep = gpu_get_texrepeat();
	gpu_set_texrepeat(true)	

	// draw the tri list buffer
	if (m[e__YYM.TriB] != undefined) {

		// convert to a vertex buffer if need be
		if (m[e__YYM.TriVB] == undefined) {
			m[@e__YYM.TriVB] = vertex_create_buffer_from_buffer( m[e__YYM.TriB], global.__d3dPrimVF );
			vertex_freeze(m[e__YYM.TriVB]);		
		} // end if
	
		vertex_submit( m[e__YYM.TriVB], pr_trianglelist, argument4 );
	} // end if

	// draw the line buffer
	if (m[e__YYM.LineB] != undefined) {

		// convert to a vertex buffer if need be
		if (m[e__YYM.LineVB] == undefined) {
			m[@e__YYM.LineVB] = vertex_create_buffer_from_buffer( m[e__YYM.LineB], global.__d3dPrimVF );
			vertex_freeze(m[e__YYM.LineVB]);
		} // end if
	
		vertex_submit( m[e__YYM.LineVB], pr_linelist, argument4 );
	} // end if

	// draw the point buffer
	if (m[e__YYM.PointB] != undefined) {

		// convert to a vertex buffer if need be
		if (m[e__YYM.PointVB] == undefined) {
			m[@e__YYM.PointVB] = vertex_create_buffer_from_buffer( m[e__YYM.PointB], global.__d3dPrimVF );
			vertex_freeze(m[e__YYM.PointVB]);
		} // end if
	
		vertex_submit( m[e__YYM.PointVB], pr_pointlist,  argument4 );
	} // end if

	// Restore the matrix
	matrix_set( matrix_world, mW );

	gpu_set_texrepeat(__oldrep);



}
