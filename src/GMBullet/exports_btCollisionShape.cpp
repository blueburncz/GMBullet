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
	btTransform& transform = *(btTransform*)YYGetPtr(arg, 1);
	btVector3& aabbMin = *(btVector3*)YYGetPtr(arg, 2);
	btVector3& aabbMax = *(btVector3*)YYGetPtr(arg, 3);
	collisionShape->getAabb(transform, aabbMin, aabbMax);
}

/// @func btCollisionShape_getBoundingSphere(collisionShape, outCenter)
///
/// @desc
///
/// @param {Pointer} collisionShape
/// @param {Pointer} outCenter
///
/// @return {Real}
YYEXPORT void btCollisionShape_getBoundingSphere(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionShape = (btCollisionShape*)YYGetPtr(arg, 0);
	btVector3& center = *(btVector3*)YYGetPtr(arg, 1);
	float radius;
	collisionShape->getBoundingSphere(center, radius);
	result.kind = VALUE_REAL;
	result.val = radius;
}

/// @func btCollisionShape_setLocalScalingXYZ(collisionShape, scalingX, scalingY, scalingY)
///
/// @desc
///
/// @param {Pointer} collisionShape
/// @param {Real} scalingX
/// @param {Real} scalingY
/// @param {Real} scalingZ
YYEXPORT void btCollisionShape_setLocalScalingXYZ(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionShape = (btCollisionShape*)YYGetPtr(arg, 0);
	double scalingX = YYGetReal(arg, 1);
	double scalingY = YYGetReal(arg, 2);
	double scalingZ = YYGetReal(arg, 3);
	collisionShape->setLocalScaling(btVector3(scalingX, scalingY, scalingZ));
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
	btVector3& outVector3 = *(btVector3*)YYGetPtr(arg, 2);
	collisionShape->calculateLocalInertia(mass, outVector3);
}
