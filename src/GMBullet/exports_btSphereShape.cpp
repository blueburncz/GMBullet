#include <GMBullet.hpp>

/// @func btSphereShape_create(radius)
///
/// @desc
///
/// @param {Real} radius
///
/// @return {Pointer}
YYEXPORT void btSphereShape_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	double radius = YYGetReal(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = new btSphereShape(radius);
}

/// @func btSphereShape_destroy(sphereShape)
///
/// @desc Destroys a sphere collision shape.
///
/// @param {Pointer} sphereShape The sphere collision shape to destroy.
YYEXPORT void btSphereShape_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btSphereShape*)YYGetPtr(arg, 0);
}
