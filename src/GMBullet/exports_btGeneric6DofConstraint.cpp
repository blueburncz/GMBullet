#include <GMBullet.hpp>

////////////////////////////////////////////////////////////////////////////////
//
// btRotationalLimitMotor
//

/// @func btRotationalLimitMotor_setLoLimit(rotationalLimitMotor, loLimit)
///
/// @desc
/// Sets the lower limit for the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor
///     The pointer to the rotational limit motor.
/// @param {Real} loLimit
///     The lower limit value to set.
YYEXPORT void btRotationalLimitMotor_setLoLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor = (btRotationalLimitMotor*)YYGetPtr(arg, 0);
	double loLimit = YYGetReal(arg, 1);
	rotationalLimitMotor->m_loLimit = loLimit;
}

/// @func btRotationalLimitMotor_getLoLimit(rotationalLimitMotor)
///
/// @desc
/// Gets the lower limit from the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor
///     The pointer to the rotational limit motor.
///
/// @return {Real} The lower limit value as a real number.
YYEXPORT void btRotationalLimitMotor_getLoLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor = (btRotationalLimitMotor*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = rotationalLimitMotor->m_loLimit;
}

/// @func btRotationalLimitMotor_setHiLimit(rotationalLimitMotor, hiLimit)
///
/// @desc
/// Sets the upper limit for the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor
///     The pointer to the rotational limit motor.
/// @param {Real} hiLimit
///     The upper limit value to set.
YYEXPORT void btRotationalLimitMotor_setHiLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor = (btRotationalLimitMotor*)YYGetPtr(arg, 0);
	double hiLimit = YYGetReal(arg, 1);
	rotationalLimitMotor->m_hiLimit = hiLimit;
}

/// @func btRotationalLimitMotor_getHiLimit(rotationalLimitMotor)
///
/// @desc
/// Gets the upper limit from the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor
///     The pointer to the rotational limit motor.
///
/// @return {Real} The upper limit value as a real number.
YYEXPORT void btRotationalLimitMotor_getHiLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor = (btRotationalLimitMotor*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = rotationalLimitMotor->m_hiLimit;
}

/// @func btRotationalLimitMotor_setTargetVelocity(rotationalLimitMotor, targetVelocity)
///
/// @desc
/// Sets the target velocity for the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor
///     The pointer to the rotational limit motor.
/// @param {Real} targetVelocity
///     The target velocity value to set.
YYEXPORT void btRotationalLimitMotor_setTargetVelocity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor = (btRotationalLimitMotor*)YYGetPtr(arg, 0);
	double targetVelocity = YYGetReal(arg, 1);
	rotationalLimitMotor->m_targetVelocity = targetVelocity;
}

/// @func btRotationalLimitMotor_getTargetVelocity(rotationalLimitMotor)
///
/// @desc
/// Gets the target velocity from the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor
///     The pointer to the rotational limit motor.
///
/// @return {Real} The target velocity value as a real number.
YYEXPORT void btRotationalLimitMotor_getTargetVelocity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor = (btRotationalLimitMotor*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = rotationalLimitMotor->m_targetVelocity;
}

/// @func btRotationalLimitMotor_setMaxMotorForce(rotationalLimitMotor, maxMotorForce)
///
/// @desc
/// Sets the maximum motor force for the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor
///     The pointer to the rotational limit motor.
/// @param {Real} maxMotorForce
///     The maximum motor force value to set.
YYEXPORT void btRotationalLimitMotor_setMaxMotorForce(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor = (btRotationalLimitMotor*)YYGetPtr(arg, 0);
	double maxMotorForce = YYGetReal(arg, 1);
	rotationalLimitMotor->m_maxMotorForce = maxMotorForce;
}

/// @func btRotationalLimitMotor_getMaxMotorForce(rotationalLimitMotor)
///
/// @desc
/// Gets the maximum motor force from the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor
///     The pointer to the rotational limit motor.
///
/// @return {Real} The maximum motor force value as a real number.
YYEXPORT void btRotationalLimitMotor_getMaxMotorForce(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor = (btRotationalLimitMotor*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = rotationalLimitMotor->m_maxMotorForce;
}

/// @func btRotationalLimitMotor_setMaxLimitForce(rotationalLimitMotor, maxLimitForce)
///
/// @desc
/// Sets the maximum limit force for the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor
///     The pointer to the rotational limit motor.
/// @param {Real} maxLimitForce
///     The maximum limit force value to set.
YYEXPORT void btRotationalLimitMotor_setMaxLimitForce(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor = (btRotationalLimitMotor*)YYGetPtr(arg, 0);
	double maxLimitForce = YYGetReal(arg, 1);
	rotationalLimitMotor->m_maxLimitForce = maxLimitForce;
}

/// @func btRotationalLimitMotor_getMaxLimitForce(rotationalLimitMotor)
///
/// @desc
/// Gets the maximum limit force from the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor
///     The pointer to the rotational limit motor.
///
/// @return {Real} The maximum limit force value as a real number.
YYEXPORT void btRotationalLimitMotor_getMaxLimitForce(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor = (btRotationalLimitMotor*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = rotationalLimitMotor->m_maxLimitForce;
}

/// @func btRotationalLimitMotor_setDamping(rotationalLimitMotor, damping)
///
/// @desc
/// Sets the damping for the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor
///     The pointer to the rotational limit motor.
/// @param {Real} damping
///     The damping value to set.
YYEXPORT void btRotationalLimitMotor_setDamping(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor = (btRotationalLimitMotor*)YYGetPtr(arg, 0);
	double damping = YYGetReal(arg, 1);
	rotationalLimitMotor->m_damping = damping;
}

/// @func btRotationalLimitMotor_getDamping(rotationalLimitMotor)
///
/// @desc
/// Gets the damping from the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor
///     The pointer to the rotational limit motor.
///
/// @return {Real} The damping value as a real number.
YYEXPORT void btRotationalLimitMotor_getDamping(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor = (btRotationalLimitMotor*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = rotationalLimitMotor->m_damping;
}

/// @func btRotationalLimitMotor_setLimitSoftness(rotationalLimitMotor, limitSoftness)
///
/// @desc
/// Sets the limit softness for the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor
///     The pointer to the rotational limit motor.
/// @param {Real} limitSoftness
///     The limit softness value to set.
YYEXPORT void btRotationalLimitMotor_setLimitSoftness(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor = (btRotationalLimitMotor*)YYGetPtr(arg, 0);
	double limitSoftness = YYGetReal(arg, 1);
	rotationalLimitMotor->m_limitSoftness = limitSoftness;
}

/// @func btRotationalLimitMotor_getLimitSoftness(rotationalLimitMotor)
///
/// @desc
/// Gets the limit softness from the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor
///     The pointer to the rotational limit motor.
///
/// @return {Real} The limit softness value as a real number.
YYEXPORT void btRotationalLimitMotor_getLimitSoftness(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor = (btRotationalLimitMotor*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = rotationalLimitMotor->m_limitSoftness;
}

/// @func btRotationalLimitMotor_setNormalCFM(rotationalLimitMotor, normalCFM)
///
/// @desc
/// Sets the normal CFM (Constraint Force Mixing) for the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor
///     The pointer to the rotational limit motor.
/// @param {Real} normalCFM
///     The normal CFM value to set.
YYEXPORT void btRotationalLimitMotor_setNormalCFM(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor = (btRotationalLimitMotor*)YYGetPtr(arg, 0);
	double normalCFM = YYGetReal(arg, 1);
	rotationalLimitMotor->m_normalCFM = normalCFM;
}

/// @func btRotationalLimitMotor_getNormalCFM(rotationalLimitMotor)
///
/// @desc
/// Gets the normal CFM (Constraint Force Mixing) from the rotational limit
/// motor.
///
/// @param {Pointer} rotationalLimitMotor
///     The pointer to the rotational limit motor.
///
/// @return {Real} The normal CFM value as a real number.
YYEXPORT void btRotationalLimitMotor_getNormalCFM(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor = (btRotationalLimitMotor*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = rotationalLimitMotor->m_normalCFM;
}

/// @func btRotationalLimitMotor_setStopERP(rotationalLimitMotor, stopERP)
///
/// @desc
/// Sets the stop ERP (Error Reduction Parameter) for the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor
///     The pointer to the rotational limit motor.
/// @param {Real} stopERP
///     The stop ERP value to set.
YYEXPORT void btRotationalLimitMotor_setStopERP(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor = (btRotationalLimitMotor*)YYGetPtr(arg, 0);
	double stopERP = YYGetReal(arg, 1);
	rotationalLimitMotor->m_stopERP = stopERP;
}

/// @func btRotationalLimitMotor_getStopERP(rotationalLimitMotor)
///
/// @desc
/// Gets the stop ERP (Error Reduction Parameter) from the rotational limit
/// motor.
///
/// @param {Pointer} rotationalLimitMotor
///     The pointer to the rotational limit motor.
///
/// @return {Real} The stop ERP value as a real number.
YYEXPORT void btRotationalLimitMotor_getStopERP(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor = (btRotationalLimitMotor*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = rotationalLimitMotor->m_stopERP;
}

/// @func btRotationalLimitMotor_setStopCFM(rotationalLimitMotor, stopCFM)
///
/// @desc
/// Sets the stop CFM (Constraint Force Mixing) for the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor
///     The pointer to the rotational limit motor.
/// @param {Real} stopCFM
///     The stop CFM value to set.
YYEXPORT void btRotationalLimitMotor_setStopCFM(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor = (btRotationalLimitMotor*)YYGetPtr(arg, 0);
	double stopCFM = YYGetReal(arg, 1);
	rotationalLimitMotor->m_stopCFM = stopCFM;
}

/// @func btRotationalLimitMotor_getStopCFM(rotationalLimitMotor)
///
/// @desc
/// Gets the stop CFM (Constraint Force Mixing) from the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor
///     The pointer to the rotational limit motor.
///
/// @return {Real} The stop CFM value as a real number.
YYEXPORT void btRotationalLimitMotor_getStopCFM(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor = (btRotationalLimitMotor*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = rotationalLimitMotor->m_stopCFM;
}

/// @func btRotationalLimitMotor_setBounce(rotationalLimitMotor, bounce)
///
/// @desc
/// Sets the bounce value for the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor
///     The pointer to the rotational limit motor.
/// @param {Real} bounce
///     The bounce value to set.
YYEXPORT void btRotationalLimitMotor_setBounce(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor = (btRotationalLimitMotor*)YYGetPtr(arg, 0);
	double bounce = YYGetReal(arg, 1);
	rotationalLimitMotor->m_bounce = bounce;
}

/// @func btRotationalLimitMotor_getBounce(rotationalLimitMotor)
///
/// @desc
/// Gets the bounce value from the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor
///     The pointer to the rotational limit motor.
///
/// @return {Real} The bounce value as a real number.
YYEXPORT void btRotationalLimitMotor_getBounce(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor = (btRotationalLimitMotor*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = rotationalLimitMotor->m_bounce;
}

/// @func btRotationalLimitMotor_setEnableMotor(rotationalLimitMotor, enableMotor)
///
/// @desc
/// Sets whether the motor for the rotational limit motor is enabled or disabled.
///
/// @param {Pointer} rotationalLimitMotor
///     The pointer to the rotational limit motor.
/// @param {Bool} enableMotor
///     A boolean value indicating whether the motor is enabled (true) or
///     disabled (false).
YYEXPORT void btRotationalLimitMotor_setEnableMotor(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor = (btRotationalLimitMotor*)YYGetPtr(arg, 0);
	bool enableMotor = YYGetBool(arg, 1);
	rotationalLimitMotor->m_enableMotor = enableMotor;
}

/// @func btRotationalLimitMotor_getEnableMotor(rotationalLimitMotor)
///
/// @desc
/// Gets whether the motor for the rotational limit motor is enabled or disabled.
///
/// @param {Pointer} rotationalLimitMotor
///     The pointer to the rotational limit motor.
///
/// @return {Bool} A boolean value indicating whether the motor is enabled (true)
/// or disabled (false).
YYEXPORT void btRotationalLimitMotor_getEnableMotor(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor = (btRotationalLimitMotor*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = rotationalLimitMotor->m_enableMotor;
}

/// @func btRotationalLimitMotor_setCurrentLimitError(rotationalLimitMotor, currentLimitError)
///
/// @desc
/// Sets the current limit error for the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor
///     The pointer to the rotational limit motor.
/// @param {Real} currentLimitError
///     The current limit error value to set.
YYEXPORT void btRotationalLimitMotor_setCurrentLimitError(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor = (btRotationalLimitMotor*)YYGetPtr(arg, 0);
	double currentLimitError = YYGetReal(arg, 1);
	rotationalLimitMotor->m_currentLimitError = currentLimitError;
}

/// @func btRotationalLimitMotor_getCurrentLimitError(rotationalLimitMotor)
///
/// @desc
/// Gets the current limit error from the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor
///     The pointer to the rotational limit motor.
///
/// @return {Real} The current limit error value as a real number.
YYEXPORT void btRotationalLimitMotor_getCurrentLimitError(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor = (btRotationalLimitMotor*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = rotationalLimitMotor->m_currentLimitError;
}

/// @func btRotationalLimitMotor_setCurrentPosition(rotationalLimitMotor, currentPosition)
///
/// @desc
/// Sets the current position for the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor
///     The pointer to the rotational limit motor.
/// @param {Real} currentPosition
///     The current position value to set.
YYEXPORT void btRotationalLimitMotor_setCurrentPosition(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor = (btRotationalLimitMotor*)YYGetPtr(arg, 0);
	double currentPosition = YYGetReal(arg, 1);
	rotationalLimitMotor->m_currentPosition = currentPosition;
}

/// @func btRotationalLimitMotor_getCurrentPosition(rotationalLimitMotor)
///
/// @desc
/// Gets the current position from the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor
///     The pointer to the rotational limit motor.
///
/// @return {Real} The current position value as a real number.
YYEXPORT void btRotationalLimitMotor_getCurrentPosition(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor = (btRotationalLimitMotor*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = rotationalLimitMotor->m_currentPosition;
}

/// @func btRotationalLimitMotor_setCurrentLimit(rotationalLimitMotor, currentLimit)
///
/// @desc
/// Sets the current limit for the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor
///     The pointer to the rotational limit motor.
/// @param {Real} currentLimit
///     The current limit value to set.
YYEXPORT void btRotationalLimitMotor_setCurrentLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor = (btRotationalLimitMotor*)YYGetPtr(arg, 0);
	int currentLimit = YYGetInt32(arg, 1);
	rotationalLimitMotor->m_currentLimit = currentLimit;
}

/// @func btRotationalLimitMotor_getCurrentLimit(rotationalLimitMotor)
///
/// @desc
/// Gets the current limit from the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor
///     The pointer to the rotational limit motor.
///
/// @return {Real} The current limit value as an integer.
YYEXPORT void btRotationalLimitMotor_getCurrentLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor = (btRotationalLimitMotor*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.val = rotationalLimitMotor->m_currentLimit;
}

/// @func btRotationalLimitMotor_setAccumulatedImpulse(rotationalLimitMotor, accumulatedImpulse)
///
/// @desc
/// Sets the accumulated impulse for the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor
///     The pointer to the rotational limit motor.
/// @param {Real} accumulatedImpulse
///     The accumulated impulse value to set.
YYEXPORT void btRotationalLimitMotor_setAccumulatedImpulse(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor = (btRotationalLimitMotor*)YYGetPtr(arg, 0);
	double accumulatedImpulse = YYGetReal(arg, 1);
	rotationalLimitMotor->m_accumulatedImpulse = accumulatedImpulse;
}

/// @func btRotationalLimitMotor_getAccumulatedImpulse(rotationalLimitMotor)
///
/// @desc
/// Gets the accumulated impulse from the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor
///     The pointer to the rotational limit motor.
///
/// @return {Real} The accumulated impulse value as a real number.
YYEXPORT void btRotationalLimitMotor_getAccumulatedImpulse(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor = (btRotationalLimitMotor*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = rotationalLimitMotor->m_accumulatedImpulse;
}

/// @func btRotationalLimitMotor_isLimited(rotationalLimitMotor)
///
/// @desc
/// Checks if the rotational limit motor is limited.
///
/// @param {Pointer} rotationalLimitMotor
///     The pointer to the rotational limit motor.
///
/// @return {Bool} Returns true if the motor is limited, false otherwise.
YYEXPORT void btRotationalLimitMotor_isLimited(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor = (btRotationalLimitMotor*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = rotationalLimitMotor->isLimited();
}

/// @func btRotationalLimitMotor_needApplyTorques(rotationalLimitMotor)
///
/// @desc
/// Checks if applying torques is needed for the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor
///     The pointer to the rotational limit motor.
///
/// @return {Bool} Returns true if applying torques is needed, false otherwise.
YYEXPORT void btRotationalLimitMotor_needApplyTorques(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor = (btRotationalLimitMotor*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = rotationalLimitMotor->needApplyTorques();
}

/// @func btRotationalLimitMotor_testLimitValue(rotationalLimitMotor, testValue)
///
/// @desc
/// Tests a limit value with the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor
///     The pointer to the rotational limit motor.
/// @param {Real} testValue
///     The test value to check against the limit.
///
/// @return {Real} Returns an integer indicating the test result.
YYEXPORT void btRotationalLimitMotor_testLimitValue(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor = (btRotationalLimitMotor*)YYGetPtr(arg, 0);
	double testValue = YYGetReal(arg, 1);
	result.kind = VALUE_INT32;
	result.val = rotationalLimitMotor->testLimitValue(testValue);
}

/// @func btRotationalLimitMotor_solveAngularLimits(rotationalLimitMotor, timeStep, axis, jacDiagABInv, body0, body1)
///
/// @desc
/// Solves the angular limits for the rotational limit motor.
///
/// @param {Pointer} rotationalLimitMotor
///     The pointer to the rotational limit motor.
/// @param {Real} timeStep
///     The time step value.
/// @param {Pointer} axis
///     The axis of rotation.
/// @param {Real} jacDiagABInv
///     The inverse of the diagonal of the jacobi matrix.
/// @param {Pointer} body0
///     The first body involved.
/// @param {Pointer} body1
///     The second body involved.
///
/// @return {Real} Returns a real number based on the solving of angular limits.
YYEXPORT void btRotationalLimitMotor_solveAngularLimits(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor = (btRotationalLimitMotor*)YYGetPtr(arg, 0);
	double timeStep = YYGetReal(arg, 1);
	auto& axis =  *(btVector3*)YYGetPtr(arg, 2);
	double jacDiagABInv = YYGetReal(arg, 3);
	auto body0 = (btRigidBody*)YYGetPtr(arg, 4);
	auto body1 = (btRigidBody*)YYGetPtr(arg, 5);
	result.kind = VALUE_REAL;
	result.val = rotationalLimitMotor->solveAngularLimits(
		timeStep, axis, jacDiagABInv, body0, body1);
}

////////////////////////////////////////////////////////////////////////////////
//
// btTranslationalLimitMotor
//

/// @func btTranslationalLimitMotor_setLowerLimit(translationalLimitMotor, lowerLimit)
///
/// @desc
/// Sets the lower limit for translational movement in the translational limit
/// motor.
///
/// @param {Pointer} translationalLimitMotor
///     The pointer to the translational limit motor.
/// @param {Pointer} lowerLimit
///     The lower limit for translational movement specified as a btVector3
///     pointer.
YYEXPORT void btTranslationalLimitMotor_setLowerLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	auto& lowerLimit =  *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(lowerLimit, &translationalLimitMotor->m_lowerLimit);
}

/// @func btTranslationalLimitMotor_getLowerLimit(translationalLimitMotor, outVector3)
///
/// @desc
/// Gets the lower limit for translational movement from the translational limit
/// motor.
///
/// @param {Pointer} translationalLimitMotor
///     The pointer to the translational limit motor.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the lower limit.
YYEXPORT void btTranslationalLimitMotor_getLowerLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(translationalLimitMotor->m_lowerLimit, outVector3);
}

/// @func btTranslationalLimitMotor_setUpperLimit(translationalLimitMotor, upperLimit)
///
/// @desc
/// Sets the upper limit for translational movement in the translational limit
/// motor.
///
/// @param {Pointer} translationalLimitMotor
///     The pointer to the translational limit motor.
/// @param {Pointer} upperLimit
///     The upper limit for translational movement specified as a btVector3
///     pointer.
YYEXPORT void btTranslationalLimitMotor_setUpperLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	auto& upperLimit =  *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(upperLimit, &translationalLimitMotor->m_upperLimit);
}

/// @func btTranslationalLimitMotor_getUpperLimit(translationalLimitMotor, outVector3)
///
/// @desc
/// Gets the upper limit for translational movement from the translational limit
/// motor.
///
/// @param {Pointer} translationalLimitMotor
///     The pointer to the translational limit motor.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the upper limit.
YYEXPORT void btTranslationalLimitMotor_getUpperLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(translationalLimitMotor->m_upperLimit, outVector3);
}

/// @func btTranslationalLimitMotor_setAccumulatedImpulse(translationalLimitMotor, accumulatedImpulse)
///
/// @desc
/// Sets the accumulated impulse for the translational limit motor.
///
/// @param {Pointer} translationalLimitMotor
///     The pointer to the translational limit motor.
/// @param {Pointer} accumulatedImpulse
///     The accumulated impulse specified as a btVector3 pointer.
YYEXPORT void btTranslationalLimitMotor_setAccumulatedImpulse(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	auto& accumulatedImpulse =  *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(accumulatedImpulse, &translationalLimitMotor->m_accumulatedImpulse);
}

/// @func btTranslationalLimitMotor_getAccumulatedImpulse(translationalLimitMotor, outVector3)
///
/// @desc
/// Gets the accumulated impulse from the translational limit motor.
///
/// @param {Pointer} translationalLimitMotor
///     The pointer to the translational limit motor.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the accumulated impulse.
YYEXPORT void btTranslationalLimitMotor_getAccumulatedImpulse(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(translationalLimitMotor->m_accumulatedImpulse, outVector3);
}

/// @func btTranslationalLimitMotor_setLimitSoftness(translationalLimitMotor, limitSoftness)
///
/// @desc
/// Sets the limit softness for the translational limit motor.
///
/// @param {Pointer} translationalLimitMotor
///     The pointer to the translational limit motor.
/// @param {Real} limitSoftness
///     The limit softness value to be set.
YYEXPORT void btTranslationalLimitMotor_setLimitSoftness(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	double limitSoftness = YYGetReal(arg, 1);
	translationalLimitMotor->m_limitSoftness = limitSoftness;
}

/// @func btTranslationalLimitMotor_getLimitSoftness(translationalLimitMotor)
///
/// @desc
/// Gets the limit softness from the translational limit motor.
///
/// @param {Pointer} translationalLimitMotor
///     The pointer to the translational limit motor.
///
/// @return {Real} The limit softness value.
YYEXPORT void btTranslationalLimitMotor_getLimitSoftness(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = translationalLimitMotor->m_limitSoftness;
}

/// @func btTranslationalLimitMotor_setDamping(translationalLimitMotor, damping)
///
/// @desc
/// Sets the damping for the translational limit motor.
///
/// @param {Pointer} translationalLimitMotor
///     The pointer to the translational limit motor.
/// @param {Real} damping
///     The damping value to be set.
YYEXPORT void btTranslationalLimitMotor_setDamping(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	double damping = YYGetReal(arg, 1);
	translationalLimitMotor->m_damping = damping;
}

/// @func btTranslationalLimitMotor_getDamping(translationalLimitMotor)
///
/// @desc
/// Gets the damping from the translational limit motor.
///
/// @param {Pointer} translationalLimitMotor
///     The pointer to the translational limit motor.
///
/// @return {Real} The damping value.
YYEXPORT void btTranslationalLimitMotor_getDamping(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = translationalLimitMotor->m_damping;
}

/// @func btTranslationalLimitMotor_setRestitution(translationalLimitMotor, restitution)
///
/// @desc
/// Sets the restitution for the translational limit motor.
///
/// @param {Pointer} translationalLimitMotor
///     The pointer to the translational limit motor.
/// @param {Real} restitution
///     The restitution value to be set.
YYEXPORT void btTranslationalLimitMotor_setRestitution(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	double restitution = YYGetReal(arg, 1);
	translationalLimitMotor->m_restitution = restitution;
}

/// @func btTranslationalLimitMotor_getRestitution(translationalLimitMotor)
///
/// @desc
/// Gets the restitution from the translational limit motor.
///
/// @param {Pointer} translationalLimitMotor
///     The pointer to the translational limit motor.
///
/// @return {Real} The restitution value.
YYEXPORT void btTranslationalLimitMotor_getRestitution(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = translationalLimitMotor->m_restitution;
}

/// @func btTranslationalLimitMotor_setNormalCFM(translationalLimitMotor, normalCFM)
///
/// @desc
/// Sets the normal constraint force mixing factor for the translational limit
/// motor.
///
/// @param {Pointer} translationalLimitMotor
///     The pointer to the translational limit motor.
/// @param {Pointer} normalCFM
///     The pointer to a vector representing the normal constraint force mixing
///     factor to be set.
YYEXPORT void btTranslationalLimitMotor_setNormalCFM(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	auto& normalCFM =  *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(normalCFM, &translationalLimitMotor->m_normalCFM);
}

/// @func btTranslationalLimitMotor_getNormalCFM(translationalLimitMotor, outVector3)
///
/// @desc
/// Gets the normal constraint force mixing factor from the translational limit
/// motor.
///
/// @param {Pointer} translationalLimitMotor
///     The pointer to the translational limit motor.
/// @param {Pointer} outVector3
///     The pointer to an output vector where the normal constraint force mixing
///     factor will be stored.
YYEXPORT void btTranslationalLimitMotor_getNormalCFM(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(translationalLimitMotor->m_normalCFM, outVector3);
}

/// @func btTranslationalLimitMotor_setStopERP(translationalLimitMotor, stopERP)
///
/// @desc
/// Sets the error reduction parameter for the translational limit motor.
///
/// @param {Pointer} translationalLimitMotor
///     The pointer to the translational limit motor.
/// @param {Pointer} stopERP
///     The pointer to a vector representing the error reduction parameter to be
///     set.
YYEXPORT void btTranslationalLimitMotor_setStopERP(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	auto& stopERP =  *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(stopERP, &translationalLimitMotor->m_stopERP);
}

/// @func btTranslationalLimitMotor_getStopERP(translationalLimitMotor, outVector3)
///
/// @desc
/// Gets the error reduction parameter from the translational limit motor.
///
/// @param {Pointer} translationalLimitMotor
///     The pointer to the translational limit motor.
/// @param {Pointer} outVector3
///     The pointer to an output vector where the error reduction parameter will
///     be stored.
YYEXPORT void btTranslationalLimitMotor_getStopERP(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(translationalLimitMotor->m_stopERP, outVector3);
}

/// @func btTranslationalLimitMotor_setStopCFM(translationalLimitMotor, stopCFM)
///
/// @desc
/// Sets the constraint force mixing factor for the translational limit motor.
///
/// @param {Pointer} translationalLimitMotor
///     The pointer to the translational limit motor.
/// @param {Pointer} stopCFM
///     The pointer to a vector representing the constraint force mixing factor
///     to be set.
YYEXPORT void btTranslationalLimitMotor_setStopCFM(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	auto& stopCFM =  *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(stopCFM, &translationalLimitMotor->m_stopCFM);
}

/// @func btTranslationalLimitMotor_getStopCFM(translationalLimitMotor, outVector3)
///
/// @desc
/// Gets the constraint force mixing factor from the translational limit motor.
///
/// @param {Pointer} translationalLimitMotor
///     The pointer to the translational limit motor.
/// @param {Pointer} outVector3
///     The pointer to an output vector where the constraint force mixing factor
///     will be stored.
YYEXPORT void btTranslationalLimitMotor_getStopCFM(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(translationalLimitMotor->m_stopCFM, outVector3);
}

/// @func btTranslationalLimitMotor_setEnableMotor(translationalLimitMotor, index, enableMotor)
///
/// @desc
/// Sets whether the specified translational limit motor is enabled for a given
/// index.
///
/// @param {Pointer} translationalLimitMotor
///     The pointer to the translational limit motor.
/// @param {Real} index
///     The index of the translational limit motor to enable or disable.
/// @param {Bool} enableMotor
///     The boolean value indicating whether to enable (true) or disable (false)
///     the motor.
YYEXPORT void btTranslationalLimitMotor_setEnableMotor(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	int index = YYGetInt32(arg, 0);
	bool enableMotor = YYGetBool(arg, 1);
	translationalLimitMotor->m_enableMotor[index] = enableMotor;
}

/// @func btTranslationalLimitMotor_getEnableMotor(translationalLimitMotor, index)
///
/// @desc
/// Gets whether the specified translational limit motor is enabled for a given
/// index.
///
/// @param {Pointer} translationalLimitMotor
///     The pointer to the translational limit motor.
/// @param {Real} index
///     The index of the translational limit motor to query.
///
/// @return {Bool} Returns true if the motor at the specified index is enabled,
/// false otherwise.
YYEXPORT void btTranslationalLimitMotor_getEnableMotor(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	int index = YYGetInt32(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = translationalLimitMotor->m_enableMotor[index];
}

/// @func btTranslationalLimitMotor_setTargetVelocity(translationalLimitMotor, targetVelocity)
///
/// @desc
/// Sets the target velocity for the translational limit motor.
///
/// @param {Pointer} translationalLimitMotor
///     The pointer to the translational limit motor.
/// @param {Pointer} targetVelocity
///     The pointer to a vector representing the target velocity to be set.
YYEXPORT void btTranslationalLimitMotor_setTargetVelocity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	auto& targetVelocity =  *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(targetVelocity, &translationalLimitMotor->m_targetVelocity);
}

/// @func btTranslationalLimitMotor_getTargetVelocity(translationalLimitMotor, outVector3)
///
/// @desc
/// Gets the target velocity from the translational limit motor.
///
/// @param {Pointer} translationalLimitMotor
///     The pointer to the translational limit motor.
/// @param {Pointer} outVector3
///     The pointer to an output vector where the target velocity will be stored.
YYEXPORT void btTranslationalLimitMotor_getTargetVelocity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(translationalLimitMotor->m_targetVelocity, outVector3);
}

/// @func btTranslationalLimitMotor_setMaxMotorForce(translationalLimitMotor, maxMotorForce)
///
/// @desc
/// Sets the maximum motor force for the translational limit motor.
///
/// @param {Pointer} translationalLimitMotor
///     The pointer to the translational limit motor.
/// @param {Pointer} maxMotorForce
///     The pointer to a vector representing the maximum motor force to be set.
YYEXPORT void btTranslationalLimitMotor_setMaxMotorForce(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	auto& maxMotorForce =  *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(maxMotorForce, &translationalLimitMotor->m_maxMotorForce);
}

/// @func btTranslationalLimitMotor_getMaxMotorForce(translationalLimitMotor, outVector3)
///
/// @desc
/// Gets the maximum motor force from the translational limit motor.
///
/// @param {Pointer} translationalLimitMotor
///     The pointer to the translational limit motor.
/// @param {Pointer} outVector3
///     The pointer to an output vector where the maximum motor force will be
///     stored.
YYEXPORT void btTranslationalLimitMotor_getMaxMotorForce(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(translationalLimitMotor->m_maxMotorForce, outVector3);
}

/// @func btTranslationalLimitMotor_setCurrentLimitError(translationalLimitMotor, currentLimitError)
///
/// @desc
/// Sets the current limit error for the translational limit motor.
///
/// @param {Pointer} translationalLimitMotor
///     The pointer to the translational limit motor.
/// @param {Pointer} currentLimitError
///     The pointer to a vector representing the current limit error to be set.
YYEXPORT void btTranslationalLimitMotor_setCurrentLimitError(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	auto& currentLimitError =  *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(currentLimitError, &translationalLimitMotor->m_currentLimitError);
}

/// @func btTranslationalLimitMotor_getCurrentLimitError(translationalLimitMotor, outVector3)
///
/// @desc
/// Gets the current limit error from the translational limit motor.
///
/// @param {Pointer} translationalLimitMotor
///     The pointer to the translational limit motor.
/// @param {Pointer} outVector3
///     The pointer to an output vector where the current limit error will be
///     stored.
YYEXPORT void btTranslationalLimitMotor_getCurrentLimitError(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(translationalLimitMotor->m_currentLimitError, outVector3);
}

/// @func btTranslationalLimitMotor_setCurrentLinearDiff(translationalLimitMotor, currentLinearDiff)
///
/// @desc
/// Sets the current linear difference for the translational limit motor.
///
/// @param {Pointer} translationalLimitMotor
///     The pointer to the translational limit motor.
/// @param {Pointer} currentLinearDiff
///     The pointer to a vector representing the current linear difference to be
///     set.
YYEXPORT void btTranslationalLimitMotor_setCurrentLinearDiff(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	auto& currentLinearDiff =  *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(currentLinearDiff, &translationalLimitMotor->m_currentLinearDiff);
}

/// @func btTranslationalLimitMotor_getCurrentLinearDiff(translationalLimitMotor, outVector3)
///
/// @desc
/// Gets the current linear difference from the translational limit motor.
///
/// @param {Pointer} translationalLimitMotor
///     The pointer to the translational limit motor.
/// @param {Pointer} outVector3
///     The pointer to an output vector where the current linear difference will
///     be stored.
YYEXPORT void btTranslationalLimitMotor_getCurrentLinearDiff(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(translationalLimitMotor->m_currentLinearDiff, outVector3);
}

/// @func btTranslationalLimitMotor_setCurrentLimit(translationalLimitMotor, index, currentLimit)
///
/// @desc
/// Sets the current limit for the translational limit motor at the specified
/// index.
///
/// @param {Pointer} translationalLimitMotor
///     The pointer to the translational limit motor.
/// @param {Real} index
///     The index specifying the limit to be set.
/// @param {Real} currentLimit
///     The current limit value to be set for the specified index.
YYEXPORT void btTranslationalLimitMotor_setCurrentLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	int index = YYGetInt32(arg, 1);
	int currentLimit = YYGetInt32(arg, 2);
	translationalLimitMotor->m_currentLimit[index] = currentLimit;
}

/// @func btTranslationalLimitMotor_getCurrentLimit(translationalLimitMotor, index)
///
/// @desc
/// Gets the current limit from the translational limit motor at the specified
/// index.
///
/// @param {Pointer} translationalLimitMotor
///     The pointer to the translational limit motor.
/// @param {Real} index
///     The index specifying the limit to be retrieved.
///
/// @return {Real} The current limit value at the specified index.
YYEXPORT void btTranslationalLimitMotor_getCurrentLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	int index = YYGetInt32(arg, 1);
	result.kind = VALUE_INT32;
	result.val = translationalLimitMotor->m_currentLimit[index];
}

/// @func btTranslationalLimitMotor_isLimited(translationalLimitMotor, limitIndex)
///
/// @desc
/// Checks if the translational limit motor is limited at the specified index.
///
/// @param {Pointer} translationalLimitMotor
///     The pointer to the translational limit motor.
/// @param {Real} limitIndex
///     The index specifying the limit to be checked.
///
/// @return {Bool} True if the translational limit motor is limited at the
/// specified index, false otherwise.
YYEXPORT void btTranslationalLimitMotor_isLimited(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	int limitIndex = YYGetInt32(arg, 1);
	result.kind = VALUE_BOOL;
	result.val = translationalLimitMotor->isLimited(limitIndex);
}

/// @func btTranslationalLimitMotor_needApplyForce(translationalLimitMotor, limitIndex)
///
/// @desc
/// Checks if force needs to be applied for the translational limit motor at the
/// specified index.
///
/// @param {Pointer} translationalLimitMotor
///     The pointer to the translational limit motor.
/// @param {Real} limitIndex
///     The index specifying the limit to be checked.
///
/// @return {Bool} True if force needs to be applied for the translational limit
/// motor at the specified index, false otherwise.
YYEXPORT void btTranslationalLimitMotor_needApplyForce(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	int limitIndex = YYGetInt32(arg, 1);
	result.kind = VALUE_BOOL;
	result.val = translationalLimitMotor->needApplyForce(limitIndex);
}

/// @func btTranslationalLimitMotor_testLimitValue(translationalLimitMotor, limitIndex, testValue)
///
/// @desc
/// Tests the limit value for the translational limit motor at the specified
/// index.
///
/// @param {Pointer} translationalLimitMotor
///     The pointer to the translational limit motor.
/// @param {Real} limitIndex
///     The index specifying the limit to be tested.
/// @param {Real} testValue
///     The test value against the limit.
///
/// @return {Real} The result of the limit test.
YYEXPORT void btTranslationalLimitMotor_testLimitValue(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	int limitIndex = YYGetInt32(arg, 1);
	double testValue = YYGetReal(arg, 2);
	result.kind = VALUE_INT32;
	result.val = translationalLimitMotor->testLimitValue(limitIndex, testValue);
}

/// @func btTranslationalLimitMotor_solveLinearAxis(translationalLimitMotor, timeStep, jacDiagABInv, body1, pointInA, body2, pointInB, limitIndex, axisNormalOnA, anchorPos)
///
/// @desc
/// Solves the linear axis for the translational limit motor.
///
/// @param {Pointer} translationalLimitMotor
///     The pointer to the translational limit motor.
/// @param {Real} timeStep
///     The time step for the simulation.
/// @param {Real} jacDiagABInv
///     The inverse diagonal coefficient of the constraint jacobi matrix.
/// @param {Pointer} body1
///     The pointer to the first rigid body involved in the constraint.
/// @param {Pointer} pointInA
///     The pointer to the point of constraint application on body1 in local
///     space.
/// @param {Pointer} body2
///     The pointer to the second rigid body involved in the constraint.
/// @param {Pointer} pointInB
///     The pointer to the point of constraint application on body2 in local
///     space.
/// @param {Real} limitIndex
///     The index specifying the limit.
/// @param {Pointer} axisNormalOnA
///     The pointer to the axis normal on body1 in local space.
/// @param {Pointer} anchorPos
///     The pointer to the anchor position.
///
/// @return {Real} The result of solving the linear axis.
YYEXPORT void btTranslationalLimitMotor_solveLinearAxis(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	double timeStep = YYGetReal(arg, 1);
	double jacDiagABInv = YYGetReal(arg, 2);
	auto& body1 =  *(btRigidBody*)YYGetPtr(arg, 3);
	auto& pointInA =  *(btVector3*)YYGetPtr(arg, 4);
	auto& body2 =  *(btRigidBody*)YYGetPtr(arg, 5);
	auto& pointInB =  *(btVector3*)YYGetPtr(arg, 6);
	int limitIndex = YYGetInt32(arg, 7);
	auto& axisNormalOnA =  *(btVector3*)YYGetPtr(arg, 8);
	auto& anchorPos =  *(btVector3*)YYGetPtr(arg, 9);
	result.kind = VALUE_REAL;
	result.val = translationalLimitMotor->solveLinearAxis(
		timeStep,
		jacDiagABInv,
		body1,
		pointInA,
		body2,
		pointInB,
		limitIndex,
		axisNormalOnA,
		anchorPos);
}

////////////////////////////////////////////////////////////////////////////////
//
// btGeneric6DofConstraint
//

// Note: Skipped btGeneric6DofConstraint::m_useSolveConstraintObsolete

/// @func btGeneric6DofConstraint_create1(rigidBodyB, frameInB, useLinearReferenceFrameB)
///
/// @desc
/// Creates a btGeneric6DofConstraint using a single rigid body and frame for
/// the constraint.
///
/// @param {Pointer} rigidBodyB
///     The pointer to the rigid body involved in the constraint.
/// @param {Pointer} frameInB
///     The transform frame associated with the rigid body (btTransform type).
/// @param {Bool} useLinearReferenceFrameB
///     A boolean indicating whether to use the linear reference frame for the
///     constraint.
///
/// @return {Pointer} The pointer to the created btGeneric6DofConstraint.
YYEXPORT void btGeneric6DofConstraint_create1(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto& rigidBodyB =  *(btRigidBody*)YYGetPtr(arg, 0);
	auto& frameInB =  *(btTransform*)YYGetPtr(arg, 1);
	bool useLinearReferenceFrameB = YYGetBool(arg, 2);
	result.kind = VALUE_PTR;
	result.ptr = new btGeneric6DofConstraint(
		rigidBodyB, frameInB, useLinearReferenceFrameB);
}

/// @func btGeneric6DofConstraint_create2(rigidBodyA, rigidBodyB, frameInA, frameInB, useLinearReferenceFrameA)
///
/// @desc
/// Creates a btGeneric6DofConstraint using two rigid bodies and their
/// respective frames for the constraint.
///
/// @param {Pointer} rigidBodyA
///     The pointer to the first rigid body involved in the constraint.
/// @param {Pointer} rigidBodyB
///     The pointer to the second rigid body involved in the constraint.
/// @param {Pointer} frameInA
///     The transform frame associated with the first rigid body (btTransform
///     type).
/// @param {Pointer} frameInB
///     The transform frame associated with the second rigid body (btTransform
///     type).
/// @param {Bool} useLinearReferenceFrameA
///     A boolean indicating whether to use the linear reference frame for the
///     first rigid body.
///
/// @return {Pointer} The pointer to the created btGeneric6DofConstraint.
YYEXPORT void btGeneric6DofConstraint_create2(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto& rigidBodyA =  *(btRigidBody*)YYGetPtr(arg, 0);
	auto& rigidBodyB =  *(btRigidBody*)YYGetPtr(arg, 1);
	auto& frameInA =  *(btTransform*)YYGetPtr(arg, 2);
	auto& frameInB =  *(btTransform*)YYGetPtr(arg, 3);
	bool useLinearReferenceFrameA = YYGetBool(arg, 4);
	result.kind = VALUE_PTR;
	result.ptr = new btGeneric6DofConstraint(
		rigidBodyA, rigidBodyB, frameInA, frameInB, useLinearReferenceFrameA);
}

/// @func btGeneric6DofConstraint_destroy(generic6DofConstraint)
///
/// @desc
/// Destroys the btGeneric6DofConstraint.
///
/// @param {Pointer} generic6DofConstraint
///     The pointer to the btGeneric6DofConstraint to be destroyed.
YYEXPORT void btGeneric6DofConstraint_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btGeneric6DofConstraint*)YYGetPtr(arg, 0);
}

/// @func btGeneric6DofConstraint_calculateTransforms(generic6DofConstraint[, transA, transB])
///
/// @desc
/// Calculates the transforms for the constraint.
/// Optionally, you can provide the transforms for the involved bodies.
///
/// @param {Pointer} generic6DofConstraint
///     The pointer to the btGeneric6DofConstraint.
/// @param {Pointer} [transA]
///     The transform associated with the first rigid body (btTransform type).
/// @param {Pointer} [transB]
///     The transform associated with the second rigid body (btTransform type).
YYEXPORT void btGeneric6DofConstraint_calculateTransforms(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofConstraint = (btGeneric6DofConstraint*)YYGetPtr(arg, 0);
	if (argc == 3)
	{
		auto& transA =  *(btTransform*)YYGetPtr(arg, 1);
		auto& transB =  *(btTransform*)YYGetPtr(arg, 2);
		generic6DofConstraint->calculateTransforms(transA, transB);
	}
	else
	{
		generic6DofConstraint->calculateTransforms();
	}
}

/// @func btGeneric6DofConstraint_getCalculatedTransformA(generic6DofConstraint)
///
/// @desc
/// Gets the calculated transform of the first rigid body in the constraint.
///
/// @param {Pointer} generic6DofConstraint
///     The pointer to the btGeneric6DofConstraint.
///
/// @return {Pointer} The pointer to the calculated transform (btTransform) of
/// the first rigid body.
YYEXPORT void btGeneric6DofConstraint_getCalculatedTransformA(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofConstraint = (btGeneric6DofConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = const_cast<btTransform*>(&generic6DofConstraint->getCalculatedTransformA());
}

/// @func btGeneric6DofConstraint_getCalculatedTransformB(generic6DofConstraint)
///
/// @desc
/// Gets the calculated transform of the second rigid body in the constraint.
///
/// @param {Pointer} generic6DofConstraint
///     The pointer to the btGeneric6DofConstraint.
///
/// @return {Pointer} The pointer to the calculated transform (btTransform) of
/// the second rigid body.
YYEXPORT void btGeneric6DofConstraint_getCalculatedTransformB(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofConstraint = (btGeneric6DofConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = const_cast<btTransform*>(&generic6DofConstraint->getCalculatedTransformB());
}

/// @func btGeneric6DofConstraint_getFrameOffsetA(generic6DofConstraint)
///
/// @desc
/// Gets the frame offset associated with the first rigid body in the constraint.
///
/// @param {Pointer} generic6DofConstraint
///     The pointer to the btGeneric6DofConstraint.
///
/// @return {Pointer} The pointer to the frame offset (btTransform) of the first
/// rigid body.
YYEXPORT void btGeneric6DofConstraint_getFrameOffsetA(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofConstraint = (btGeneric6DofConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = const_cast<btTransform*>(&generic6DofConstraint->getFrameOffsetA());
}

/// @func btGeneric6DofConstraint_getFrameOffsetB(generic6DofConstraint)
///
/// @desc
/// Gets the frame offset associated with the second rigid body in the
/// constraint.
///
/// @param {Pointer} generic6DofConstraint
///     The pointer to the btGeneric6DofConstraint.
///
/// @return {Pointer} The pointer to the frame offset (btTransform) of the
/// second rigid body.
YYEXPORT void btGeneric6DofConstraint_getFrameOffsetB(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofConstraint = (btGeneric6DofConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = const_cast<btTransform*>(&generic6DofConstraint->getFrameOffsetB());
}

// Note: Skipped btGeneric6DofConstraint::buildJacobian
// Note: Skipped btGeneric6DofConstraint::getInfo1
// Note: Skipped btGeneric6DofConstraint::getInfo1NonVirtual
// Note: Skipped btGeneric6DofConstraint::getInfo2
// Note: Skipped btGeneric6DofConstraint::getInfo2NonVirtual

/// @func btGeneric6DofConstraint_updateRHS(generic6DofConstraint, timeStep)
///
/// @desc
/// Updates the right-hand side (RHS) of the equations for a generic
/// 6-degree-of-freedom constraint, considering the provided time step.
///
/// @param {Pointer} generic6DofConstraint
///     A pointer to the btGeneric6DofConstraint instance.
/// @param {Real} timeStep
///     The time step used to update the constraint equations.
YYEXPORT void btGeneric6DofConstraint_updateRHS(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofConstraint = (btGeneric6DofConstraint*)YYGetPtr(arg, 0);
	double timeStep = YYGetReal(arg, 1);
	generic6DofConstraint->updateRHS(timeStep);
}

/// @func btGeneric6DofConstraint_getAxis(generic6DofConstraint, axisIndex, outVector3)
///
/// @desc
/// Retrieves the axis associated with the specified index from the generic
/// 6-degree-of-freedom constraint.
///
/// @param {Pointer} generic6DofConstraint
///     A pointer to the btGeneric6DofConstraint instance.
/// @param {Real} axisIndex
///     The index of the axis to retrieve.
/// @param {Pointer} outVector3
///     A pointer to the btVector3 where the retrieved axis will be stored.
///     The retrieved axis is represented as a 3D vector (x, y, z).
YYEXPORT void btGeneric6DofConstraint_getAxis(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofConstraint = (btGeneric6DofConstraint*)YYGetPtr(arg, 0);
	int axisIndex = YYGetInt32(arg, 1);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 2);
	CopyVector3(generic6DofConstraint->getAxis(axisIndex), outVector3);
}

/// @func btGeneric6DofConstraint_getAngle(generic6DofConstraint, axisIndex)
///
/// @desc
/// Retrieves the angle for the specified axis index from the generic 6-degree-
/// of-freedom constraint.
///
/// @param {Pointer} generic6DofConstraint
///     Pointer to the btGeneric6DofConstraint instance.
/// @param {Real} axisIndex
///     Index of the axis for which the angle is to be retrieved.
///
/// @return {Real} The angle (in radians) associated with the specified axis
/// index.
YYEXPORT void btGeneric6DofConstraint_getAngle(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofConstraint = (btGeneric6DofConstraint*)YYGetPtr(arg, 0);
	int axisIndex = YYGetInt32(arg, 1);
	result.kind = VALUE_REAL;
	result.val = generic6DofConstraint->getAngle(axisIndex);
}

/// @func btGeneric6DofConstraint_getRelativePivotPosition(generic6DofConstraint, axisIndex)
///
/// @desc
/// Retrieves the relative pivot position for the specified axis index from the
/// generic 6-degree-of-freedom constraint.
///
/// @param {Pointer} generic6DofConstraint
///     Pointer to the btGeneric6DofConstraint instance.
///
/// @param {Real} axisIndex
///     Index of the axis for which the relative pivot position is to be
///     retrieved.
///
/// @return {Real} The relative pivot position associated with the specified
/// axis index.
YYEXPORT void btGeneric6DofConstraint_getRelativePivotPosition(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofConstraint = (btGeneric6DofConstraint*)YYGetPtr(arg, 0);
	int axisIndex = YYGetInt32(arg, 1);
	result.kind = VALUE_REAL;
	result.val = generic6DofConstraint->getRelativePivotPosition(axisIndex);
}

/// @func btGeneric6DofConstraint_setFrames(generic6DofConstraint, frameA, frameB)
///
/// @desc
/// Sets the frames of the generic 6-degree-of-freedom constraint based on the
/// provided btTransform instances for each rigid body involved.
///
/// @param {Pointer} generic6DofConstraint
///     Pointer to the btGeneric6DofConstraint instance.
/// @param {Pointer} frameA
///     Pointer to the btTransform representing the frame associated with the
///     first rigid body.
/// @param {Pointer} frameB
///     Pointer to the btTransform representing the frame associated with the
///     second rigid body.
YYEXPORT void btGeneric6DofConstraint_setFrames(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofConstraint = (btGeneric6DofConstraint*)YYGetPtr(arg, 0);
	auto& frameA =  *(btTransform*)YYGetPtr(arg, 1);
	auto& frameB =  *(btTransform*)YYGetPtr(arg, 2);
	generic6DofConstraint->setFrames(frameA, frameB);
}

/// @func btGeneric6DofConstraint_testAngularLimitMotor(generic6DofConstraint, axisIndex)
///
/// @desc
/// Tests the angular limit motor for the specified axis index in the generic 
/// 6-degree-of-freedom constraint.
///
/// @param {Pointer} generic6DofConstraint
///     Pointer to the btGeneric6DofConstraint instance.
/// @param {Real} axisIndex
///     Index of the axis for which the angular limit motor is to be tested.
/// @return {Bool}
///     Returns true if the angular limit motor is active for the specified axis,
///     false otherwise.
YYEXPORT void btGeneric6DofConstraint_testAngularLimitMotor(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofConstraint = (btGeneric6DofConstraint*)YYGetPtr(arg, 0);
	int axisIndex = YYGetInt32(arg, 1);
	result.kind = VALUE_BOOL;
	result.val = generic6DofConstraint->testAngularLimitMotor(axisIndex);
}

/// @func btGeneric6DofConstraint_setLinearLowerLimit(generic6DofConstraint, linearLower)
///
/// @desc
/// Sets the lower limit for linear motion in the generic 6-degree-of-freedom 
/// constraint for all axes.
///
/// @param {Pointer} generic6DofConstraint
///     Pointer to the btGeneric6DofConstraint instance.
/// @param {Pointer} linearLower
///     Pointer to the btVector3 representing the lower linear limits.
YYEXPORT void btGeneric6DofConstraint_setLinearLowerLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofConstraint = (btGeneric6DofConstraint*)YYGetPtr(arg, 0);
	auto& linearLower =  *(btVector3*)YYGetPtr(arg, 1);
	generic6DofConstraint->setLinearLowerLimit(linearLower);
}

/// @func btGeneric6DofConstraint_getLinearLowerLimit(generic6DofConstraint, outVector3)
///
/// @desc
/// Retrieves the lower limit for linear motion in the generic 6-degree-of-freedom 
/// constraint for all axes.
///
/// @param {Pointer} generic6DofConstraint
///     Pointer to the btGeneric6DofConstraint instance.
/// @param {Pointer} outVector3
///     Pointer to the btVector3 where the retrieved lower linear limits will be
///     stored.
YYEXPORT void btGeneric6DofConstraint_getLinearLowerLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofConstraint = (btGeneric6DofConstraint*)YYGetPtr(arg, 0);
	auto& outVector3 =  *(btVector3*)YYGetPtr(arg, 1);
	generic6DofConstraint->getLinearLowerLimit(outVector3);
}

/// @func btGeneric6DofConstraint_setLinearUpperLimit(generic6DofConstraint, linearUpper)
///
/// @desc
/// Sets the upper limit for linear motion in the generic 6-degree-of-freedom 
/// constraint for all axes.
///
/// @param {Pointer} generic6DofConstraint
///     Pointer to the btGeneric6DofConstraint instance.
/// @param {Pointer} linearUpper
///     Pointer to the btVector3 representing the upper linear limits.
YYEXPORT void btGeneric6DofConstraint_setLinearUpperLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofConstraint = (btGeneric6DofConstraint*)YYGetPtr(arg, 0);
	auto& linearLower =  *(btVector3*)YYGetPtr(arg, 1);
	generic6DofConstraint->setLinearUpperLimit(linearLower);
}

/// @func btGeneric6DofConstraint_getLinearUpperLimit(generic6DofConstraint, outVector3)
///
/// @desc
/// Retrieves the upper limit for linear motion in the generic 6-degree-of-
/// freedom constraint for all axes.
///
/// @param {Pointer} generic6DofConstraint
///     Pointer to the btGeneric6DofConstraint instance.
/// @param {Pointer} outVector3
///     Pointer to the btVector3 where the retrieved upper linear limits will be
///     stored.
YYEXPORT void btGeneric6DofConstraint_getLinearUpperLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofConstraint = (btGeneric6DofConstraint*)YYGetPtr(arg, 0);
	auto& outVector3 =  *(btVector3*)YYGetPtr(arg, 1);
	generic6DofConstraint->getLinearUpperLimit(outVector3);
}

/// @func btGeneric6DofConstraint_getLinearUpperLimit(generic6DofConstraint, outVector3)
///
/// @desc
/// Retrieves the upper limit for linear motion in the generic 6-degree-of-
/// freedom constraint for all axes.
///
/// @param {Pointer} generic6DofConstraint
///     Pointer to the btGeneric6DofConstraint instance.
/// @param {Pointer} outVector3
///     Pointer to the btVector3 where the retrieved upper linear limits will be
/// stored.
YYEXPORT void btGeneric6DofConstraint_setAngularLowerLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofConstraint = (btGeneric6DofConstraint*)YYGetPtr(arg, 0);
	auto& angularLower =  *(btVector3*)YYGetPtr(arg, 1);
	generic6DofConstraint->setAngularLowerLimit(angularLower);
}

/// @func btGeneric6DofConstraint_getAngularLowerLimit(generic6DofConstraint, outVector3)
///
/// @desc
/// Retrieves the lower limit for angular motion in the generic
/// 6-degree-of-freedom constraint for all rotational axes.
///
/// @param {Pointer} generic6DofConstraint
///     Pointer to the btGeneric6DofConstraint instance.
/// @param {Pointer} outVector3
///     Pointer to the btVector3 where the retrieved lower angular limits will
///     be stored.
YYEXPORT void btGeneric6DofConstraint_getAngularLowerLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofConstraint = (btGeneric6DofConstraint*)YYGetPtr(arg, 0);
	auto& outVector3 =  *(btVector3*)YYGetPtr(arg, 1);
	generic6DofConstraint->getAngularLowerLimit(outVector3);
}

/// @func btGeneric6DofConstraint_setAngularUpperLimit(generic6DofConstraint, angularUpper)
///
/// @desc
/// Sets the upper limit for angular motion in the generic 6-degree-of-freedom 
/// constraint for all rotational axes.
///
/// @param {Pointer} generic6DofConstraint
///     Pointer to the btGeneric6DofConstraint instance.
/// @param {Pointer} angularUpper
///     Pointer to the btVector3 representing the upper angular limits.
YYEXPORT void btGeneric6DofConstraint_setAngularUpperLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofConstraint = (btGeneric6DofConstraint*)YYGetPtr(arg, 0);
	auto& angularUpper =  *(btVector3*)YYGetPtr(arg, 1);
	generic6DofConstraint->setAngularUpperLimit(angularUpper);
}

/// @func btGeneric6DofConstraint_getAngularUpperLimit(generic6DofConstraint, outVector3)
///
/// @desc
/// Retrieves the upper limit for angular motion in the generic 6-degree-of-
/// freedom constraint for all rotational axes.
///
/// @param {Pointer} generic6DofConstraint
///     Pointer to the btGeneric6DofConstraint instance.
/// @param {Pointer} outVector3
///     Pointer to the btVector3 where the retrieved upper angular limits will
///     be stored.
YYEXPORT void btGeneric6DofConstraint_getAngularUpperLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofConstraint = (btGeneric6DofConstraint*)YYGetPtr(arg, 0);
	auto& outVector3 =  *(btVector3*)YYGetPtr(arg, 1);
	generic6DofConstraint->getAngularUpperLimit(outVector3);
}

/// @func btGeneric6DofConstraint_getRotationalLimitMotor(generic6DofConstraint, index)
///
/// @desc
/// Gets the rotational limit motor for the specified axis index in the generic 
/// 6-degree-of-freedom constraint.
///
/// @param {Pointer} generic6DofConstraint
///     Pointer to the btGeneric6DofConstraint instance.
/// @param {Real} index
///     Index of the axis for which the rotational limit motor is to be
///     retrieved.
///
/// @return {Pointer} Pointer to the btRotationalLimitMotor for the specified
/// axis index.
YYEXPORT void btGeneric6DofConstraint_getRotationalLimitMotor(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofConstraint = (btGeneric6DofConstraint*)YYGetPtr(arg, 0);
	int index = YYGetInt32(arg, 1);
	result.kind = VALUE_PTR;
	result.ptr = (btRotationalLimitMotor*)generic6DofConstraint->getRotationalLimitMotor(index);
}

/// @func btGeneric6DofConstraint_getTranslationalLimitMotor(generic6DofConstraint)
///
/// @desc
/// Gets the translational limit motor associated with the generic 6-degree-of-
/// freedom constraint.
///
/// @param {Pointer} generic6DofConstraint
///     Pointer to the btGeneric6DofConstraint instance.
///
/// @return {Pointer} Pointer to the btTranslationalLimitMotor associated with
/// the constraint.
YYEXPORT void btGeneric6DofConstraint_getTranslationalLimitMotor(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofConstraint = (btGeneric6DofConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = (btRotationalLimitMotor*)generic6DofConstraint->getTranslationalLimitMotor();
}

/// @func btGeneric6DofConstraint_setLimit(generic6DofConstraint, axis, low, high)
///
/// @desc
/// Sets the limits for a specific axis in the generic 6-degree-of-freedom
/// constraint.
///
/// @param {Pointer} generic6DofConstraint
///     Pointer to the btGeneric6DofConstraint instance.
/// @param {Real} axis
///     Index of the axis for which the limits are to be set.
/// @param {Real} low
///     The lower limit for the specified axis.
/// @param {Real} high
///     The upper limit for the specified axis.
YYEXPORT void btGeneric6DofConstraint_setLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofConstraint = (btGeneric6DofConstraint*)YYGetPtr(arg, 0);
	int axis = YYGetInt32(arg, 1);
	double low = YYGetReal(arg, 2);
	double high = YYGetReal(arg, 3);
	generic6DofConstraint->setLimit(axis, low, high);
}

/// @func btGeneric6DofConstraint_isLimited(generic6DofConstraint, limitIndex)
///
/// @desc
/// Checks if the specified limit (rotational or translational) is active in the
/// generic 6-degree-of-freedom constraint.
///
/// @param {Pointer} generic6DofConstraint
///     Pointer to the btGeneric6DofConstraint instance.
/// @param {Real} limitIndex
///     Index of the limit to be checked (for rotational or translational).
///
/// @return {Bool} Returns true if the specified limit is active, false otherwise.
YYEXPORT void btGeneric6DofConstraint_isLimited(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofConstraint = (btGeneric6DofConstraint*)YYGetPtr(arg, 0);
	int limitIndex = YYGetInt32(arg, 1);
	result.kind = VALUE_BOOL;
	result.val = generic6DofConstraint->isLimited(limitIndex);
}

/// @func btGeneric6DofConstraint_calcAnchorPos(generic6DofConstraint)
///
/// @desc
/// Calculates the anchor position for the generic 6-degree-of-freedom
/// constraint.
///
/// @param {Pointer} generic6DofConstraint
///     Pointer to the btGeneric6DofConstraint instance.
YYEXPORT void btGeneric6DofConstraint_calcAnchorPos(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofConstraint = (btGeneric6DofConstraint*)YYGetPtr(arg, 0);
	generic6DofConstraint->calcAnchorPos();
}

// Note: Skipped btGeneric6DofConstraint::get_limit_motor_info2

/// @func btGeneric6DofConstraint_getUseFrameOffset(generic6DofConstraint)
///
/// @desc
/// Checks if the frame offset is being used in the generic 6-degree-of-freedom 
/// constraint.
///
/// @param {Pointer} generic6DofConstraint
///     Pointer to the btGeneric6DofConstraint instance.
///
/// @return {Bool} Returns true if the frame offset is being used, false otherwise.
YYEXPORT void btGeneric6DofConstraint_getUseFrameOffset(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofConstraint = (btGeneric6DofConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = generic6DofConstraint->getUseFrameOffset();
}

/// @func btGeneric6DofConstraint_setUseFrameOffset(generic6DofConstraint, frameOffsetOnOff)
///
/// @desc
/// Sets whether to use the frame offset in the generic 6-degree-of-freedom 
/// constraint.
///
/// @param {Pointer} generic6DofConstraint
///     Pointer to the btGeneric6DofConstraint instance.
///
/// @param {Bool} frameOffsetOnOff A boolean indicating whether to use the frame
/// offset (true) or not (false).
YYEXPORT void btGeneric6DofConstraint_setUseFrameOffset(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofConstraint = (btGeneric6DofConstraint*)YYGetPtr(arg, 0);
	bool frameOffsetOnOff = YYGetBool(arg, 1);
	generic6DofConstraint->setUseFrameOffset(frameOffsetOnOff);
}

/// @func btGeneric6DofConstraint_getUseLinearReferenceFrameA(generic6DofConstraint)
///
/// @desc
/// Checks if the linear reference frame A is being used in the generic 
/// 6-degree-of-freedom constraint.
///
/// @param {Pointer} generic6DofConstraint
///     Pointer to the btGeneric6DofConstraint instance.
///
/// @return {Bool} Returns true if the linear reference frame A is being used,
/// false otherwise.
YYEXPORT void btGeneric6DofConstraint_getUseLinearReferenceFrameA(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofConstraint = (btGeneric6DofConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = generic6DofConstraint->getUseLinearReferenceFrameA();
}

/// @func btGeneric6DofConstraint_setUseLinearReferenceFrameA(generic6DofConstraint, linearReferenceFrameA)
///
/// @desc
/// Sets whether to use the linear reference frame A in the generic 6-degree-of-
/// freedom  constraint.
///
/// @param {Pointer} generic6DofConstraint
///     Pointer to the btGeneric6DofConstraint instance.
/// @param {Bool} linearReferenceFrameA
///     A boolean indicating whether to use the linear reference frame A (true)
/// or not (false).
YYEXPORT void btGeneric6DofConstraint_setUseLinearReferenceFrameA(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofConstraint = (btGeneric6DofConstraint*)YYGetPtr(arg, 0);
	bool linearReferenceFrameA = YYGetBool(arg, 1);
	generic6DofConstraint->setUseLinearReferenceFrameA(linearReferenceFrameA);
}

// Note: Skipped btGeneric6DofConstraint::setParam
// Note: Skipped btGeneric6DofConstraint::getParam

/// @func btGeneric6DofConstraint_setAxis(generic6DofConstraint, axis1, axis2)
///
/// @desc
/// Sets the axis vectors for the generic 6-degree-of-freedom constraint.
///
/// @param {Pointer} generic6DofConstraint
///     Pointer to the btGeneric6DofConstraint instance.
/// @param {Pointer} axis1
///     Pointer to the btVector3 representing the first axis vector.
/// @param {Pointer} axis2
///     Pointer to the btVector3 representing the second axis vector.
YYEXPORT void btGeneric6DofConstraint_setAxis(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofConstraint = (btGeneric6DofConstraint*)YYGetPtr(arg, 0);
	auto& axis1 =  *(btVector3*)YYGetPtr(arg, 1);
	auto& axis2 =  *(btVector3*)YYGetPtr(arg, 2);
	generic6DofConstraint->setAxis(axis1, axis2);
}

/// @func btGeneric6DofConstraint_getFlags(generic6DofConstraint)
///
/// @desc
/// Gets the flags associated with the generic 6-degree-of-freedom constraint.
///
/// @param {Pointer} generic6DofConstraint
///     Pointer to the btGeneric6DofConstraint instance.
///
/// @return {Real} The flags associated with the constraint.
YYEXPORT void btGeneric6DofConstraint_getFlags(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofConstraint = (btGeneric6DofConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.val = generic6DofConstraint->getFlags();
}

// Note: Skipped btGeneric6DofConstraint::calculateSerializeBufferSize
// Note: Skipped btGeneric6DofConstraint::serialize

////////////////////////////////////////////////////////////////////////////////
//
// Note: Skipped btGeneric6DofConstraintData
//

////////////////////////////////////////////////////////////////////////////////
//
// Note: Skipped btGeneric6DofConstraintDoubleData2
//
