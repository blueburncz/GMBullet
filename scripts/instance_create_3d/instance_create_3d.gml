/// @description  instance_create_3d(x, y, z, obj);
/// @param x
/// @param  y
/// @param  z
/// @param  obj
function instance_create_3d(argument0, argument1, argument2, argument3) {
	global.__z = argument2;
	return instance_create(argument0, argument1, argument3);



}
