/// @description  vertex_default(vbuff, x, y, z, nx, ny, nz, u, v, color, alpha);
/// @param vbuff
/// @param  x
/// @param  y
/// @param  z
/// @param  nx
/// @param  ny
/// @param  nz
/// @param  u
/// @param  v
/// @param  color
/// @param  alpha
function vertex_default(argument0, argument1, argument2, argument3, argument4, argument5, argument6, argument7, argument8, argument9, argument10) {
	gml_pragma("forceinline");

	vertex_position_3d(argument0, argument1, argument2, argument3);
	vertex_normal(argument0, argument4, argument5, argument6);
	vertex_texcoord(argument0, argument7, argument8);
	vertex_colour(argument0, argument9, argument10);



}
