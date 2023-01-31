/// @description  bt_shape_create_sphere(radius);
/// @param radius
function bt_shape_create_sphere(argument0) {
	/*
	    DESCRIPTION
	    -----------
	    Creates a sphere shape of the specified radius.
    
	    ARGUMENTS
	    ---------
	    radius: The radius of the sphere.
    
	    RETURNS
	    -------
	    The ID of the shape.
	*/
	gml_pragma("forceinline");

	return external_call(global.__bt_shape_create_sphere, argument0);



}
