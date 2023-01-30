/// @description  bt_shape_create_box(size_x, size_y, size_z);
/// @param size_x
/// @param  size_y
/// @param  size_z
function bt_shape_create_box(argument0, argument1, argument2) {
	/*
	    DESCRIPTION
	    -----------
	    Creates a box shape of the specified dimensions.
    
	    NOTE: The size vector is meant to be half the extents of the box.
    
	    ARGUMENTS
	    ---------
	    size_x: The size of the box on the X axis.
	    size_y: The size of the box on the Y axis.
	    size_z: The size of the box on the Z axis.
    
	    RETURNS
	    -------
	    The ID of the shape.
	*/
	gml_pragma("forceinline");

	return external_call(global.__bt_shape_create_box, argument0, argument1, argument2);



}
