#include <GMBullet.hpp>

/// @func btConeTwistConstraint_create1(rigidBodyA, rigidBodyAFrame)
///
/// @desc
/// Creates a cone twist constraint between a single rigid body and a specified
/// frame of reference.
///
/// @param {Pointer} rigidBodyA
///     The pointer to the first rigid body.
/// @param {Pointer} rigidBodyAFrame
///     The pointer to the frame of reference for the first rigid body.
///
/// @return {Pointer} Returns a pointer to the created cone twist constraint.
YYEXPORT void btConeTwistConstraint_create1(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto& rigidBodyA =  *(btRigidBody*)YYGetPtr(arg, 0);
	auto& rigidBodyAFrame =  *(btTransform*)YYGetPtr(arg, 1);
	result.kind = VALUE_PTR;
	result.ptr = new btConeTwistConstraint(rigidBodyA, rigidBodyAFrame);
}

/// @func btConeTwistConstraint_create2(rigidBodyA, rigidBodyB, rigidBodyAFrame, rigidBodyBFrame)
///
/// @desc
/// Creates a cone twist constraint between two rigid bodies based on specified
/// frames of reference.
///
/// @param {Pointer} rigidBodyA
///     The pointer to the first rigid body.
/// @param {Pointer} rigidBodyB
///     The pointer to the second rigid body.
/// @param {Pointer} rigidBodyAFrame
///     The pointer to the frame of reference for the first rigid body.
/// @param {Pointer} rigidBodyBFrame
///     The pointer to the frame of reference for the second rigid body.
///
/// @return {Pointer} Returns a pointer to the created cone twist constraint.
YYEXPORT void btConeTwistConstraint_create2(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto& rigidBodyA =  *(btRigidBody*)YYGetPtr(arg, 0);
	auto& rigidBodyB =  *(btRigidBody*)YYGetPtr(arg, 1);
	auto& rigidBodyAFrame =  *(btTransform*)YYGetPtr(arg, 2);
	auto& rigidBodyBFrame =  *(btTransform*)YYGetPtr(arg, 3);
	result.kind = VALUE_PTR;
	result.ptr = new btConeTwistConstraint(
		rigidBodyA, rigidBodyB, rigidBodyAFrame, rigidBodyBFrame);
}

/// @func btConeTwistConstraint_destroy(coneTwistConstraint)
///
/// @desc
/// Destroys the cone twist constraint object.
///
/// @param {Pointer} coneTwistConstraint
///     The pointer to the cone twist constraint object to be destroyed.
YYEXPORT void btConeTwistConstraint_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btConeTwistConstraint*)YYGetPtr(arg, 0);
}

// Note: Skipped btConeTwistConstraint::buildJacobian
// Note: Skipped btConeTwistConstraint::getInfo1
// Note: Skipped btConeTwistConstraint::getInfo1NonVirtual
// Note: Skipped btConeTwistConstraint::getInfo2
// Note: Skipped btConeTwistConstraint::getInfo2NonVirtual
// Note: Skipped btConeTwistConstraint::solveConstraintObsolete

/// @func btConeTwistConstraint_updateRHS(coneTwistConstraint, timeStep)
///
/// @desc
/// Updates the right-hand side of the cone twist constraint based on the given
/// time step.
///
/// @param {Pointer} coneTwistConstraint
///     The pointer to the cone twist constraint.
/// @param {Real} timeStep
///     The time step used to update the right-hand side.
YYEXPORT void btConeTwistConstraint_updateRHS(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto coneTwistConstraint = (btConeTwistConstraint*)YYGetPtr(arg, 0);
	double timeStep = YYGetReal(arg, 1);
	coneTwistConstraint->updateRHS(timeStep);
}

/// @func btConeTwistConstraint_getRigidBodyA(coneTwistConstraint)
///
/// @desc
/// Gets the pointer to the first rigid body connected to the cone twist
/// constraint.
///
/// @param {Pointer} coneTwistConstraint
///     The pointer to the cone twist constraint.
///
/// @return {Pointer} Returns a pointer to the first rigid body connected to the
/// constraint.
YYEXPORT void btConeTwistConstraint_getRigidBodyA(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto coneTwistConstraint = (btConeTwistConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = const_cast<btRigidBody*>(&coneTwistConstraint->getRigidBodyA());
}

/// @func btConeTwistConstraint_getRigidBodyB(coneTwistConstraint)
///
/// @desc
/// Gets the pointer to the second rigid body connected to the cone twist
/// constraint.
///
/// @param {Pointer} coneTwistConstraint
///     The pointer to the cone twist constraint.
///
/// @return {Pointer} Returns a pointer to the second rigid body connected to
/// the constraint.
YYEXPORT void btConeTwistConstraint_getRigidBodyB(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto coneTwistConstraint = (btConeTwistConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = const_cast<btRigidBody*>(&coneTwistConstraint->getRigidBodyB());
}

/// @func btConeTwistConstraint_setAngularOnly(coneTwistConstraint, angularOnly)
///
/// @desc
/// Sets whether the constraint is angular only or not.
///
/// @param {Pointer} coneTwistConstraint
///     The pointer to the cone twist constraint.
/// @param {Bool} angularOnly
///     Set to true if the constraint is angular only, false otherwise.
YYEXPORT void btConeTwistConstraint_setAngularOnly(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto coneTwistConstraint = (btConeTwistConstraint*)YYGetPtr(arg, 0);
	bool angularOnly = YYGetBool(arg, 1);
	coneTwistConstraint->setAngularOnly(angularOnly);
}

/// @func btConeTwistConstraint_getAngularOnly(coneTwistConstraint)
///
/// @desc
/// Gets whether the constraint is angular only or not.
///
/// @param {Pointer} coneTwistConstraint
///     The pointer to the cone twist constraint.
///
/// @return {Bool} Returns true if the constraint is angular only, false
/// otherwise.
YYEXPORT void btConeTwistConstraint_getAngularOnly(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto coneTwistConstraint = (btConeTwistConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = coneTwistConstraint->getAngularOnly();
}

/// @func btConeTwistConstraint_setLimitIndex(coneTwistConstraint, limitIndex, limitValue)
///
/// @desc
/// Sets the limit value for a specific limit of the cone twist constraint.
///
/// @param {Pointer} coneTwistConstraint
///     The pointer to the cone twist constraint.
/// @param {Real} limitIndex
///     The index of the limit to set.
/// @param {Real} limitValue
///     The value of the limit to set.
YYEXPORT void btConeTwistConstraint_setLimitIndex(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto coneTwistConstraint = (btConeTwistConstraint*)YYGetPtr(arg, 0);
	int limitIndex = YYGetInt32(arg, 1);
	double limitValue = YYGetInt32(arg, 2);
	coneTwistConstraint->setLimit(limitIndex, limitValue);
}

/// @func btConeTwistConstraint_getLimitIndex(coneTwistConstraint, limitIndex)
///
/// @desc
/// Gets the limit value for a specific limit index of the cone twist constraint.
///
/// @param {Pointer} coneTwistConstraint
///     The pointer to the cone twist constraint.
/// @param {Real} limitIndex
///     The index of the limit to get.
///
/// @return {Real} Returns the value of the specified limit.
YYEXPORT void btConeTwistConstraint_getLimitIndex(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto coneTwistConstraint = (btConeTwistConstraint*)YYGetPtr(arg, 0);
	int limitIndex = YYGetInt32(arg, 1);
	result.kind = VALUE_REAL;
	result.val = coneTwistConstraint->getLimit(limitIndex);
}

/// @func btConeTwistConstraint_setLimit(coneTwistConstraint, swingSpan1, swingSpan2, twistSpan[, softness[, biasFactor[, relaxationFactor]]])
///
/// @desc
/// Sets the limits for the cone twist constraint.
///
/// @param {Pointer} coneTwistConstraint
///     The pointer to the cone twist constraint.
/// @param {Real} swingSpan1
///     The maximum angle in radians for the first swing limit.
/// @param {Real} swingSpan2
///     The maximum angle in radians for the second swing limit.
/// @param {Real} twistSpan
///     The maximum angle in radians for the twist limit.
/// @param {Real} [softness]
///     The softness factor for the limit. Default is 1.0.
/// @param {Real} [biasFactor]
///     The bias factor for the limit. Default is 0.3.
/// @param {Real} [relaxationFactor]
///     The relaxation factor for the limit. Default is 1.0.
YYEXPORT void btConeTwistConstraint_setLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto coneTwistConstraint = (btConeTwistConstraint*)YYGetPtr(arg, 0);
	double swingSpan1 = YYGetReal(arg, 1);
	double swingSpan2 = YYGetReal(arg, 2);
	double twistSpan = YYGetReal(arg, 3);
	double softness = (argc > 4) ? YYGetReal(arg, 4) : 1.0;
	double biasFactor = (argc > 5) ? YYGetReal(arg, 5) : 0.3;
	double relaxationFactor = (argc > 6) ? YYGetReal(arg, 6) : 1.0;
	coneTwistConstraint->setLimit(
		swingSpan1, swingSpan2, twistSpan, softness, biasFactor, relaxationFactor);
}

/// @func btConeTwistConstraint_getAFrame(coneTwistConstraint)
///
/// @desc
/// Gets the frame of reference for the constraint's rigid body A in the
/// constraint space.
///
/// @param {Pointer} coneTwistConstraint
///     The pointer to the cone twist constraint.
///
/// @return {Pointer} Returns a pointer to the frame of reference for rigid body
/// A in the constraint space.
YYEXPORT void btConeTwistConstraint_getAFrame(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto coneTwistConstraint = (btConeTwistConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = const_cast<btTransform*>(&coneTwistConstraint->getAFrame());
}

/// @func btConeTwistConstraint_getBFrame(coneTwistConstraint)
///
/// @desc
/// Gets the frame of reference for the constraint's rigid body B in the
/// constraint space.
///
/// @param {Pointer} coneTwistConstraint
///     The pointer to the cone twist constraint.
///
/// @return {Pointer} Returns a pointer to the frame of reference for rigid body
/// B in the constraint space.
YYEXPORT void btConeTwistConstraint_getBFrame(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto coneTwistConstraint = (btConeTwistConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = const_cast<btTransform*>(&coneTwistConstraint->getBFrame());
}

/// @func btConeTwistConstraint_getSolveTwistLimit(coneTwistConstraint)
///
/// @desc
/// Gets the state indicating if the twist limit is being solved.
///
/// @param {Pointer} coneTwistConstraint
///     The pointer to the cone twist constraint.
///
/// @return {Real} Returns a value indicating whether the twist limit is being
/// solved. Non-zero (true) if being solved, zero (false) otherwise.
YYEXPORT void btConeTwistConstraint_getSolveTwistLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto coneTwistConstraint = (btConeTwistConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.val = coneTwistConstraint->getSolveTwistLimit();
}

/// @func btConeTwistConstraint_getSolveSwingLimit(coneTwistConstraint)
///
/// @desc
/// Gets the state indicating if the swing limits are being solved.
///
/// @param {Pointer} coneTwistConstraint
///     The pointer to the cone twist constraint.
///
/// @return {Real} Returns a value indicating whether the swing limits are being
/// solved. Non-zero (true) if being solved, zero (false) otherwise.
YYEXPORT void btConeTwistConstraint_getSolveSwingLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto coneTwistConstraint = (btConeTwistConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.val = coneTwistConstraint->getSolveSwingLimit();
}

/// @func btConeTwistConstraint_getTwistLimitSign(coneTwistConstraint)
///
/// @desc
/// Gets the sign of the twist limit (1.0 if positive, -1.0 if negative, 0.0 if
/// no twist limit).
///
/// @param {Pointer} coneTwistConstraint
///     The pointer to the cone twist constraint.
///
/// @return {Real} Returns the sign of the twist limit. 1.0 if positive, -1.0 if
/// negative, 0.0 if no twist limit.
YYEXPORT void btConeTwistConstraint_getTwistLimitSign(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto coneTwistConstraint = (btConeTwistConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = coneTwistConstraint->getTwistLimitSign();
}

// Note: Skipped btConeTwistConstraint::calcAngleInfo
// Note: Skipped btConeTwistConstraint::calcAngleInfo2

/// @func btConeTwistConstraint_getSwingSpan1(coneTwistConstraint)
///
/// @desc
/// Gets the maximum angle in radians for the first perpendicular axis (swing
/// span).
///
/// @param {Pointer} coneTwistConstraint
///     The pointer to the cone twist constraint.
///
/// @return {Real} Returns the maximum angle in radians for the first
/// perpendicular axis (swing span).
YYEXPORT void btConeTwistConstraint_getSwingSpan1(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto coneTwistConstraint = (btConeTwistConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = coneTwistConstraint->getSwingSpan1();
}

/// @func btConeTwistConstraint_getSwingSpan2(coneTwistConstraint)
///
/// @desc
/// Gets the maximum angle in radians for the second perpendicular axis (swing
/// span).
///
/// @param {Pointer} coneTwistConstraint
///     The pointer to the cone twist constraint.
///
/// @return {Real} Returns the maximum angle in radians for the second
/// perpendicular axis (swing span).
YYEXPORT void btConeTwistConstraint_getSwingSpan2(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto coneTwistConstraint = (btConeTwistConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = coneTwistConstraint->getSwingSpan2();
}

/// @func btConeTwistConstraint_getTwistSpan(coneTwistConstraint)
///
/// @desc
/// Gets the maximum angle in radians for the twist around the axis.
///
/// @param {Pointer} coneTwistConstraint
///     The pointer to the cone twist constraint.
///
/// @return {Real} Returns the maximum angle in radians for the twist around the
/// axis.
YYEXPORT void btConeTwistConstraint_getTwistSpan(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto coneTwistConstraint = (btConeTwistConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = coneTwistConstraint->getTwistSpan();
}

/// @func btConeTwistConstraint_getLimitSoftness(coneTwistConstraint)
///
/// @desc
/// Gets the softness for each limit.
///
/// @param {Pointer} coneTwistConstraint
///     The pointer to the cone twist constraint.
///
/// @return {Real} Returns the softness for each limit.
YYEXPORT void btConeTwistConstraint_getLimitSoftness(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto coneTwistConstraint = (btConeTwistConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = coneTwistConstraint->getLimitSoftness();
}

/// @func btConeTwistConstraint_getBiasFactor(coneTwistConstraint)
///
/// @desc
/// Gets the bias factor (between 0 and 1) for limiting the error correction
/// during constraint solving.
///
/// @param {Pointer} coneTwistConstraint
///     The pointer to the cone twist constraint.
///
/// @return {Real} Returns the bias factor for limiting the error correction
/// during constraint solving.
YYEXPORT void btConeTwistConstraint_getBiasFactor(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto coneTwistConstraint = (btConeTwistConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = coneTwistConstraint->getBiasFactor();
}

/// @func btConeTwistConstraint_getRelaxationFactor(coneTwistConstraint)
///
/// @desc
/// Gets the relaxation factor (controls the amount of relaxation applied to the
/// constraint) for limiting.
///
/// @param {Pointer} coneTwistConstraint
///     The pointer to the cone twist constraint.
///
/// @return {Real} Returns the relaxation factor for limiting.
YYEXPORT void btConeTwistConstraint_getRelaxationFactor(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto coneTwistConstraint = (btConeTwistConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = coneTwistConstraint->getRelaxationFactor();
}

/// @func btConeTwistConstraint_getTwistAngle(coneTwistConstraint)
///
/// @desc
/// Gets the twist angle in radians around the swing axis.
///
/// @param {Pointer} coneTwistConstraint
///     The pointer to the cone twist constraint.
///
/// @return {Real} Returns the twist angle in radians around the swing axis.
YYEXPORT void btConeTwistConstraint_getTwistAngle(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto coneTwistConstraint = (btConeTwistConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = coneTwistConstraint->getTwistAngle();
}

/// @func btConeTwistConstraint_isPastSwingLimit(coneTwistConstraint)
///
/// @desc
/// Checks if the constraint is past its swing limit.
///
/// @param {Pointer} coneTwistConstraint
///     The pointer to the cone twist constraint.
///
/// @return {Bool} Returns true if the constraint is past its swing limit, false
/// otherwise.
YYEXPORT void btConeTwistConstraint_isPastSwingLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto coneTwistConstraint = (btConeTwistConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = coneTwistConstraint->isPastSwingLimit();
}

/// @func btConeTwistConstraint_getDamping(coneTwistConstraint)
///
/// @desc
/// Gets the damping value used to damp the swinging motion of the constraint.
///
/// @param {Pointer} coneTwistConstraint
///     The pointer to the cone twist constraint.
///
/// @return {Real} Returns the damping value used to damp the swinging motion of
/// the constraint.
YYEXPORT void btConeTwistConstraint_getDamping(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto coneTwistConstraint = (btConeTwistConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = coneTwistConstraint->getDamping();
}

/// @func btConeTwistConstraint_setDamping(coneTwistConstraint, damping)
///
/// @desc
/// Sets the damping value used to damp the swinging motion of the constraint.
///
/// @param {Pointer} coneTwistConstraint
///     The pointer to the cone twist constraint.
/// @param {Real} damping
///     The damping value to set. Should be a non-negative real number.
YYEXPORT void btConeTwistConstraint_setDamping(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto coneTwistConstraint = (btConeTwistConstraint*)YYGetPtr(arg, 0);
	double damping = YYGetReal(arg, 1);
	coneTwistConstraint->setDamping(damping);
}

/// @func btConeTwistConstraint_enableMotor(coneTwistConstraint, enable)
///
/// @desc
/// Enables or disables the motor on the cone twist constraint.
///
/// @param {Pointer} coneTwistConstraint
///     The pointer to the cone twist constraint.
/// @param {Bool} enable
///     Set to true to enable the motor, false to disable.
YYEXPORT void btConeTwistConstraint_enableMotor(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto coneTwistConstraint = (btConeTwistConstraint*)YYGetPtr(arg, 0);
	bool enable = YYGetBool(arg, 1);
	coneTwistConstraint->enableMotor(enable);
}

/// @func btConeTwistConstraint_isMotorEnabled(coneTwistConstraint)
///
/// @desc
/// Checks if the motor on the cone twist constraint is enabled.
///
/// @param {Pointer} coneTwistConstraint
///     The pointer to the cone twist constraint.
///
/// @return {Bool} Returns true if the motor is enabled, false otherwise.
YYEXPORT void btConeTwistConstraint_isMotorEnabled(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto coneTwistConstraint = (btConeTwistConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = coneTwistConstraint->isMotorEnabled();
}

/// @func btConeTwistConstraint_getMaxMotorImpulse(coneTwistConstraint)
///
/// @desc
/// Gets the maximum motor impulse applied by the cone twist constraint.
///
/// @param {Pointer} coneTwistConstraint
///     The pointer to the cone twist constraint.
///
/// @return {Real} Returns the maximum motor impulse.
YYEXPORT void btConeTwistConstraint_getMaxMotorImpulse(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto coneTwistConstraint = (btConeTwistConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = coneTwistConstraint->getMaxMotorImpulse();
}

/// @func btConeTwistConstraint_isMaxMotorImpulseNormalized(coneTwistConstraint)
///
/// @desc
/// Checks if the maximum motor impulse is normalized by the cone twist
/// constraint.
///
/// @param {Pointer} coneTwistConstraint
///     The pointer to the cone twist constraint.
///
/// @return {Bool} Returns true if the maximum motor impulse is normalized,
/// false otherwise.
YYEXPORT void btConeTwistConstraint_isMaxMotorImpulseNormalized(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto coneTwistConstraint = (btConeTwistConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = coneTwistConstraint->isMaxMotorImpulseNormalized();
}

/// @func btConeTwistConstraint_setMaxMotorImpulse(coneTwistConstraint, maxMotorImpulse)
///
/// @desc
/// Sets the maximum motor impulse applied by the cone twist constraint.
///
/// @param {Pointer} coneTwistConstraint
///     The pointer to the cone twist constraint.
/// @param {Real} maxMotorImpulse
///     The maximum motor impulse to set.
YYEXPORT void btConeTwistConstraint_setMaxMotorImpulse(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto coneTwistConstraint = (btConeTwistConstraint*)YYGetPtr(arg, 0);
	double maxMotorImpulse = YYGetReal(arg, 1);
	coneTwistConstraint->setMaxMotorImpulse(maxMotorImpulse);
}

/// @func btConeTwistConstraint_setMaxMotorImpulseNormalized(coneTwistConstraint, maxMotorImpulse)
///
/// @desc
/// Sets the maximum motor impulse applied by the cone twist constraint
/// (normalized).
///
/// @param {Pointer} coneTwistConstraint
///     The pointer to the cone twist constraint.
/// @param {Real} maxMotorImpulse
///     The maximum motor impulse to set (normalized).
YYEXPORT void btConeTwistConstraint_setMaxMotorImpulseNormalized(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto coneTwistConstraint = (btConeTwistConstraint*)YYGetPtr(arg, 0);
	double maxMotorImpulse = YYGetReal(arg, 1);
	coneTwistConstraint->setMaxMotorImpulseNormalized(maxMotorImpulse);
}

/// @func btConeTwistConstraint_getFixThresh(coneTwistConstraint)
///
/// @desc
/// Gets the fix threshold for the cone twist constraint.
///
/// @param {Pointer} coneTwistConstraint
///     The pointer to the cone twist constraint.
///
/// @return {Real} Returns the fix threshold.
YYEXPORT void btConeTwistConstraint_getFixThresh(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto coneTwistConstraint = (btConeTwistConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = coneTwistConstraint->getFixThresh();
}

/// @func btConeTwistConstraint_setFixThresh(coneTwistConstraint, fixThresh)
///
/// @desc
/// Sets the fix threshold for the cone twist constraint.
///
/// @param {Pointer} coneTwistConstraint
///     The pointer to the cone twist constraint.
/// @param {Real} fixThresh
///     The fix threshold to set.
YYEXPORT void btConeTwistConstraint_setFixThresh(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto coneTwistConstraint = (btConeTwistConstraint*)YYGetPtr(arg, 0);
	double fixThresh = YYGetReal(arg, 1);
	coneTwistConstraint->setFixThresh(fixThresh);
}

/// @func btConeTwistConstraint_setMotorTarget(coneTwistConstraint, quaternion)
///
/// @desc
/// Sets the motor target for the cone twist constraint.
///
/// @param {Pointer} coneTwistConstraint
///     The pointer to the cone twist constraint.
/// @param {Pointer} quaternion
///     The pointer to a quaternion specifying the motor target.
YYEXPORT void btConeTwistConstraint_setMotorTarget(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto coneTwistConstraint = (btConeTwistConstraint*)YYGetPtr(arg, 0);
	auto& quaternion =  *(btQuaternion*)YYGetPtr(arg, 1);
	coneTwistConstraint->setMotorTarget(quaternion);
}

/// @func btConeTwistConstraint_getMotorTarget(coneTwistConstraint, outQuaternion)
///
/// @desc
/// Gets the motor target for the cone twist constraint.
///
/// @param {Pointer} coneTwistConstraint
///     The pointer to the cone twist constraint.
/// @param {Pointer} outQuaternion
///     The pointer to store the motor target quaternion.
YYEXPORT void btConeTwistConstraint_getMotorTarget(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto coneTwistConstraint = (btConeTwistConstraint*)YYGetPtr(arg, 0);
	auto outQuaternion = (btQuaternion*)YYGetPtr(arg, 1);
	CopyQuaternion(coneTwistConstraint->getMotorTarget(), outQuaternion);
}

/// @func btConeTwistConstraint_setMotorTargetInConstraintSpace(coneTwistConstraint, quaternion)
///
/// @desc
/// Sets the motor target in constraint space for the cone twist constraint.
///
/// @param {Pointer} coneTwistConstraint
///     The pointer to the cone twist constraint.
/// @param {Pointer} quaternion
///     The pointer to a quaternion specifying the motor target in constraint
///     space.
YYEXPORT void btConeTwistConstraint_setMotorTargetInConstraintSpace(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto coneTwistConstraint = (btConeTwistConstraint*)YYGetPtr(arg, 0);
	auto& quaternion =  *(btQuaternion*)YYGetPtr(arg, 1);
	coneTwistConstraint->setMotorTargetInConstraintSpace(quaternion);
}

/// @func btConeTwistConstraint_GetPointForAngle(coneTwistConstraint, fAngleInRadians, fLength, outVector3)
///
/// @desc
/// Computes a point in the constraint space for a given angle and length.
///
/// @param {Pointer} coneTwistConstraint
///     The pointer to the cone twist constraint.
/// @param {Real} fAngleInRadians
///     The angle in radians.
/// @param {Real} fLength
///     The length.
/// @param {Pointer} outVector3
///     The pointer to store the computed point as a btVector3.
YYEXPORT void btConeTwistConstraint_GetPointForAngle(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto coneTwistConstraint = (btConeTwistConstraint*)YYGetPtr(arg, 0);
	double fAngleInRadians = YYGetReal(arg, 1);
	double fLength = YYGetReal(arg, 2);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 3);
	CopyVector3(coneTwistConstraint->GetPointForAngle(fAngleInRadians, fLength),
		outVector3);
}

// Note: Skipped btConeTwistConstraint::setParam

/// @func btConeTwistConstraint_setFrames(coneTwistConstraint, frameA, frameB)
///
/// @desc
/// Sets the frames for the cone twist constraint.
///
/// @param {Pointer} coneTwistConstraint
///     The pointer to the cone twist constraint.
/// @param {Pointer} frameA
///     The pointer to the first frame as a btTransform.
/// @param {Pointer} frameB
///     The pointer to the second frame as a btTransform.
YYEXPORT void btConeTwistConstraint_setFrames(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto coneTwistConstraint = (btConeTwistConstraint*)YYGetPtr(arg, 0);
	auto& frameA =  *(btTransform*)YYGetPtr(arg, 1);
	auto& frameB =  *(btTransform*)YYGetPtr(arg, 2);
	coneTwistConstraint->setFrames(frameA, frameB);
}

/// @func btConeTwistConstraint_getFrameOffsetA(coneTwistConstraint)
///
/// @desc
/// Gets the offset frame A for the cone twist constraint.
///
/// @param {Pointer} coneTwistConstraint
///     The pointer to the cone twist constraint.
///
/// @return {Pointer} The pointer to the frame offset A as a btTransform.
YYEXPORT void btConeTwistConstraint_getFrameOffsetA(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto coneTwistConstraint = (btConeTwistConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = const_cast<btTransform*>(&coneTwistConstraint->getFrameOffsetA());
}

/// @func btConeTwistConstraint_getFrameOffsetB(coneTwistConstraint)
///
/// @desc
/// Gets the offset frame B for the cone twist constraint.
///
/// @param {Pointer} coneTwistConstraint
///     The pointer to the cone twist constraint.
///
/// @return {Pointer} The pointer to the frame offset B as a btTransform.
YYEXPORT void btConeTwistConstraint_getFrameOffsetB(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto coneTwistConstraint = (btConeTwistConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = const_cast<btTransform*>(&coneTwistConstraint->getFrameOffsetB());
}

// Note: Skipped btConeTwistConstraint::getParam

/// @func btConeTwistConstraint_getFlags(coneTwistConstraint)
///
/// @desc
/// Gets the constraint flags for the cone twist constraint.
///
/// @param {Pointer} coneTwistConstraint
///     The pointer to the cone twist constraint.
///
/// @return {Real} The constraint flags as an integer value.
YYEXPORT void btConeTwistConstraint_getFlags(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto coneTwistConstraint = (btConeTwistConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.val = coneTwistConstraint->getFlags();
}

// Note: Skipped btConeTwistConstraint::calculateSerializeBufferSize
// Note: Skipped btConeTwistConstraint::serialize

////////////////////////////////////////////////////////////////////////////////
//
// Note: Skipped btConeTwistConstraintDoubleData
//

////////////////////////////////////////////////////////////////////////////////
//
// Note: Skipped btConeTwistConstraintData
//
