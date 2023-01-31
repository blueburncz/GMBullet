/// @description  bt_body_transform_to_buffer(id);
/// @param id
function bt_body_transform_to_buffer(argument0) {
	/*
	    DESCRIPTION
	    -----------
	    Transfers the matrix data from the Bullet world transform buffer of the
	    specified rigid body to "global.__bt_matrix_buffer".
    
	    ARGUMENTS
	    ---------
	    id: The ID of the object to extract the matrix from.
	*/
	gml_pragma("forceinline");

	external_call(global.__bt_body_transform_to_buffer, argument0);



}
