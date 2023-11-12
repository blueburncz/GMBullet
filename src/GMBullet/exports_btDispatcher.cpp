#include <GMBullet.hpp>

////////////////////////////////////////////////////////////////////////////////
//
// btDispatcherInfo
//

/// @func btDispatcherInfo_setTimeStep(dispatcherInfo, timeStep)
///
/// @desc
/// Sets the time step for dispatcher info.
///
/// @param {Pointer} dispatcherInfo
///     A pointer to the dispatcher info.
/// @param {Real} timeStep
///     The time step value to set.
YYEXPORT void btDispatcherInfo_setTimeStep(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dispatcherInfo = (btDispatcherInfo*)YYGetPtr(arg, 0);
	double timeStep = YYGetReal(arg, 1);
	dispatcherInfo->m_timeStep = timeStep;
}

/// @func btDispatcherInfo_getTimeStep(dispatcherInfo)
///
/// @desc
/// Retrieves the time step from dispatcher info.
///
/// @param {Pointer} dispatcherInfo
///     A pointer to the dispatcher info.
///
/// @return {Real} The time step value stored in the dispatcher info.
YYEXPORT void btDispatcherInfo_getTimeStep(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dispatcherInfo = (btDispatcherInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = dispatcherInfo->m_timeStep;
}

/// @func btDispatcherInfo_setStepCount(dispatcherInfo, stepCount)
///
/// @desc
/// Sets the step count for dispatcher info.
///
/// @param {Pointer} dispatcherInfo
///     A pointer to the dispatcher info.
/// @param {Real} stepCount
///     The step count value to set.
YYEXPORT void btDispatcherInfo_setStepCount(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dispatcherInfo = (btDispatcherInfo*)YYGetPtr(arg, 0);
	int stepCount = YYGetInt32(arg, 1);
	dispatcherInfo->m_stepCount = stepCount;
}

/// @func btDispatcherInfo_getStepCount(dispatcherInfo)
///
/// @desc
/// Retrieves the step count from dispatcher info.
///
/// @param {Pointer} dispatcherInfo
///     A pointer to the dispatcher info.
///
/// @return {Real} The step count value stored in the dispatcher info.
YYEXPORT void btDispatcherInfo_getStepCount(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dispatcherInfo = (btDispatcherInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.v32 = dispatcherInfo->m_stepCount;
}

/// @func btDispatcherInfo_setDispatchFunc(dispatcherInfo, dispatchFunc)
///
/// @desc
/// Sets the dispatch function for dispatcher info.
///
/// @param {Pointer} dispatcherInfo
///     A pointer to the dispatcher info.
/// @param {Real} dispatchFunc
///     The dispatch function value to set.
YYEXPORT void btDispatcherInfo_setDispatchFunc(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dispatcherInfo = (btDispatcherInfo*)YYGetPtr(arg, 0);
	int dispatchFunc = YYGetInt32(arg, 1);
	dispatcherInfo->m_dispatchFunc = dispatchFunc;
}

/// @func btDispatcherInfo_getDispatchFunc(dispatcherInfo)
///
/// @desc
/// Retrieves the dispatch function from dispatcher info.
///
/// @param {Pointer} dispatcherInfo
///     A pointer to the dispatcher info.
///
/// @return {Real} The dispatch function value stored in the dispatcher info.
YYEXPORT void btDispatcherInfo_getDispatchFunc(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dispatcherInfo = (btDispatcherInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.v32 = dispatcherInfo->m_dispatchFunc;
}

/// @func btDispatcherInfo_setTimeOfImpact(dispatcherInfo, timeOfImpact)
///
/// @desc
/// Sets the time of impact in dispatcher info.
///
/// @param {Pointer} dispatcherInfo
///     A pointer to the dispatcher info.
/// @param {Real} timeOfImpact
///     The time of impact value to set.
YYEXPORT void btDispatcherInfo_setTimeOfImpact(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dispatcherInfo = (btDispatcherInfo*)YYGetPtr(arg, 0);
	double timeOfImpact = YYGetReal(arg, 1);
	dispatcherInfo->m_timeOfImpact = timeOfImpact;
}

/// @func btDispatcherInfo_getTimeOfImpact(dispatcherInfo)
///
/// @desc
/// Retrieves the time of impact from dispatcher info.
///
/// @param {Pointer} dispatcherInfo
///     A pointer to the dispatcher info.
///
/// @return {Real} The time of impact value stored in the dispatcher info.
YYEXPORT void btDispatcherInfo_getTimeOfImpact(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dispatcherInfo = (btDispatcherInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = dispatcherInfo->m_timeOfImpact;
}

/// @func btDispatcherInfo_setUseContinuous(dispatcherInfo, useContinuous)
///
/// @desc
/// Sets whether continuous collision detection should be used in dispatcher
/// info.
///
/// @param {Pointer} dispatcherInfo
///     A pointer to the dispatcher info.
/// @param {Bool} useContinuous
///     A boolean indicating whether to use continuous collision detection.
YYEXPORT void btDispatcherInfo_setUseContinuous(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dispatcherInfo = (btDispatcherInfo*)YYGetPtr(arg, 0);
	bool useContinuous = YYGetBool(arg, 1);
	dispatcherInfo->m_useContinuous = useContinuous;
}

/// @func btDispatcherInfo_getUseContinuous(dispatcherInfo)
///
/// @desc
/// Retrieves whether continuous collision detection is set in dispatcher info.
///
/// @param {Pointer} dispatcherInfo
///     A pointer to the dispatcher info.
///
/// @return {Bool} A boolean indicating whether continuous collision detection
/// is used.
YYEXPORT void btDispatcherInfo_getUseContinuous(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dispatcherInfo = (btDispatcherInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = dispatcherInfo->m_useContinuous;
}

// Note: Skipped btDispatcherInfo::m_debugDraw

/// @func btDispatcherInfo_setEnableSatConvex(dispatcherInfo, enableSatConvex)
///
/// @desc
/// Sets whether SAT convex collision detection is enabled in dispatcher info.
///
/// @param {Pointer} dispatcherInfo
///     A pointer to the dispatcher info.
/// @param {Bool} enableSatConvex
///     A boolean indicating whether to enable SAT convex collision detection.
YYEXPORT void btDispatcherInfo_setEnableSatConvex(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dispatcherInfo = (btDispatcherInfo*)YYGetPtr(arg, 0);
	bool enableSatConvex = YYGetBool(arg, 1);
	dispatcherInfo->m_enableSatConvex = enableSatConvex;
}

/// @func btDispatcherInfo_getEnableSatConvex(dispatcherInfo)
///
/// @desc
/// Retrieves whether SAT convex collision detection is enabled in dispatcher
/// info.
///
/// @param {Pointer} dispatcherInfo
///     A pointer to the dispatcher info.
///
/// @return {Bool} A boolean indicating whether SAT convex collision detection
/// is enabled.
YYEXPORT void btDispatcherInfo_getEnableSatConvex(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dispatcherInfo = (btDispatcherInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = dispatcherInfo->m_enableSatConvex;
}

/// @func btDispatcherInfo_setEnableSPU(dispatcherInfo, enableSPU)
///
/// @desc
/// Sets whether SPU (Synergistic Processing Unit) is enabled in dispatcher info.
///
/// @param {Pointer} dispatcherInfo
///     A pointer to the dispatcher info.
/// @param {Bool} enableSPU
///     A boolean indicating whether to enable SPU.
YYEXPORT void btDispatcherInfo_setEnableSPU(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dispatcherInfo = (btDispatcherInfo*)YYGetPtr(arg, 0);
	bool enableSPU = YYGetBool(arg, 1);
	dispatcherInfo->m_enableSPU = enableSPU;
}

/// @func btDispatcherInfo_getEnableSPU(dispatcherInfo)
///
/// @desc
/// Retrieves whether SPU (Synergistic Processing Unit) is enabled in dispatcher
/// info.
///
/// @param {Pointer} dispatcherInfo
///     A pointer to the dispatcher info.
///
/// @return {Bool} A boolean indicating whether SPU is enabled.
YYEXPORT void btDispatcherInfo_getEnableSPU(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dispatcherInfo = (btDispatcherInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = dispatcherInfo->m_enableSPU;
}

/// @func btDispatcherInfo_setUseEpa(dispatcherInfo, useEpa)
///
/// @desc
/// Sets whether the Expanding Polytope Algorithm (EPA) is to be used in the
/// dispatcher info.
///
/// @param {Pointer} dispatcherInfo
///     A pointer to the dispatcher info.
/// @param {Bool} useEpa
///     A boolean indicating whether to use EPA.
YYEXPORT void btDispatcherInfo_setUseEpa(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dispatcherInfo = (btDispatcherInfo*)YYGetPtr(arg, 0);
	bool useEpa = YYGetBool(arg, 1);
	dispatcherInfo->m_useEpa = useEpa;
}

/// @func btDispatcherInfo_getUseEpa(dispatcherInfo)
///
/// @desc
/// Retrieves whether the Expanding Polytope Algorithm (EPA) is set to be used
/// in the dispatcher info.
///
/// @param {Pointer} dispatcherInfo
///     A pointer to the dispatcher info.
///
/// @return {Bool} A boolean indicating whether EPA is set to be used.
YYEXPORT void btDispatcherInfo_getUseEpa(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dispatcherInfo = (btDispatcherInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = dispatcherInfo->m_useEpa;
}

/// @func btDispatcherInfo_setAllowedCcdPenetration(dispatcherInfo, allowedCcdPenetration)
///
/// @desc
/// Sets the allowed Continuous Collision Detection (CCD) penetration depth in
/// the dispatcher info.
///
/// @param {Pointer} dispatcherInfo
///     A pointer to the dispatcher info.
/// @param {Real} allowedCcdPenetration
///     The allowed CCD penetration depth.
YYEXPORT void btDispatcherInfo_setAllowedCcdPenetration(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dispatcherInfo = (btDispatcherInfo*)YYGetPtr(arg, 0);
	double allowedCcdPenetration = YYGetReal(arg, 1);
	dispatcherInfo->m_allowedCcdPenetration = allowedCcdPenetration;
}

/// @func btDispatcherInfo_getAllowedCcdPenetration(dispatcherInfo)
///
/// @desc
/// Retrieves the allowed Continuous Collision Detection (CCD) penetration depth
/// from the dispatcher info.
///
/// @param {Pointer} dispatcherInfo
///     A pointer to the dispatcher info.
///
/// @return {Real} The allowed CCD penetration depth.
YYEXPORT void btDispatcherInfo_getAllowedCcdPenetration(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dispatcherInfo = (btDispatcherInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = dispatcherInfo->m_allowedCcdPenetration;
}

/// @func btDispatcherInfo_setUseConvexConservativeDistanceUtil(dispatcherInfo, useConvexConservativeDistanceUtil)
///
/// @desc
/// Sets whether to use the convex conservative distance utility in the
/// dispatcher info.
///
/// @param {Pointer} dispatcherInfo
///     A pointer to the dispatcher info.
/// @param {Bool} useConvexConservativeDistanceUtil
///     A boolean value indicating whether to use the convex conservative
///     distance utility.
YYEXPORT void btDispatcherInfo_setUseConvexConservativeDistanceUtil(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dispatcherInfo = (btDispatcherInfo*)YYGetPtr(arg, 0);
	bool useConvexConservativeDistanceUtil = YYGetBool(arg, 1);
	dispatcherInfo->m_useConvexConservativeDistanceUtil = useConvexConservativeDistanceUtil;
}

/// @func btDispatcherInfo_getUseConvexConservativeDistanceUtil(dispatcherInfo)
///
/// @desc
/// Retrieves whether the convex conservative distance utility is enabled in the
/// dispatcher info.
///
/// @param {Pointer} dispatcherInfo
///     A pointer to the dispatcher info.
///
/// @return {Bool} A boolean value indicating whether the convex conservative
/// distance utility is enabled.
YYEXPORT void btDispatcherInfo_getUseConvexConservativeDistanceUtil(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dispatcherInfo = (btDispatcherInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = dispatcherInfo->m_useConvexConservativeDistanceUtil;
}

/// @func btDispatcherInfo_setConvexConservativeDistanceThreshold(dispatcherInfo, convexConservativeDistanceThreshold)
///
/// @desc
/// Sets the convex conservative distance threshold in the dispatcher info.
///
/// @param {Pointer} dispatcherInfo
///     A pointer to the dispatcher info.
/// @param {Real} convexConservativeDistanceThreshold
///     The value of the convex conservative distance threshold to set.
YYEXPORT void btDispatcherInfo_setConvexConservativeDistanceThreshold(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dispatcherInfo = (btDispatcherInfo*)YYGetPtr(arg, 0);
	double convexConservativeDistanceThreshold = YYGetReal(arg, 1);
	dispatcherInfo->m_convexConservativeDistanceThreshold = convexConservativeDistanceThreshold;
}

/// @func btDispatcherInfo_getConvexConservativeDistanceThreshold(dispatcherInfo)
///
/// @desc
/// Retrieves the convex conservative distance threshold from the dispatcher
/// info.
///
/// @param {Pointer} dispatcherInfo
///     A pointer to the dispatcher info.
///
/// @return {Real} The value of the convex conservative distance threshold.
YYEXPORT void btDispatcherInfo_getConvexConservativeDistanceThreshold(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dispatcherInfo = (btDispatcherInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = dispatcherInfo->m_convexConservativeDistanceThreshold;
}

/// @func btDispatcherInfo_setDeterministicOverlappingPairs(dispatcherInfo, deterministicOverlappingPairs)
///
/// @desc
/// Sets whether the dispatcher should use deterministic overlapping pairs.
///
/// @param {Pointer} dispatcherInfo
///     A pointer to the dispatcher info.
/// @param {Bool} deterministicOverlappingPairs
///     A boolean indicating whether to use deterministic overlapping pairs.
YYEXPORT void btDispatcherInfo_setDeterministicOverlappingPairs(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dispatcherInfo = (btDispatcherInfo*)YYGetPtr(arg, 0);
	bool deterministicOverlappingPairs = YYGetBool(arg, 1);
	dispatcherInfo->m_deterministicOverlappingPairs = deterministicOverlappingPairs;
}

/// @func btDispatcherInfo_getDeterministicOverlappingPairs(dispatcherInfo)
///
/// @desc
/// Retrieves whether the dispatcher uses deterministic overlapping pairs.
///
/// @param {Pointer} dispatcherInfo
///     A pointer to the dispatcher info.
///
/// @return {Bool} A boolean indicating whether deterministic overlapping pairs
/// are used.
YYEXPORT void btDispatcherInfo_getDeterministicOverlappingPairs(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dispatcherInfo = (btDispatcherInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = dispatcherInfo->m_deterministicOverlappingPairs;
}

////////////////////////////////////////////////////////////////////////////////
//
// Note: Skipped btDispatcher
//
