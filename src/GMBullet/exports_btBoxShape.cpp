#include <GMBullet.hpp>

/// @func btBoxShape_create(halfExtents)
///
/// @desc
///
/// @param {Pointer} halfExtents
///
/// @return {Pointer}
YYEXPORT void btBoxShape_create(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	btVector3* halfExtents = (btVector3*)YYGetPtr(arg, 0);
	Result.kind = VALUE_PTR;
	Result.ptr = new btBoxShape(*halfExtents);
}

/// @func btBoxShape_createXYZ(halfExtentX, halfExtentY, halfExtentZ)
///
/// @desc
///
/// @param {Real} halfExtentX
/// @param {Real} halfExtentY
/// @param {Real} halfExtentZ
///
/// @return {Pointer}
YYEXPORT void btBoxShape_createXYZ(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double halfExtentX = YYGetReal(arg, 0);
	double halfExtentY = YYGetReal(arg, 1);
	double halfExtentZ = YYGetReal(arg, 2);
	Result.kind = VALUE_PTR;
	Result.ptr = new btBoxShape(btVector3(halfExtentX, halfExtentY, halfExtentZ));
}
