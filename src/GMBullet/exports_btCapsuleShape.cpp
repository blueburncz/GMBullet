#include <GMBullet.hpp>

/// @func btCapsuleShape_create(radius, height)
///
/// @desc
/// Creates a capsule shape aligned along the y-axis.
///
/// @param {Real} radius
///     The radius of the capsule.
/// @param {Real} height
///     The height of the capsule along the y-axis.
///
/// @return {Pointer} A pointer to the newly created btCapsuleShape object.
YYEXPORT void btCapsuleShape_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	double radius = YYGetReal(arg, 0);
	double height = YYGetReal(arg, 1);
	result.kind = VALUE_PTR;
	result.ptr = new btCapsuleShape(radius, height);
}

/// @func btCapsuleShape_destroy(capsuleShape)
///
/// @desc
/// Destroys the btCapsuleShape object.
///
/// @param {Pointer} capsuleShape
///     A pointer to the btCapsuleShape object to be destroyed.
YYEXPORT void btCapsuleShape_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btCapsuleShape*)YYGetPtr(arg, 0);
}

// Note: Skipped btCapsuleShape::calculateLocalInertia
// Note: Skipped btCapsuleShape::localGetSupportingVertexWithoutMargin
// Note: Skipped btCapsuleShape::batchedUnitVectorGetSupportingVertexWithoutMargin
// Note: Skipped btCapsuleShape::setMargin
// Note: Skipped btCapsuleShape::getAabb
// Note: Skipped btCapsuleShape::getName

/// @func btCapsuleShape_getUpAxis(capsuleShape)
///
/// @desc
/// Gets the axis-aligned up axis of the capsule.
///
/// @param {Pointer} capsuleShape
///     A pointer to the btCapsuleShape object.
///
/// @return {Real} The up axis of the capsule.
YYEXPORT void btCapsuleShape_getUpAxis(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto capsuleShape = (btCapsuleShape*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.v32 = capsuleShape->getUpAxis();
}

/// @func btCapsuleShape_getRadius(capsuleShape)
///
/// @desc
/// Gets the radius of the capsule.
///
/// @param {Pointer} capsuleShape
///     A pointer to the btCapsuleShape object.
///
/// @return {Real} The radius of the capsule.
YYEXPORT void btCapsuleShape_getRadius(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto capsuleShape = (btCapsuleShape*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = capsuleShape->getRadius();
}

/// @func btCapsuleShape_getHalfHeight(capsuleShape)
///
/// @desc
/// Gets the half height of the capsule.
///
/// @param {Pointer} capsuleShape
///     A pointer to the btCapsuleShape object.
///
/// @return {Real} The half height of the capsule.
YYEXPORT void btCapsuleShape_getHalfHeight(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto capsuleShape = (btCapsuleShape*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = capsuleShape->getHalfHeight();
}

// Note: Skipped btCapsuleShape::setLocalScaling
// Note: Skipped btCapsuleShape::getAnisotropicRollingFrictionDirection
// Note: Skipped btCapsuleShape::calculateSerializeBufferSize
// Note: Skipped btCapsuleShape::serialize
// Note: Skipped btCapsuleShape::deSerializeFloat

////////////////////////////////////////////////////////////////////////////////
//
// btCapsuleShapeX
//

/// @func btCapsuleShapeX_create(radius, height)
///
/// @desc
/// Creates a capsule shape aligned along the x-axis.
///
/// @param {Real} radius
///     The radius of the capsule.
/// @param {Real} height
///     The height of the capsule along the x-axis.
///
/// @return {Pointer} A pointer to the created btCapsuleShapeX object.
YYEXPORT void btCapsuleShapeX_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	double radius = YYGetReal(arg, 0);
	double height = YYGetReal(arg, 1);
	result.kind = VALUE_PTR;
	result.ptr = new btCapsuleShapeX(radius, height);
}

/// @func btCapsuleShapeX_destroy(capsuleShapeX)
///
/// @desc
/// Destroys a btCapsuleShapeX object.
///
/// @param {Pointer} capsuleShapeX
///     A pointer to the btCapsuleShapeX object to be destroyed.
YYEXPORT void btCapsuleShapeX_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btCapsuleShapeX*)YYGetPtr(arg, 0);
}

// Note: Skipped btCapsuleShapeX::getName

////////////////////////////////////////////////////////////////////////////////
//
// btCapsuleShapeZ
//

/// @func btCapsuleShapeZ_create(radius, height)
///
/// @desc
/// Creates a capsule shape aligned along the z-axis.
///
/// @param {Real} radius
///     The radius of the capsule.
/// @param {Real} height
///     The height of the capsule along the z-axis.
///
/// @return {Pointer} A pointer to the created btCapsuleShapeZ object.
YYEXPORT void btCapsuleShapeZ_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	double radius = YYGetReal(arg, 0);
	double height = YYGetReal(arg, 1);
	result.kind = VALUE_PTR;
	result.ptr = new btCapsuleShapeZ(radius, height);
}

/// @func btCapsuleShapeZ_destroy(capsuleShapeZ)
///
/// @desc
/// Destroys a btCapsuleShapeZ object.
///
/// @param {Pointer} capsuleShapeZ
///     A pointer to the btCapsuleShapeZ object to be destroyed.
YYEXPORT void btCapsuleShapeZ_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btCapsuleShapeZ*)YYGetPtr(arg, 0);
}

// Note: Skipped btCapsuleShapeZ::getName

////////////////////////////////////////////////////////////////////////////////
//
// Note: Skipped btCapsuleShapeData
//
