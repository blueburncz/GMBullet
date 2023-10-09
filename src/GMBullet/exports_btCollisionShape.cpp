#include <GMBullet.hpp>

// Note: btCollisionShape is an abstract class and cannot be constructed.

/// @func btCollisionShape_destroy(collisionShape)
///
/// @desc
/// Destroys a Bullet physics collision shape.
///
/// @param {Pointer} collisionShape
///     A pointer to the btCollisionShape instance to destroy.
YYEXPORT void btCollisionShape_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btCollisionShape*)YYGetPtr(arg, 0);
}

/// @func btCollisionShape_getAabb(collisionShape, transform, aabbMin, aabbMax)
///
/// @desc
/// Gets the axis-aligned bounding box (AABB) of the collision shape when
/// transformed by the specified transform.
///
/// @param {Pointer} collisionShape
///     A pointer to the btCollisionShape object.
/// @param {Pointer} transform
///     A pointer to a btTransform representing the transformation of the shape.
/// @param {Pointer} aabbMin
///     Pointer to a btVector3 where the minimum corner of the AABB will be
///     stored.
/// @param {Pointer} aabbMax
///     Pointer to a btVector3 where the maximum corner of the AABB will be
///     stored.
YYEXPORT void btCollisionShape_getAabb(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionShape = (btCollisionShape*)YYGetPtr(arg, 0);
	auto& transform = *(btTransform*)YYGetPtr(arg, 1);
	auto& aabbMin = *(btVector3*)YYGetPtr(arg, 2);
	auto& aabbMax = *(btVector3*)YYGetPtr(arg, 3);
	collisionShape->getAabb(transform, aabbMin, aabbMax);
}

/// @func btCollisionShape_getBoundingSphere(collisionShape, outCenter)
///
/// @desc
/// Gets the bounding sphere of a btCollisionShape.
///
/// @param {Pointer} collisionShape
///     A pointer to the btCollisionShape object.
/// @param {Pointer} outCenter
///     A pointer to a btVector3 to store the center of the bounding sphere.
///
/// @return {Real} The radius of the bounding sphere.
YYEXPORT void btCollisionShape_getBoundingSphere(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionShape = (btCollisionShape*)YYGetPtr(arg, 0);
	auto& center = *(btVector3*)YYGetPtr(arg, 1);
	float radius;
	collisionShape->getBoundingSphere(center, radius);
	result.kind = VALUE_REAL;
	result.val = radius;
}

// Note: Skipped btCollisionShape::getAngularMotionDisc
// Note: Skipped btCollisionShape::getContactBreakingThreshold
// Note: Skipped btCollisionShape::calculateTemporalAabb

/// @func btCollisionShape_isPolyhedral(collisionShape)
///
/// @desc
/// Checks if the btCollisionShape is a polyhedral shape.
///
/// @param {Pointer} collisionShape
///     A pointer to the btCollisionShape object.
///
/// @return {Bool} Returns true if the collision shape is polyhedral, false
/// otherwise.
YYEXPORT void btCollisionShape_isPolyhedral(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionShape = (btCollisionShape*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = collisionShape->isPolyhedral();
}

/// @func btCollisionShape_isConvex2d(collisionShape)
///
/// @desc
/// Checks if the btCollisionShape is a 2D convex shape.
///
/// @param {Pointer} collisionShape
///     A pointer to the btCollisionShape object.
///
/// @return {Bool} Returns true if the collision shape is a 2D convex shape,
/// false otherwise.
YYEXPORT void btCollisionShape_isConvex2d(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionShape = (btCollisionShape*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = collisionShape->isConvex2d();
}

/// @func btCollisionShape_isConvex(collisionShape)
///
/// @desc
/// Checks if the btCollisionShape is convex.
///
/// @param {Pointer} collisionShape
///     A pointer to the btCollisionShape object.
///
/// @return {Bool} Returns true if the collision shape is convex, false
/// otherwise.
YYEXPORT void btCollisionShape_isConvex(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionShape = (btCollisionShape*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = collisionShape->isConvex();
}

/// @func btCollisionShape_isNonMoving(collisionShape)
///
/// @desc
/// Checks if the btCollisionShape is non-moving.
///
/// @param {Pointer} collisionShape
///     A pointer to the btCollisionShape object.
///
/// @return {Bool} Returns true if the collision shape is non-moving, false
/// otherwise.
YYEXPORT void btCollisionShape_isNonMoving(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionShape = (btCollisionShape*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = collisionShape->isNonMoving();
}

/// @func btCollisionShape_isConcave(collisionShape)
///
/// @desc
/// Checks if the btCollisionShape is concave.
///
/// @param {Pointer} collisionShape
///     A pointer to the btCollisionShape object.
///
/// @return {Bool} Returns true if the collision shape is concave, false
/// otherwise.
YYEXPORT void btCollisionShape_isConcave(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionShape = (btCollisionShape*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = collisionShape->isConcave();
}

/// @func btCollisionShape_isCompound(collisionShape)
///
/// @desc
/// Checks if the btCollisionShape is a compound shape, which is a collection of
/// other shapes.
///
/// @param {Pointer} collisionShape
///     A pointer to the btCollisionShape object.
///
/// @return {Bool} Returns true if the collision shape is a compound shape,
/// false otherwise.
YYEXPORT void btCollisionShape_isCompound(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionShape = (btCollisionShape*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = collisionShape->isCompound();
}

/// @func btCollisionShape_isSoftBody(collisionShape)
///
/// @desc
/// Checks if the btCollisionShape is a soft body shape.
///
/// @param {Pointer} collisionShape
///     A pointer to the btCollisionShape object.
///
/// @return {Bool} Returns true if the collision shape is a soft body shape,
/// false otherwise.
YYEXPORT void btCollisionShape_isSoftBody(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionShape = (btCollisionShape*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = collisionShape->isSoftBody();
}

/// @func btCollisionShape_isInfinite(collisionShape)
///
/// @desc
/// Checks if the btCollisionShape represents an infinite volume.
///
/// @param {Pointer} collisionShape
///     A pointer to the btCollisionShape object.
///
/// @return {Bool} Returns true if the collision shape represents an infinite
/// volume, false otherwise.
YYEXPORT void btCollisionShape_isInfinite(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionShape = (btCollisionShape*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = collisionShape->isInfinite();
}

/// @func btCollisionShape_setLocalScaling(collisionShape, scaling)
///
/// @desc
/// Sets the local scaling for a btCollisionShape. This scales the shape's local
/// geometry.
///
/// @param {Pointer} collisionShape
///     A pointer to the btCollisionShape object.
/// @param {Pointer} scaling
///     A pointer to a btVector3 representing the scaling factors along the x, y,
///     and z axes.
YYEXPORT void btCollisionShape_setLocalScaling(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionShape = (btCollisionShape*)YYGetPtr(arg, 0);
	auto& scaling = *(btVector3*)YYGetPtr(arg, 1);
	collisionShape->setLocalScaling(scaling);
}

/// @func btCollisionShape_setLocalScalingXYZ(collisionShape, scalingX, scalingY, scalingZ)
///
/// @desc
/// Sets the local scaling of a btCollisionShape in each axis separately.
///
/// @param {Pointer} collisionShape
///     A pointer to the btCollisionShape object.
/// @param {Real} scalingX
///     The scaling factor along the X-axis.
/// @param {Real} scalingY
///     The scaling factor along the Y-axis.
/// @param {Real} scalingZ
///     The scaling factor along the Z-axis.
YYEXPORT void btCollisionShape_setLocalScalingXYZ(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionShape = (btCollisionShape*)YYGetPtr(arg, 0);
	double scalingX = YYGetReal(arg, 1);
	double scalingY = YYGetReal(arg, 2);
	double scalingZ = YYGetReal(arg, 3);
	collisionShape->setLocalScaling(btVector3(scalingX, scalingY, scalingZ));
}

/// @func btCollisionShape_getLocalScaling(collisionShape, outVector3)
///
/// @desc
/// Gets the local scaling of the btCollisionShape.
///
/// @param {Pointer} collisionShape
///     A pointer to the btCollisionShape object.
///
/// @param {Pointer} outVector3 A pointer to a btVector3 object to store the
/// local scaling.
YYEXPORT void btCollisionShape_getLocalScaling(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionShape = (btCollisionShape*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(collisionShape->getLocalScaling(), outVector3);
}

/// @func btCollisionShape_calculateLocalInertia(collisionShape, mass, outVector3)
///
/// @desc
/// Calculates the local inertia of the collision shape given a mass.
///
/// @param {Pointer} collisionShape
///     The collision shape for which to calculate local inertia.
/// @param {Real} mass
///     The mass of the object.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 where the calculated local inertia will be
///     stored.
YYEXPORT void btCollisionShape_calculateLocalInertia(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionShape = (btCollisionShape*)YYGetPtr(arg, 0);
	double mass = YYGetReal(arg, 1);
	auto& outVector3 = *(btVector3*)YYGetPtr(arg, 2);
	collisionShape->calculateLocalInertia(mass, outVector3);
}

// Note: Skipped btCollisionShape::getName

/// @func btCollisionShape_getShapeType(collisionShape)
///
/// @desc
/// Gets the shape type of the btCollisionShape.
///
/// @param {Pointer} collisionShape
///     A pointer to the btCollisionShape object.
///
/// @return {Real} The shape type represented as an integer.
YYEXPORT void btCollisionShape_getShapeType(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionShape = (btCollisionShape*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.val = collisionShape->getShapeType();
}

/// @func btCollisionShape_getAnisotropicRollingFrictionDirection(collisionShape, outVector3)
///
/// @desc
/// Gets the anisotropic rolling friction direction of the btCollisionShape.
///
/// @param {Pointer} collisionShape
///     A pointer to the btCollisionShape object.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 where the anisotropic rolling friction
///     direction will be stored.
YYEXPORT void btCollisionShape_getAnisotropicRollingFrictionDirection(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionShape = (btCollisionShape*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(collisionShape->getAnisotropicRollingFrictionDirection(), outVector3);
}

/// @func btCollisionShape_setMargin(collisionShape, margin)
///
/// @desc
/// Sets the margin (collision envelope) for the btCollisionShape.
///
/// @param {Pointer} collisionShape
///     A pointer to the btCollisionShape object.
/// @param {Real} margin
///     The margin value to set for the collision shape.
YYEXPORT void btCollisionShape_setMargin(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionShape = (btCollisionShape*)YYGetPtr(arg, 0);
	double margin = YYGetReal(arg, 1);
	collisionShape->setMargin(margin);
}

/// @func btCollisionShape_getMargin(collisionShape)
///
/// @desc
/// Gets the margin (collision envelope) of the btCollisionShape.
///
/// @param {Pointer} collisionShape
///     A pointer to the btCollisionShape object.
///
/// @return {Real} The margin value of the collision shape.
YYEXPORT void btCollisionShape_getMargin(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionShape = (btCollisionShape*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = collisionShape->getMargin();
}

// Note: Skipped btCollisionShape::setUserPointer
// Note: Skipped btCollisionShape::getUserPointer
// Note: Skipped btCollisionShape::setUserIndex
// Note: Skipped btCollisionShape::getUserIndex
// Note: Skipped btCollisionShape::setUserIndex2
// Note: Skipped btCollisionShape::getUserIndex2
// Note: Skipped btCollisionShape::calculateSerializeBufferSize
// Note: Skipped btCollisionShape::serialize
// Note: Skipped btCollisionShape::serializeSingleShape

////////////////////////////////////////////////////////////////////////////////
//
// Note: Skipped btCollisionShapeData
//
