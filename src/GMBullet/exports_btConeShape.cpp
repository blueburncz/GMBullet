#include <GMBullet.hpp>

/// @func btConeShape_create(radius, height)
///
/// @desc
/// Creates a cone shape aligned along the y-axis.
///
/// @param {Real} radius
///     The radius of the cone.
/// @param {Real} height
///     The height of the cone along the y-axis.
///
/// @return {Pointer} A pointer to the created btConeShape object.
YYEXPORT void btConeShape_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	double radius = YYGetReal(arg, 0);
	double height = YYGetReal(arg, 1);
	result.kind = VALUE_PTR;
	result.ptr = new btConeShape(radius, height);
}

/// @func btConeShape_destroy(coneShape)
///
/// @desc
/// Destroys a btConeShape object.
///
/// @param {Pointer} coneShape
///     A pointer to the btConeShape object to be destroyed.
YYEXPORT void btConeShape_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btConeShape*)YYGetPtr(arg, 0);
}

// Note: Skipped btConeShape::localGetSupportingVertex
// Note: Skipped btConeShape::localGetSupportingVertexWithoutMargin
// Note: Skipped btConeShape::batchedUnitVectorGetSupportingVertexWithoutMargin

/// @func btConeShape_getRadius(coneShape)
///
/// @desc
/// Gets the radius of the cone shape.
///
/// @param {Pointer} coneShape
///     A pointer to the btConeShape object.
///
/// @return {Real} The radius of the cone.
YYEXPORT void btConeShape_getRadius(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto coneShape = (btConeShape*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = coneShape->getRadius();
}

/// @func btConeShape_getHeight(coneShape)
///
/// @desc
/// Gets the height of the cone shape.
///
/// @param {Pointer} coneShape
///     A pointer to the btConeShape object.
///
/// @return {Real} The height of the cone.
YYEXPORT void btConeShape_getHeight(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto coneShape = (btConeShape*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = coneShape->getHeight();
}

// Note: Skipped btConeShape::calculateLocalInertia
// Note: Skipped btConeShape::getName

/// @func btConeShape_setConeUpIndex(coneShape, upIndex)
///
/// @desc
/// Sets the cone's up axis index.
///
/// @param {Pointer} coneShape
///     A pointer to the btConeShape object.
/// @param {Real} upIndex
///     The index representing the up axis (0, 1, or 2 for x, y, or z axes
///     respectively).
YYEXPORT void btConeShape_setConeUpIndex(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto coneShape = (btConeShape*)YYGetPtr(arg, 0);
	int upIndex = YYGetInt32(arg, 1);
	coneShape->setConeUpIndex(upIndex);
}

/// @func btConeShape_getConeUpIndex(coneShape)
///
/// @desc
/// Gets the cone's up axis index.
///
/// @param {Pointer} coneShape
///     A pointer to the btConeShape object.
///
/// @return {Real} The index representing the up axis (0, 1, or 2 for x, y, or
/// z axes respectively).
YYEXPORT void btConeShape_getConeUpIndex(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto coneShape = (btConeShape*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.val = coneShape->getConeUpIndex();
}

// Note: Skipped btConeShape::getAnisotropicRollingFrictionDirection
// Note: Skipped btConeShape::setLocalScaling
// Note: Skipped btConeShape::calculateSerializeBufferSize
// Note: Skipped btConeShape::serialize

////////////////////////////////////////////////////////////////////////////////
//
// btConeShapeX
//

/// @func btConeShapeX_create(radius, height)
///
/// @desc
/// Creates a cone shape aligned along the x-axis.
///
/// @param {Real} radius
///     The radius of the cone.
/// @param {Real} height
///     The height of the cone along the x-axis.
///
/// @return {Pointer} A pointer to the created btConeShapeX object.
YYEXPORT void btConeShapeX_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	double radius = YYGetReal(arg, 0);
	double height = YYGetReal(arg, 1);
	result.kind = VALUE_PTR;
	result.ptr = new btConeShapeX(radius, height);
}

/// @func btConeShapeX_destroy(coneShapeX)
///
/// @desc
/// Destroys a btConeShapeX object.
///
/// @param {Pointer} coneShapeX
///     A pointer to the btConeShapeX object to be destroyed.
YYEXPORT void btConeShapeX_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btConeShapeX*)YYGetPtr(arg, 0);
}

// Note: Skipped btConeShapeX::getAnisotropicRollingFrictionDirection
// Note: Skipped btConeShapeX::getName

////////////////////////////////////////////////////////////////////////////////
//
// btConeShapeZ
//

/// @func btConeShapeZ_create(radius, height)
///
/// @desc
/// Creates a cone shape aligned along the z-axis.
///
/// @param {Real} radius
///     The radius of the cone.
/// @param {Real} height
///     The height of the cone along the z-axis.
///
/// @return {Pointer} A pointer to the created btConeShapeZ object.
YYEXPORT void btConeShapeZ_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	double radius = YYGetReal(arg, 0);
	double height = YYGetReal(arg, 1);
	result.kind = VALUE_PTR;
	result.ptr = new btConeShapeZ(radius, height);
}

/// @func btConeShapeZ_destroy(coneShapeZ)
///
/// @desc
/// Destroys a btConeShapeZ object.
///
/// @param {Pointer} coneShapeZ
///     A pointer to the btConeShapeZ object to be destroyed.
YYEXPORT void btConeShapeZ_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btConeShapeZ*)YYGetPtr(arg, 0);
}

// Note: Skipped btConeShapeZ::getAnisotropicRollingFrictionDirection
// Note: Skipped btConeShapeZ::getName

////////////////////////////////////////////////////////////////////////////////
//
// Note: Skipped btConeShapeData
//
