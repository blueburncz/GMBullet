/// @description  model_build_cube(x1, y1, z1, x2, y2, z2, hrepeat, vrepeat);
/// @param x1
/// @param  y1
/// @param  z1
/// @param  x2
/// @param  y2
/// @param  z2
/// @param  hrepeat
/// @param  vrepeat
function model_build_cube(argument0, argument1, argument2, argument3, argument4, argument5, argument6, argument7) {
	var x1 = argument0,
	    y1 = argument1,
	    z1 = argument2,
	    x2 = argument3,
	    y2 = argument4,
	    z2 = argument5,
	    hr = argument6,
	    vr = argument7,
	    vb = vertex_create_buffer();

	/* Prepare VBO */
	vertex_begin(vb, global.vf_default);

	/* Top */
	vertex_default(vb, x1, y1, z2, 0, 0, 1, 0, 0, c_white, 1);
	vertex_default(vb, x2, y1, z2, 0, 0, 1, hr, 0, c_white, 1);
	vertex_default(vb, x1, y2, z2, 0, 0, 1, 0, vr, c_white, 1);

	vertex_default(vb, x2, y1, z2, 0, 0, 1, hr, 0, c_white, 1);
	vertex_default(vb, x2, y2, z2, 0, 0, 1, hr, vr, c_white, 1);
	vertex_default(vb, x1, y2, z2, 0, 0, 1, 0, vr, c_white, 1);

	/* Bottom */
	vertex_default(vb, x1, y2, z1, 0, 0, -1, 0, vr, c_white, 1);
	vertex_default(vb, x2, y1, z1, 0, 0, -1, hr, 0, c_white, 1);
	vertex_default(vb, x1, y1, z1, 0, 0, -1, 0, 0, c_white, 1);

	vertex_default(vb, x1, y2, z1, 0, 0, -1, 0, vr, c_white, 1);
	vertex_default(vb, x2, y2, z1, 0, 0, -1, hr, vr, c_white, 1);
	vertex_default(vb, x2, y1, z1, 0, 0, -1, hr, 0, c_white, 1);

	/* Front */
	vertex_default(vb, x1, y2, z2, 0, 1, 0, 0, vr, c_white, 1);
	vertex_default(vb, x2, y2, z1, 0, 1, 0, hr, 0, c_white, 1);
	vertex_default(vb, x1, y2, z1, 0, 1, 0, 0, 0, c_white, 1);

	vertex_default(vb, x1, y2, z2, 0, 1, 0, 0, vr, c_white, 1);
	vertex_default(vb, x2, y2, z2, 0, 1, 0, hr, vr, c_white, 1);
	vertex_default(vb, x2, y2, z1, 0, 1, 0, hr, 0, c_white, 1);

	/* Back */
	vertex_default(vb, x1, y1, z1, 0, -1, 0, 0, 0, c_white, 1);
	vertex_default(vb, x2, y1, z1, 0, -1, 0, hr, 0, c_white, 1);
	vertex_default(vb, x1, y1, z2, 0, -1, 0, 0, vr, c_white, 1);

	vertex_default(vb, x2, y1, z1, 0, -1, 0, hr, 0, c_white, 1);
	vertex_default(vb, x2, y1, z2, 0, -1, 0, hr, vr, c_white, 1);
	vertex_default(vb, x1, y1, z2, 0, -1, 0, 0, vr, c_white, 1);

	/* Right */
	vertex_default(vb, x2, y1, z1, 1, 0, 0, 0, 0, c_white, 1);
	vertex_default(vb, x2, y2, z1, 1, 0, 0, hr, 0, c_white, 1);
	vertex_default(vb, x2, y1, z2, 1, 0, 0, 0, vr, c_white, 1);

	vertex_default(vb, x2, y2, z1, 1, 0, 0, hr, 0, c_white, 1);
	vertex_default(vb, x2, y2, z2, 1, 0, 0, hr, vr, c_white, 1);
	vertex_default(vb, x2, y1, z2, 1, 0, 0, 0, vr, c_white, 1);

	/* Left */
	vertex_default(vb, x1, y1, z2, -1, 0, 0, 0, vr, c_white, 1);
	vertex_default(vb, x1, y2, z1, -1, 0, 0, hr, 0, c_white, 1);
	vertex_default(vb, x1, y1, z1, -1, 0, 0, 0, 0, c_white, 1);

	vertex_default(vb, x1, y1, z2, -1, 0, 0, 0, vr, c_white, 1);
	vertex_default(vb, x1, y2, z2, -1, 0, 0, hr, vr, c_white, 1);
	vertex_default(vb, x1, y2, z1, -1, 0, 0, hr, 0, c_white, 1);

	/* Finalize VBO */
	vertex_end(vb);
	vertex_freeze(vb);

	return vb;



}
