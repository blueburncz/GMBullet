#include <GMBullet.hpp>

// Note: btCollisionShape is an abstract class and cannot be constructed.

/// @func btCollisionShape_destroy(collisionShape)
///
/// @desc Destroys a collision shape.
///
/// @param {Pointer} collisionShape The collision shape to destroy.
YYEXPORT void btCollisionShape_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btCollisionShape*)YYGetPtr(arg, 0);
}

/// @func btCollisionShape_calculateLocalInertia(collisionShape, mass, outVector3)
///
/// @desc Calculates local inertia for a dynamic rigid body.
///
/// @param {Pointer} collisionShape The collision shape.
/// @param {Real} mass The mass of the rigid body. Must be greater than 0.
/// @param {Pointer} outVector3 The vector to hold the result.
YYEXPORT void btCollisionShape_calculateLocalInertia(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionShape = (btCollisionShape*)YYGetPtr(arg, 0);
	double mass = YYGetReal(arg, 1);
	btVector3& outVector3 = *(btVector3*)YYGetPtr(arg, 2);
	collisionShape->calculateLocalInertia(mass, outVector3);
}
