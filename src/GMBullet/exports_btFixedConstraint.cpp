#include <GMBullet.hpp>

/// @func btFixedConstraint_create(rigidBodyA, rigidBodyB, frameInA, frameInB)
///
/// @desc
/// Creates a fixed constraint between two rigid bodies.
///
/// @param {Pointer} rigidBodyA
///     A pointer to the first btRigidBody involved in the fixed constraint.
/// @param {Pointer} rigidBodyB
///     A pointer to the second btRigidBody involved in the fixed constraint.
/// @param {Pointer} frameInA
///     A pointer to a btTransform specifying the transform of the first body.
/// @param {Pointer} frameInB
///     A pointer to a btTransform specifying the transform of the second body.
///
/// @return {Pointer} A pointer to the created btFixedConstraint.
YYEXPORT void btFixedConstraint_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto& rigidBodyA = *(btRigidBody*)YYGetPtr(arg, 0);
	auto& rigidBodyB = *(btRigidBody*)YYGetPtr(arg, 1);
	auto& frameInA = *(btTransform*)YYGetPtr(arg, 2);
	auto& frameInB = *(btTransform*)YYGetPtr(arg, 3);
	result.ptr = new btFixedConstraint(
		rigidBodyA, rigidBodyB, frameInA, frameInB);
}

/// @func btFixedConstraint_destroy(fixedConstraint)
///
/// @desc
/// Destroys a btFixedConstraint.
///
/// @param {Pointer} fixedConstraint
///     A pointer to the btFixedConstraint instance to destroy.
YYEXPORT void btFixedConstraint_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btFixedConstraint*)YYGetPtr(arg, 0);
}
