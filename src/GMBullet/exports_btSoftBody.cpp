#include <GMBullet.hpp>
#include <BulletSoftBody/btSoftBody.h>

////////////////////////////////////////////////////////////////////////////////
//
// btSoftBodyWorldInfo
//

/// @func btSoftBodyWorldInfo_create()
///
/// @desc
/// Creates a new instance of btSoftBodyWorldInfo.
///
/// @return {Pointer} A pointer to the newly created btSoftBodyWorldInfo
/// instance.
YYEXPORT void btSoftBodyWorldInfo_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	result.kind = VALUE_PTR;
	result.ptr = new btSoftBodyWorldInfo();
}

/// @func btSoftBodyWorldInfo_destroy(softBodyWorldInfo)
///
/// @desc
/// Destroys the specified btSoftBodyWorldInfo instance.
///
/// @param {Pointer} softBodyWorldInfo
///     A pointer to the btSoftBodyWorldInfo instance to be destroyed.
YYEXPORT void btSoftBodyWorldInfo_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btSoftBodyWorldInfo*)YYGetPtr(arg, 0);
}

/// @func btSoftBodyWorldInfo_setAirDensity(softBodyWorldInfo, airDensity)
///
/// @desc
/// Sets the air density for the specified btSoftBodyWorldInfo instance.
///
/// @param {Pointer} softBodyWorldInfo
///     A pointer to the btSoftBodyWorldInfo instance.
/// @param {Real} airDensity
///     The air density value to set.
YYEXPORT void btSoftBodyWorldInfo_setAirDensity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto softBodyWorldInfo = (btSoftBodyWorldInfo*)YYGetPtr(arg, 0);
	double airDensity = YYGetReal(arg, 1);
	softBodyWorldInfo->air_density = airDensity;
}

/// @func btSoftBodyWorldInfo_getAirDensity(softBodyWorldInfo)
///
/// @desc
/// Gets the air density from the specified btSoftBodyWorldInfo instance.
///
/// @param {Pointer} softBodyWorldInfo
///     A pointer to the btSoftBodyWorldInfo instance.
///
/// @return {Real} The air density value stored in the btSoftBodyWorldInfo
/// instance.
YYEXPORT void btSoftBodyWorldInfo_getAirDensity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto softBodyWorldInfo = (btSoftBodyWorldInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = softBodyWorldInfo->air_density;
}

/// @func btSoftBodyWorldInfo_setWaterDensity(softBodyWorldInfo, waterDensity)
///
/// @desc
/// Sets the water density for the specified btSoftBodyWorldInfo instance.
///
/// @param {Pointer} softBodyWorldInfo
///     A pointer to the btSoftBodyWorldInfo instance.
/// @param {Real} waterDensity
///     The water density value to set.
YYEXPORT void btSoftBodyWorldInfo_setWaterDensity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto softBodyWorldInfo = (btSoftBodyWorldInfo*)YYGetPtr(arg, 0);
	double waterDensity = YYGetReal(arg, 1);
	softBodyWorldInfo->water_density = waterDensity;
}

/// @func btSoftBodyWorldInfo_getWaterDensity(softBodyWorldInfo)
///
/// @desc
/// Gets the water density from the specified btSoftBodyWorldInfo instance.
///
/// @param {Pointer} softBodyWorldInfo
///     A pointer to the btSoftBodyWorldInfo instance.
///
/// @return {Real} The water density value stored in the btSoftBodyWorldInfo
/// instance.
YYEXPORT void btSoftBodyWorldInfo_getWaterDensity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto softBodyWorldInfo = (btSoftBodyWorldInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = softBodyWorldInfo->water_density;
}

/// @func btSoftBodyWorldInfo_setWaterOffset(softBodyWorldInfo, waterOffset)
///
/// @desc
/// Sets the water offset for the specified btSoftBodyWorldInfo instance.
///
/// @param {Pointer} softBodyWorldInfo
///     A pointer to the btSoftBodyWorldInfo instance.
/// @param {Real} waterOffset
///     The water offset value to set.
YYEXPORT void btSoftBodyWorldInfo_setWaterOffset(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto softBodyWorldInfo = (btSoftBodyWorldInfo*)YYGetPtr(arg, 0);
	double waterOffset = YYGetReal(arg, 1);
	softBodyWorldInfo->water_density = waterOffset;
}

/// @func btSoftBodyWorldInfo_getWaterOffset(softBodyWorldInfo)
///
/// @desc
/// Gets the water offset from the specified btSoftBodyWorldInfo instance.
///
/// @param {Pointer} softBodyWorldInfo
///     A pointer to the btSoftBodyWorldInfo instance.
///
/// @return {Real} The water offset value stored in the btSoftBodyWorldInfo
/// instance.
YYEXPORT void btSoftBodyWorldInfo_getWaterOffset(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto softBodyWorldInfo = (btSoftBodyWorldInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = softBodyWorldInfo->water_density;
}

/// @func btSoftBodyWorldInfo_setMaxDisplacement(softBodyWorldInfo, maxDisplacement)
///
/// @desc
/// Sets the maximum displacement for the specified btSoftBodyWorldInfo instance.
///
/// @param {Pointer} softBodyWorldInfo
///     A pointer to the btSoftBodyWorldInfo instance.
/// @param {Real} maxDisplacement
///     The maximum displacement value to set.
YYEXPORT void btSoftBodyWorldInfo_setMaxDisplacement(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto softBodyWorldInfo = (btSoftBodyWorldInfo*)YYGetPtr(arg, 0);
	double maxDisplacement = YYGetReal(arg, 1);
	softBodyWorldInfo->m_maxDisplacement = maxDisplacement;
}

/// @func btSoftBodyWorldInfo_getMaxDisplacement(softBodyWorldInfo)
///
/// @desc
/// Gets the maximum displacement from the specified btSoftBodyWorldInfo
/// instance.
///
/// @param {Pointer} softBodyWorldInfo
///     A pointer to the btSoftBodyWorldInfo instance.
///
/// @return {Real} The maximum displacement value stored in the
/// btSoftBodyWorldInfo instance.
YYEXPORT void btSoftBodyWorldInfo_getMaxDisplacement(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto softBodyWorldInfo = (btSoftBodyWorldInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = softBodyWorldInfo->m_maxDisplacement;
}

/// @func btSoftBodyWorldInfo_setWaterNormal(softBodyWorldInfo, waterNormal)
///
/// @desc
/// Sets the water normal for the specified btSoftBodyWorldInfo instance.
///
/// @param {Pointer} softBodyWorldInfo
///     A pointer to the btSoftBodyWorldInfo instance.
/// @param {Pointer} waterNormal
///     A pointer to a btVector3 representing the water normal to set.
YYEXPORT void btSoftBodyWorldInfo_setWaterNormal(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto softBodyWorldInfo = (btSoftBodyWorldInfo*)YYGetPtr(arg, 0);
	auto& waterNormal = *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(waterNormal, &softBodyWorldInfo->water_normal);
}

/// @func btSoftBodyWorldInfo_setWaterNormalXYZ(softBodyWorldInfo, waterNormalX, waterNormalY, waterNormalZ)
///
/// @desc
/// Sets the water normal for the specified btSoftBodyWorldInfo instance.
///
/// @param {Pointer} softBodyWorldInfo
///     A pointer to the btSoftBodyWorldInfo instance.
/// @param {Real} waterNormalX
///     The x-component of the water normal to set.
/// @param {Real} waterNormalY
///     The y-component of the water normal to set.
/// @param {Real} waterNormalZ
///     The z-component of the water normal to set.
YYEXPORT void btSoftBodyWorldInfo_setWaterNormalXYZ(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto softBodyWorldInfo = (btSoftBodyWorldInfo*)YYGetPtr(arg, 0);
	double waterNormalX = YYGetReal(arg, 1);
	double waterNormalY = YYGetReal(arg, 2);
	double waterNormalZ = YYGetReal(arg, 3);
	softBodyWorldInfo->m_gravity.setValue(waterNormalX, waterNormalY, waterNormalZ);
}

/// @func btSoftBodyWorldInfo_getWaterNormal(softBodyWorldInfo, outVector3)
///
/// @desc
/// Gets the water normal from the specified btSoftBodyWorldInfo instance.
///
/// @param {Pointer} softBodyWorldInfo
///     A pointer to the btSoftBodyWorldInfo instance.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the water normal.
YYEXPORT void btSoftBodyWorldInfo_getWaterNormal(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto softBodyWorldInfo = (btSoftBodyWorldInfo*)YYGetPtr(arg, 0);
	auto waterNormal = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(softBodyWorldInfo->water_normal, waterNormal);
}

/// @func btSoftBodyWorldInfo_setBroadphase(softBodyWorldInfo, broadphase)
///
/// @desc
/// Sets the broadphase for the specified btSoftBodyWorldInfo instance.
///
/// @param {Pointer} softBodyWorldInfo
///     A pointer to the btSoftBodyWorldInfo instance.
/// @param {Pointer} broadphase
///     A pointer to a btBroadphaseInterface representing the broadphase to set.
YYEXPORT void btSoftBodyWorldInfo_setBroadphase(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto softBodyWorldInfo = (btSoftBodyWorldInfo*)YYGetPtr(arg, 0);
	auto broadphase = (btBroadphaseInterface*)YYGetPtr(arg, 1);
	softBodyWorldInfo->m_broadphase = broadphase;
}

/// @func btSoftBodyWorldInfo_getBroadphase(softBodyWorldInfo)
///
/// @desc
/// Gets the broadphase from the specified btSoftBodyWorldInfo instance.
///
/// @param {Pointer} softBodyWorldInfo
///     A pointer to the btSoftBodyWorldInfo instance.
///
/// @return {Pointer} A pointer to the btBroadphaseInterface used in the
/// btSoftBodyWorldInfo instance.
YYEXPORT void btSoftBodyWorldInfo_getBroadphase(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto softBodyWorldInfo = (btSoftBodyWorldInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = (btBroadphaseInterface*)softBodyWorldInfo->m_broadphase;
}

/// @func btSoftBodyWorldInfo_setDispatcher(softBodyWorldInfo, dispatcher)
///
/// @desc
/// Sets the dispatcher for the specified btSoftBodyWorldInfo instance.
///
/// @param {Pointer} softBodyWorldInfo
///     A pointer to the btSoftBodyWorldInfo instance.
/// @param {Pointer} dispatcher
///     A pointer to a btDispatcher representing the dispatcher to set.
YYEXPORT void btSoftBodyWorldInfo_setDispatcher(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto softBodyWorldInfo = (btSoftBodyWorldInfo*)YYGetPtr(arg, 0);
	auto dispatcher = (btDispatcher*)YYGetPtr(arg, 1);
	softBodyWorldInfo->m_dispatcher = dispatcher;
}

/// @func btSoftBodyWorldInfo_getDispatcher(softBodyWorldInfo)
///
/// @desc
/// Gets the dispatcher from the specified btSoftBodyWorldInfo instance.
///
/// @param {Pointer} softBodyWorldInfo
///     A pointer to the btSoftBodyWorldInfo instance.
///
/// @return {Pointer} A pointer to the btDispatcher used in the
/// btSoftBodyWorldInfo instance.
YYEXPORT void btSoftBodyWorldInfo_getDispatcher(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto softBodyWorldInfo = (btSoftBodyWorldInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = (btDispatcher*)softBodyWorldInfo->m_dispatcher;
}

/// @func btSoftBodyWorldInfo_setGravity(softBodyWorldInfo, gravity)
///
/// @desc
/// Sets the gravity for the specified btSoftBodyWorldInfo instance.
///
/// @param {Pointer} softBodyWorldInfo
///     A pointer to the btSoftBodyWorldInfo instance.
/// @param {Pointer} gravity
///     A pointer to a btVector3 representing the gravity to set.
YYEXPORT void btSoftBodyWorldInfo_setGravity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto softBodyWorldInfo = (btSoftBodyWorldInfo*)YYGetPtr(arg, 0);
	auto& gravity = *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(gravity, &softBodyWorldInfo->m_gravity);
}

/// @func btSoftBodyWorldInfo_setGravityXYZ(softBodyWorldInfo, gravityX, gravityY, gravityZ)
///
/// @desc
/// Sets the gravity for the specified btSoftBodyWorldInfo instance in XYZ
/// components.
///
/// @param {Pointer} softBodyWorldInfo
///     A pointer to the btSoftBodyWorldInfo instance.
/// @param {Real} gravityX
///     The x-component of the gravity to set.
/// @param {Real} gravityY
///     The y-component of the gravity to set.
/// @param {Real} gravityZ
///     The z-component of the gravity to set.
YYEXPORT void btSoftBodyWorldInfo_setGravityXYZ(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto softBodyWorldInfo = (btSoftBodyWorldInfo*)YYGetPtr(arg, 0);
	double gravityX = YYGetReal(arg, 1);
	double gravityY = YYGetReal(arg, 2);
	double gravityZ = YYGetReal(arg, 3);
	softBodyWorldInfo->m_gravity.setValue(gravityX, gravityY, gravityZ);
}

/// @func btSoftBodyWorldInfo_getGravity(softBodyWorldInfo, outVector3)
///
/// @desc
/// Gets the gravity from the specified btSoftBodyWorldInfo instance.
///
/// @param {Pointer} softBodyWorldInfo
///     A pointer to the btSoftBodyWorldInfo instance.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 where the gravity will be copied.
YYEXPORT void btSoftBodyWorldInfo_getGravity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto softBodyWorldInfo = (btSoftBodyWorldInfo*)YYGetPtr(arg, 0);
	auto gravity = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(softBodyWorldInfo->m_gravity, gravity);
}

/// @func btSoftBodyWorldInfo_getSparseSdf(softBodyWorldInfo)
///
/// @desc
/// Gets the sparse signed distance field (SDF) from the specified
/// btSoftBodyWorldInfo instance.
///
/// @param {Pointer} softBodyWorldInfo
///     A pointer to the btSoftBodyWorldInfo instance.
///
/// @return {Pointer} A pointer to the btSparseSdf<3> used in the
/// btSoftBodyWorldInfo instance.
YYEXPORT void btSoftBodyWorldInfo_getSparseSdf(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto softBodyWorldInfo = (btSoftBodyWorldInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = (btSparseSdf<3>*)&softBodyWorldInfo->m_sparsesdf;
}

////////////////////////////////////////////////////////////////////////////////
//
// btSoftBody
//


