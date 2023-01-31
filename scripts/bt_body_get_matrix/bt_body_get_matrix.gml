/// @description  bt_body_get_matrix(id);
/// @param id
function bt_body_get_matrix(argument0) {
	bt_body_transform_to_buffer(argument0);

	var mat, buf = global.__bt_matrix_buffer;
	mat[15] = 0;

	/* Transfer Data */
	buffer_seek(buf, buffer_seek_start, 0);

	for (var i = 0; i < 16; ++i)
	    mat[i] = buffer_read(buf, buffer_f32);

	return mat;



}
