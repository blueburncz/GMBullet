/// @description  bt_body_apply_central_force(id, x, y, z);
/// @param id
/// @param  x
/// @param  y
/// @param  z
function bt_body_apply_central_force(argument0, argument1, argument2, argument3) {
	gml_pragma("forceinline");

	external_call(global.__bt_body_apply_central_force, argument0, argument1, argument2, argument3);



}
