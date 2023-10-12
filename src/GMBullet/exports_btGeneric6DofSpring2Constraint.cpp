#include <GMBullet.hpp>

////////////////////////////////////////////////////////////////////////////////
//
// btRotationalLimitMotor2
//

/// @func btRotationalLimitMotor2_setLoLimit(rotationalLimitMotor2, loLimit)
///
/// @desc
/// Sets the lower limit for the rotational motor.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
/// @param {Real} loLimit
///     The lower limit for the rotational motor.
YYEXPORT void btRotationalLimitMotor2_setLoLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	double loLimit = YYGetReal(arg, 1);
	rotationalLimitMotor2->m_loLimit = loLimit;
}

/// @func btRotationalLimitMotor2_getLoLimit(rotationalLimitMotor2)
///
/// @desc
/// Gets the lower limit for the rotational motor.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
///
/// @return {Real} The lower limit for the rotational motor.
YYEXPORT void btRotationalLimitMotor2_getLoLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = rotationalLimitMotor2->m_loLimit;
}

/// @func btRotationalLimitMotor2_setHiLimit(rotationalLimitMotor2, hiLimit)
///
/// @desc
/// Sets the upper limit for the rotational motor.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
/// @param {Real} hiLimit
///     The upper limit for the rotational motor.
YYEXPORT void btRotationalLimitMotor2_setHiLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	double hiLimit = YYGetReal(arg, 1);
	rotationalLimitMotor2->m_hiLimit = hiLimit;
}

/// @func btRotationalLimitMotor2_getHiLimit(rotationalLimitMotor2)
///
/// @desc
/// Gets the upper limit for the rotational motor.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
///
/// @return {Real} The upper limit for the rotational motor.
YYEXPORT void btRotationalLimitMotor2_getHiLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = rotationalLimitMotor2->m_hiLimit;
}

/// @func btRotationalLimitMotor2_setBounce(rotationalLimitMotor2, bounce)
///
/// @desc
/// Sets the bounce factor for the rotational motor.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
/// @param {Real} bounce
///     The bounce factor for the rotational motor.
YYEXPORT void btRotationalLimitMotor2_setBounce(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	double bounce = YYGetReal(arg, 1);
	rotationalLimitMotor2->m_bounce = bounce;
}

/// @func btRotationalLimitMotor2_getBounce(rotationalLimitMotor2)
///
/// @desc
/// Gets the bounce factor for the rotational motor.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
///
/// @return {Real} The bounce factor for the rotational motor.
YYEXPORT void btRotationalLimitMotor2_getBounce(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = rotationalLimitMotor2->m_bounce;
}

/// @func btRotationalLimitMotor2_setStopERP(rotationalLimitMotor2, stopERP)
///
/// @desc
/// Sets the stop ERP (Error Reduction Parameter) for the rotational motor.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
/// @param {Real} stopERP
///     The stop ERP for the rotational motor.
YYEXPORT void btRotationalLimitMotor2_setStopERP(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	double stopERP = YYGetReal(arg, 1);
	rotationalLimitMotor2->m_stopERP = stopERP;
}

/// @func btRotationalLimitMotor2_getStopERP(rotationalLimitMotor2)
///
/// @desc
/// Gets the stop ERP (Error Reduction Parameter) for the rotational motor.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
///
/// @return {Real} The stop ERP for the rotational motor.
YYEXPORT void btRotationalLimitMotor2_getStopERP(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = rotationalLimitMotor2->m_stopERP;
}

/// @func btRotationalLimitMotor2_setStopCFM(rotationalLimitMotor2, stopCFM)
///
/// @desc
/// Sets the stop CFM (Constraint Force Mixing) for the rotational motor.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
/// @param {Real} stopCFM
///     The stop CFM for the rotational motor.
YYEXPORT void btRotationalLimitMotor2_setStopCFM(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	double stopCFM = YYGetReal(arg, 1);
	rotationalLimitMotor2->m_stopCFM = stopCFM;
}

/// @func btRotationalLimitMotor2_getStopCFM(rotationalLimitMotor2)
///
/// @desc
/// Gets the stop CFM (Constraint Force Mixing) for the rotational motor.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
///
/// @return {Real} The stop CFM for the rotational motor.
YYEXPORT void btRotationalLimitMotor2_getStopCFM(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = rotationalLimitMotor2->m_stopCFM;
}

/// @func btRotationalLimitMotor2_setMotorERP(rotationalLimitMotor2, motorERP)
///
/// @desc
/// Sets the motor ERP (Error Reduction Parameter) for the rotational motor.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
/// @param {Real} motorERP
///     The motor ERP for the rotational motor.
YYEXPORT void btRotationalLimitMotor2_setMotorERP(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	double motorERP = YYGetReal(arg, 1);
	rotationalLimitMotor2->m_motorERP = motorERP;
}

/// @func btRotationalLimitMotor2_getMotorERP(rotationalLimitMotor2)
///
/// @desc
/// Gets the motor ERP (Error Reduction Parameter) for the rotational motor.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
///
/// @return {Real} The motor ERP for the rotational motor.
YYEXPORT void btRotationalLimitMotor2_getMotorERP(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = rotationalLimitMotor2->m_motorERP;
}

/// @func btRotationalLimitMotor2_setMotorCFM(rotationalLimitMotor2, motorCFM)
///
/// @desc
/// Sets the motor CFM (Constraint Force Mixing) for the rotational motor.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
/// @param {Real} motorCFM
///     The motor CFM for the rotational motor.
YYEXPORT void btRotationalLimitMotor2_setMotorCFM(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	double motorCFM = YYGetReal(arg, 1);
	rotationalLimitMotor2->m_motorCFM = motorCFM;
}

/// @func btRotationalLimitMotor2_getMotorCFM(rotationalLimitMotor2)
///
/// @desc
/// Gets the motor CFM (Constraint Force Mixing) for the rotational motor.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
///
/// @return {Real} The motor CFM for the rotational motor.
YYEXPORT void btRotationalLimitMotor2_getMotorCFM(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = rotationalLimitMotor2->m_motorCFM;
}

/// @func btRotationalLimitMotor2_setEnableMotor(rotationalLimitMotor2, enableMotor)
///
/// @desc
/// Sets whether the motor for the rotational limit is enabled or not.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
/// @param {Bool} enableMotor
///     A boolean value indicating whether the motor is enabled (true) or
///     disabled (false).
YYEXPORT void btRotationalLimitMotor2_setEnableMotor(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	bool enableMotor = YYGetBool(arg, 1);
	rotationalLimitMotor2->m_enableMotor = enableMotor;
}

/// @func btRotationalLimitMotor2_getEnableMotor(rotationalLimitMotor2)
///
/// @desc
/// Gets whether the motor for the rotational limit is enabled or not.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
///
/// @return {Bool} A boolean value indicating whether the motor is enabled (true)
/// or disabled (false).
YYEXPORT void btRotationalLimitMotor2_getEnableMotor(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = rotationalLimitMotor2->m_enableMotor;
}

/// @func btRotationalLimitMotor2_setTargetVelocity(rotationalLimitMotor2, targetVelocity)
///
/// @desc
/// Sets the target velocity for the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
/// @param {Real} targetVelocity
///     The desired target velocity for the motor.
YYEXPORT void btRotationalLimitMotor2_setTargetVelocity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	double targetVelocity = YYGetReal(arg, 1);
	rotationalLimitMotor2->m_targetVelocity = targetVelocity;
}

/// @func btRotationalLimitMotor2_getTargetVelocity(rotationalLimitMotor2)
///
/// @desc
/// Gets the target velocity for the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
///
/// @return {Real} The target velocity set for the motor.
YYEXPORT void btRotationalLimitMotor2_getTargetVelocity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = rotationalLimitMotor2->m_targetVelocity;
}

/// @func btRotationalLimitMotor2_setMaxMotorForce(rotationalLimitMotor2, maxMotorForce)
///
/// @desc
/// Sets the maximum motor force for the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
/// @param {Real} maxMotorForce
///     The maximum motor force for the rotational limit motor.
YYEXPORT void btRotationalLimitMotor2_setMaxMotorForce(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	double maxMotorForce = YYGetReal(arg, 1);
	rotationalLimitMotor2->m_maxMotorForce = maxMotorForce;
}

/// @func btRotationalLimitMotor2_getMaxMotorForce(rotationalLimitMotor2)
///
/// @desc
/// Gets the maximum motor force for the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
///
/// @return {Real} The maximum motor force for the rotational limit motor.
YYEXPORT void btRotationalLimitMotor2_getMaxMotorForce(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = rotationalLimitMotor2->m_maxMotorForce;
}

/// @func btRotationalLimitMotor2_setServoMotor(rotationalLimitMotor2, servoMotor)
///
/// @desc
/// Sets whether the rotational limit motor is a servo motor or not.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
/// @param {Bool} servoMotor
///     A boolean indicating whether the rotational limit motor is a servo motor
///     (true) or not (false).
YYEXPORT void btRotationalLimitMotor2_setServoMotor(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	bool servoMotor = YYGetBool(arg, 1);
	rotationalLimitMotor2->m_servoMotor = servoMotor;
}

/// @func btRotationalLimitMotor2_getServoMotor(rotationalLimitMotor2)
///
/// @desc
/// Gets whether the rotational limit motor is a servo motor or not.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
///
/// @return {Bool} A boolean indicating whether the rotational limit motor is a
/// servo motor (true) or not (false).
YYEXPORT void btRotationalLimitMotor2_getServoMotor(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = rotationalLimitMotor2->m_servoMotor;
}

/// @func btRotationalLimitMotor2_setServoTarget(rotationalLimitMotor2, servoTarget)
///
/// @desc
/// Sets the target angle for the servo motor in the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
/// @param {Real} servoTarget
///     The target angle for the servo motor in radians.
YYEXPORT void btRotationalLimitMotor2_setServoTarget(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	double servoTarget = YYGetReal(arg, 1);
	rotationalLimitMotor2->m_servoTarget = servoTarget;
}

/// @func btRotationalLimitMotor2_getServoTarget(rotationalLimitMotor2)
///
/// @desc
/// Gets the target angle for the servo motor in the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
///
/// @return {Real} The target angle for the servo motor in radians.
YYEXPORT void btRotationalLimitMotor2_getServoTarget(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = rotationalLimitMotor2->m_servoTarget;
}

/// @func btRotationalLimitMotor2_setEnableSpring(rotationalLimitMotor2, enableSpring)
///
/// @desc
/// Sets whether the spring effect is enabled in the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
/// @param {Bool} enableSpring
///     Boolean indicating whether the spring effect is enabled (true) or
///     disabled (false).
YYEXPORT void btRotationalLimitMotor2_setEnableSpring(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	bool enableSpring = YYGetBool(arg, 1);
	rotationalLimitMotor2->m_enableSpring = enableSpring;
}

/// @func btRotationalLimitMotor2_getEnableSpring(rotationalLimitMotor2)
///
/// @desc
/// Gets whether the spring effect is enabled in the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
///
/// @return {Bool} True if the spring effect is enabled, false otherwise.
YYEXPORT void btRotationalLimitMotor2_getEnableSpring(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = rotationalLimitMotor2->m_enableSpring;
}

/// @func btRotationalLimitMotor2_setSpringStiffness(rotationalLimitMotor2, springStiffness)
///
/// @desc
/// Sets the spring stiffness of the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
/// @param {Real} springStiffness
///     The spring stiffness to set for the rotational limit motor.
YYEXPORT void btRotationalLimitMotor2_setSpringStiffness(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	double springStiffness = YYGetReal(arg, 1);
	rotationalLimitMotor2->m_springStiffness = springStiffness;
}

/// @func btRotationalLimitMotor2_getSpringStiffness(rotationalLimitMotor2)
///
/// @desc
/// Gets the spring stiffness of the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
///
/// @return {Real} The spring stiffness of the rotational limit motor.
YYEXPORT void btRotationalLimitMotor2_getSpringStiffness(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = rotationalLimitMotor2->m_springStiffness;
}

/// @func btRotationalLimitMotor2_setSpringStiffnessLimited(rotationalLimitMotor2, springStiffnessLimited)
///
/// @desc
/// Sets whether the spring stiffness of the rotational limit motor is limited.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
/// @param {Bool} springStiffnessLimited
///     A boolean indicating whether the spring stiffness is limited for the
///     rotational limit motor.
YYEXPORT void btRotationalLimitMotor2_setSpringStiffnessLimited(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	bool springStiffnessLimited = YYGetBool(arg, 1);
	rotationalLimitMotor2->m_springStiffnessLimited = springStiffnessLimited;
}

/// @func btRotationalLimitMotor2_getSpringStiffnessLimited(rotationalLimitMotor2)
///
/// @desc
/// Gets whether the spring stiffness of the rotational limit motor is limited.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
///
/// @return {Bool} A boolean indicating whether the spring stiffness is limited
/// for the rotational limit motor.
YYEXPORT void btRotationalLimitMotor2_getSpringStiffnessLimited(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = rotationalLimitMotor2->m_springStiffnessLimited;
}

/// @func btRotationalLimitMotor2_setSpringDamping(rotationalLimitMotor2, springDamping)
///
/// @desc
/// Sets the spring damping for the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
/// @param {Real} springDamping
///     The value to set as the spring damping for the rotational limit motor.
YYEXPORT void btRotationalLimitMotor2_setSpringDamping(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	double springDamping = YYGetReal(arg, 1);
	rotationalLimitMotor2->m_springDamping = springDamping;
}

/// @func btRotationalLimitMotor2_getSpringDamping(rotationalLimitMotor2)
///
/// @desc
/// Gets the spring damping of the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
///
/// @return {Real} The spring damping of the rotational limit motor.
YYEXPORT void btRotationalLimitMotor2_getSpringDamping(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = rotationalLimitMotor2->m_springDamping;
}

/// @func btRotationalLimitMotor2_setSpringDampingLimited(rotationalLimitMotor2, springDampingLimited)
///
/// @desc
/// Sets whether spring damping is limited for the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
/// @param {Bool} springDampingLimited
///     A boolean value indicating whether spring damping is limited.
YYEXPORT void btRotationalLimitMotor2_setSpringDampingLimited(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	bool springDampingLimited = YYGetBool(arg, 1);
	rotationalLimitMotor2->m_springDampingLimited = springDampingLimited;
}

/// @func btRotationalLimitMotor2_getSpringDampingLimited(rotationalLimitMotor2)
///
/// @desc
/// Gets whether spring damping is limited for the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
///
/// @return {Bool} A boolean value indicating whether spring damping is limited.
YYEXPORT void btRotationalLimitMotor2_getSpringDampingLimited(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = rotationalLimitMotor2->m_springDampingLimited;
}

/// @func btRotationalLimitMotor2_setEquilibriumPoint(rotationalLimitMotor2, equilibriumPoint)
///
/// @desc
/// Sets the equilibrium point for the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
/// @param {Real} equilibriumPoint
///     The equilibrium point for the rotational limit motor.
YYEXPORT void btRotationalLimitMotor2_setEquilibriumPoint(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	double equilibriumPoint = YYGetReal(arg, 1);
	rotationalLimitMotor2->m_equilibriumPoint = equilibriumPoint;
}

/// @func btRotationalLimitMotor2_getEquilibriumPoint(rotationalLimitMotor2)
///
/// @desc
/// Gets the equilibrium point for the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
///
/// @return {Real} The equilibrium point for the rotational limit motor.
YYEXPORT void btRotationalLimitMotor2_getEquilibriumPoint(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = rotationalLimitMotor2->m_equilibriumPoint;
}

/// @func btRotationalLimitMotor2_setCurrentLimitError(rotationalLimitMotor2, currentLimitError)
///
/// @desc
/// Sets the current limit error for the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
/// @param {Real} currentLimitError
///     The current limit error for the rotational limit motor.
YYEXPORT void btRotationalLimitMotor2_setCurrentLimitError(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	double currentLimitError = YYGetReal(arg, 1);
	rotationalLimitMotor2->m_currentLimitError = currentLimitError;
}

/// @func btRotationalLimitMotor2_getCurrentLimitError(rotationalLimitMotor2)
///
/// @desc
/// Gets the current limit error for the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
///
/// @return {Real} The current limit error for the rotational limit motor.
YYEXPORT void btRotationalLimitMotor2_getCurrentLimitError(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = rotationalLimitMotor2->m_currentLimitError;
}

/// @func btRotationalLimitMotor2_setCurrentLimitErrorHi(rotationalLimitMotor2, currentLimitErrorHi)
///
/// @desc
/// Sets the high current limit error for the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
/// @param {Real} currentLimitErrorHi
///     The high current limit error for the rotational limit motor.
YYEXPORT void btRotationalLimitMotor2_setCurrentLimitErrorHi(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	double currentLimitErrorHi = YYGetReal(arg, 1);
	rotationalLimitMotor2->m_currentLimitErrorHi = currentLimitErrorHi;
}

/// @func btRotationalLimitMotor2_getCurrentLimitErrorHi(rotationalLimitMotor2)
///
/// @desc
/// Gets the high current limit error for the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
///
/// @return {Real} The high current limit error for the rotational limit motor.
YYEXPORT void btRotationalLimitMotor2_getCurrentLimitErrorHi(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = rotationalLimitMotor2->m_currentLimitErrorHi;
}

/// @func btRotationalLimitMotor2_setCurrentPosition(rotationalLimitMotor2, currentPosition)
///
/// @desc
/// Sets the current position for the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
/// @param {Real} currentPosition
///     The current position for the rotational limit motor.
YYEXPORT void btRotationalLimitMotor2_setCurrentPosition(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	double currentPosition = YYGetReal(arg, 1);
	rotationalLimitMotor2->m_currentPosition = currentPosition;
}

/// @func btRotationalLimitMotor2_getCurrentPosition(rotationalLimitMotor2)
///
/// @desc
/// Gets the current position for the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
///
/// @return {Real} The current position for the rotational limit motor.
YYEXPORT void btRotationalLimitMotor2_getCurrentPosition(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = rotationalLimitMotor2->m_currentPosition;
}

/// @func btRotationalLimitMotor2_setCurrentLimit(rotationalLimitMotor2, currentLimit)
///
/// @desc
/// Sets the current limit for the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
/// @param {Real} currentLimit
///     The current limit for the rotational limit motor.
YYEXPORT void btRotationalLimitMotor2_setCurrentLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	int currentLimit = YYGetInt32(arg, 1);
	rotationalLimitMotor2->m_currentLimit = currentLimit;
}

/// @func btRotationalLimitMotor2_getCurrentLimit(rotationalLimitMotor2)
///
/// @desc
/// Gets the current limit for the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
///
/// @return {Real} The current limit for the rotational limit motor.
YYEXPORT void btRotationalLimitMotor2_getCurrentLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.val = rotationalLimitMotor2->m_currentLimit;
}

/// @func btRotationalLimitMotor2_isLimited(rotationalLimitMotor2)
///
/// @desc
/// Checks whether the rotational limit motor is currently limited.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
///
/// @return {Bool} Returns true if the rotational limit motor is limited, false
/// otherwise.
YYEXPORT void btRotationalLimitMotor2_isLimited(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = rotationalLimitMotor2->isLimited();
}

/// @func btRotationalLimitMotor2_testLimitValue(rotationalLimitMotor2, testValue)
///
/// @desc
/// Tests a given value against the rotational limit to determine if it's within
/// the limits.
///
/// @param {Pointer} rotationalLimitMotor2
///     A pointer to the btRotationalLimitMotor2.
/// @param {Real} testValue
///     The value to be tested against the rotational limit.
YYEXPORT void btRotationalLimitMotor2_testLimitValue(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor2 = (btRotationalLimitMotor2*)YYGetPtr(arg, 0);
	double testValue = YYGetReal(arg, 1);
	rotationalLimitMotor2->testLimitValue(testValue);
}

////////////////////////////////////////////////////////////////////////////////
//
// btTranslationalLimitMotor2
//

/// @func btTranslationalLimitMotor2_setLowerLimit(translationalLimitMotor2, lowerLimit)
///
/// @desc
/// Sets the lower limit for the translational limit motor.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Pointer} lowerLimit
///     A pointer to a btVector3 representing the lower limit.
YYEXPORT void btTranslationalLimitMotor2_setLowerLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	auto& lowerLimit = *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(lowerLimit, &translationalLimitMotor2->m_lowerLimit);
}

/// @func btTranslationalLimitMotor2_getLowerLimit(translationalLimitMotor2, outVector3)
///
/// @desc
/// Gets the lower limit of the translational limit motor and stores it in the
/// provided vector.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the lower limit.
YYEXPORT void btTranslationalLimitMotor2_getLowerLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	auto lowerLimit = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(translationalLimitMotor2->m_lowerLimit, lowerLimit);
}

/// @func btTranslationalLimitMotor2_setUpperLimit(translationalLimitMotor2, upperLimit)
///
/// @desc
/// Sets the upper limit for the translational limit motor.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Pointer} upperLimit
///     A pointer to a btVector3 representing the upper limit.
YYEXPORT void btTranslationalLimitMotor2_setUpperLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	auto& upperLimit = *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(upperLimit, &translationalLimitMotor2->m_upperLimit);
}

/// @func btTranslationalLimitMotor2_getUpperLimit(translationalLimitMotor2, outVector3)
///
/// @desc
/// Gets the upper limit of the translational limit motor and stores it in the
/// provided vector.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the upper limit.
YYEXPORT void btTranslationalLimitMotor2_getUpperLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	auto upperLimit = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(translationalLimitMotor2->m_upperLimit, upperLimit);
}

/// @func btTranslationalLimitMotor2_setBounce(translationalLimitMotor2, bounce)
///
/// @desc
/// Sets the bounce parameters for the translational limit motor.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Pointer} bounce
///     A pointer to a btVector3 representing the bounce parameters.
YYEXPORT void btTranslationalLimitMotor2_setBounce(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	auto& bounce = *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(bounce, &translationalLimitMotor2->m_bounce);
}

/// @func btTranslationalLimitMotor2_getBounce(translationalLimitMotor2, outVector3)
///
/// @desc
/// Gets the bounce parameters of the translational limit motor and stores them
/// in the provided vector.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the bounce parameters.
YYEXPORT void btTranslationalLimitMotor2_getBounce(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	auto bounce = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(translationalLimitMotor2->m_bounce, bounce);
}

/// @func btTranslationalLimitMotor2_setStopERP(translationalLimitMotor2, stopERP)
///
/// @desc
/// Sets the stop ERP (Error Reduction Parameter) for the translational limit
/// motor.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Pointer} stopERP
///     A pointer to a btVector3 representing the stop ERP parameters.
YYEXPORT void btTranslationalLimitMotor2_setStopERP(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	auto& stopERP = *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(stopERP, &translationalLimitMotor2->m_stopERP);
}

/// @func btTranslationalLimitMotor2_getStopERP(translationalLimitMotor2, outVector3)
///
/// @desc
/// Gets the stop ERP (Error Reduction Parameter) of the translational limit
/// motor and stores them in the provided vector.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the stop ERP parameters.
YYEXPORT void btTranslationalLimitMotor2_getStopERP(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	auto stopERP = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(translationalLimitMotor2->m_stopERP, stopERP);
}

/// @func btTranslationalLimitMotor2_setStopCFM(translationalLimitMotor2, stopCFM)
///
/// @desc
/// Sets the stop CFM (Constraint Force Mixing) for the translational limit
/// motor.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Pointer} stopCFM
///     A pointer to a btVector3 representing the stop CFM parameters.
YYEXPORT void btTranslationalLimitMotor2_setStopCFM(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	auto& stopCFM = *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(stopCFM, &translationalLimitMotor2->m_stopCFM);
}

/// @func btTranslationalLimitMotor2_getStopCFM(translationalLimitMotor2, outVector3)
///
/// @desc
/// Gets the stop CFM (Constraint Force Mixing) of the translational limit motor
/// and stores them in the provided vector.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the stop CFM parameters.
YYEXPORT void btTranslationalLimitMotor2_getStopCFM(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	auto stopCFM = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(translationalLimitMotor2->m_stopCFM, stopCFM);
}

/// @func btTranslationalLimitMotor2_setMotorERP(translationalLimitMotor2, motorERP)
///
/// @desc
/// Sets the motor ERP (Error Reduction Parameter) for the translational limit
/// motor.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Pointer} motorERP
///     A pointer to a btVector3 representing the motor ERP parameters.
YYEXPORT void btTranslationalLimitMotor2_setMotorERP(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	auto& motorERP = *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(motorERP, &translationalLimitMotor2->m_motorERP);
}

/// @func btTranslationalLimitMotor2_getMotorERP(translationalLimitMotor2, outVector3)
///
/// @desc
/// Gets the motor ERP (Error Reduction Parameter) of the translational limit
/// motor and stores them in the provided vector.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the motor ERP parameters.
YYEXPORT void btTranslationalLimitMotor2_getMotorERP(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	auto motorERP = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(translationalLimitMotor2->m_motorERP, motorERP);
}

/// @func btTranslationalLimitMotor2_setMotorCFM(translationalLimitMotor2, motorCFM)
///
/// @desc
/// Sets the motor CFM (Constraint Force Mixing) for the translational limit
/// motor.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Pointer} motorCFM
///     A pointer to a btVector3 representing the motor CFM parameters.
YYEXPORT void btTranslationalLimitMotor2_setMotorCFM(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	auto& motorCFM = *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(motorCFM, &translationalLimitMotor2->m_motorCFM);
}

/// @func btTranslationalLimitMotor2_getMotorCFM(translationalLimitMotor2, outVector3)
///
/// @desc
/// Gets the motor CFM (Constraint Force Mixing) of the translational limit
/// motor and stores them in the provided vector.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the motor CFM parameters.
YYEXPORT void btTranslationalLimitMotor2_getMotorCFM(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	auto motorCFM = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(translationalLimitMotor2->m_motorCFM, motorCFM);
}

/// @func btTranslationalLimitMotor2_setEnableMotor(translationalLimitMotor2, index, enableMotor)
///
/// @desc
/// Sets whether the specified motor is enabled or disabled for the
/// translational limit motor.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Real} index
///     The index of the motor to enable or disable.
/// @param {Bool} enableMotor
///     A boolean indicating whether the motor should be enabled (true) or
///     disabled (false).
YYEXPORT void btTranslationalLimitMotor2_setEnableMotor(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	int index = YYGetInt32(arg, 1);
	bool enableMotor = YYGetBool(arg, 2);
	translationalLimitMotor2->m_enableMotor[index] = enableMotor;
}

/// @func btTranslationalLimitMotor2_getEnableMotor(translationalLimitMotor2, index)
///
/// @desc
/// Gets whether the specified motor is enabled or disabled for the
/// translational limit motor.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Real} index
///     The index of the motor to check.
///
/// @return {Bool} Returns true if the motor at the specified index is enabled,
/// false otherwise.
YYEXPORT void btTranslationalLimitMotor2_getEnableMotor(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	int index = YYGetInt32(arg, 1);
	result.kind = VALUE_BOOL;
	result.val = translationalLimitMotor2->m_enableMotor[index];
}

/// @func btTranslationalLimitMotor2_setServoMotor(translationalLimitMotor2, index, servoMotor)
///
/// @desc
/// Sets whether the specified motor uses servo control in the translational
/// limit motor.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Real} index
///     The index of the motor to set servo control for.
/// @param {Bool} servoMotor
///     A boolean indicating whether the motor should use servo control (true)
///     or not (false).
YYEXPORT void btTranslationalLimitMotor2_setServoMotor(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	int index = YYGetInt32(arg, 1);
	bool servoMotor = YYGetBool(arg, 2);
	translationalLimitMotor2->m_servoMotor[index] = servoMotor;
}

/// @func btTranslationalLimitMotor2_getServoMotor(translationalLimitMotor2, index)
///
/// @desc
/// Gets whether the specified motor uses servo control in the translational
/// limit motor.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Real} index
///     The index of the motor to check for servo control.
///
/// @return {Bool} Returns true if the motor at the specified index uses servo
/// control, false otherwise.
YYEXPORT void btTranslationalLimitMotor2_getServoMotor(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	int index = YYGetInt32(arg, 1);
	result.kind = VALUE_BOOL;
	result.val = translationalLimitMotor2->m_servoMotor[index];
}

/// @func btTranslationalLimitMotor2_setEnableSpring(translationalLimitMotor2, index, enableSpring)
///
/// @desc
/// Sets whether the specified motor uses spring in the translational limit
/// motor.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Real} index
///     The index of the motor to set spring usage for.
/// @param {Bool} enableSpring
///     A boolean indicating whether the motor should use spring (true) or not
///     (false).
YYEXPORT void btTranslationalLimitMotor2_setEnableSpring(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	int index = YYGetInt32(arg, 1);
	bool enableSpring = YYGetBool(arg, 2);
	translationalLimitMotor2->m_enableSpring[index] = enableSpring;
}

/// @func btTranslationalLimitMotor2_getEnableSpring(translationalLimitMotor2, index)
///
/// @desc
/// Gets whether the specified motor uses spring in the translational limit
/// motor.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Real} index
///     The index of the motor to check for spring usage.
///
/// @return {Bool} Returns true if the motor at the specified index uses spring,
/// false otherwise.
YYEXPORT void btTranslationalLimitMotor2_getEnableSpring(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	int index = YYGetInt32(arg, 1);
	result.kind = VALUE_BOOL;
	result.val = translationalLimitMotor2->m_enableSpring[index];
}

/// @func btTranslationalLimitMotor2_setServoTarget(translationalLimitMotor2, servoTarget)
///
/// @desc
/// Sets the servo target for the translational limit motor.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Pointer} servoTarget
///     A pointer to a btVector3 representing the target for the servo.
YYEXPORT void btTranslationalLimitMotor2_setServoTarget(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	auto& servoTarget = *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(servoTarget, &translationalLimitMotor2->m_servoTarget);
}

/// @func btTranslationalLimitMotor2_getServoTarget(translationalLimitMotor2, outVector3)
///
/// @desc
/// Gets the servo target for the translational limit motor.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the servo target.
YYEXPORT void btTranslationalLimitMotor2_getServoTarget(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	auto servoTarget = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(translationalLimitMotor2->m_servoTarget, servoTarget);
}

/// @func btTranslationalLimitMotor2_setSpringStiffness(translationalLimitMotor2, springStiffness)
///
/// @desc
/// Sets the spring stiffness for the translational limit motor.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Pointer} springStiffness
///     A pointer to a btVector3 representing the spring stiffness.
YYEXPORT void btTranslationalLimitMotor2_setSpringStiffness(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	auto& springStiffness = *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(springStiffness, &translationalLimitMotor2->m_springStiffness);
}

/// @func btTranslationalLimitMotor2_getSpringStiffness(translationalLimitMotor2, outVector3)
///
/// @desc
/// Gets the spring stiffness for the translational limit motor.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the spring stiffness.
YYEXPORT void btTranslationalLimitMotor2_getSpringStiffness(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	auto springStiffness = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(translationalLimitMotor2->m_springStiffness, springStiffness);
}

/// @func btTranslationalLimitMotor2_setSpringStiffnessLimited(translationalLimitMotor2, index, springStiffnessLimited)
///
/// @desc
/// Sets whether the spring stiffness is limited for a specific axis of the
/// translational limit motor.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Real} index
///     The index of the axis for which spring stiffness limitation is being set.
/// @param {Bool} springStiffnessLimited
///     A boolean indicating whether spring stiffness is limited for the
///     specified axis.
YYEXPORT void btTranslationalLimitMotor2_setSpringStiffnessLimited(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	int index = YYGetInt32(arg, 1);
	bool springStiffnessLimited = YYGetBool(arg, 2);
	translationalLimitMotor2->m_springStiffnessLimited[index] = springStiffnessLimited;
}

/// @func btTranslationalLimitMotor2_getSpringStiffnessLimited(translationalLimitMotor2, index)
///
/// @desc
/// Gets whether the spring stiffness is limited for a specific axis of the
/// translational limit motor.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Real} index
///     The index of the axis for which spring stiffness limitation is being
///     queried.
///
/// @return {Bool} Returns true if spring stiffness is limited for the specified
/// axis, otherwise false.
YYEXPORT void btTranslationalLimitMotor2_getSpringStiffnessLimited(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	int index = YYGetInt32(arg, 1);
	result.kind = VALUE_BOOL;
	result.val = translationalLimitMotor2->m_springStiffnessLimited[index];
}
/// @func btTranslationalLimitMotor2_setSpringDamping(translationalLimitMotor2, springDamping)
///
/// @desc
/// Sets the spring damping values for the translational limit motor.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Pointer} springDamping
///     A pointer to a btVector3 representing the spring damping values along
///     the three axes.
YYEXPORT void btTranslationalLimitMotor2_setSpringDamping(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	auto& springDamping = *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(springDamping, &translationalLimitMotor2->m_springDamping);
}

/// @func btTranslationalLimitMotor2_getSpringDamping(translationalLimitMotor2, outVector3)
///
/// @desc
/// Gets the spring damping values for the translational limit motor.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the spring damping values along the
///     three axes.
YYEXPORT void btTranslationalLimitMotor2_getSpringDamping(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	auto springDamping = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(translationalLimitMotor2->m_springDamping, springDamping);
}

/// @func btTranslationalLimitMotor2_setSpringDampingLimited(translationalLimitMotor2, index, springDampingLimited)
///
/// @desc
/// Sets whether spring damping is limited for a specific axis of the
/// translational limit motor.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Real} index
///     The index representing the axis (0 for x, 1 for y, 2 for z) for which to
///     set the spring damping limit.
/// @param {Bool} springDampingLimited
///     A boolean indicating whether the spring damping is limited for the
///     specified axis.
YYEXPORT void btTranslationalLimitMotor2_setSpringDampingLimited(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	int index = YYGetInt32(arg, 1);
	bool springDampingLimited = YYGetBool(arg, 2);
	translationalLimitMotor2->m_springDampingLimited[index] = springDampingLimited;
}

/// @func btTranslationalLimitMotor2_getSpringDampingLimited(translationalLimitMotor2, index)
///
/// @desc
/// Gets whether spring damping is limited for a specific axis of the
/// translational limit motor.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
///
/// @param {Real} index
///     The index representing the axis (0 for x, 1 for y, 2 for z) for which to
///     get the spring damping limit.
///
/// @return {Bool} Returns true if spring damping is limited for the specified
/// axis, false otherwise.
YYEXPORT void btTranslationalLimitMotor2_getSpringDampingLimited(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	int index = YYGetInt32(arg, 1);
	result.kind = VALUE_BOOL;
	result.val = translationalLimitMotor2->m_springDampingLimited[index];
}

/// @func btTranslationalLimitMotor2_setEquilibriumPoint(translationalLimitMotor2, equilibriumPoint)
///
/// @desc
/// Sets the equilibrium point for the translational limit motor.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Pointer} equilibriumPoint
///     A pointer to a btVector3 representing the equilibrium point to set.
YYEXPORT void btTranslationalLimitMotor2_setEquilibriumPoint(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	auto& equilibriumPoint = *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(equilibriumPoint, &translationalLimitMotor2->m_equilibriumPoint);
}

/// @func btTranslationalLimitMotor2_getEquilibriumPoint(translationalLimitMotor2, outVector3)
///
/// @desc
/// Gets the equilibrium point for the translational limit motor.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 where the equilibrium point will be copied.
YYEXPORT void btTranslationalLimitMotor2_getEquilibriumPoint(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	auto equilibriumPoint = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(translationalLimitMotor2->m_equilibriumPoint, equilibriumPoint);
}

/// @func btTranslationalLimitMotor2_setTargetVelocity(translationalLimitMotor2, targetVelocity)
///
/// @desc
/// Sets the target velocity for the translational limit motor.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Pointer} targetVelocity
///     A pointer to a btVector3 representing the target velocity to set.
YYEXPORT void btTranslationalLimitMotor2_setTargetVelocity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	auto& targetVelocity = *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(targetVelocity, &translationalLimitMotor2->m_targetVelocity);
}

/// @func btTranslationalLimitMotor2_getTargetVelocity(translationalLimitMotor2, outVector3)
///
/// @desc
/// Gets the target velocity for the translational limit motor.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 where the target velocity will be copied.
YYEXPORT void btTranslationalLimitMotor2_getTargetVelocity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	auto targetVelocity = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(translationalLimitMotor2->m_targetVelocity, targetVelocity);
}

/// @func btTranslationalLimitMotor2_setMaxMotorForce(translationalLimitMotor2, maxMotorForce)
///
/// @desc
/// Sets the maximum motor force for the translational limit motor.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Pointer} maxMotorForce
///     A pointer to a btVector3 representing the maximum motor force to set.
YYEXPORT void btTranslationalLimitMotor2_setMaxMotorForce(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	auto& maxMotorForce = *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(maxMotorForce, &translationalLimitMotor2->m_maxMotorForce);
}

/// @func btTranslationalLimitMotor2_getMaxMotorForce(translationalLimitMotor2, outVector3)
///
/// @desc
/// Gets the maximum motor force for the translational limit motor.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 where the maximum motor force will be copied.
YYEXPORT void btTranslationalLimitMotor2_getMaxMotorForce(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	auto maxMotorForce = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(translationalLimitMotor2->m_maxMotorForce, maxMotorForce);
}

/// @func btTranslationalLimitMotor2_setCurrentLimitError(translationalLimitMotor2, currentLimitError)
///
/// @desc
/// Sets the current limit error for the translational limit motor.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Pointer} currentLimitError
///     A pointer to a btVector3 representing the current limit error to set.
YYEXPORT void btTranslationalLimitMotor2_setCurrentLimitError(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	auto& currentLimitError = *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(currentLimitError, &translationalLimitMotor2->m_currentLimitError);
}

/// @func btTranslationalLimitMotor2_getCurrentLimitError(translationalLimitMotor2, outVector3)
///
/// @desc
/// Gets the current limit error for the translational limit motor.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 where the current limit error will be copied.
YYEXPORT void btTranslationalLimitMotor2_getCurrentLimitError(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	auto currentLimitError = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(translationalLimitMotor2->m_currentLimitError, currentLimitError);
}

/// @func btTranslationalLimitMotor2_setCurrentLimitErrorHi(translationalLimitMotor2, currentLimitErrorHi)
///
/// @desc
/// Sets the high value of the current limit error for the translational limit
/// motor.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Pointer} currentLimitErrorHi
///     A pointer to a btVector3 representing the high value of the current
///     limit error to set.
YYEXPORT void btTranslationalLimitMotor2_setCurrentLimitErrorHi(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	auto& currentLimitErrorHi = *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(currentLimitErrorHi, &translationalLimitMotor2->m_currentLimitErrorHi);
}

/// @func btTranslationalLimitMotor2_getCurrentLimitErrorHi(translationalLimitMotor2, outVector3)
///
/// @desc
/// Gets the high value of the current limit error for the translational limit
/// motor.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 where the high value of the current limit error
///     will be copied.
YYEXPORT void btTranslationalLimitMotor2_getCurrentLimitErrorHi(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	auto currentLimitErrorHi = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(translationalLimitMotor2->m_currentLimitErrorHi, currentLimitErrorHi);
}

/// @func btTranslationalLimitMotor2_setCurrentLinearDiff(translationalLimitMotor2, currentLinearDiff)
///
/// @desc
/// Sets the current linear difference for the translational limit motor.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Pointer} currentLinearDiff
///     A pointer to a btVector3 representing the current linear difference to
///     set.
YYEXPORT void btTranslationalLimitMotor2_setCurrentLinearDiff(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	auto& currentLinearDiff = *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(currentLinearDiff, &translationalLimitMotor2->m_currentLinearDiff);
}

/// @func btTranslationalLimitMotor2_getCurrentLinearDiff(translationalLimitMotor2, outVector3)
///
/// @desc
/// Gets the current linear difference for the translational limit motor.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 where the current linear difference will be
///     copied.
YYEXPORT void btTranslationalLimitMotor2_getCurrentLinearDiff(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	auto currentLinearDiff = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(translationalLimitMotor2->m_currentLinearDiff, currentLinearDiff);
}

/// @func btTranslationalLimitMotor2_setCurrentLimit(translationalLimitMotor2, index, currentLimit)
///
/// @desc
/// Sets the current limit for a specified index of the translational limit
/// motor.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Real} index
///     The index for which the current limit should be set.
/// @param {Real} currentLimit
///     The current limit to set for the specified index.
YYEXPORT void btTranslationalLimitMotor2_setCurrentLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	int index = YYGetInt32(arg, 1);
	int currentLimit = YYGetInt32(arg, 2);
	translationalLimitMotor2->m_currentLimit[index] = currentLimit;
}

/// @func btTranslationalLimitMotor2_getCurrentLimit(translationalLimitMotor2, index)
///
/// @desc
/// Gets the current limit for a specified index of the translational limit
/// motor.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Real} index
///     The index for which the current limit should be retrieved.
///
/// @return {Real} The current limit for the specified index.
YYEXPORT void btTranslationalLimitMotor2_getCurrentLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	int index = YYGetInt32(arg, 1);
	result.kind = VALUE_INT32;
	result.val = translationalLimitMotor2->m_currentLimit[index];
}

/// @func btTranslationalLimitMotor2_isLimited(translationalLimitMotor2, limitIndex)
///
/// @desc
/// Checks if a translational limit motor is limited at a specified index.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Real} limitIndex
///     The index to check if the limit motor is limited.
///
/// @return {Bool} Returns true if the translational limit motor is limited at
/// the specified index, otherwise false.
YYEXPORT void btTranslationalLimitMotor2_isLimited(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	int limitIndex = YYGetInt32(arg, 1);
	result.kind = VALUE_BOOL;
	result.val = translationalLimitMotor2->isLimited(limitIndex);
}

/// @func btTranslationalLimitMotor2_testLimitValue(translationalLimitMotor2, limitIndex, testValue)
///
/// @desc
/// Tests a limit value for a translational limit motor at a specified index.
///
/// @param {Pointer} translationalLimitMotor2
///     A pointer to the btTranslationalLimitMotor2.
/// @param {Real} limitIndex
///     The index for which the limit value is being tested.
/// @param {Real} testValue
///     The value to test against the limit at the specified index.
YYEXPORT void btTranslationalLimitMotor2_testLimitValue(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor2 = (btTranslationalLimitMotor2*)YYGetPtr(arg, 0);
	int limitIndex = YYGetInt32(arg, 1);
	double testValue = YYGetReal(arg, 2);
	translationalLimitMotor2->testLimitValue(limitIndex, testValue);
}

////////////////////////////////////////////////////////////////////////////////
//
// btGeneric6DofSpring2Constraint
//

/// @func btGeneric6DofSpring2Constraint_create1(rigidBodyB, frameInB[, rotOrder])
///
/// @desc
/// Creates a generic 6-degree-of-freedom spring constraint with a single rigid
/// body and a frame in B's local coordinate system.
///
/// @param {Pointer} rigidBodyB
///     A pointer to the rigid body B.
/// @param {Pointer} frameInB
///     A pointer to the transformation matrix representing the frame in B's
///     local coordinate system.
/// @param {Real} [rotOrder]
///     An optional parameter specifying the rotation order for the constraint.
///     Default is RO_XYZ.
///
/// @return {Pointer} Returns a pointer to the created
/// btGeneric6DofSpring2Constraint.
YYEXPORT void btGeneric6DofSpring2Constraint_create1(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto& rigidBodyB = *(btRigidBody*)YYGetPtr(arg, 0);
	auto& frameInB = *(btTransform*)YYGetPtr(arg, 1);
	RotateOrder rotOrder = (argc > 2) ? (RotateOrder)YYGetInt32(arg, 2) : RO_XYZ;
	result.kind = VALUE_PTR;
	result.ptr = new btGeneric6DofSpring2Constraint(
		rigidBodyB, frameInB, rotOrder);
}

/// @func btGeneric6DofSpring2Constraint_create2(rigidBodyA, rigidBodyB, frameInA, frameInB[, rotOrder])
///
/// @desc
/// Creates a generic 6-degree-of-freedom spring constraint with two rigid
/// bodies and frames in A and B's local coordinate systems.
///
/// @param {Pointer} rigidBodyA
///     A pointer to the rigid body A.
/// @param {Pointer} rigidBodyB
///     A pointer to the rigid body B.
/// @param {Pointer} frameInA
///     A pointer to the transformation matrix representing the frame in A's
///     local coordinate system.
/// @param {Pointer} frameInB
///     A pointer to the transformation matrix representing the frame in B's
///     local coordinate system.
/// @param {Real} [rotOrder]
///     An optional parameter specifying the rotation order for the constraint.
///     Default is RO_XYZ.
///
/// @return {Pointer} Returns a pointer to the created
/// btGeneric6DofSpring2Constraint.
YYEXPORT void btGeneric6DofSpring2Constraint_create2(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto& rigidBodyA = *(btRigidBody*)YYGetPtr(arg, 0);
	auto& rigidBodyB = *(btRigidBody*)YYGetPtr(arg, 1);
	auto& frameInA = *(btTransform*)YYGetPtr(arg, 2);
	auto& frameInB = *(btTransform*)YYGetPtr(arg, 3);
	RotateOrder rotOrder = (argc > 4) ? (RotateOrder)YYGetInt32(arg, 4) : RO_XYZ;
	result.kind = VALUE_PTR;
	result.ptr = new btGeneric6DofSpring2Constraint(
		rigidBodyA, rigidBodyB, frameInA, frameInB, rotOrder);
}

/// @func btGeneric6DofSpring2Constraint_destroy(generic6DofSpring2Constraint)
///
/// @desc
/// Destroys a btGeneric6DofSpring2Constraint object.
///
/// @param {Pointer} generic6DofSpring2Constraint
///     A pointer to the btGeneric6DofSpring2Constraint to be destroyed.
YYEXPORT void btGeneric6DofSpring2Constraint_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btGeneric6DofSpring2Constraint*)YYGetPtr(arg, 0);
}

// Note: Skipped btGeneric6DofSpring2Constraint::buildJacobian
// Note: Skipped btGeneric6DofSpring2Constraint::getInfo1
// Note: Skipped btGeneric6DofSpring2Constraint::getInfo2
// Note: Skipped btGeneric6DofSpring2Constraint::calculateSerializeBufferSize
// Note: Skipped btGeneric6DofSpring2Constraint::serialize

/// @func btGeneric6DofSpring2Constraint_getRotationalLimitMotor(generic6DofSpring2Constraint, index)
///
/// @desc
/// Gets the rotational limit motor for a specific rotational degree of freedom
/// in the generic 6-degree-of-freedom spring constraint.
///
/// @param {Pointer} generic6DofSpring2Constraint
///     A pointer to the btGeneric6DofSpring2Constraint.
/// @param {Real} index
///     The index of the rotational degree of freedom.
///
/// @return {Pointer} Returns a pointer to the btRotationalLimitMotor2
/// associated with the specified rotational degree of freedom.
YYEXPORT void btGeneric6DofSpring2Constraint_getRotationalLimitMotor(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpring2Constraint = (btGeneric6DofSpring2Constraint*)YYGetPtr(arg, 0);
	int index = YYGetInt32(arg, 1);
	result.kind = VALUE_PTR;
	result.ptr = generic6DofSpring2Constraint->getRotationalLimitMotor(index);
}

/// @func btGeneric6DofSpring2Constraint_getTranslationalLimitMotor(generic6DofSpring2Constraint)
///
/// @desc
/// Gets the translational limit motor for the generic 6-degree-of-freedom
/// spring constraint.
///
/// @param {Pointer} generic6DofSpring2Constraint
///     A pointer to the btGeneric6DofSpring2Constraint.
///
/// @return {Pointer} Returns a pointer to the btTranslationalLimitMotor2
/// associated with the translational degrees of freedom.
YYEXPORT void btGeneric6DofSpring2Constraint_getTranslationalLimitMotor(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpring2Constraint = (btGeneric6DofSpring2Constraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = generic6DofSpring2Constraint->getTranslationalLimitMotor();
}

/// @func btGeneric6DofSpring2Constraint_calculateTransforms(generic6DofSpring2Constraint[, transA, transB])
///
/// @desc
/// Calculates and updates the transforms for the specified
/// btGeneric6DofSpring2Constraint. Optionally, the transforms can be provided
/// using pointers transA and transB.
///
/// @param {Pointer} generic6DofSpring2Constraint
///     A pointer to the btGeneric6DofSpring2Constraint.
/// @param {Pointer} [transA]
///     A pointer to a btTransform for the first object.
/// @param {Pointer} [transB]
///     A pointer to a btTransform for the second object.
YYEXPORT void btGeneric6DofSpring2Constraint_calculateTransforms(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpring2Constraint = (btGeneric6DofSpring2Constraint*)YYGetPtr(arg, 0);
	if (argc == 3)
	{
		auto& transA = *(btTransform*)YYGetPtr(arg, 1);
		auto& transB = *(btTransform*)YYGetPtr(arg, 2);
		generic6DofSpring2Constraint->calculateTransforms(transA, transB);
	}
	else
	{
		generic6DofSpring2Constraint->calculateTransforms();
	}
}

/// @func btGeneric6DofSpring2Constraint_getCalculatedTransformA(generic6DofSpring2Constraint)
///
/// @desc
/// Gets the calculated transform (btTransform) for the first object associated
/// with the btGeneric6DofSpring2Constraint.
///
/// @param {Pointer} generic6DofSpring2Constraint
///     A pointer to the btGeneric6DofSpring2Constraint.
///
/// @return {Pointer} Returns a pointer to the btTransform representing the
/// calculated transform of the first object.
YYEXPORT void btGeneric6DofSpring2Constraint_getCalculatedTransformA(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpring2Constraint = (btGeneric6DofSpring2Constraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = const_cast<btTransform*>(&generic6DofSpring2Constraint->getCalculatedTransformA());
}

/// @func btGeneric6DofSpring2Constraint_getCalculatedTransformB(generic6DofSpring2Constraint)
///
/// @desc
/// Gets the calculated transform (btTransform) for the second object associated
/// with the btGeneric6DofSpring2Constraint.
///
/// @param {Pointer} generic6DofSpring2Constraint
///     A pointer to the btGeneric6DofSpring2Constraint.
///
/// @return {Pointer} Returns a pointer to the btTransform representing the
/// calculated transform of the second object.
YYEXPORT void btGeneric6DofSpring2Constraint_getCalculatedTransformB(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpring2Constraint = (btGeneric6DofSpring2Constraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = const_cast<btTransform*>(&generic6DofSpring2Constraint->getCalculatedTransformB());
}

/// @func btGeneric6DofSpring2Constraint_getFrameOffsetA(generic6DofSpring2Constraint)
///
/// @desc
/// Gets the frame offset (btTransform) associated with the first object in the
/// btGeneric6DofSpring2Constraint.
///
/// @param {Pointer} generic6DofSpring2Constraint
///     A pointer to the btGeneric6DofSpring2Constraint.
///
/// @return {Pointer} Returns a pointer to the btTransform representing the
/// frame offset of the first object.
YYEXPORT void btGeneric6DofSpring2Constraint_getFrameOffsetA(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpring2Constraint = (btGeneric6DofSpring2Constraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = &generic6DofSpring2Constraint->getFrameOffsetA();
}

/// @func btGeneric6DofSpring2Constraint_getFrameOffsetB(generic6DofSpring2Constraint)
///
/// @desc
/// Gets the frame offset (btTransform) associated with the second object in the
/// btGeneric6DofSpring2Constraint.
///
/// @param {Pointer} generic6DofSpring2Constraint
///     A pointer to the btGeneric6DofSpring2Constraint.
///
/// @return {Pointer} Returns a pointer to the btTransform representing the
/// frame offset of the second object.
YYEXPORT void btGeneric6DofSpring2Constraint_getFrameOffsetB(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpring2Constraint = (btGeneric6DofSpring2Constraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = &generic6DofSpring2Constraint->getFrameOffsetB();
}

/// @func btGeneric6DofSpring2Constraint_getAxis(generic6DofSpring2Constraint, axisIndex, outVector3)
///
/// @desc
/// Retrieves the axis vector associated with the specified rotational degree of
/// freedom in the btGeneric6DofSpring2Constraint.
///
/// @param {Pointer} generic6DofSpring2Constraint
///     A pointer to the btGeneric6DofSpring2Constraint.
/// @param {Real} axisIndex
///     The index of the rotational degree of freedom.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the axis vector.
YYEXPORT void btGeneric6DofSpring2Constraint_getAxis(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpring2Constraint = (btGeneric6DofSpring2Constraint*)YYGetPtr(arg, 0);
	int axisIndex = YYGetInt32(arg, 1);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 2);
	CopyVector3(generic6DofSpring2Constraint->getAxis(axisIndex), outVector3);
}

/// @func btGeneric6DofSpring2Constraint_getAngle(generic6DofSpring2Constraint, index)
///
/// @desc
/// Gets the angle of the specified rotational degree of freedom in the
/// btGeneric6DofSpring2Constraint.
///
/// @param {Pointer} generic6DofSpring2Constraint
///     A pointer to the btGeneric6DofSpring2Constraint.
/// @param {Real} index
///     The index of the rotational degree of freedom.
///
/// @return {Real} Returns the angle of the specified rotational degree of
/// freedom.
YYEXPORT void btGeneric6DofSpring2Constraint_getAngle(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpring2Constraint = (btGeneric6DofSpring2Constraint*)YYGetPtr(arg, 0);
	int axisIndex = YYGetInt32(arg, 1);
	result.kind = VALUE_REAL;
	result.val = generic6DofSpring2Constraint->getAngle(axisIndex);
}

/// @func btGeneric6DofSpring2Constraint_getRelativePivotPosition(generic6DofSpring2Constraint, index)
///
/// @desc
/// Gets the relative pivot position of the specified rotational degree of
/// freedom in the btGeneric6DofSpring2Constraint.
///
/// @param {Pointer} generic6DofSpring2Constraint
///     A pointer to the btGeneric6DofSpring2Constraint.
/// @param {Real} index
///     The index of the rotational degree of freedom.
///
/// @return {Real} Returns the relative pivot position of the specified
/// rotational degree of freedom.
YYEXPORT void btGeneric6DofSpring2Constraint_getRelativePivotPosition(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpring2Constraint = (btGeneric6DofSpring2Constraint*)YYGetPtr(arg, 0);
	int axisIndex = YYGetInt32(arg, 1);
	result.kind = VALUE_REAL;
	result.val = generic6DofSpring2Constraint->getRelativePivotPosition(axisIndex);
}

/// @func btGeneric6DofSpring2Constraint_setFrames(generic6DofSpring2Constraint, frameA, frameB)
///
/// @desc
/// Sets the frames of reference for the btGeneric6DofSpring2Constraint.
///
/// @param {Pointer} generic6DofSpring2Constraint
///     A pointer to the btGeneric6DofSpring2Constraint.
/// @param {Pointer} frameA
///     A pointer to the btTransform representing the frame of reference for the
///    first object.
/// @param {Pointer} frameB
///     A pointer to the btTransform representing the frame of reference for the
///     second object.
YYEXPORT void btGeneric6DofSpring2Constraint_setFrames(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpring2Constraint = (btGeneric6DofSpring2Constraint*)YYGetPtr(arg, 0);
	auto& frameA = *(btTransform*)YYGetPtr(arg, 1);
	auto& frameB = *(btTransform*)YYGetPtr(arg, 2);
	generic6DofSpring2Constraint->setFrames(frameA, frameB);
}

/// @func btGeneric6DofSpring2Constraint_setLinearLowerLimit(generic6DofSpring2Constraint, linearLower)
///
/// @desc
/// Sets the lower limits for linear motion in the
/// btGeneric6DofSpring2Constraint.
///
/// @param {Pointer} generic6DofSpring2Constraint
///     A pointer to the btGeneric6DofSpring2Constraint.
/// @param {Pointer} linearLower
///     A pointer to a btVector3 representing the lower limits for linear motion.
YYEXPORT void btGeneric6DofSpring2Constraint_setLinearLowerLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpring2Constraint = (btGeneric6DofSpring2Constraint*)YYGetPtr(arg, 0);
	auto& linearLower = *(btVector3*)YYGetPtr(arg, 1);
	generic6DofSpring2Constraint->setLinearLowerLimit(linearLower);
}

/// @func btGeneric6DofSpring2Constraint_getLinearLowerLimit(generic6DofSpring2Constraint, outVector3)
///
/// @desc
/// Gets the lower limits for linear motion in the
/// btGeneric6DofSpring2Constraint.
///
/// @param {Pointer} generic6DofSpring2Constraint
///     A pointer to the btGeneric6DofSpring2Constraint.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the lower limits for linear motion.
YYEXPORT void btGeneric6DofSpring2Constraint_getLinearLowerLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpring2Constraint = (btGeneric6DofSpring2Constraint*)YYGetPtr(arg, 0);
	auto& outVector3 = *(btVector3*)YYGetPtr(arg, 1);
	generic6DofSpring2Constraint->getLinearLowerLimit(outVector3);
}

/// @func btGeneric6DofSpring2Constraint_setLinearUpperLimit(generic6DofSpring2Constraint, linearUpper)
///
/// @desc
/// Sets the upper limits for linear motion in the
/// btGeneric6DofSpring2Constraint.
///
/// @param {Pointer} generic6DofSpring2Constraint
///     A pointer to the btGeneric6DofSpring2Constraint.
/// @param {Pointer} linearUpper
///     A pointer to a btVector3 representing the upper limits for linear motion.
YYEXPORT void btGeneric6DofSpring2Constraint_setLinearUpperLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpring2Constraint = (btGeneric6DofSpring2Constraint*)YYGetPtr(arg, 0);
	auto& linearUpper = *(btVector3*)YYGetPtr(arg, 1);
	generic6DofSpring2Constraint->setLinearUpperLimit(linearUpper);
}

/// @func btGeneric6DofSpring2Constraint_getLinearUpperLimit(generic6DofSpring2Constraint, outVector3)
///
/// @desc
/// Gets the upper limits for linear motion in the
/// btGeneric6DofSpring2Constraint.
///
/// @param {Pointer} generic6DofSpring2Constraint
///     A pointer to the btGeneric6DofSpring2Constraint.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the upper limits for linear motion.
YYEXPORT void btGeneric6DofSpring2Constraint_getLinearUpperLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpring2Constraint = (btGeneric6DofSpring2Constraint*)YYGetPtr(arg, 0);
	auto& outVector3 = *(btVector3*)YYGetPtr(arg, 1);
	generic6DofSpring2Constraint->getLinearUpperLimit(outVector3);
}

/// @func btGeneric6DofSpring2Constraint_setAngularLowerLimit(generic6DofSpring2Constraint, angularLower)
///
/// @desc
/// Sets the lower limits for angular motion in the
/// btGeneric6DofSpring2Constraint.
///
/// @param {Pointer} generic6DofSpring2Constraint
///     A pointer to the btGeneric6DofSpring2Constraint.
/// @param {Pointer} angularLower
///     A pointer to a btVector3 representing the lower limits for angular
///     motion.
YYEXPORT void btGeneric6DofSpring2Constraint_setAngularLowerLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpring2Constraint = (btGeneric6DofSpring2Constraint*)YYGetPtr(arg, 0);
	auto& angularLower = *(btVector3*)YYGetPtr(arg, 1);
	generic6DofSpring2Constraint->setAngularLowerLimit(angularLower);
}

/// @func btGeneric6DofSpring2Constraint_setAngularLowerLimitReversed(generic6DofSpring2Constraint, angularLower)
///
/// @desc
/// Sets the reversed lower limits for angular motion in the
/// btGeneric6DofSpring2Constraint.
///
/// @param {Pointer} generic6DofSpring2Constraint
///     A pointer to the btGeneric6DofSpring2Constraint.
/// @param {Pointer} angularLower
///     A pointer to a btVector3 representing the reversed lower limits for
///     angular motion.
YYEXPORT void btGeneric6DofSpring2Constraint_setAngularLowerLimitReversed(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpring2Constraint = (btGeneric6DofSpring2Constraint*)YYGetPtr(arg, 0);
	auto& angularLower = *(btVector3*)YYGetPtr(arg, 1);
	generic6DofSpring2Constraint->setAngularLowerLimitReversed(angularLower);
}

/// @func btGeneric6DofSpring2Constraint_getAngularLowerLimit(generic6DofSpring2Constraint, outVector3)
///
/// @desc
/// Gets the lower limits for angular motion in the
/// btGeneric6DofSpring2Constraint.
///
/// @param {Pointer} generic6DofSpring2Constraint
///     A pointer to the btGeneric6DofSpring2Constraint.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the lower limits for angular motion.
YYEXPORT void btGeneric6DofSpring2Constraint_getAngularLowerLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpring2Constraint = (btGeneric6DofSpring2Constraint*)YYGetPtr(arg, 0);
	auto& outVector3 = *(btVector3*)YYGetPtr(arg, 1);
	generic6DofSpring2Constraint->getAngularLowerLimit(outVector3);
}

/// @func btGeneric6DofSpring2Constraint_getAngularLowerLimitReversed(generic6DofSpring2Constraint, outVector3)
///
/// @desc
/// Gets the reversed lower limits for angular motion in the
/// btGeneric6DofSpring2Constraint.
///
/// @param {Pointer} generic6DofSpring2Constraint
///     A pointer to the btGeneric6DofSpring2Constraint.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the reversed lower limits for angular
///     motion.
YYEXPORT void btGeneric6DofSpring2Constraint_getAngularLowerLimitReversed(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpring2Constraint = (btGeneric6DofSpring2Constraint*)YYGetPtr(arg, 0);
	auto& outVector3 = *(btVector3*)YYGetPtr(arg, 1);
	generic6DofSpring2Constraint->getAngularLowerLimitReversed(outVector3);
}

/// @func btGeneric6DofSpring2Constraint_setAngularUpperLimit(generic6DofSpring2Constraint, angularUpper)
///
/// @desc
/// Sets the upper limits for angular motion in the
/// btGeneric6DofSpring2Constraint.
///
/// @param {Pointer} generic6DofSpring2Constraint
///     A pointer to the btGeneric6DofSpring2Constraint.
/// @param {Pointer} angularUpper
///     A pointer to a btVector3 representing the upper limits for angular
///     motion.
YYEXPORT void btGeneric6DofSpring2Constraint_setAngularUpperLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpring2Constraint = (btGeneric6DofSpring2Constraint*)YYGetPtr(arg, 0);
	auto& angularUpper = *(btVector3*)YYGetPtr(arg, 1);
	generic6DofSpring2Constraint->setAngularUpperLimit(angularUpper);
}

/// @func btGeneric6DofSpring2Constraint_setAngularUpperLimitReversed(generic6DofSpring2Constraint, angularUpper)
///
/// @desc
/// Sets the reversed upper limits for angular motion in the
/// btGeneric6DofSpring2Constraint.
///
/// @param {Pointer} generic6DofSpring2Constraint
///     A pointer to the btGeneric6DofSpring2Constraint.
/// @param {Pointer} angularUpper
///     A pointer to a btVector3 representing the reversed upper limits for
///     angular motion.
YYEXPORT void btGeneric6DofSpring2Constraint_setAngularUpperLimitReversed(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpring2Constraint = (btGeneric6DofSpring2Constraint*)YYGetPtr(arg, 0);
	auto& angularUpper = *(btVector3*)YYGetPtr(arg, 1);
	generic6DofSpring2Constraint->setAngularUpperLimitReversed(angularUpper);
}

/// @func btGeneric6DofSpring2Constraint_getAngularUpperLimit(generic6DofSpring2Constraint, outVector3)
///
/// @desc
/// Gets the upper limits for angular motion in the
/// btGeneric6DofSpring2Constraint.
///
/// @param {Pointer} generic6DofSpring2Constraint
///     A pointer to the btGeneric6DofSpring2Constraint.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the upper limits for angular motion.
YYEXPORT void btGeneric6DofSpring2Constraint_getAngularUpperLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpring2Constraint = (btGeneric6DofSpring2Constraint*)YYGetPtr(arg, 0);
	auto& outVector3 = *(btVector3*)YYGetPtr(arg, 1);
	generic6DofSpring2Constraint->getAngularUpperLimit(outVector3);
}

/// @func btGeneric6DofSpring2Constraint_getAngularUpperLimitReversed(generic6DofSpring2Constraint, outVector3)
///
/// @desc
/// Gets the reversed upper limits for angular motion in the
/// btGeneric6DofSpring2Constraint.
///
/// @param {Pointer} generic6DofSpring2Constraint
///     A pointer to the btGeneric6DofSpring2Constraint.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the reversed upper limits for angular
///     motion.
YYEXPORT void btGeneric6DofSpring2Constraint_getAngularUpperLimitReversed(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpring2Constraint = (btGeneric6DofSpring2Constraint*)YYGetPtr(arg, 0);
	auto& outVector3 = *(btVector3*)YYGetPtr(arg, 1);
	generic6DofSpring2Constraint->getAngularUpperLimitReversed(outVector3);
}

/// @func btGeneric6DofSpring2Constraint_setLimit(generic6DofSpring2Constraint, axis, lo, hi)
///
/// @desc
/// Sets the limits for a specific rotational degree of freedom in the
/// btGeneric6DofSpring2Constraint.
///
/// @param {Pointer} generic6DofSpring2Constraint
///     A pointer to the btGeneric6DofSpring2Constraint.
/// @param {Real} axis
///     The index of the rotational degree of freedom.
/// @param {Real} lo
///     The lower limit for the specified rotational degree of freedom.
/// @param {Real} hi
///     The upper limit for the specified rotational degree of freedom.
YYEXPORT void btGeneric6DofSpring2Constraint_setLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpring2Constraint = (btGeneric6DofSpring2Constraint*)YYGetPtr(arg, 0);
	int axis = YYGetInt32(arg, 1);
	double lo = YYGetReal(arg, 2);
	double hi = YYGetReal(arg, 3);
	generic6DofSpring2Constraint->setLimit(axis, lo, hi);
}

/// @func btGeneric6DofSpring2Constraint_setLimitReversed(generic6DofSpring2Constraint, axis, lo, hi)
///
/// @desc
/// Sets the reversed limits for a specific rotational degree of freedom in the
/// btGeneric6DofSpring2Constraint.
///
/// @param {Pointer} generic6DofSpring2Constraint
///     A pointer to the btGeneric6DofSpring2Constraint.
/// @param {Real} axis
///     The index of the rotational degree of freedom.
/// @param {Real} lo
///     The lower limit for the specified rotational degree of freedom.
/// @param {Real} hi
///     The upper limit for the specified rotational degree of freedom.
YYEXPORT void btGeneric6DofSpring2Constraint_setLimitReversed(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpring2Constraint = (btGeneric6DofSpring2Constraint*)YYGetPtr(arg, 0);
	int axis = YYGetInt32(arg, 1);
	double lo = YYGetReal(arg, 2);
	double hi = YYGetReal(arg, 3);
	generic6DofSpring2Constraint->setLimitReversed(axis, lo, hi);
}

/// @func btGeneric6DofSpring2Constraint_isLimited(generic6DofSpring2Constraint, limitIndex)
///
/// @desc
/// Checks if the specified rotational degree of freedom has limits in the
/// btGeneric6DofSpring2Constraint.
///
/// @param {Pointer} generic6DofSpring2Constraint
///     A pointer to the btGeneric6DofSpring2Constraint.
/// @param {Real} limitIndex
///     The index of the rotational degree of freedom.
///
/// @return {Bool} Returns true if the rotational degree of freedom has limits,
/// false otherwise.
YYEXPORT void btGeneric6DofSpring2Constraint_isLimited(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpring2Constraint = (btGeneric6DofSpring2Constraint*)YYGetPtr(arg, 0);
	int limitIndex = YYGetInt32(arg, 1);
	result.kind = VALUE_BOOL;
	result.val = generic6DofSpring2Constraint->isLimited(limitIndex);
}

/// @func btGeneric6DofSpring2Constraint_setRotationOrder(generic6DofSpring2Constraint, order)
///
/// @desc
/// Sets the rotation order for the rotational degrees of freedom in the btGeneric6DofSpring2Constraint.
///
/// @param {Pointer} generic6DofSpring2Constraint
///     A pointer to the btGeneric6DofSpring2Constraint.
/// @param {Real} order
///     The rotation order to set.
YYEXPORT void btGeneric6DofSpring2Constraint_setRotationOrder(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpring2Constraint = (btGeneric6DofSpring2Constraint*)YYGetPtr(arg, 0);
	RotateOrder order = (RotateOrder)YYGetInt32(arg, 1);
	generic6DofSpring2Constraint->setRotationOrder(order);
}

/// @func btGeneric6DofSpring2Constraint_getRotationOrder(generic6DofSpring2Constraint)
///
/// @desc
/// Gets the rotation order for the rotational degrees of freedom in the
/// btGeneric6DofSpring2Constraint.
///
/// @param {Pointer} generic6DofSpring2Constraint
///     A pointer to the btGeneric6DofSpring2Constraint.
///
/// @return {Real} Returns the rotation order for the rotational degrees of
/// freedom.
YYEXPORT void btGeneric6DofSpring2Constraint_getRotationOrder(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpring2Constraint = (btGeneric6DofSpring2Constraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.val = (int)generic6DofSpring2Constraint->getRotationOrder();
}

/// @func btGeneric6DofSpring2Constraint_setAxis(generic6DofSpring2Constraint, axis1, axis2)
///
/// @desc
/// Sets the axes for the specified degree of freedom in the
/// btGeneric6DofSpring2Constraint.
///
/// @param {Pointer} generic6DofSpring2Constraint
///     A pointer to the btGeneric6DofSpring2Constraint.
/// @param {Pointer} axis1
///     A pointer to a btVector3 representing the first axis.
/// @param {Pointer} axis2
///     A pointer to a btVector3 representing the second axis.
YYEXPORT void btGeneric6DofSpring2Constraint_setAxis(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpring2Constraint = (btGeneric6DofSpring2Constraint*)YYGetPtr(arg, 0);
	auto& axis1 = *(btVector3*)YYGetPtr(arg, 1);
	auto& axis2 = *(btVector3*)YYGetPtr(arg, 2);
	generic6DofSpring2Constraint->setAxis(axis1, axis2);
}

/// @func btGeneric6DofSpring2Constraint_setBounce(generic6DofSpring2Constraint, index, bounce)
///
/// @desc
/// Sets the bounce factor for the specified rotational degree of freedom in the
/// btGeneric6DofSpring2Constraint.
///
/// @param {Pointer} generic6DofSpring2Constraint
///     A pointer to the btGeneric6DofSpring2Constraint.
/// @param {Real} index
///     The index of the rotational degree of freedom.
/// @param {Real} bounce
///     The bounce factor to set.
YYEXPORT void btGeneric6DofSpring2Constraint_setBounce(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpring2Constraint = (btGeneric6DofSpring2Constraint*)YYGetPtr(arg, 0);
	int index = YYGetInt32(arg, 1);
	double bounce = YYGetReal(arg, 2);
	generic6DofSpring2Constraint->setBounce(index, bounce);
}

/// @func btGeneric6DofSpring2Constraint_enableMotor(generic6DofSpring2Constraint, index, onOff)
///
/// @desc
/// Enables or disables the motor for the specified rotational degree of freedom
/// in the btGeneric6DofSpring2Constraint.
///
/// @param {Pointer} generic6DofSpring2Constraint
///     A pointer to the btGeneric6DofSpring2Constraint.
/// @param {Real} index
///     The index of the rotational degree of freedom.
/// @param {Bool} onOff
///     True to enable the motor, false to disable it.
YYEXPORT void btGeneric6DofSpring2Constraint_enableMotor(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpring2Constraint = (btGeneric6DofSpring2Constraint*)YYGetPtr(arg, 0);
	int index = YYGetInt32(arg, 1);
	bool onOff = YYGetBool(arg, 2);
	generic6DofSpring2Constraint->enableMotor(index, onOff);
}

/// @func btGeneric6DofSpring2Constraint_setServo(generic6DofSpring2Constraint, index, onOff)
///
/// @desc
/// Sets whether the servo is enabled or disabled for the specified rotational
/// degree of freedom in the btGeneric6DofSpring2Constraint.
///
/// @param {Pointer} generic6DofSpring2Constraint
///     A pointer to the btGeneric6DofSpring2Constraint.
/// @param {Real} index
///     The index of the rotational degree of freedom.
/// @param {Bool} onOff
///     True to enable the servo, false to disable it.
YYEXPORT void btGeneric6DofSpring2Constraint_setServo(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpring2Constraint = (btGeneric6DofSpring2Constraint*)YYGetPtr(arg, 0);
	int index = YYGetInt32(arg, 1);
	bool onOff = YYGetBool(arg, 2);
	generic6DofSpring2Constraint->setServo(index, onOff);
}

/// @func btGeneric6DofSpring2Constraint_setTargetVelocity(generic6DofSpring2Constraint, index, velocity)
///
/// @desc
/// Sets the target velocity for the specified rotational degree of freedom in
/// the btGeneric6DofSpring2Constraint.
///
/// @param {Pointer} generic6DofSpring2Constraint
///     A pointer to the btGeneric6DofSpring2Constraint.
/// @param {Real} index
///     The index of the rotational degree of freedom.
/// @param {Real} velocity
///     The target velocity to set.
YYEXPORT void btGeneric6DofSpring2Constraint_setTargetVelocity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpring2Constraint = (btGeneric6DofSpring2Constraint*)YYGetPtr(arg, 0);
	int index = YYGetInt32(arg, 1);
	double velocity = YYGetReal(arg, 2);
	generic6DofSpring2Constraint->setTargetVelocity(index, velocity);
}

/// @func btGeneric6DofSpring2Constraint_setServoTarget(generic6DofSpring2Constraint, index, target)
///
/// @desc
/// Sets the target for the servo for the specified rotational degree of freedom
/// in the btGeneric6DofSpring2Constraint.
///
/// @param {Pointer} generic6DofSpring2Constraint
///     A pointer to the btGeneric6DofSpring2Constraint.
/// @param {Real} index
///     The index of the rotational degree of freedom.
/// @param {Real} target
///     The target for the servo.
YYEXPORT void btGeneric6DofSpring2Constraint_setServoTarget(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpring2Constraint = (btGeneric6DofSpring2Constraint*)YYGetPtr(arg, 0);
	int index = YYGetInt32(arg, 1);
	double target = YYGetReal(arg, 2);
	generic6DofSpring2Constraint->setServoTarget(index, target);
}

/// @func btGeneric6DofSpring2Constraint_setMaxMotorForce(generic6DofSpring2Constraint, index, force)
///
/// @desc
/// Sets the maximum motor force for the specified rotational degree of freedom
/// in the btGeneric6DofSpring2Constraint.
///
/// @param {Pointer} generic6DofSpring2Constraint
///     A pointer to the btGeneric6DofSpring2Constraint.
/// @param {Real} index
///     The index of the rotational degree of freedom.
/// @param {Real} force
///     The maximum motor force to set.
YYEXPORT void btGeneric6DofSpring2Constraint_setMaxMotorForce(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpring2Constraint = (btGeneric6DofSpring2Constraint*)YYGetPtr(arg, 0);
	int index = YYGetInt32(arg, 1);
	double force = YYGetReal(arg, 2);
	generic6DofSpring2Constraint->setMaxMotorForce(index, force);
}

/// @func btGeneric6DofSpring2Constraint_enableSpring(generic6DofSpring2Constraint, index, onOff)
///
/// @desc
/// Enables or disables the spring for the specified rotational degree of
/// freedom in the btGeneric6DofSpring2Constraint.
///
/// @param {Pointer} generic6DofSpring2Constraint
///     A pointer to the btGeneric6DofSpring2Constraint.
/// @param {Real} index
///     The index of the rotational degree of freedom.
/// @param {Bool} onOff
///     True to enable the spring, false to disable it.
YYEXPORT void btGeneric6DofSpring2Constraint_enableSpring(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpring2Constraint = (btGeneric6DofSpring2Constraint*)YYGetPtr(arg, 0);
	int index = YYGetInt32(arg, 1);
	bool onOff = YYGetBool(arg, 2);
	generic6DofSpring2Constraint->enableSpring(index, onOff);
}

/// @func btGeneric6DofSpring2Constraint_setStiffness(generic6DofSpring2Constraint, index, stiffness[, limitIfNeeded])
///
/// @desc
/// Sets the stiffness for the spring of the specified rotational degree of
/// freedom in the btGeneric6DofSpring2Constraint.
///
/// @param {Pointer} generic6DofSpring2Constraint
///     A pointer to the btGeneric6DofSpring2Constraint.
/// @param {Real} index
///     The index of the rotational degree of freedom.
/// @param {Real} stiffness
///     The stiffness to set.
/// @param {Bool} [limitIfNeeded]
///     True to limit the stiffness if needed. Defaults to true.
YYEXPORT void btGeneric6DofSpring2Constraint_setStiffness(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpring2Constraint = (btGeneric6DofSpring2Constraint*)YYGetPtr(arg, 0);
	int index = YYGetInt32(arg, 1);
	double stiffness = YYGetReal(arg, 2);
	bool limitIfNeeded = (argc > 3) ? YYGetBool(arg, 3) : true;
	generic6DofSpring2Constraint->setStiffness(index, stiffness, limitIfNeeded);
}

/// @func btGeneric6DofSpring2Constraint_setDamping(generic6DofSpring2Constraint, index, damping[, limitIfNeeded])
///
/// @desc
/// Sets the damping for the spring of the specified rotational degree of
/// freedom in the btGeneric6DofSpring2Constraint.
///
/// @param {Pointer} generic6DofSpring2Constraint
///     A pointer to the btGeneric6DofSpring2Constraint.
/// @param {Real} index
///     The index of the rotational degree of freedom.
/// @param {Real} damping
///     The damping to set.
/// @param {Bool} [limitIfNeeded]
///     True to limit the damping if needed. Defaults to true.
YYEXPORT void btGeneric6DofSpring2Constraint_setDamping(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpring2Constraint = (btGeneric6DofSpring2Constraint*)YYGetPtr(arg, 0);
	int index = YYGetInt32(arg, 1);
	double damping = YYGetReal(arg, 2);
	bool limitIfNeeded = (argc > 3) ? YYGetBool(arg, 3) : true;
	generic6DofSpring2Constraint->setDamping(index, damping, limitIfNeeded);
}

/// @func btGeneric6DofSpring2Constraint_setEquilibriumPoint(generic6DofSpring2Constraint[, index[, val]])
///
/// @desc
/// Sets the equilibrium point for the specified rotational degree of freedom in
/// the btGeneric6DofSpring2Constraint. If no index is provided, sets the
/// equilibrium point for all degrees of freedom.
///
/// @param {Pointer} generic6DofSpring2Constraint
///     A pointer to the btGeneric6DofSpring2Constraint.
/// @param {Real} [index]
///     The index of the rotational degree of freedom. Omit to set the
///     equilibrium point for all degrees of freedom.
/// @param {Real} [val]
///     The equilibrium point to set. Omit to use the current value as the
///     equilibrium point.
YYEXPORT void btGeneric6DofSpring2Constraint_setEquilibriumPoint(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofSpring2Constraint = (btGeneric6DofSpring2Constraint*)YYGetPtr(arg, 0);
	if (argc > 2)
	{
		int index = YYGetInt32(arg, 1);
		double val = YYGetReal(arg, 2);
		generic6DofSpring2Constraint->setEquilibriumPoint(index, val);
	}
	else if (argc > 1)
	{
		int index = YYGetInt32(arg, 1);
		generic6DofSpring2Constraint->setEquilibriumPoint(index);
	}
	else
	{
		generic6DofSpring2Constraint->setEquilibriumPoint();
	}
}

// Note: Skipped btGeneric6DofSpring2Constraint::setParam
// Note: Skipped btGeneric6DofSpring2Constraint::getParam

////////////////////////////////////////////////////////////////////////////////
//
// Note: Skipped btGeneric6DofSpring2ConstraintData
//

////////////////////////////////////////////////////////////////////////////////
//
// Note: Skipped btGeneric6DofSpring2ConstraintDoubleData2
//
