#include <GMBullet.hpp>

/// @func btCylinderShape_create(halfExtents)
///
/// @desc
/// Creates a new instance of a Bullet cylinder shape aligned with the y-axis.
///
/// @param {Pointer} halfExtents
///     A pointer to a btVector3 specifying the half-extents of the cylinder in
///     each axis (x, y, z).
///
/// @return {Pointer} A pointer to the created btCylinderShape object.
YYEXPORT void btCylinderShape_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	btVector3& halfExtents = *(btVector3*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = new btCylinderShape(halfExtents);
}

/// @func btCylinderShape_createXYZ(halfExtentX, halfExtentY, halfExtentY)
///
/// @desc
/// Creates a new instance of a Bullet cylinder shape aligned with the y-axis.
///
/// @param {Real} halfExtentX
///     The half extent along the x-axis.
/// @param {Real} halfExtentY
///     The half extent along the y-axis.
/// @param {Real} halfExtentZ
///     The half extent along the z-axis.
///
/// @return {Pointer} A pointer to the created btCylinderShape object.
YYEXPORT void btCylinderShape_createXYZ(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	double halfExtentX = YYGetReal(arg, 0);
	double halfExtentY = YYGetReal(arg, 1);
	double halfExtentZ = YYGetReal(arg, 2);
	result.kind = VALUE_PTR;
	result.ptr = new btCylinderShape(btVector3(halfExtentX, halfExtentY, halfExtentZ));
}

/// @func btCylinderShape_destroy(cylinderShape)
///
/// @desc
/// Destroys an instance of a Bullet cylinder shape aligned with the y-axis.
///
/// @param {Pointer} cylinderShape
///     A pointer to the btCylinderShape object to be destroyed.
YYEXPORT void btCylinderShape_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btCylinderShape*)YYGetPtr(arg, 0);
}

/// @func btCylinderShape_getHalfExtentsWithMargin(cylinderShape, outVector3)
///
/// @desc
/// Retrieves the half extents of the cylinder shape, including margin.
///
/// @param {Pointer} cylinderShape
///     A pointer to the btCylinderShape object.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the half extents (including margin).
YYEXPORT void btCylinderShape_getHalfExtentsWithMargin(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto cylinderShape = (btCylinderShape*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(cylinderShape->getHalfExtentsWithMargin(), outVector3);
}

/// @func btCylinderShape_getHalfExtentsWithoutMargin(cylinderShape, outVector3)
///
/// @desc
/// Retrieves the half extents of the cylinder shape, excluding margin.
///
/// @param {Pointer} cylinderShape
///     A pointer to the btCylinderShape object.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the half extents (excluding margin).
YYEXPORT void btCylinderShape_getHalfExtentsWithoutMargin(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto cylinderShape = (btCylinderShape*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(cylinderShape->getHalfExtentsWithoutMargin(), outVector3);
}

// Note: Skipped btCylinderShape::getAabb
// Note: Skipped btCylinderShape::calculateLocalInertia
// Note: Skipped btCylinderShape::localGetSupportingVertexWithoutMargin
// Note: Skipped btCylinderShape::batchedUnitVectorGetSupportingVertexWithoutMargin
// Note: Skipped btCylinderShape::setMargin
// Note: Skipped btCylinderShape::localGetSupportingVertex

/// @func btCylinderShape_getUpAxis(cylinderShape)
///
/// @desc
/// Retrieves the up axis of the cylinder shape.
///
/// @param {Pointer} cylinderShape
///     A pointer to the btCylinderShape object.
///
/// @return {Real} The up axis (0 for x-axis, 1 for y-axis, 2 for z-axis).
YYEXPORT void btCylinderShape_getUpAxis(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto cylinderShape = (btCylinderShape*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.val = cylinderShape->getUpAxis();
}

// Note: Skipped btCylinderShape::getAnisotropicRollingFrictionDirection

/// @func btCylinderShape_getRadius(cylinderShape)
///
/// @desc
/// Retrieves the radius of the cylinder shape.
///
/// @param {Pointer} cylinderShape
///     A pointer to the btCylinderShape object.
///
/// @return {Real} The radius of the cylinder shape.
YYEXPORT void btCylinderShape_getRadius(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto cylinderShape = (btCylinderShape*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = cylinderShape->getRadius();
}

// Note: Skipped btCylinderShape::setLocalScaling
// Note: Skipped btCylinderShape::getName
// Note: Skipped btCylinderShape::calculateSerializeBufferSize
// Note: Skipped btCylinderShape::serialize

////////////////////////////////////////////////////////////////////////////////
//
// btCylinderShapeX
//

/// @func btCylinderShapeX_create(halfExtents)
///
/// @desc
/// Creates a new instance of a Bullet cylinder shape aligned with the x-axis.
///
/// @param {Pointer} halfExtents
///     A pointer to a btVector3 specifying the half-extents of the cylinder in
///     each axis (x, y, z).
///
/// @return {Pointer} A pointer to the created btCylinderShapeX object.
YYEXPORT void btCylinderShapeX_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	btVector3& halfExtents = *(btVector3*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = new btCylinderShapeX(halfExtents);
}

/// @func btCylinderShapeX_createXYZ(halfExtentX, halfExtentY, halfExtentY)
///
/// @desc
/// Creates a new instance of a Bullet cylinder shape aligned with the x-axis.
///
/// @param {Real} halfExtentX
///     The half extent along the x-axis.
/// @param {Real} halfExtentY
///     The half extent along the y-axis.
/// @param {Real} halfExtentZ
///     The half extent along the z-axis.
///
/// @return {Pointer} A pointer to the created btCylinderShapeX object.
YYEXPORT void btCylinderShapeX_createXYZ(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	double halfExtentX = YYGetReal(arg, 0);
	double halfExtentY = YYGetReal(arg, 1);
	double halfExtentZ = YYGetReal(arg, 2);
	result.kind = VALUE_PTR;
	result.ptr = new btCylinderShapeX(btVector3(halfExtentX, halfExtentY, halfExtentZ));
}

/// @func btCylinderShapeX_destroy(cylinderShapeX)
///
/// @desc
/// Destroys an instance of a Bullet cylinder shape aligned with the x-axis.
///
/// @param {Pointer} cylinderShapeX
///     A pointer to the btCylinderShapeX object to be destroyed.
YYEXPORT void btCylinderShapeX_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btCylinderShapeX*)YYGetPtr(arg, 0);
}

// Note: Skipped btCylinderShapeX::localGetSupportingVertexWithoutMargin
// Note: Skipped btCylinderShapeX::batchedUnitVectorGetSupportingVertexWithoutMargin
// Note: Skipped btCylinderShapeX::getName
// Note: Skipped btCylinderShapeX::getRadius

////////////////////////////////////////////////////////////////////////////////
//
// btCylinderShapeZ
//

/// @func btCylinderShapeZ_create(halfExtents)
///
/// @desc
/// Creates a new instance of a Bullet cylinder shape aligned with the z-axis.
///
/// @param {Pointer} halfExtents
///     A pointer to a btVector3 specifying the half-extents of the cylinder in
///     each axis (x, y, z).
///
/// @return {Pointer} A pointer to the created btCylinderShapeZ object.
YYEXPORT void btCylinderShapeZ_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	btVector3& halfExtents = *(btVector3*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = new btCylinderShapeZ(halfExtents);
}

/// @func btCylinderShapeZ_createXYZ(halfExtentX, halfExtentY, halfExtentY)
///
/// @desc
/// Creates a new instance of a Bullet cylinder shape aligned with the z-axis.
///
/// @param {Real} halfExtentX
///     The half extent along the x-axis.
/// @param {Real} halfExtentY
///     The half extent along the y-axis.
/// @param {Real} halfExtentZ
///     The half extent along the z-axis.
///
/// @return {Pointer} A pointer to the created btCylinderShapeZ object.
YYEXPORT void btCylinderShapeZ_createXYZ(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	double halfExtentX = YYGetReal(arg, 0);
	double halfExtentY = YYGetReal(arg, 1);
	double halfExtentZ = YYGetReal(arg, 2);
	result.kind = VALUE_PTR;
	result.ptr = new btCylinderShapeZ(btVector3(halfExtentX, halfExtentY, halfExtentZ));
}

/// @func btCylinderShapeZ_destroy(cylinderShapeZ)
///
/// @desc
/// Destroys an instance of a Bullet cylinder shape aligned with the z-axis.
///
/// @param {Pointer} cylinderShapeZ
///     A pointer to the btCylinderShapeZ object to be destroyed.
YYEXPORT void btCylinderShapeZ_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btCylinderShapeZ*)YYGetPtr(arg, 0);
}

// Note: Skipped btCylinderShapeZ::localGetSupportingVertexWithoutMargin
// Note: Skipped btCylinderShapeZ::batchedUnitVectorGetSupportingVertexWithoutMargin
// Note: Skipped btCylinderShapeZ::getName
// Note: Skipped btCylinderShapeZ::getRadius

////////////////////////////////////////////////////////////////////////////////
//
// Note: Skipped btCylinderShapeData
//
