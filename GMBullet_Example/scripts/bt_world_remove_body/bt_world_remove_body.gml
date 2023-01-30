/// @description  bt_world_remove_body(id);
/// @param id
function bt_world_remove_body(argument0) {
	/*
	    DESCRIPTION
	    -----------
	    Removes the specified body from the physics world.
    
	    ARGUMENTS
	    ---------
	    id: The ID of the body to remove.
    
	    RETURNS
	    -------
	    True if the body is attached to the world, false otherwise.
	*/
	gml_pragma("forceinline");

	return external_call(global.__bt_world_remove_body, argument0);



}
