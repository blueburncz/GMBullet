#include <GMBullet.hpp>

/// @func btBoxShape_create(halfExtents)
///
/// @desc
///
/// @param {Pointer} halfExtents
///
/// @return {Pointer}
YYEXPORT void btBoxShape_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	btVector3& halfExtents = *(btVector3*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = new btBoxShape(halfExtents);
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
YYEXPORT void btBoxShape_createXYZ(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	double halfExtentX = YYGetReal(arg, 0);
	double halfExtentY = YYGetReal(arg, 1);
	double halfExtentZ = YYGetReal(arg, 2);
	result.kind = VALUE_PTR;
	result.ptr = new btBoxShape(btVector3(halfExtentX, halfExtentY, halfExtentZ));
}

/// @func btBoxShape_destroy(boxShape)
///
/// @desc Destroys a box collision shape.
///
/// @param {Pointer} boxShape The box collision shape to destroy.
YYEXPORT void btBoxShape_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btBoxShape*)YYGetPtr(arg, 0);
}
