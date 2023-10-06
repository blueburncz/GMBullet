#include <GMBullet.hpp>

////////////////////////////////////////////////////////////////////////////////
//
// btJointFeedback
//

/// @func btJointFeedback_create()
///
/// @desc
///
/// @return {Pointer}
YYEXPORT void btJointFeedback_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	result.kind = VALUE_PTR;
	result.ptr = new btJointFeedback();
}

/// @func btJointFeedback_destroy(jointFeedback)
///
/// @desc
///
/// @param {Pointer} jointFeedback
YYEXPORT void btJointFeedback_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btJointFeedback*)YYGetPtr(arg, 0);
}

/// @func btJointFeedback_setAppliedForceBodyA(jointFeedback, appliedForceBodyA)
///
/// @desc
///
/// @param {Pointer} jointFeedback
/// @param {Real} appliedForceBodyA
YYEXPORT void btJoinFeedback_setAppliedForceBodyA(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto jointFeedback = (btJointFeedback*)YYGetPtr(arg, 0);
	btVector3 appliedForceBodyA = *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(appliedForceBodyA, &jointFeedback->m_appliedForceBodyA);
}

/// @func btJointFeedback_getAppliedForceBodyA(jointFeedback, outVector3)
///
/// @desc
///
/// @param {Pointer} jointFeedback
/// @param {Pointer} outVector3
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
///
/// @param {Pointer} jointFeedback
/// @param {Real} appliedTorqueBodyA
YYEXPORT void btJoinFeedback_setAppliedTorqueBodyA(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto jointFeedback = (btJointFeedback*)YYGetPtr(arg, 0);
	btVector3 appliedTorqueBodyA = *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(appliedTorqueBodyA, &jointFeedback->m_appliedTorqueBodyA);
}

/// @func btJointFeedback_getAppliedTorqueBodyA(jointFeedback, outVector3)
///
/// @desc
///
/// @param {Pointer} jointFeedback
/// @param {Pointer} outVector3
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
///
/// @param {Pointer} jointFeedback
/// @param {Real} appliedForceBodyB
YYEXPORT void btJoinFeedback_setAppliedForceBodyB(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto jointFeedback = (btJointFeedback*)YYGetPtr(arg, 0);
	btVector3 appliedForceBodyB = *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(appliedForceBodyB, &jointFeedback->m_appliedForceBodyB);
}

/// @func btJointFeedback_getAppliedForceBodyB(jointFeedback, outVector3)
///
/// @desc
///
/// @param {Pointer} jointFeedback
/// @param {Pointer} outVector3
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
///
/// @param {Pointer} jointFeedback
/// @param {Real} appliedTorqueBodyB
YYEXPORT void btJoinFeedback_setAppliedTorqueBodyB(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto jointFeedback = (btJointFeedback*)YYGetPtr(arg, 0);
	btVector3 appliedTorqueBodyB = *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(appliedTorqueBodyB, &jointFeedback->m_appliedTorqueBodyB);
}

/// @func btJointFeedback_getAppliedTorqueBodyB(jointFeedback, outVector3)
///
/// @desc
///
/// @param {Pointer} jointFeedback
/// @param {Pointer} outVector3
YYEXPORT void btJointFeedback_getAppliedTorqueBodyB(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto jointFeedback = (btJointFeedback*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(jointFeedback->m_appliedTorqueBodyB, outVector3);
}

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
///
/// @param {Pointer} typedConstraint
///
/// @return {Real}
YYEXPORT void btTypedConstraint_getOverrideNumSolverIterations(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto typedConstraint = (btTypedConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.val = typedConstraint->getOverrideNumSolverIterations();
}

/// @func btTypedConstraint_setOverrideNumSolverIterations(typedConstraint, overrideNumIterations)
///
/// @desc
///
/// @param {Pointer} typedConstraint
/// @param {Real} overrideNumIterations
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
///
/// @param {Pointer} typedConstraint
///
/// @return {Real}
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
///
/// @param {Pointer} typedConstraint
/// @param {Real} threshold
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
///
/// @param {Pointer} typedConstraint
///
/// @return {Bool}
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
///
/// @param {Pointer} typedConstraint
/// @param {Bool} enabled
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
///
/// @param {Pointer} typedConstraint
///
/// @return {Real}
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
///
/// @param {Pointer} typedConstraint
///
/// @return {Real}
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
///
/// @param {Pointer} typedConstraint
///
/// @return {Real}
YYEXPORT void btTypedConstraint_getUserConstraintType(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto typedConstraint = (btTypedConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.val = typedConstraint->getUserConstraintType();
}

/// @func btTypedConstraint_setUserConstraintType(typedConstraint, userConstraintType)
///
/// @desc
///
/// @param {Pointer} typedConstraint
/// @param {Real} userConstraintType
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
///
/// @param {Pointer} typedConstraint
/// @param {Real} uid
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
///
/// @param {Pointer} typedConstraint
///
/// @return {Real}
YYEXPORT void btTypedConstraint_getUserConstraintId(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto typedConstraint = (btTypedConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.val = typedConstraint->getUserConstraintId();
}

/// @func btTypedConstraint_setUserConstraintPtr(typedConstraint, ptr)
///
/// @desc
///
/// @param {Pointer} typedConstraint
/// @param {Pointer} ptr
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
///
/// @param {Pointer} typedConstraint
///
/// @return {Pointer}
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
///
/// @param {Pointer} typedConstraint
/// @param {Pointer} jointFeedback
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
///
/// @param {Pointer} typedConstraint
///
/// @return {Pointer}
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
///
/// @param {Pointer} typedConstraint
///
/// @return {Real}
YYEXPORT void btTypedConstraint_getUid(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto typedConstraint = (btTypedConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.val = typedConstraint->getUid();
}

/// @func btTypedConstraint_needsFeedback(typedConstraint)
///
/// @desc
///
/// @param {Pointer} typedConstraint
///
/// @return {Bool}
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
///
/// @param {Pointer} typedConstraint
/// @param {Bool} needsFeedback
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
///
/// @param {Pointer} typedConstraint
///
/// @param {Real}
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
///
/// @param {Pointer} typedConstraint
///
/// @param {Real}
YYEXPORT void btTypedConstraint_getConstraintType(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto typedConstraint = (btTypedConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.val = (int)typedConstraint->getConstraintType();
}

// Note: Skipped btTypedConstraint::setDbgDrawSize
// Note: Skipped btTypedConstraint::getDbgDrawSize

/// @func btTypedConstraint_setParam(typedConstraint, num, value[, axis])
///
/// @desc
///
/// @param {Pointer} typedConstraint
/// @param {Real} num
/// @param {Real} value
/// @param {Real} [axis]
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
///
/// @param {Pointer} typedConstraint
/// @param {Real} num
/// @param {Real} [axis]
///
/// @return {Real}
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
///
/// @param {Real} angleInRadians
/// @param {Real} angleLowerLimitInRadian
/// @param {Real} angleUpperLimitInRadians
///
/// @return {Real}
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
///
/// @return {Pointer}
YYEXPORT void btAngularLimit_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	result.kind = VALUE_PTR;
	result.ptr = new btAngularLimit();
}

/// @func btAngularLimit_destroy(angularLimit)
///
/// @desc
///
/// @param {Pointer} angularLimit
YYEXPORT void btAngularLimit_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btAngularLimit*)YYGetPtr(arg, 0);
}

/// @func btAngularLimit_set(angularLimit, low, high[, softness[, biasFactor[, relaxationFactor]]])
///
/// @desc
///
/// @param {Pointer} angularLimit
/// @param {Real} low
/// @param {Real} high
/// @param {Real} [softness]
/// @param {Real} [biasFactor]
/// @param {Real} [relaxationFactor]
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
///
/// @param {Pointer} angularLimit
/// @param {Real} angle
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
///
/// @param {Pointer} angularLimit
///
/// @return {Real}
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
///
/// @param {Pointer} angularLimit
///
/// @return {Real}
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
///
/// @param {Pointer} angularLimit
///
/// @return {Real}
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
///
/// @param {Pointer} angularLimit
///
/// @return {Real}
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
///
/// @param {Pointer} angularLimit
///
/// @return {Real}
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
///
/// @param {Pointer} angularLimit
///
/// @return {Real}
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
///
/// @param {Pointer} angularLimit
///
/// @return {Bool}
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
///
/// @param {Pointer} angularLimit
/// @param {Real} angle
///
/// @return {Real}
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
///
/// @param {Pointer} angularLimit
///
/// @return {Real}
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
///
/// @param {Pointer} angularLimit
///
/// @return {Real}
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
///
/// @param {Pointer} angularLimit
///
/// @return {Real}
YYEXPORT void btAngularLimit_getHigh(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto angularLimit = (btAngularLimit*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = angularLimit->getHigh();
}
