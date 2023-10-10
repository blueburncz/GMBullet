#include <GMBullet.hpp>

/// @func btGeneric6DofSpringConstraint_create1(rigidBodyB, frameInB, useLinearReferenceFrameB)
///
/// @desc
/// Creates a new generic 6-degree-of-freedom spring constraint using a single
/// rigid body and frame for the constraint.
///
/// @param {Pointer} rigidBodyB
///     Pointer to the second rigid body for the constraint.
/// @param {Pointer} frameInB
///     Pointer to the frame transformation (btTransform) in the local space of
///     the  second rigid body.
/// @param {Bool} useLinearReferenceFrameB
///     A boolean indicating whether to use the linear reference frame B (true)
///     or not (false).
///
/// @return {Pointer} Pointer to the created btGeneric6DofSpringConstraint
/// instance.
YYEXPORT void btGeneric6DofSpringConstraint_create1(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto& rigidBodyB = *(btRigidBody*)YYGetPtr(arg, 0);
	auto& transformB = *(btTransform*)YYGetPtr(arg, 1);
	bool useLinearReferenceFrameB = YYGetBool(arg, 2);
	result.kind = VALUE_PTR;
	result.ptr = new btGeneric6DofSpringConstraint(
		rigidBodyB, transformB, useLinearReferenceFrameB);
}

/// @func btGeneric6DofSpringConstraint_create2(rigidBodyA, rigidBodyB, frameInA, frameInB, useLinearReferenceFrameB)
///
/// @desc
/// Creates a new generic 6-degree-of-freedom spring constraint using two rigid
/// bodies and respective frames for the constraint.
///
/// @param {Pointer} rigidBodyA
///     Pointer to the first rigid body for the constraint.
/// @param {Pointer} rigidBodyB
///     Pointer to the second rigid body for the constraint.
/// @param {Pointer} frameInA
///     Pointer to the frame transformation (btTransform) in the local space of
/// the first rigid body.
/// @param {Pointer} frameInB
///     Pointer to the frame transformation (btTransform) in the local space of
///     the second rigid body.
/// @param {Bool} useLinearReferenceFrameB
///     A boolean indicating whether to use the linear reference frame B (true)
///     or not (false).
///
/// @return {Pointer} Pointer to the created btGeneric6DofSpringConstraint
/// instance.
YYEXPORT void btGeneric6DofSpringConstraint_create2(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto& rigidBodyA = *(btRigidBody*)YYGetPtr(arg, 0);
	auto& rigidBodyB = *(btRigidBody*)YYGetPtr(arg, 1);
	auto& transformA = *(btTransform*)YYGetPtr(arg, 2);
	auto& transformB = *(btTransform*)YYGetPtr(arg, 3);
	bool useLinearReferenceFrameB = YYGetBool(arg, 4);
	result.kind = VALUE_PTR;
	result.ptr = new btGeneric6DofSpringConstraint(
		rigidBodyA, rigidBodyB, transformA, transformB, useLinearReferenceFrameB);
}

/// @func btGeneric6DofSpringConstraint_destroy(generic6DofSpringConstraint)
///
/// @desc
/// Destroys the specified generic 6-degree-of-freedom spring constraint.
///
/// @param {Pointer} generic6DofSpringConstraint
///     Pointer to the btGeneric6DofSpringConstraint instance to be destroyed.
YYEXPORT void btGeneric6DofSpringConstraint_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btGeneric6DofSpringConstraint*)YYGetPtr(arg, 0);
}

/// @func btGeneric6DofSpringConstraint_enableSpring(generic6DofSpringConstraint, index, onOff)
///
/// @desc
/// Enables or disables spring for a specified degree of freedom (DOF) in the
/// generic 6-degree-of-freedom spring constraint.
///
/// @param {Pointer} generic6DofSpringConstraint
///     Pointer to the btGeneric6DofSpringConstraint instance.
/// @param {Real} index
///     The index of the degree of freedom (DOF) for which to enable or disable
///     spring.
/// @param {Bool} onOff
///     A boolean indicating whether to enable (true) or disable (false) the
///     spring.
YYEXPORT void btGeneric6DofSpringConstraint_enableSpring(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpringConstraint = (btGeneric6DofSpringConstraint*)YYGetPtr(arg, 0);
	int index = YYGetInt32(arg, 1);
	bool onOff = YYGetBool(arg, 2);
	generic6DofSpringConstraint->enableSpring(index, onOff);
}

/// @func btGeneric6DofSpringConstraint_setStiffness(generic6DofSpringConstraint, index, stiffness)
///
/// @desc
/// Sets the stiffness for a specified degree of freedom (DOF) in the generic
/// 6-degree-of-freedom spring constraint.
///
/// @param {Pointer} generic6DofSpringConstraint
///     Pointer to the btGeneric6DofSpringConstraint instance.
/// @param {Real} index
///     The index of the degree of freedom (DOF) for which to set the stiffness.
/// @param {Real} stiffness
///     The stiffness value to set for the specified degree of freedom.
YYEXPORT void btGeneric6DofSpringConstraint_setStiffness(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpringConstraint = (btGeneric6DofSpringConstraint*)YYGetPtr(arg, 0);
	int index = YYGetInt32(arg, 1);
	double stiffness = YYGetReal(arg, 2);
	generic6DofSpringConstraint->setStiffness(index, stiffness);
}

/// @func btGeneric6DofSpringConstraint_setDamping(generic6DofSpringConstraint, index, damping)
///
/// @desc
/// Sets the damping for a specified degree of freedom (DOF) in the generic
/// 6-degree-of-freedom spring constraint.
///
/// @param {Pointer} generic6DofSpringConstraint
///     Pointer to the btGeneric6DofSpringConstraint instance.
/// @param {Real} index
///     The index of the degree of freedom (DOF) for which to set the damping.
/// @param {Real} damping
///     The damping value to set for the specified degree of freedom.
YYEXPORT void btGeneric6DofSpringConstraint_setDamping(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpringConstraint = (btGeneric6DofSpringConstraint*)YYGetPtr(arg, 0);
	int index = YYGetInt32(arg, 1);
	double damping = YYGetReal(arg, 2);
	generic6DofSpringConstraint->setDamping(index, damping);
}

/// @func btGeneric6DofSpringConstraint_setEquilibriumPoint(generic6DofSpringConstraint[, index[, val]])
///
/// @desc
/// Sets the equilibrium point (desired position) for a specified degree of
/// freedom (DOF) in the generic 6-degree-of-freedom spring constraint. If no
/// index or damping is provided, sets the equilibrium point for all DOFs.
///
/// @param {Pointer} generic6DofSpringConstraint
///     Pointer to the btGeneric6DofSpringConstraint instance.
/// @param {Real} [index]
///     The index of the degree of freedom (DOF) for which to set the
///     equilibrium point. If not provided, sets the equilibrium point for all
///     DOFs.
/// @param {Real} [val]
///     The value for the equilibrium point. If not provided, uses the default
///     equilibrium point for the specified DOF.
YYEXPORT void btGeneric6DofSpringConstraint_setEquilibriumPoint(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpringConstraint = (btGeneric6DofSpringConstraint*)YYGetPtr(arg, 0);
	if (argc > 2)
	{
		int index = YYGetInt32(arg, 1);
		double val = YYGetReal(arg, 2);
		generic6DofSpringConstraint->setEquilibriumPoint(index, val);
	}
	else if (argc > 1)
	{
		int index = YYGetInt32(arg, 1);
		generic6DofSpringConstraint->setEquilibriumPoint(index);
	}
	else
	{
		generic6DofSpringConstraint->setEquilibriumPoint();
	}
}

/// @func btGeneric6DofSpringConstraint_isSpringEnabled(generic6DofSpringConstraint, index)
///
/// @desc
/// Checks if the spring is enabled for a specified degree of freedom (DOF) in
/// the generic 6-degree-of-freedom spring constraint.
///
/// @param {Pointer} generic6DofSpringConstraint
///     Pointer to the btGeneric6DofSpringConstraint instance.
/// @param {Real} index
///     The index of the degree of freedom (DOF) to check for spring enablement.
///
/// @return {Bool} True if spring is enabled for the specified DOF, false
/// otherwise.
YYEXPORT void btGeneric6DofSpringConstraint_isSpringEnabled(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpringConstraint = (btGeneric6DofSpringConstraint*)YYGetPtr(arg, 0);
	int index = YYGetInt32(arg, 1);
	result.kind = VALUE_BOOL;
	result.val = generic6DofSpringConstraint->isSpringEnabled(index);
}

/// @func btGeneric6DofSpringConstraint_getStiffness(generic6DofSpringConstraint, index)
///
/// @desc
/// Gets the stiffness for a specified degree of freedom (DOF) in the generic
/// 6-degree-of-freedom spring constraint.
///
/// @param {Pointer} generic6DofSpringConstraint
///     Pointer to the btGeneric6DofSpringConstraint instance.
/// @param {Real} index
///     The index of the degree of freedom (DOF) for which to get the stiffness.
///
/// @return {Real} The stiffness value for the specified degree of freedom.
YYEXPORT void btGeneric6DofSpringConstraint_getStiffness(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpringConstraint = (btGeneric6DofSpringConstraint*)YYGetPtr(arg, 0);
	int index = YYGetInt32(arg, 1);
	result.kind = VALUE_REAL;
	result.val = generic6DofSpringConstraint->getStiffness(index);
}

/// @func btGeneric6DofSpringConstraint_getDamping(generic6DofSpringConstraint, index)
///
/// @desc
/// Gets the damping for a specified degree of freedom (DOF) in the generic 
/// 6-degree-of-freedom spring constraint.
///
/// @param {Pointer} generic6DofSpringConstraint
///     Pointer to the btGeneric6DofSpringConstraint instance.
/// @param {Real} index
///     The index of the degree of freedom (DOF) for which to get the damping.
///
/// @return {Real} The damping value for the specified degree of freedom.
YYEXPORT void btGeneric6DofSpringConstraint_getDamping(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpringConstraint = (btGeneric6DofSpringConstraint*)YYGetPtr(arg, 0);
	int index = YYGetInt32(arg, 1);
	result.kind = VALUE_REAL;
	result.val = generic6DofSpringConstraint->getDamping(index);
}

/// @func btGeneric6DofSpringConstraint_getEquilibriumPoint(generic6DofSpringConstraint, index)
///
/// @desc
/// Gets the equilibrium point (desired position) for a specified degree of 
/// freedom (DOF) in the generic 6-degree-of-freedom spring constraint.
///
/// @param {Pointer} generic6DofSpringConstraint
///     Pointer to the btGeneric6DofSpringConstraint instance.
/// @param {Real} index
///     The index of the degree of freedom (DOF) for which to get the
///     equilibrium point.
///
/// @return {Real} The equilibrium point (desired position) for the specified
/// degree of freedom.
YYEXPORT void btGeneric6DofSpringConstraint_getEquilibriumPoint(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpringConstraint = (btGeneric6DofSpringConstraint*)YYGetPtr(arg, 0);
	int index = YYGetInt32(arg, 1);
	result.kind = VALUE_REAL;
	result.val = generic6DofSpringConstraint->getEquilibriumPoint(index);
}

/// @func btGeneric6DofSpringConstraint_setAxis(generic6DofSpringConstraint, axis1, axis2)
///
/// @desc
/// Sets the axes for spring calculation in the generic 6-degree-of-freedom 
/// spring constraint.
///
/// @param {Pointer} generic6DofSpringConstraint
///     Pointer to the btGeneric6DofSpringConstraint instance.
/// @param {Pointer} axis1
///     The first axis for spring calculation.
/// @param {Pointer} axis2
///     The second axis for spring calculation.
YYEXPORT void btGeneric6DofSpringConstraint_setAxis(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpringConstraint = (btGeneric6DofSpringConstraint*)YYGetPtr(arg, 0);
	auto& axis1 = *(btVector3*)YYGetPtr(arg, 1);
	auto& axis2 = *(btVector3*)YYGetPtr(arg, 2);
	generic6DofSpringConstraint->setAxis(axis1, axis2);
}

// Note: Skipped btGeneric6DofSpringConstraint::getInfo2
// Note: Skipped btGeneric6DofSpringConstraint::calculateSerializeBufferSize
// Note: Skipped btGeneric6DofSpringConstraint::serialize

////////////////////////////////////////////////////////////////////////////////
//
// Note: Skipped btGeneric6DofSpringConstraintData
//

////////////////////////////////////////////////////////////////////////////////
//
// Note: Skipped btGeneric6DofSpringConstraintDoubleData2
//
