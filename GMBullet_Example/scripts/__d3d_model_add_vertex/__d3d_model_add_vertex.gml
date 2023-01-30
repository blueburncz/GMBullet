function __d3d_model_add_vertex(argument0, argument1, argument2, argument3, argument4, argument5, argument6, argument7, argument8, argument9) {

		var m = argument0;
		var i = e__YYM.TriB;
		var uv_i = e__YYM.TriUVB;
		var colarrayi = e__YYM.TriCols;
		var colnum = e__YYM.NumTriCols;
		switch(m[e__YYM.PrimKind])
		{
		case pr_pointlist:
			i = e__YYM.PointB;
			uv_i = e__YYM.PointUVB;
			colarrayi = e__YYM.PointCols;
			colnum = e__YYM.NumPointCols;
			break;
		case pr_linelist:
		case pr_linestrip:
			i = e__YYM.LineB;
			uv_i = e__YYM.LineUVB;
			colarrayi = e__YYM.LineCols;
			colnum = e__YYM.NumLineCols;
			break;
		}

		var colarray = m[colarrayi];

		// create the buffer if we need to
		var b = m[i];
		if (b == undefined) {
			b = buffer_create( 36, buffer_grow, 1 );
			m[@i] = b;
		} // end if

		// create the uv buffer if we need to
		var uvb = m[uv_i];
		if (uvb == undefined)
		{
			uvb = buffer_create(8, buffer_grow, 1);
			m[@uv_i] = uvb;
		}

		var globalcol = false;
		if (argument7 == $00010000)
		{
			globalcol = true;
		}

		// add the vertex in
		var c = m[e__YYM.NumVerts];
		switch(m[e__YYM.PrimKind])
		{
		case pr_pointlist:
		case pr_linelist:
		case pr_trianglelist:
			buffer_write( b, buffer_f32, argument1 );		// x
			buffer_write( b, buffer_f32, argument2 );		// y
			buffer_write( b, buffer_f32, argument3 );		// z
			buffer_write( b, buffer_f32, argument4 );		// nx
			buffer_write( b, buffer_f32, argument5 );		// ny
			buffer_write( b, buffer_f32, argument6 );		// nz
			buffer_write( b, buffer_u32, argument7 );		// colour
			buffer_write( b, buffer_f32, argument8 );		// u
			buffer_write( b, buffer_f32, argument9 );		// v		
	
			buffer_write( uvb, buffer_f32, argument8 );
			buffer_write( uvb, buffer_f32, argument9 );
			++c;
	
			if (globalcol)
			{
				colarray[ m[colnum]] = buffer_tell(b) - 12;
				m[@ colnum]++;
			}
			break;
		case pr_linestrip:
			// add the previous if we are on vertex 1 or above
			if (c >= 2) {
				buffer_write( b, buffer_f32, m[ e__YYM.V1X ] );		// x
				buffer_write( b, buffer_f32, m[ e__YYM.V1Y ] );		// y
				buffer_write( b, buffer_f32, m[ e__YYM.V1Z ] );		// z
				buffer_write( b, buffer_f32, m[ e__YYM.V1NX ] );	// nx
				buffer_write( b, buffer_f32, m[ e__YYM.V1NY ] );	// ny
				buffer_write( b, buffer_f32, m[ e__YYM.V1NZ ] );	// nz
				buffer_write( b, buffer_u32, m[ e__YYM.V1C ] );		// colour
				buffer_write( b, buffer_f32, m[ e__YYM.V1U ] );		// u
				buffer_write( b, buffer_f32, m[ e__YYM.V1V ] );		// v
		
				buffer_write( uvb, buffer_f32, m[ e__YYM.V1U ] );
				buffer_write( uvb, buffer_f32, m[ e__YYM.V1V ] );	
				++c;
		
				if (globalcol)
				{
					colarray[ m[colnum]] = buffer_tell(b) - 12;
					m[@ colnum]++;
				}
			} // end if	
	
			m[@ e__YYM.V1X ] = argument1;
			m[@ e__YYM.V1Y ] = argument2;
			m[@ e__YYM.V1Z ] = argument3;
			m[@ e__YYM.V1NX ] = argument4;
			m[@ e__YYM.V1NY ] = argument5;
			m[@ e__YYM.V1NZ ] = argument6;
			m[@ e__YYM.V1C ] = argument7;
			m[@ e__YYM.V1U ] = argument8;
			m[@ e__YYM.V1V ] = argument9;
	
			buffer_write( b, buffer_f32, argument1 );		// x
			buffer_write( b, buffer_f32, argument2 );		// y
			buffer_write( b, buffer_f32, argument3 );		// z
			buffer_write( b, buffer_f32, argument4 );		// nx
			buffer_write( b, buffer_f32, argument5 );		// ny
			buffer_write( b, buffer_f32, argument6 );		// nz
			buffer_write( b, buffer_u32, argument7 );		// colour
			buffer_write( b, buffer_f32, argument8 );		// u
			buffer_write( b, buffer_f32, argument9 );		// v	
	
			buffer_write( uvb, buffer_f32, argument8 );
			buffer_write( uvb, buffer_f32, argument9 );
			++c;
	
			if (globalcol)
			{
				colarray[ m[colnum]] = buffer_tell(b) - 12;
				m[@ colnum]++;
			}	
			break;
		case pr_trianglestrip:
			// add the previous if we are on vertex 1 or above
			var flip = ((c & 1) == 1) ? true : false;
			if (c >= 3) {
				if (flip)
				{						
					buffer_write( b, buffer_f32, m[ e__YYM.V2X ] );		// x
					buffer_write( b, buffer_f32, m[ e__YYM.V2Y ] );		// y
					buffer_write( b, buffer_f32, m[ e__YYM.V2Z ] );		// z
					buffer_write( b, buffer_f32, m[ e__YYM.V2NX ] );	// nx
					buffer_write( b, buffer_f32, m[ e__YYM.V2NY ] );	// ny
					buffer_write( b, buffer_f32, m[ e__YYM.V2NZ ] );	// nz
					buffer_write( b, buffer_u32, m[ e__YYM.V2C ] );		// colour
					buffer_write( b, buffer_f32, m[ e__YYM.V2U ] );		// u
					buffer_write( b, buffer_f32, m[ e__YYM.V2V ] );		// v
		
					buffer_write( uvb, buffer_f32, m[ e__YYM.V2U ] );
					buffer_write( uvb, buffer_f32, m[ e__YYM.V2V ] );
					++c;
				
					buffer_write( b, buffer_f32, m[ e__YYM.V1X ] );		// x
					buffer_write( b, buffer_f32, m[ e__YYM.V1Y ] );		// y
					buffer_write( b, buffer_f32, m[ e__YYM.V1Z ] );		// z
					buffer_write( b, buffer_f32, m[ e__YYM.V1NX ] );	// nx
					buffer_write( b, buffer_f32, m[ e__YYM.V1NY ] );	// ny
					buffer_write( b, buffer_f32, m[ e__YYM.V1NZ ] );	// nz
					buffer_write( b, buffer_u32, m[ e__YYM.V1C ] );		// colour
					buffer_write( b, buffer_f32, m[ e__YYM.V1U ] );		// u
					buffer_write( b, buffer_f32, m[ e__YYM.V1V ] );		// v
		
					buffer_write( uvb, buffer_f32, m[ e__YYM.V1U ] );
					buffer_write( uvb, buffer_f32, m[ e__YYM.V1V ] );
					++c;
				}
				else
				{
					buffer_write( b, buffer_f32, m[ e__YYM.V1X ] );		// x
					buffer_write( b, buffer_f32, m[ e__YYM.V1Y ] );		// y
					buffer_write( b, buffer_f32, m[ e__YYM.V1Z ] );		// z
					buffer_write( b, buffer_f32, m[ e__YYM.V1NX ] );	// nx
					buffer_write( b, buffer_f32, m[ e__YYM.V1NY ] );	// ny
					buffer_write( b, buffer_f32, m[ e__YYM.V1NZ ] );	// nz
					buffer_write( b, buffer_u32, m[ e__YYM.V1C ] );		// colour
					buffer_write( b, buffer_f32, m[ e__YYM.V1U ] );		// u
					buffer_write( b, buffer_f32, m[ e__YYM.V1V ] );		// v
		
					buffer_write( uvb, buffer_f32, m[ e__YYM.V1U ] );
					buffer_write( uvb, buffer_f32, m[ e__YYM.V1V ] );
					++c;
		
					buffer_write( b, buffer_f32, m[ e__YYM.V2X ] );		// x
					buffer_write( b, buffer_f32, m[ e__YYM.V2Y ] );		// y
					buffer_write( b, buffer_f32, m[ e__YYM.V2Z ] );		// z
					buffer_write( b, buffer_f32, m[ e__YYM.V2NX ] );	// nx
					buffer_write( b, buffer_f32, m[ e__YYM.V2NY ] );	// ny
					buffer_write( b, buffer_f32, m[ e__YYM.V2NZ ] );	// nz
					buffer_write( b, buffer_u32, m[ e__YYM.V2C ] );		// colour
					buffer_write( b, buffer_f32, m[ e__YYM.V2U ] );		// u
					buffer_write( b, buffer_f32, m[ e__YYM.V2V ] );		// v
		
					buffer_write( uvb, buffer_f32, m[ e__YYM.V2U ] );
					buffer_write( uvb, buffer_f32, m[ e__YYM.V2V ] );
					++c;
				}					
		
				if (globalcol)
				{
					colarray[ m[colnum]] = buffer_tell(b) - (12 + 36) ;
					m[@ colnum]++;
			
					colarray[ m[colnum]] = buffer_tell(b) - 12;
					m[@ colnum]++;
				}	
			} // end if	
	
			m[@ e__YYM.V1X ] = m[ e__YYM.V2X ];
			m[@ e__YYM.V1Y ] = m[ e__YYM.V2Y ];
			m[@ e__YYM.V1Z ] = m[ e__YYM.V2Z ];
			m[@ e__YYM.V1NX ] = m[ e__YYM.V2NX ];
			m[@ e__YYM.V1NY ] = m[ e__YYM.V2NY ];
			m[@ e__YYM.V1NZ ] = m[ e__YYM.V2NZ ];
			m[@ e__YYM.V1C ] = m[ e__YYM.V2C ];
			m[@ e__YYM.V1U ] = m[ e__YYM.V2U ];
			m[@ e__YYM.V1V ] = m[ e__YYM.V2V ];
	
			m[@ e__YYM.V2X ] = argument1;
			m[@ e__YYM.V2Y ] = argument2;
			m[@ e__YYM.V2Z ] = argument3;
			m[@ e__YYM.V2NX ] = argument4;
			m[@ e__YYM.V2NY ] = argument5;
			m[@ e__YYM.V2NZ ] = argument6;
			m[@ e__YYM.V2C ] = argument7;
			m[@ e__YYM.V2U ] = argument8;
			m[@ e__YYM.V2V ] = argument9;
	
			buffer_write( b, buffer_f32, argument1 );		// x
			buffer_write( b, buffer_f32, argument2 );		// y
			buffer_write( b, buffer_f32, argument3 );		// z
			buffer_write( b, buffer_f32, argument4 );		// nx
			buffer_write( b, buffer_f32, argument5 );		// ny
			buffer_write( b, buffer_f32, argument6 );		// nz
			buffer_write( b, buffer_u32, argument7 );		// colour
			buffer_write( b, buffer_f32, argument8 );		// u
			buffer_write( b, buffer_f32, argument9 );		// v
	
			buffer_write( uvb, buffer_f32, argument8 );
			buffer_write( uvb, buffer_f32, argument9 );
	
			if (globalcol)
			{
				colarray[ m[colnum]] = buffer_tell(b) - 12;
				m[@ colnum]++;
			}	
			++c;
			break;
		case pr_trianglefan:
			if (c==0) {
				m[@ e__YYM.V1X ] = argument1;
				m[@ e__YYM.V1Y ] = argument2;
				m[@ e__YYM.V1Z ] = argument3;
				m[@ e__YYM.V1NX ] = argument4;
				m[@ e__YYM.V1NY ] = argument5;
				m[@ e__YYM.V1NZ ] = argument6;
				m[@ e__YYM.V1C ] = argument7;
				m[@ e__YYM.V1U ] = argument8;
				m[@ e__YYM.V1V ] = argument9;
			} // end if
	
			if (c >= 3) {
				buffer_write( b, buffer_f32, m[ e__YYM.V1X ] );		// x
				buffer_write( b, buffer_f32, m[ e__YYM.V1Y ] );		// y
				buffer_write( b, buffer_f32, m[ e__YYM.V1Z ] );		// z
				buffer_write( b, buffer_f32, m[ e__YYM.V1NX ] );	// nx
				buffer_write( b, buffer_f32, m[ e__YYM.V1NY ] );	// ny
				buffer_write( b, buffer_f32, m[ e__YYM.V1NZ ] );	// nz
				buffer_write( b, buffer_u32, m[ e__YYM.V1C ] );		// colour
				buffer_write( b, buffer_f32, m[ e__YYM.V1U ] );		// u
				buffer_write( b, buffer_f32, m[ e__YYM.V1V ] );		// v
		
				buffer_write( uvb, buffer_f32, m[ e__YYM.V1U ] );
				buffer_write( uvb, buffer_f32, m[ e__YYM.V1V ] );
				++c;
		
				buffer_write( b, buffer_f32, m[ e__YYM.V2X ] );		// x
				buffer_write( b, buffer_f32, m[ e__YYM.V2Y ] );		// y
				buffer_write( b, buffer_f32, m[ e__YYM.V2Z ] );		// z
				buffer_write( b, buffer_f32, m[ e__YYM.V2NX ] );	// nx
				buffer_write( b, buffer_f32, m[ e__YYM.V2NY ] );	// ny
				buffer_write( b, buffer_f32, m[ e__YYM.V2NZ ] );	// nz
				buffer_write( b, buffer_u32, m[ e__YYM.V2C ] );		// colour
				buffer_write( b, buffer_f32, m[ e__YYM.V2U ] );		// u
				buffer_write( b, buffer_f32, m[ e__YYM.V2V ] );		// v
		
				buffer_write( uvb, buffer_f32, m[ e__YYM.V2U ] );
				buffer_write( uvb, buffer_f32, m[ e__YYM.V2V ] );
				++c;
		
				if (globalcol)
				{
					colarray[ m[colnum]] = buffer_tell(b) - (12 + 36) ;
					m[@ colnum]++;
			
					colarray[ m[colnum]] = buffer_tell(b) - 12;
					m[@ colnum]++;
				}	
			} // end if	
	
			m[@ e__YYM.V2X ] = argument1;
			m[@ e__YYM.V2Y ] = argument2;
			m[@ e__YYM.V2Z ] = argument3;
			m[@ e__YYM.V2NX ] = argument4;
			m[@ e__YYM.V2NY ] = argument5;
			m[@ e__YYM.V2NZ ] = argument6;
			m[@ e__YYM.V2C ] = argument7;
			m[@ e__YYM.V2U ] = argument8;
			m[@ e__YYM.V2V ] = argument9;
	
			buffer_write( b, buffer_f32, argument1 );		// x
			buffer_write( b, buffer_f32, argument2 );		// y
			buffer_write( b, buffer_f32, argument3 );		// z
			buffer_write( b, buffer_f32, argument4 );		// nx
			buffer_write( b, buffer_f32, argument5 );		// ny
			buffer_write( b, buffer_f32, argument6 );		// nz
			buffer_write( b, buffer_u32, argument7 );		// colour
			buffer_write( b, buffer_f32, argument8 );		// u
			buffer_write( b, buffer_f32, argument9 );		// v
	
			buffer_write( uvb, buffer_f32, argument8 );
			buffer_write( uvb, buffer_f32, argument9 );
			++c;
	
			if (globalcol)
			{
				colarray[ m[colnum]] = buffer_tell(b) - 12;
				m[@ colnum]++;
			}	
			break;
		} 
		m[@ e__YYM.NumVerts ] = c;
		m[@ colarrayi] = colarray;	// this is probably super-bad - may switch over to using buffers for the colour offset tables rather than arrays to avoid copies


}
