#include <GMBullet.hpp>

/// @func btBoxShape_create(halfExtents)
///
/// @desc
/// Creates a box shape with the specified half extents.
///
/// @param {Pointer} halfExtents
///     A pointer to a btVector3 representing the half extents of the box.
///
/// @return {Pointer} A pointer to the newly created btBoxShape instance.
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
/// Creates a box shape with the specified half extents in the X, Y, and Z
/// dimensions.
///
/// @param {Real} halfExtentX
///     The half extent along the X-axis.
/// @param {Real} halfExtentY
///     The half extent along the Y-axis.
/// @param {Real} halfExtentZ
///     The half extent along the Z-axis.
///
/// @return {Pointer} A pointer to the newly created btBoxShape instance.
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
/// @desc
/// Destroys a box collision shape.
///
/// @param {Pointer} boxShape
///     A pointer to the btBoxShape to destroy.
YYEXPORT void btBoxShape_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btBoxShape*)YYGetPtr(arg, 0);
}
