/// @description  bt_world_add_body(id, group, mask);
/// @param id
/// @param  group
/// @param  mask
function bt_world_add_body(argument0, argument1, argument2) {
	/*
	    DESCRIPTION
	    -----------
	    Adds the specified body to the physics world.
    
	    ARGUMENTS
	    ---------
	    id:    The ID of the body to add.
	    group: The collision group of the body.
	    mask:  The collision mask of the body.
	*/
	gml_pragma("forceinline");

	external_call(global.__bt_world_add_body, argument0, argument1, argument2);



}
