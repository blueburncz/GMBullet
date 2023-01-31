/// @description  bt_body_create(shape_id, mass);
/// @param shape_id
/// @param  mass
function bt_body_create(argument0, argument1) {
	/*
	    DESCRIPTION
	    -----------
	    Creates a rigid body with the specified shape.
    
	    ARGUMENTS
	    ---------
	    shape_id: The ID of the shape.
	    mass:     The mass of the body. Set to 0 for static bodies.
    
	    RETURNS
	    -------
	    The ID of the body.
	*/
	gml_pragma("forceinline");

	return external_call(global.__bt_body_create, argument0, argument1);



}
