/// @description  bt_transform_translation(x, y, z);
/// @param x
/// @param  y
/// @param  z
function bt_transform_translation(argument0, argument1, argument2) {
	gml_pragma("forceinline");

	external_call(global.__bt_transform_translation, argument0, argument1, argument2);



}
