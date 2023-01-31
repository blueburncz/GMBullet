/// @description  bt_body_apply_force(id, x, y, z, rel_x, rel_y, rel_z);
/// @param id
/// @param  x
/// @param  y
/// @param  z
/// @param  rel_x
/// @param  rel_y
/// @param  rel_z
function bt_body_apply_force(argument0, argument1, argument2, argument3, argument4, argument5, argument6) {
	gml_pragma("forceinline");

	external_call(global.__bt_body_apply_force, argument0, argument1, argument2, argument3, argument4, argument5, argument6);



}
