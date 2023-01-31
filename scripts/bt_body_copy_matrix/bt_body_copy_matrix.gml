/// @description  bt_body_copy_matrix(id, matrix);
/// @param id
/// @param  matrix
function bt_body_copy_matrix(argument0, argument1) {
	bt_body_transform_to_buffer(argument0);

	/* Transfer Data */
	var buf = global.__bt_matrix_buffer;
	buffer_seek(buf, buffer_seek_start, 0);

	for (var i = 0; i < 16; ++i)
	    argument1[@ i] = buffer_read(buf, buffer_f32);



}
