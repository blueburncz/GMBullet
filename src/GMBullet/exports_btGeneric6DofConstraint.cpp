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
///
/// @param {Pointer} rotationalLimitMotor
/// @param {Real} normalCFM
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
///
/// @param {Pointer} rotationalLimitMotor
///
/// @return {Real}
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
///
/// @param {Pointer} rotationalLimitMotor
/// @param {Real} stopERP
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
///
/// @param {Pointer} rotationalLimitMotor
///
/// @return {Real}
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
///
/// @param {Pointer} rotationalLimitMotor
/// @param {Real} stopCFM
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
///
/// @param {Pointer} rotationalLimitMotor
///
/// @return {Real}
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
///
/// @param {Pointer} rotationalLimitMotor
/// @param {Real} bounce
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
///
/// @param {Pointer} rotationalLimitMotor
///
/// @return {Real}
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
///
/// @param {Pointer} rotationalLimitMotor
/// @param {Bool} enableMotor
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
///
/// @param {Pointer} rotationalLimitMotor
///
/// @return {Bool}
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
///
/// @param {Pointer} rotationalLimitMotor
/// @param {Real} currentLimitError
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
///
/// @param {Pointer} rotationalLimitMotor
///
/// @return {Real}
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
///
/// @param {Pointer} rotationalLimitMotor
/// @param {Real} currentPosition
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
///
/// @param {Pointer} rotationalLimitMotor
///
/// @return {Real}
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
///
/// @param {Pointer} rotationalLimitMotor
/// @param {Real} currentLimit
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
///
/// @param {Pointer} rotationalLimitMotor
///
/// @return {Real}
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
///
/// @param {Pointer} rotationalLimitMotor
/// @param {Real} accumulatedImpulse
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
///
/// @param {Pointer} rotationalLimitMotor
///
/// @return {Real}
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
///
/// @param {Pointer} rotationalLimitMotor
///
/// @return {Bool}
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
///
/// @param {Pointer} rotationalLimitMotor
///
/// @return {Bool}
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
///
/// @param {Pointer} rotationalLimitMotor
/// @param {Real} testValue
///
/// @return {Real}
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
///
/// @param {Pointer} rotationalLimitMotor
/// @param {Real} timeStep
/// @param {Pointer} axis
/// @param {Real} jacDiagABInv
/// @param {Pointer} body0
/// @param {Pointer} body1
///
/// @return {Real}
YYEXPORT void btRotationalLimitMotor_solveAngularLimits(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rotationalLimitMotor = (btRotationalLimitMotor*)YYGetPtr(arg, 0);
	double timeStep = YYGetReal(arg, 1);
	btVector3& axis = *(btVector3*)YYGetPtr(arg, 2);
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

YYEXPORT void btTranslationalLimitMotor_setLowerLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	btVector3& lowerLimit = *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(lowerLimit, &translationalLimitMotor->m_lowerLimit);
}

/// @func btTranslationalLimitMotor_getLowerLimit(translationalLimitMotor, outVector3)
///
/// @desc
///
/// @param {Pointer} translationalLimitMotor
/// @param {Pointer} outVector3
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
///
/// @param {Pointer} translationalLimitMotor
/// @param {Pointer} upperLimit
YYEXPORT void btTranslationalLimitMotor_setUpperLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	btVector3& upperLimit = *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(upperLimit, &translationalLimitMotor->m_upperLimit);
}

/// @func btTranslationalLimitMotor_getUpperLimit(translationalLimitMotor, outVector3)
///
/// @desc
///
/// @param {Pointer} translationalLimitMotor
/// @param {Pointer} outVector3
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
///
/// @param {Pointer} translationalLimitMotor
/// @param {Pointer} accumulatedImpulse
YYEXPORT void btTranslationalLimitMotor_setAccumulatedImpulse(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	btVector3& accumulatedImpulse = *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(accumulatedImpulse, &translationalLimitMotor->m_accumulatedImpulse);
}

/// @func btTranslationalLimitMotor_getAccumulatedImpulse(translationalLimitMotor, outVector3)
///
/// @desc
///
/// @param {Pointer} translationalLimitMotor
/// @param {Pointer} outVector3
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
///
/// @param {Pointer} translationalLimitMotor
/// @param {Real} limitSoftness
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
///
/// @param {Pointer} translationalLimitMotor
///
/// @param {Real}
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
///
/// @param {Pointer} translationalLimitMotor
/// @param {Real} damping
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
///
/// @param {Pointer} translationalLimitMotor
///
/// @return {Real}
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
///
/// @param {Pointer} translationalLimitMotor
/// @param {Real} restitution
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
///
/// @param {Pointer} translationalLimitMotor
///
/// @param {Real}
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
///
/// @param {Pointer} translationalLimitMotor
/// @param {Pointer} normalCFM
YYEXPORT void btTranslationalLimitMotor_setNormalCFM(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	btVector3& normalCFM = *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(normalCFM, &translationalLimitMotor->m_normalCFM);
}

/// @func btTranslationalLimitMotor_getNormalCFM(translationalLimitMotor, outVector3)
///
/// @desc
///
/// @param {Pointer} translationalLimitMotor
/// @param {Pointer} outVector3
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
///
/// @param {Pointer} translationalLimitMotor
/// @param {Pointer} stopERP
YYEXPORT void btTranslationalLimitMotor_setStopERP(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	btVector3& stopERP = *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(stopERP, &translationalLimitMotor->m_stopERP);
}

/// @func btTranslationalLimitMotor_getStopERP(translationalLimitMotor, outVector3)
///
/// @desc
///
/// @param {Pointer} translationalLimitMotor
/// @param {Pointer} outVector3
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
///
/// @param {Pointer} translationalLimitMotor
/// @param {Pointer} stopCFM
YYEXPORT void btTranslationalLimitMotor_setStopCFM(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	btVector3& stopCFM = *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(stopCFM, &translationalLimitMotor->m_stopCFM);
}

/// @func btTranslationalLimitMotor_getStopCFM(translationalLimitMotor, outVector3)
///
/// @desc
///
/// @param {Pointer} translationalLimitMotor
/// @param {Pointer} outVector3
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
///
/// @param {Pointer} translationalLimitMotor
/// @param {Real} index
/// @param {Bool} enableMotor
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
///
/// @param {Pointer} translationalLimitMotor
/// @param {Real} index
///
/// @return {Bool}
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
///
/// @param {Pointer} translationalLimitMotor
/// @param {Pointer} targetVelocity
YYEXPORT void btTranslationalLimitMotor_setTargetVelocity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	btVector3& targetVelocity = *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(targetVelocity, &translationalLimitMotor->m_targetVelocity);
}

/// @func btTranslationalLimitMotor_getTargetVelocity(translationalLimitMotor, outVector3)
///
/// @desc
///
/// @param {Pointer} translationalLimitMotor
/// @param {Pointer} outVector3
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
///
/// @param {Pointer} translationalLimitMotor
/// @param {Pointer} maxMotorForce
YYEXPORT void btTranslationalLimitMotor_setMaxMotorForce(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	btVector3& maxMotorForce = *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(maxMotorForce, &translationalLimitMotor->m_maxMotorForce);
}

/// @func btTranslationalLimitMotor_getMaxMotorForce(translationalLimitMotor, outVector3)
///
/// @desc
///
/// @param {Pointer} translationalLimitMotor
/// @param {Pointer} outVector3
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
///
/// @param {Pointer} translationalLimitMotor
/// @param {Pointer} currentLimitError
YYEXPORT void btTranslationalLimitMotor_setCurrentLimitError(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	btVector3& currentLimitError = *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(currentLimitError, &translationalLimitMotor->m_currentLimitError);
}

/// @func btTranslationalLimitMotor_getCurrentLimitError(translationalLimitMotor, outVector3)
///
/// @desc
///
/// @param {Pointer} translationalLimitMotor
/// @param {Pointer} outVector3
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
///
/// @param {Pointer} translationalLimitMotor
/// @param {Pointer} currentLinearDiff
YYEXPORT void btTranslationalLimitMotor_setCurrentLinearDiff(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	btVector3& currentLinearDiff = *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(currentLinearDiff, &translationalLimitMotor->m_currentLinearDiff);
}

/// @func btTranslationalLimitMotor_getCurrentLinearDiff(translationalLimitMotor, outVector3)
///
/// @desc
///
/// @param {Pointer} translationalLimitMotor
/// @param {Pointer} outVector3
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
///
/// @param {Pointer} translationalLimitMotor
/// @param {Real} index
/// @param {Real} currentLimit
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
///
/// @param {Pointer} translationalLimitMotor
/// @param {Real} index
///
/// @return {Real}
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
///
/// @param {Pointer} translationalLimitMotor
/// @param {Real} limitIndex
///
/// @return {Bool}
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
///
/// @param {Pointer} translationalLimitMotor
/// @param {Real} limitIndex
///
/// @return {Bool}
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
///
/// @param {Pointer} translationalLimitMotor
/// @param {Real} limitIndex
/// @param {Real} testValue
///
/// @return {Real}
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
///
/// @param {Pointer} translationalLimitMotor
/// @param {Real} timeStep
/// @param {Real} jacDiagABInv
/// @param {Pointer} body1
/// @param {Pointer} pointInA
/// @param {Pointer} body2
/// @param {Pointer} pointInB
/// @param {Real} limitIndex
/// @param {Pointer} axisNormalOnA
/// @param {Pointer} anchorPos
///
/// @return {Real}
YYEXPORT void btTranslationalLimitMotor_solveLinearAxis(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto translationalLimitMotor = (btTranslationalLimitMotor*)YYGetPtr(arg, 0);
	double timeStep = YYGetReal(arg, 1);
	double jacDiagABInv = YYGetReal(arg, 2);
	btRigidBody& body1 = *(btRigidBody*)YYGetPtr(arg, 3);
	btVector3& pointInA = *(btVector3*)YYGetPtr(arg, 4);
	btRigidBody& body2 = *(btRigidBody*)YYGetPtr(arg, 5);
	btVector3& pointInB = *(btVector3*)YYGetPtr(arg, 6);
	int limitIndex = YYGetInt32(arg, 7);
	btVector3& axisNormalOnA = *(btVector3*)YYGetPtr(arg, 8);
	btVector3& anchorPos = *(btVector3*)YYGetPtr(arg, 9);
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
///
/// @param {Pointer} rigidBodyB
/// @param {Pointer} frameInB
/// @param {Bool} useLinearReferenceFrameB
///
/// @return {Pointer}
YYEXPORT void btGeneric6DofConstraint_create1(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	btRigidBody& rigidBodyB = *(btRigidBody*)YYGetPtr(arg, 0);
	btTransform& frameInB = *(btTransform*)YYGetPtr(arg, 1);
	bool useLinearReferenceFrameB = YYGetBool(arg, 2);
	result.kind = VALUE_PTR;
	result.ptr = new btGeneric6DofConstraint(
		rigidBodyB, frameInB, useLinearReferenceFrameB);
}

/// @func btGeneric6DofConstraint_create2(rigidBodyA, rigidBodyB, frameInA, frameInB, useLinearReferenceFrameA)
///
/// @desc
///
/// @param {Pointer} rigidBodyA
/// @param {Pointer} rigidBodyB
/// @param {Pointer} frameInA
/// @param {Pointer} frameInB
/// @param {Bool} useLinearReferenceFrameA
///
/// @return {Pointer}
YYEXPORT void btGeneric6DofConstraint_create2(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	btRigidBody& rigidBodyA = *(btRigidBody*)YYGetPtr(arg, 0);
	btRigidBody& rigidBodyB = *(btRigidBody*)YYGetPtr(arg, 1);
	btTransform& frameInA = *(btTransform*)YYGetPtr(arg, 2);
	btTransform& frameInB = *(btTransform*)YYGetPtr(arg, 3);
	bool useLinearReferenceFrameA = YYGetBool(arg, 4);
	result.kind = VALUE_PTR;
	result.ptr = new btGeneric6DofConstraint(
		rigidBodyA, rigidBodyB, frameInA, frameInB, useLinearReferenceFrameA);
}

/// @func btGeneric6DofConstraint_destroy(generic6DofConstraint)
///
/// @desc
///
/// @param {Pointer} generic6DofConstraint
YYEXPORT void btGeneric6DofConstraint_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btGeneric6DofConstraint*)YYGetPtr(arg, 0);
}

/// @func btGeneric6DofConstraint_calculateTransforms(generic6DofConstraint[, transA, transB])
///
/// @desc
///
/// @param {Pointer} generic6DofConstraint
/// @param {Pointer} [transA]
/// @param {Pointer} [transB]
YYEXPORT void btGeneric6DofConstraint_calculateTransforms(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofConstraint = (btGeneric6DofConstraint*)YYGetPtr(arg, 0);
	if (argc == 3)
	{
		btTransform& transA = *(btTransform*)YYGetPtr(arg, 1);
		btTransform& transB = *(btTransform*)YYGetPtr(arg, 2);
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
///
/// @param {Pointer} generic6DofConstraint
///
/// @return {Pointer}
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
///
/// @param {Pointer} generic6DofConstraint
///
/// @return {Pointer}
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
///
/// @param {Pointer} generic6DofConstraint
///
/// @return {Pointer}
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
///
/// @param {Pointer} generic6DofConstraint
///
/// @return {Pointer}
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
///
/// @param {Pointer} generic6DofConstraint
/// @param {Real} timeStep
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
///
/// @param {Pointer} generic6DofConstraint
/// @param {Real} axisIndex
/// @param {Pointer} outVector3
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
///
/// @param {Pointer} generic6DofConstraint
/// @param {Real} axisIndex
///
/// @return {Real}
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
///
/// @param {Pointer} generic6DofConstraint
/// @param {Real} axisIndex
///
/// @return {Real}
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
///
/// @param {Pointer} generic6DofConstraint
/// @param {Pointer} frameA
/// @param {Pointer} frameB
YYEXPORT void btGeneric6DofConstraint_setFrames(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofConstraint = (btGeneric6DofConstraint*)YYGetPtr(arg, 0);
	btTransform& frameA = *(btTransform*)YYGetPtr(arg, 1);
	btTransform& frameB = *(btTransform*)YYGetPtr(arg, 2);
	generic6DofConstraint->setFrames(frameA, frameB);
}

/// @func btGeneric6DofConstraint_testAngularLimitMotor(generic6DofConstraint, axisIndex)
///
/// @desc
///
/// @param {Pointer} generic6DofConstraint
/// @param {Real} axisIndex
///
/// @return {Bool}
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
///
/// @param {Pointer} generic6DofConstraint
/// @param {Pointer} linearLower
YYEXPORT void btGeneric6DofConstraint_setLinearLowerLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofConstraint = (btGeneric6DofConstraint*)YYGetPtr(arg, 0);
	btVector3& linearLower = *(btVector3*)YYGetPtr(arg, 1);
	generic6DofConstraint->setLinearLowerLimit(linearLower);
}

/// @func btGeneric6DofConstraint_getLinearLowerLimit(generic6DofConstraint, outVector3)
///
/// @desc
///
/// @param {Pointer} generic6DofConstraint
/// @param {Pointer} outVector3
YYEXPORT void btGeneric6DofConstraint_getLinearLowerLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofConstraint = (btGeneric6DofConstraint*)YYGetPtr(arg, 0);
	btVector3& outVector3 = *(btVector3*)YYGetPtr(arg, 1);
	generic6DofConstraint->getLinearLowerLimit(outVector3);
}

/// @func btGeneric6DofConstraint_setLinearUpperLimit(generic6DofConstraint, linearUpper)
///
/// @desc
///
/// @param {Pointer} generic6DofConstraint
/// @param {Pointer} linearUpper
YYEXPORT void btGeneric6DofConstraint_setLinearUpperLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofConstraint = (btGeneric6DofConstraint*)YYGetPtr(arg, 0);
	btVector3& linearLower = *(btVector3*)YYGetPtr(arg, 1);
	generic6DofConstraint->setLinearUpperLimit(linearLower);
}

/// @func btGeneric6DofConstraint_getLinearUpperLimit(generic6DofConstraint, outVector3)
///
/// @desc
///
/// @param {Pointer} generic6DofConstraint
/// @param {Pointer} outVector3
YYEXPORT void btGeneric6DofConstraint_getLinearUpperLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofConstraint = (btGeneric6DofConstraint*)YYGetPtr(arg, 0);
	btVector3& outVector3 = *(btVector3*)YYGetPtr(arg, 1);
	generic6DofConstraint->getLinearUpperLimit(outVector3);
}

/// @func btGeneric6DofConstraint_setAngularLowerLimit(generic6DofConstraint, angularLower)
///
/// @desc
///
/// @param {Pointer} generic6DofConstraint
/// @param {Pointer} angularLower
YYEXPORT void btGeneric6DofConstraint_setAngularLowerLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofConstraint = (btGeneric6DofConstraint*)YYGetPtr(arg, 0);
	btVector3& angularLower = *(btVector3*)YYGetPtr(arg, 1);
	generic6DofConstraint->setAngularLowerLimit(angularLower);
}

/// @func btGeneric6DofConstraint_getAngularLowerLimit(generic6DofConstraint, outVector3)
///
/// @desc
///
/// @param {Pointer} generic6DofConstraint
/// @param {Pointer} outVector3
YYEXPORT void btGeneric6DofConstraint_getAngularLowerLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofConstraint = (btGeneric6DofConstraint*)YYGetPtr(arg, 0);
	btVector3& outVector3 = *(btVector3*)YYGetPtr(arg, 1);
	generic6DofConstraint->getAngularLowerLimit(outVector3);
}

/// @func btGeneric6DofConstraint_setAngularUpperLimit(generic6DofConstraint, angularUpper)
///
/// @desc
///
/// @param {Pointer} generic6DofConstraint
/// @param {Pointer} angularUpper
YYEXPORT void btGeneric6DofConstraint_setAngularUpperLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofConstraint = (btGeneric6DofConstraint*)YYGetPtr(arg, 0);
	btVector3& angularUpper = *(btVector3*)YYGetPtr(arg, 1);
	generic6DofConstraint->setAngularUpperLimit(angularUpper);
}

/// @func btGeneric6DofConstraint_getAngularUpperLimit(generic6DofConstraint, outVector3)
///
/// @desc
///
/// @param {Pointer} generic6DofConstraint
/// @param {Pointer} outVector3
YYEXPORT void btGeneric6DofConstraint_getAngularUpperLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofConstraint = (btGeneric6DofConstraint*)YYGetPtr(arg, 0);
	btVector3& outVector3 = *(btVector3*)YYGetPtr(arg, 1);
	generic6DofConstraint->getAngularUpperLimit(outVector3);
}

/// @func btGeneric6DofConstraint_getRotationalLimitMotor(generic6DofConstraint, index)
///
/// @desc
///
/// @param {Pointer} generic6DofConstraint
/// @param {Real} index
///
/// @return {Pointer}
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
///
/// @param {Pointer} generic6DofConstraint
///
/// @return {Pointer}
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
///
/// @param {Pointer} generic6DofConstraint
/// @param {Real} axis
/// @param {Real} low
/// @param {Real} high
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
///
/// @param {Pointer} generic6DofConstraint
/// @param {Real} limitIndex
///
/// @return {Bool}
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
///
/// @param {Pointer} generic6DofConstraint
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
///
/// @param {Pointer} generic6DofConstraint
///
/// @return {Bool}
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
///
/// @param {Pointer} generic6DofConstraint
/// @param {Bool} frameOffsetOnOff
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
///
/// @param {Pointer} generic6DofConstraint
///
/// @return {Bool}
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
///
/// @param {Pointer} generic6DofConstraint
/// @param {Bool} linearReferenceFrameA
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
///
/// @param {Pointer} generic6DofConstraint
/// @param {Pointer} axis1
/// @param {Pointer} axis2
YYEXPORT void btGeneric6DofConstraint_setAxis(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto generic6DofConstraint = (btGeneric6DofConstraint*)YYGetPtr(arg, 0);
	btVector3& axis1 = *(btVector3*)YYGetPtr(arg, 1);
	btVector3& axis2 = *(btVector3*)YYGetPtr(arg, 2);
	generic6DofConstraint->setAxis(axis1, axis2);
}

/// @func btGeneric6DofConstraint_getFlags(generic6DofConstraint)
///
/// @desc
///
/// @param {Pointer} generic6DofConstraint
///
/// @return {Real}
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
