/// @description  bt_init();
function bt_init() {
	var dll = (os_type == os_windows)
		? "GMBullet.dll"
		: "libGMBullet.dylib";

	/* Core */
	global.__bt_init = external_define(dll, "bt_init", dll_cdecl, ty_real, 1, ty_string);
	global.__bt_free = external_define(dll, "bt_free", dll_cdecl, ty_real, 0);

	/* World */
	global.__bt_world_init           = external_define(dll, "bt_world_init", dll_cdecl, ty_real, 0);
	global.__bt_world_free           = external_define(dll, "bt_world_free", dll_cdecl, ty_real, 0);
	global.__bt_world_set_gravity    = external_define(dll, "bt_world_set_gravity", dll_cdecl, ty_real, 3, ty_real, ty_real, ty_real);
	global.__bt_world_simulate       = external_define(dll, "bt_world_simulate", dll_cdecl, ty_real, 2, ty_real, ty_real);
	global.__bt_world_simulate_ext   = external_define(dll, "bt_world_simulate_ext", dll_cdecl, ty_real, 3, ty_real, ty_real, ty_real);
	global.__bt_world_add_body       = external_define(dll, "bt_world_add_body", dll_cdecl, ty_real, 3, ty_real, ty_real, ty_real);
	global.__bt_world_remove_body    = external_define(dll, "bt_world_remove_body", dll_cdecl, ty_real, 1, ty_real);
	global.__bt_world_get_body_count = external_define(dll, "bt_world_get_body_count", dll_cdecl, ty_real, 0);

	/* Shape */
	global.__bt_shape_create_box    = external_define(dll, "bt_shape_create_box", dll_cdecl, ty_real, 3, ty_real, ty_real, ty_real);
	global.__bt_shape_create_sphere = external_define(dll, "bt_shape_create_sphere", dll_cdecl, ty_real, 1, ty_real);

	/* Body */
	global.__bt_body_create                = external_define(dll, "bt_body_create", dll_cdecl, ty_real, 2, ty_real, ty_real);
	global.__bt_body_destroy               = external_define(dll, "bt_body_destroy", dll_cdecl, ty_real, 1, ty_real);
	global.__bt_body_is_active             = external_define(dll, "bt_body_is_active", dll_cdecl, ty_real, 1, ty_real);
	global.__bt_body_apply_impulse         = external_define(dll, "bt_body_apply_impulse", dll_cdecl, ty_real, 7, ty_real, ty_real, ty_real, ty_real, ty_real, ty_real, ty_real);
	global.__bt_body_apply_central_impulse = external_define(dll, "bt_body_apply_central_impulse", dll_cdecl, ty_real, 4, ty_real, ty_real, ty_real, ty_real);
	global.__bt_body_apply_force           = external_define(dll, "bt_body_apply_force", dll_cdecl, ty_real, 7, ty_real, ty_real, ty_real, ty_real, ty_real, ty_real, ty_real);
	global.__bt_body_apply_central_force   = external_define(dll, "bt_body_apply_central_force", dll_cdecl, ty_real, 4, ty_real, ty_real, ty_real, ty_real);
	global.__bt_body_apply_transform       = external_define(dll, "bt_body_apply_transform", dll_cdecl, ty_real, 1, ty_real);
	global.__bt_body_transform_to_buffer   = external_define(dll, "bt_body_transform_to_buffer", dll_cdecl, ty_real, 1, ty_real);

	/* Transform */
	global.__bt_transform_identity    = external_define(dll, "bt_transform_identity", dll_cdecl, ty_real, 0);
	global.__bt_transform_translation = external_define(dll, "bt_transform_translation", dll_cdecl, ty_real, 3, ty_real, ty_real, ty_real);
	global.__bt_transform_rotation    = external_define(dll, "bt_transform_rotation", dll_cdecl, ty_real, 3, ty_real, ty_real, ty_real);

	/* Initialize */
	global.__bt_matrix_buffer = buffer_create(16 * buffer_sizeof(buffer_f32), buffer_fixed, 1);

	external_call(global.__bt_init, buffer_get_address(global.__bt_matrix_buffer));



}
