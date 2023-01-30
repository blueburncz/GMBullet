/// @description  vertex_formats_init();
function vertex_formats_init() {
	vertex_format_begin();
	vertex_format_add_position_3d();
	vertex_format_add_normal();
	vertex_format_add_textcoord();
	vertex_format_add_colour();

	global.vf_default = vertex_format_end();



}
