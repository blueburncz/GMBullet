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
