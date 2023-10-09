#include <GMBullet.hpp>

/// @func btGearConstraint_create(rigidBodyA, rigidBodyB, axisInA, axisInB[, ratio])
///
/// @desc
/// Creates a gear constraint between two rigid bodies.
///
/// @param {Pointer} rigidBodyA
///     A pointer to the first btRigidBody involved in the gear constraint.
/// @param {Pointer} rigidBodyB
///     A pointer to the second btRigidBody involved in the gear constraint.
/// @param {Pointer} axisInA
///     A pointer to the axis (btVector3) for the first body.
/// @param {Pointer} axisInB
///     A pointer to the axis (btVector3) for the second body.
/// @param {Real} [ratio]
///     The gear ratio. Defaults to 1.0 if not provided.
///
/// @return {Pointer} A pointer to the created btGearConstraint.
YYEXPORT void btGearConstraint_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto& rigidBodyA = *(btRigidBody*)YYGetPtr(arg, 0);
	auto& rigidBodyB = *(btRigidBody*)YYGetPtr(arg, 1);
	auto& axisInA = *(btVector3*)YYGetPtr(arg, 2);
	auto& axisInB = *(btVector3*)YYGetPtr(arg, 3);
	double ratio = (argc > 4) ? YYGetReal(arg, 4) : 1.0;
	result.kind = VALUE_PTR;
	result.ptr = new btGearConstraint(
		rigidBodyA, rigidBodyB, axisInA, axisInB, ratio);
}

/// @func btGearConstraint_destroy(gearConstraint)
///
/// @desc
/// Destroys a btGearConstraint.
///
/// @param {Pointer} gearConstraint
///     A pointer to the btGearConstraint instance to destroy.
YYEXPORT void btGearConstraint_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btGearConstraint*)YYGetPtr(arg, 0);
}

// Note: Skipped btGearConstraint::getInfo1
// Note: Skipped btGearConstraint::getInfo2

/// @func btGearConstraint_setAxisA(gearConstraint, axisA)
///
/// @desc
/// Sets the axis for the first body in the gear constraint.
///
/// @param {Pointer} gearConstraint
///     A pointer to the btGearConstraint instance.
/// @param {Pointer} axisA
///     A pointer to a btVector3 representing the axis for the first body.
YYEXPORT void btGearConstraint_setAxisA(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto gearConstraint = (btGearConstraint*)YYGetPtr(arg, 0);
	auto& axisA = *(btVector3*)YYGetPtr(arg, 1);
	gearConstraint->setAxisA(axisA);
}

/// @func btGearConstraint_setAxisB(gearConstraint, axisB)
///
/// @desc
/// Sets the axis for the second body in the gear constraint.
///
/// @param {Pointer} gearConstraint
///     A pointer to the btGearConstraint instance.
/// @param {Pointer} axisB
///     A pointer to a btVector3 representing the axis for the second body.
YYEXPORT void btGearConstraint_setAxisB(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto gearConstraint = (btGearConstraint*)YYGetPtr(arg, 0);
	auto& axisB = *(btVector3*)YYGetPtr(arg, 1);
	gearConstraint->setAxisA(axisB);
}

/// @func btGearConstraint_setRatio(gearConstraint, ratio)
///
/// @desc
/// Sets the gear ratio for the gear constraint.
///
/// @param {Pointer} gearConstraint
///     A pointer to the btGearConstraint instance.
/// @param {Real} ratio
///     The gear ratio to set.
YYEXPORT void btGearConstraint_setRatio(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto gearConstraint = (btGearConstraint*)YYGetPtr(arg, 0);
	double ratio = YYGetReal(arg, 1);
	gearConstraint->setRatio(ratio);
}

/// @func btGearConstraint_getAxisA(gearConstraint, outVector3)
///
/// @desc
/// Gets the axis for the first body in the gear constraint.
///
/// @param {Pointer} gearConstraint
///     A pointer to the btGearConstraint instance.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the axis of the first body.
YYEXPORT void btGearConstraint_getAxisA(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto gearConstraint = (btGearConstraint*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(gearConstraint->getAxisA(), outVector3);
}

/// @func btGearConstraint_getAxisB(gearConstraint, outVector3)
///
/// @desc
/// Gets the axis for the second body in the gear constraint.
///
/// @param {Pointer} gearConstraint
///     A pointer to the btGearConstraint instance.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the axis of the second body.
YYEXPORT void btGearConstraint_getAxisB(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto gearConstraint = (btGearConstraint*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(gearConstraint->getAxisB(), outVector3);
}

/// @func btGearConstraint_getRatio(gearConstraint)
///
/// @desc
/// Gets the gear ratio for the gear constraint.
///
/// @param {Pointer} gearConstraint
///     A pointer to the btGearConstraint instance.
///
/// @return {Real} The gear ratio.
YYEXPORT void btGearConstraint_getRatio(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto gearConstraint = (btGearConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = gearConstraint->getRatio();
}

// Note: Skipped btGearConstraint::setParam
// Note: Skipped btGearConstraint::getParam
// Note: Skipped btGearConstraint::calculateSerializeBufferSize
// Note: Skipped btGearConstraint::serialize

////////////////////////////////////////////////////////////////////////////////
//
// Note: Skipped btGearConstraintFloatData
//

////////////////////////////////////////////////////////////////////////////////
//
// Note: Skipped btGearConstraintDoubleData
//
