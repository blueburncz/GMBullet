/// @description  bt_body_is_active(id);
/// @param id
function bt_body_is_active(argument0) {
	gml_pragma("forceinline");

	return external_call(global.__bt_body_is_active, argument0);



}
