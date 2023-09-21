#include <GMBullet.hpp>

/// @func btSphereShape_create(radius)
///
/// @desc
///
/// @param {Real} radius
///
/// @return {Pointer}
YYEXPORT void btSphereShape_create(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double radius = YYGetReal(arg, 0);
	Result.kind = VALUE_PTR;
	Result.ptr = new btSphereShape(radius);
}
