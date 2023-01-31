/// @description  bt_free();
function bt_free() {
	buffer_delete(global.__bt_matrix_buffer);
	external_call(global.__bt_free);



}
