/// @description  bt_body_apply_transform(id);
/// @param id
function bt_body_apply_transform(argument0) {
	/*
	    DESCRIPTION
	    -----------
	    Applies the current global transform to the specified body.
    
	    ARGUMENTS
	    ---------
	    id: The ID of the object to apply the transform to.
	*/
	gml_pragma("forceinline");

	external_call(global.__bt_body_apply_transform, argument0);



}
