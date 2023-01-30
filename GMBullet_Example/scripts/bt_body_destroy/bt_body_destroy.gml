/// @description  bt_body_destroy(id);
/// @param id
function bt_body_destroy(argument0) {
	/*
	    DESCRIPTION
	    -----------
	    Destroys the rigid body and removes it from the world (if necessary).
    
	    ARGUMENTS
	    ---------
	    id: The ID of the body.
	*/
	gml_pragma("forceinline");

	external_call(global.__bt_body_destroy, argument0);



}
