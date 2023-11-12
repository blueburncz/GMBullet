#include <GMBullet.hpp>

////////////////////////////////////////////////////////////////////////////////
//
// btJointFeedback
//

/// @func btJointFeedback_create()
///
/// @desc
/// Create a new btJointFeedback instance.
///
/// @return {Pointer} A pointer to the newly created btJointFeedback instance.
YYEXPORT void btJointFeedback_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	result.kind = VALUE_PTR;
	result.ptr = new btJointFeedback();
}

/// @func btJointFeedback_destroy(jointFeedback)
///
/// @desc
/// Destroy a btJointFeedback instance, releasing associated resources.
///
/// @param {Pointer} jointFeedback
///     A pointer to the btJointFeedback instance to be destroyed.
YYEXPORT void btJointFeedback_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btJointFeedback*)YYGetPtr(arg, 0);
}

/// @func btJointFeedback_setAppliedForceBodyA(jointFeedback, appliedForceBodyA)
///
/// @desc
/// Set the applied force on body A for a joint feedback.
///
/// @param {Pointer} jointFeedback
///     A pointer to the btJointFeedback instance.
/// @param {Real} appliedForceBodyA
///     The applied force on body A as a btVector3.
YYEXPORT void btJointFeedback_setAppliedForceBodyA(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto jointFeedback = (btJointFeedback*)YYGetPtr(arg, 0);
	btVector3 appliedForceBodyA = *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(appliedForceBodyA, &jointFeedback->m_appliedForceBodyA);
}

/// @func btJointFeedback_getAppliedForceBodyA(jointFeedback, outVector3)
///
/// @desc
/// Get the applied force on body A for a joint feedback.
///
/// @param {Pointer} jointFeedback
///     A pointer to the btJointFeedback instance.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the applied force on body A.
YYEXPORT void btJointFeedback_getAppliedForceBodyA(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto jointFeedback = (btJointFeedback*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(jointFeedback->m_appliedForceBodyA, outVector3);
}

/// @func btJointFeedback_setAppliedTorqueBodyA(jointFeedback, appliedTorqueBodyA)
///
/// @desc
/// Set the applied torque on body A for a joint feedback.
///
/// @param {Pointer} jointFeedback
///     A pointer to the btJointFeedback instance.
/// @param {Real} appliedTorqueBodyA
///     The applied torque on body A as a btVector3.
YYEXPORT void btJointFeedback_setAppliedTorqueBodyA(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto jointFeedback = (btJointFeedback*)YYGetPtr(arg, 0);
	btVector3 appliedTorqueBodyA = *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(appliedTorqueBodyA, &jointFeedback->m_appliedTorqueBodyA);
}

/// @func btJointFeedback_getAppliedTorqueBodyA(jointFeedback, outVector3)
///
/// @desc
/// Get the applied torque on body A for a joint feedback.
///
/// @param {Pointer} jointFeedback
///     A pointer to the btJointFeedback instance.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the applied torque on body A.
YYEXPORT void btJointFeedback_getAppliedTorqueBodyA(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto jointFeedback = (btJointFeedback*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(jointFeedback->m_appliedTorqueBodyA, outVector3);
}

/// @func btJointFeedback_setAppliedForceBodyB(jointFeedback, appliedForceBodyB)
///
/// @desc
/// Set the applied force on body B for a joint feedback.
///
/// @param {Pointer} jointFeedback
///     A pointer to the btJointFeedback instance.
/// @param {Real} appliedForceBodyB
///     The applied force on body B as a btVector3.
YYEXPORT void btJointFeedback_setAppliedForceBodyB(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto jointFeedback = (btJointFeedback*)YYGetPtr(arg, 0);
	btVector3 appliedForceBodyB = *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(appliedForceBodyB, &jointFeedback->m_appliedForceBodyB);
}

/// @func btJointFeedback_getAppliedForceBodyB(jointFeedback, outVector3)
///
/// @desc
/// Get the applied force on body B for a joint feedback.
///
/// @param {Pointer} jointFeedback
///     A pointer to the btJointFeedback instance.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the applied force on body B.
YYEXPORT void btJointFeedback_getAppliedForceBodyB(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto jointFeedback = (btJointFeedback*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(jointFeedback->m_appliedForceBodyB, outVector3);
}

/// @func btJointFeedback_setAppliedTorqueBodyB(jointFeedback, appliedTorqueBodyB)
///
/// @desc
/// Set the applied torque on body B for a joint feedback.
///
/// @param {Pointer} jointFeedback
///     A pointer to the btJointFeedback instance.
/// @param {Real} appliedTorqueBodyB
///     The applied torque on body B as a btVector3.
YYEXPORT void btJointFeedback_setAppliedTorqueBodyB(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto jointFeedback = (btJointFeedback*)YYGetPtr(arg, 0);
	btVector3 appliedTorqueBodyB = *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(appliedTorqueBodyB, &jointFeedback->m_appliedTorqueBodyB);
}

/// @func btJointFeedback_getAppliedTorqueBodyB(jointFeedback, outVector3)
///
/// @desc
/// Get the applied torque on body B for a joint feedback.
///
/// @param {Pointer} jointFeedback
///     A pointer to the btJointFeedback instance.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the applied torque on body B.
YYEXPORT void btJointFeedback_getAppliedTorqueBodyB(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto jointFeedback = (btJointFeedback*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(jointFeedback->m_appliedTorqueBodyB, outVector3);
}

////////////////////////////////////////////////////////////////////////////////
//
// Note: Skipped btConstraintInfo1
//

////////////////////////////////////////////////////////////////////////////////
//
// Note: Skipped btConstraintInfo2
//

////////////////////////////////////////////////////////////////////////////////
//
// btTypedConstraint
//

// Note: btTypedConstraint is an abstract class and cannot be instantiated

/// @func btTypedConstraint_destroy(typedConstraint)
///
/// @desc
/// Destroy the btTypedConstraint instance.
///
/// @param {Pointer} typedConstraint
///     A pointer to the btTypedConstraint object.
YYEXPORT void btTypedConstraint_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btTypedConstraint*)YYGetPtr(arg, 0);
}

// Note: Skipped btTypedConstraint::getFixedBody

/// @func btTypedConstraint_getOverrideNumSolverIterations(typedConstraint)
///
/// @desc
/// Get the override number of solver iterations for a typed constraint.
///
/// @param {Pointer} typedConstraint
///     A pointer to the btTypedConstraint instance.
///
/// @return {Real} The override number of solver iterations as an integer.
YYEXPORT void btTypedConstraint_getOverrideNumSolverIterations(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto typedConstraint = (btTypedConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.v32 = typedConstraint->getOverrideNumSolverIterations();
}

/// @func btTypedConstraint_setOverrideNumSolverIterations(typedConstraint, overrideNumIterations)
///
/// @desc
/// Set the override number of solver iterations for a typed constraint.
///
/// @param {Pointer} typedConstraint
///     A pointer to the btTypedConstraint instance.
/// @param {Real} overrideNumIterations
///     The override number of solver iterations to set as an integer.
YYEXPORT void btTypedConstraint_setOverrideNumSolverIterations(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto typedConstraint = (btTypedConstraint*)YYGetPtr(arg, 0);
	int overrideNumIterations = YYGetInt32(arg, 1);
	typedConstraint->setOverrideNumSolverIterations(overrideNumIterations);
}

/// @func btTypedConstraint_getBreakingImpulseThreshold(typedConstraint)
///
/// @desc
/// Get the breaking impulse threshold for a typed constraint.
///
/// @param {Pointer} typedConstraint
///     A pointer to the btTypedConstraint instance.
///
/// @return {Real} The breaking impulse threshold.
YYEXPORT void btTypedConstraint_getBreakingImpulseThreshold(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto typedConstraint = (btTypedConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = typedConstraint->getBreakingImpulseThreshold();
}

/// @func btTypedConstraint_setBreakingImpulseThreshold(typedConstraint, threshold)
///
/// @desc
/// Set the breaking impulse threshold for a typed constraint.
///
/// @param {Pointer} typedConstraint
///     A pointer to the btTypedConstraint instance.
/// @param {Real} threshold
///     The breaking impulse threshold to set.
YYEXPORT void btTypedConstraint_setBreakingImpulseThreshold(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto typedConstraint = (btTypedConstraint*)YYGetPtr(arg, 0);
	double threshold = YYGetReal(arg, 1);
	typedConstraint->setBreakingImpulseThreshold(threshold);
}

/// @func btTypedConstraint_isEnabled(typedConstraint)
///
/// @desc
/// Check if the typed constraint is currently enabled.
///
/// @param {Pointer} typedConstraint
///     A pointer to the btTypedConstraint instance.
///
/// @return {Bool} Returns true if the constraint is enabled, false otherwise.
YYEXPORT void btTypedConstraint_isEnabled(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto typedConstraint = (btTypedConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = typedConstraint->isEnabled();
}

/// @func btTypedConstraint_setEnabled(typedConstraint, enabled)
///
/// @desc
/// Set the enabled status of the typed constraint.
///
/// @param {Pointer} typedConstraint
///     A pointer to the btTypedConstraint instance.
/// @param {Bool} enabled
///     Use true to enable or false to disable.
YYEXPORT void btTypedConstraint_setEnabled(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto typedConstraint = (btTypedConstraint*)YYGetPtr(arg, 0);
	bool enabled = YYGetBool(arg, 1);
	typedConstraint->setEnabled(enabled);
}

/// @func btTypedConstraint_getRigidBodyA(typedConstraint)
///
/// @desc
/// Get a pointer to the rigid body associated with the first end of the constraint.
///
/// @param {Pointer} typedConstraint
///     A pointer to the btTypedConstraint instance.
///
/// @return {Pointer} A pointer to the btRigidBody associated with the first end
/// of the constraint.
YYEXPORT void btTypedConstraint_getRigidBodyA(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto typedConstraint = (btTypedConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = &typedConstraint->getRigidBodyA();
}

/// @func btTypedConstraint_getRigidBodyB(typedConstraint)
///
/// @desc
/// Get a pointer to the rigid body associated with the second end of the constraint.
///
/// @param {Pointer} typedConstraint
///     A pointer to the btTypedConstraint instance.
///
/// @return {Pointer} A pointer to the btRigidBody associated with the second
/// end of the constraint.
YYEXPORT void btTypedConstraint_getRigidBodyB(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto typedConstraint = (btTypedConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = &typedConstraint->getRigidBodyB();
}

/// @func btTypedConstraint_getUserConstraintType(typedConstraint)
///
/// @desc
/// Get the user-defined constraint type associated with this constraint.
///
/// @param {Pointer} typedConstraint
///     A pointer to the btTypedConstraint instance.
///
/// @return {Real} The user-defined constraint type associated with this
/// constraint.
YYEXPORT void btTypedConstraint_getUserConstraintType(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto typedConstraint = (btTypedConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.v32 = typedConstraint->getUserConstraintType();
}

/// @func btTypedConstraint_setUserConstraintType(typedConstraint, userConstraintType)
///
/// @desc
/// Set a user-defined constraint type to associate with this constraint.
///
/// @param {Pointer} typedConstraint
///     A pointer to the btTypedConstraint instance.
/// @param {Real} userConstraintType
///     The user-defined constraint type to set for this constraint.
YYEXPORT void btTypedConstraint_setUserConstraintType(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto typedConstraint = (btTypedConstraint*)YYGetPtr(arg, 0);
	int userConstraintType = YYGetInt32(arg, 1);
	typedConstraint->setUserConstraintType(userConstraintType);
}

/// @func btTypedConstraint_setUserConstraintId(typedConstraint, uid)
///
/// @desc
/// Set a user-defined constraint ID to associate with this constraint.
///
/// @param {Pointer} typedConstraint
///     A pointer to the btTypedConstraint instance.
/// @param {Real} uid
///     The user-defined constraint ID to set for this constraint.
YYEXPORT void btTypedConstraint_setUserConstraintId(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto typedConstraint = (btTypedConstraint*)YYGetPtr(arg, 0);
	int uid = YYGetInt32(arg, 1);
	typedConstraint->setUserConstraintId(uid);
}

/// @func btTypedConstraint_getUserConstraintId(typedConstraint)
///
/// @desc
/// Get the user-defined constraint ID associated with this constraint.
///
/// @param {Pointer} typedConstraint
///     A pointer to the btTypedConstraint instance.
///
/// @return {Real} The user-defined constraint ID associated with this
/// constraint.
YYEXPORT void btTypedConstraint_getUserConstraintId(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto typedConstraint = (btTypedConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.v32 = typedConstraint->getUserConstraintId();
}

/// @func btTypedConstraint_setUserConstraintPtr(typedConstraint, ptr)
///
/// @desc
/// Set a user-defined pointer to associate with this constraint.
///
/// @param {Pointer} typedConstraint
///     A pointer to the btTypedConstraint instance.
/// @param {Pointer} ptr
///     The user-defined pointer to set for this constraint.
YYEXPORT void btTypedConstraint_setUserConstraintPtr(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto typedConstraint = (btTypedConstraint*)YYGetPtr(arg, 0);
	auto ptr = YYGetPtr(arg, 1);
	typedConstraint->setUserConstraintPtr(ptr);
}

/// @func btTypedConstraint_getUserConstraintPtr(typedConstraint)
///
/// @desc
/// Get the user-defined pointer associated with this constraint.
///
/// @param {Pointer} typedConstraint
///     A pointer to the btTypedConstraint instance.
///
/// @return {Pointer} The user-defined pointer associated with this constraint.
YYEXPORT void btTypedConstraint_getUserConstraintPtr(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto typedConstraint = (btTypedConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = typedConstraint->getUserConstraintPtr();
}

/// @func btTypedConstraint_setJointFeedback(typedConstraint, jointFeedback)
///
/// @desc
/// Set a btJointFeedback instance to provide feedback for this constraint.
///
/// @param {Pointer} typedConstraint
///     A pointer to the btTypedConstraint instance.
/// @param {Pointer} jointFeedback
///     A pointer to a btJointFeedback instance to set for providing feedback.
YYEXPORT void btTypedConstraint_setJointFeedback(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto typedConstraint = (btTypedConstraint*)YYGetPtr(arg, 0);
	auto jointFeedback = (btJointFeedback*)YYGetPtr(arg, 1);
	typedConstraint->setJointFeedback(jointFeedback);
}

/// @func btTypedConstraint_getJointFeedback(typedConstraint)
///
/// @desc
/// Get the btJointFeedback instance associated with this constraint for
/// providing feedback.
///
/// @param {Pointer} typedConstraint
///     A pointer to the btTypedConstraint instance.
///
/// @return {Pointer} A pointer to the associated btJointFeedback instance
/// providing feedback for this constraint.
YYEXPORT void btTypedConstraint_getJointFeedback(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto typedConstraint = (btTypedConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = (btJointFeedback*)typedConstraint->getJointFeedback();
}

/// @func btTypedConstraint_getUid(typedConstraint)
///
/// @desc
/// Get the unique identifier (uid) associated with this constraint.
///
/// @param {Pointer} typedConstraint
///     A pointer to the btTypedConstraint instance.
///
/// @return {Real} The unique identifier (uid) associated with this constraint.
YYEXPORT void btTypedConstraint_getUid(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto typedConstraint = (btTypedConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.v32 = typedConstraint->getUid();
}

/// @func btTypedConstraint_needsFeedback(typedConstraint)
///
/// @desc
/// Check if this constraint needs feedback for simulation.
///
/// @param {Pointer} typedConstraint
///     A pointer to the btTypedConstraint instance.
///
/// @return {Bool} True if this constraint needs feedback for simulation, false
/// otherwise.
YYEXPORT void btTypedConstraint_needsFeedback(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto typedConstraint = (btTypedConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = typedConstraint->needsFeedback();
}

/// @func btTypedConstraint_enableFeedback(typedConstraint, needsFeedback)
///
/// @desc
/// Enable or disable feedback for this constraint.
///
/// @param {Pointer} typedConstraint
///     A pointer to the btTypedConstraint instance.
/// @param {Bool} needsFeedback
///     True to enable feedback, false to disable feedback for this constraint.
YYEXPORT void btTypedConstraint_enableFeedback(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto typedConstraint = (btTypedConstraint*)YYGetPtr(arg, 0);
	bool needsFeedback = YYGetBool(arg, 1);
	typedConstraint->enableFeedback(needsFeedback);
}

/// @func btTypedConstraint_getAppliedImpulse(typedConstraint)
///
/// @desc
/// Get the applied impulse of this constraint.
///
/// @param {Pointer} typedConstraint
///     A pointer to the btTypedConstraint instance.
///
/// @return {Real} The applied impulse of this constraint.
YYEXPORT void btTypedConstraint_getAppliedImpulse(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto typedConstraint = (btTypedConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = typedConstraint->getAppliedImpulse();
}

/// @func btTypedConstraint_getConstraintType(typedConstraint)
///
/// @desc
/// Get the type of this constraint.
///
/// @param {Pointer} typedConstraint
///     A pointer to the btTypedConstraint instance.
///
/// @return {Real} The type of this constraint as an integer value.
///
/// @see btTypedConstraintType
YYEXPORT void btTypedConstraint_getConstraintType(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto typedConstraint = (btTypedConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.v32 = (int)typedConstraint->getConstraintType();
}

// Note: Skipped btTypedConstraint::setDbgDrawSize
// Note: Skipped btTypedConstraint::getDbgDrawSize

/// @func btTypedConstraint_setParam(typedConstraint, num, value[, axis])
///
/// @desc
/// Set a numerical parameter for this constraint.
///
/// @param {Pointer} typedConstraint
///     A pointer to the btTypedConstraint instance.
/// @param {Real} num
///     The numerical parameter identifier.
/// @param {Real} value
///     The value to set for the specified numerical parameter.
/// @param {Real} [axis]
///      The axis identifier for multi-axis constraints. Default is -1.
///
/// @see btConstraintParams
YYEXPORT void btTypedConstraint_setParam(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto typedConstraint = (btTypedConstraint*)YYGetPtr(arg, 0);
	int num = YYGetInt32(arg, 1);
	double value = YYGetReal(arg, 2);
	int axis = (argc > 3) ? YYGetInt32(arg, 3) : -1;
	typedConstraint->setParam(num, value, axis);
}

/// @func btTypedConstraint_getParam(typedConstraint, num[, axis])
///
/// @desc
/// Get a numerical parameter of this constraint.
///
/// @param {Pointer} typedConstraint
///     A pointer to the btTypedConstraint instance.
/// @param {Real} num
///     The numerical parameter identifier.
/// @param {Real} [axis]
///     The axis identifier for multi-axis constraints. Default is -1.
///
/// @return {Real} The value of the specified numerical parameter.
///
/// @see btConstraintParams
YYEXPORT void btTypedConstraint_getParam(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto typedConstraint = (btTypedConstraint*)YYGetPtr(arg, 0);
	int num = YYGetInt32(arg, 1);
	int axis = (argc > 2) ? YYGetInt32(arg, 2) : -1;
	result.kind = VALUE_REAL;
	result.val = typedConstraint->getParam(num, axis);
}

// Note: Skipped btTypedConstraint::calculateSerializeBufferSize
// Note: Skipped btTypedConstraint::serialize

/// @func btAdjustAngleToLimits(angleInRadians, angleLowerLimitInRadian, angleUpperLimitInRadians)
///
/// @desc
/// Adjust an angle to be within specified lower and upper limits.
///
/// @param {Real} angleInRadians
///     The input angle in radians.
/// @param {Real} angleLowerLimitInRadian
///     The lower limit for the angle in radians.
/// @param {Real} angleUpperLimitInRadians
///     The upper limit for the angle in radians.
///
/// @return {Real} The adjusted angle within the specified limits.
YYEXPORT void btAdjustAngleToLimits(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	double angleInRadians = YYGetReal(arg, 0);
	double angleLowerLimitInRadian = YYGetReal(arg, 1);
	double angleUpperLimitInRadians = YYGetReal(arg, 2);
	result.kind = VALUE_REAL;
	result.val = btAdjustAngleToLimits(
		angleInRadians, angleLowerLimitInRadian, angleUpperLimitInRadians);
}

////////////////////////////////////////////////////////////////////////////////
//
// Note: Skipped btTypedConstraintFloatData
//

////////////////////////////////////////////////////////////////////////////////
//
// Note: Skipped btTypedConstraintData
//

////////////////////////////////////////////////////////////////////////////////
//
// Note: Skipped btTypedConstraintDoubleData
//

////////////////////////////////////////////////////////////////////////////////
//
// btAngularLimit
//

/// @func btAngularLimit_create()
///
/// @desc
/// Creates a new instance of btAngularLimit.
///
/// @return {Pointer} A pointer to the created btAngularLimit instance.
YYEXPORT void btAngularLimit_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	result.kind = VALUE_PTR;
	result.ptr = new btAngularLimit();
}

/// @func btAngularLimit_destroy(angularLimit)
///
/// @desc
/// Destroys an instance of btAngularLimit, releasing associated resources.
///
/// @param {Pointer} angularLimit
///     The pointer to the btAngularLimit instance to be destroyed.
YYEXPORT void btAngularLimit_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btAngularLimit*)YYGetPtr(arg, 0);
}

/// @func btAngularLimit_set(angularLimit, low, high[, softness[, biasFactor[, relaxationFactor]]])
///
/// @desc
/// Sets the angular limits for the btAngularLimit instance.
///
/// @param {Pointer} angularLimit
///     The pointer to the btAngularLimit instance.
/// @param {Real} low
///     The lower limit in radians.
/// @param {Real} high
///     The upper limit in radians.
/// @param {Real} [softness]
///     The softness factor. Default is 0.9.
/// @param {Real} [biasFactor]
///     The bias factor. Default is 0.3.
/// @param {Real} [relaxationFactor]
///     The relaxation factor. Default is 1.0.
YYEXPORT void btAngularLimit_set(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto angularLimit = (btAngularLimit*)YYGetPtr(arg, 0);
	double low = YYGetReal(arg, 1);
	double high = YYGetReal(arg, 2);
	double softness = (argc > 3) ? YYGetReal(arg, 3) : 0.9;
	double biasFactor = (argc > 4) ? YYGetReal(arg, 4) : 0.3;
	double relaxationFactor = (argc > 5) ? YYGetReal(arg, 5) : 1.0;
	angularLimit->set(low, high, softness, biasFactor, relaxationFactor);
}

/// @func btAngularLimit_test(angularLimit, angle)
///
/// @desc
/// Tests if the given angle is within the specified angular limits.
///
/// @param {Pointer} angularLimit
///     The pointer to the btAngularLimit instance.
/// @param {Real} angle
///     The angle in radians to be tested.
YYEXPORT void btAngularLimit_test(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto angularLimit = (btAngularLimit*)YYGetPtr(arg, 0);
	double angle = YYGetReal(arg, 1);
	angularLimit->test(angle);
}

/// @func btAngularLimit_getSoftness(angularLimit)
///
/// @desc
/// Gets the softness factor of the angular limit.
///
/// @param {Pointer} angularLimit
///     The pointer to the btAngularLimit instance.
///
/// @return {Real} The softness factor of the angular limit.
YYEXPORT void btAngularLimit_getSoftness(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto angularLimit = (btAngularLimit*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = angularLimit->getSoftness();
}

/// @func btAngularLimit_getBiasFactor(angularLimit)
///
/// @desc
/// Gets the bias factor of the angular limit.
///
/// @param {Pointer} angularLimit
///     The pointer to the btAngularLimit instance.
///
/// @return {Real} The bias factor of the angular limit.
YYEXPORT void btAngularLimit_getBiasFactor(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto angularLimit = (btAngularLimit*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = angularLimit->getBiasFactor();
}

/// @func btAngularLimit_getRelaxationFactor(angularLimit)
///
/// @desc
/// Gets the relaxation factor of the angular limit.
///
/// @param {Pointer} angularLimit
///     The pointer to the btAngularLimit instance.
///
/// @return {Real} The relaxation factor of the angular limit.
YYEXPORT void btAngularLimit_getRelaxationFactor(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto angularLimit = (btAngularLimit*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = angularLimit->getRelaxationFactor();
}

/// @func btAngularLimit_getCorrection(angularLimit)
///
/// @desc
/// Gets the correction value of the angular limit.
///
/// @param {Pointer} angularLimit
///     The pointer to the btAngularLimit instance.
///
/// @return {Real} The correction value of the angular limit.
YYEXPORT void btAngularLimit_getCorrection(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto angularLimit = (btAngularLimit*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = angularLimit->getCorrection();
}

/// @func btAngularLimit_getSign(angularLimit)
///
/// @desc
/// Gets the sign of the angular limit.
///
/// @param {Pointer} angularLimit
///     The pointer to the btAngularLimit instance.
///
/// @return {Real} The sign of the angular limit.
YYEXPORT void btAngularLimit_getSign(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto angularLimit = (btAngularLimit*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = angularLimit->getSign();
}

/// @func btAngularLimit_getHalfRange(angularLimit)
///
/// @desc
/// Gets the half range of the angular limit.
///
/// @param {Pointer} angularLimit
///     The pointer to the btAngularLimit instance.
///
/// @return {Real} The half range of the angular limit.
YYEXPORT void btAngularLimit_getHalfRange(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto angularLimit = (btAngularLimit*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = angularLimit->getHalfRange();
}

/// @func btAngularLimit_isLimit(angularLimit)
///
/// @desc
/// Checks if the angular limit is active.
///
/// @param {Pointer} angularLimit
///     The pointer to the btAngularLimit instance.
///
/// @return {Bool} Returns true if the angular limit is active, otherwise false.
YYEXPORT void btAngularLimit_isLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto angularLimit = (btAngularLimit*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = angularLimit->isLimit();
}

/// @func btAngularLimit_fit(angularLimit, angle)
///
/// @desc
/// Fits the given angle within the angular limit.
///
/// @param {Pointer} angularLimit
///     The pointer to the btAngularLimit instance.
/// @param {Real} angle
///     The angle to fit within the limit.
///
/// @return {Real} Returns the fitted angle within the limit.
YYEXPORT void btAngularLimit_fit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto angularLimit = (btAngularLimit*)YYGetPtr(arg, 0);
	btScalar angle = YYGetReal(arg, 1);
	angularLimit->fit(angle);
	result.kind = VALUE_REAL;
	result.val = angle;
}

/// @func btAngularLimit_getError(angularLimit)
///
/// @desc
/// Gets the error of the angular limit.
///
/// @param {Pointer} angularLimit
///     The pointer to the btAngularLimit instance.
///
/// @return {Real} The error of the angular limit.
YYEXPORT void btAngularLimit_getError(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto angularLimit = (btAngularLimit*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = angularLimit->getError();
}

/// @func btAngularLimit_getLow(angularLimit)
///
/// @desc
/// Gets the lower limit of the angular limit.
///
/// @param {Pointer} angularLimit
///     The pointer to the btAngularLimit instance.
///
/// @return {Real} The lower limit of the angular limit.
YYEXPORT void btAngularLimit_getLow(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto angularLimit = (btAngularLimit*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = angularLimit->getLow();
}

/// @func btAngularLimit_getHigh(angularLimit)
///
/// @desc
/// Gets the upper limit of the angular limit.
///
/// @param {Pointer} angularLimit
///     The pointer to the btAngularLimit instance.
///
/// @return {Real} The upper limit of the angular limit.
YYEXPORT void btAngularLimit_getHigh(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto angularLimit = (btAngularLimit*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = angularLimit->getHigh();
}
