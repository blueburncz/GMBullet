/// @func bt_world_set_gravity(_x, _y, _z)
///
/// @param {Real} _x
/// @param {Real} _y
/// @param {Real} _z
function bt_world_set_gravity(_x, _y, _z) {
	gml_pragma("forceinline");
	external_call(global.__bt_world_set_gravity, _x, _y, _z);
}
