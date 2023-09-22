#include <GMBullet.hpp>

using btRayResultCallback = btCollisionWorld::RayResultCallback;
using btClosestRayResultCallback = btCollisionWorld::ClosestRayResultCallback;
using btAllHitsRayResultCallback = btCollisionWorld::AllHitsRayResultCallback;
using btContactResultCallback = btCollisionWorld::ContactResultCallback;
using btConvexResultCallback = btCollisionWorld::ConvexResultCallback;
using btClosestConvexResultCallback = btCollisionWorld::ClosestConvexResultCallback;

/// @func btCollisionWorld_create(dispatcher, pairCache, collisionConfiguration)
///
/// @desc
///
/// @param {Pointer} dispatcher
/// @param {Pointer} pairCache
/// @param {Pointer} collisionConfiguration
///
/// @return {Pointer}
YYEXPORT void btCollisionWorld_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dispatcher = (btDispatcher*)YYGetPtr(arg, 0);
	auto pairCache = (btBroadphaseInterface*)YYGetPtr(arg, 1);
	auto collisionConfiguration = (btCollisionConfiguration*)YYGetPtr(arg, 2);
	result.kind = VALUE_PTR;
	result.ptr = new btCollisionWorld(dispatcher, pairCache, collisionConfiguration);
}

/// @func btCollisionWorld_destroy(collisionWorld)
///
/// @desc
///
/// @param {Pointer} collisionWorld
YYEXPORT void btCollisionWorld_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btCollisionWorld*)YYGetPtr(arg, 0);
}

/// @func btCollisionWorld_setBroadphase(collisionWorld, pairCache)
///
/// @desc
///
/// @param {Pointer} collisionWorld
/// @param {Pointer} pairCache
YYEXPORT void btCollisionWorld_setBroadphase(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionWorld = (btCollisionWorld*)YYGetPtr(arg, 0);
	auto pairCache = (btBroadphaseInterface*)YYGetPtr(arg, 1);
	collisionWorld->setBroadphase(pairCache);
}

/// @func btCollisionWorld_getBroadphase(collisionWorld)
///
/// @desc
///
/// @param {Pointer} collisionWorld
///
/// @return {Pointer}
YYEXPORT void btCollisionWorld_getBroadphase(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionWorld = (btCollisionWorld*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = collisionWorld->getBroadphase();
}

/// @func btCollisionWorld_getPairCache(collisionWorld)
///
/// @desc
///
/// @param {Pointer} collisionWorld
///
/// @return {Pointer}
YYEXPORT void btCollisionWorld_getPairCache(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionWorld = (btCollisionWorld*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = collisionWorld->getPairCache();
}

/// @func btCollisionWorld_getDispatcher(collisionWorld)
///
/// @desc
///
/// @param {Pointer} collisionWorld
///
/// @return {Pointer}
YYEXPORT void btCollisionWorld_getDispatcher(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionWorld = (btCollisionWorld*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = collisionWorld->getDispatcher();
}

/// @func btCollisionWorld_updateSingleAabb(collisionWorld, collisionObject)
///
/// @desc
///
/// @param {Pointer} collisionWorld
/// @param {Pointer} collisionObject
YYEXPORT void btCollisionWorld_updateSingleAabb(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionWorld = (btCollisionWorld*)YYGetPtr(arg, 0);
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 1);
	collisionWorld->updateSingleAabb(collisionObject);
}

/// @func btCollisionWorld_updateAabbs(collisionWorld)
///
/// @desc
///
/// @param {Pointer} collisionWorld
YYEXPORT void btCollisionWorld_updateAabbs(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionWorld = (btCollisionWorld*)YYGetPtr(arg, 0);
	collisionWorld->updateAabbs();
}

/// @func btCollisionWorld_computeOverlappingPairs(collisionWorld)
///
/// @desc
///
/// @param {Pointer} collisionWorld
YYEXPORT void btCollisionWorld_computeOverlappingPairs(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionWorld = (btCollisionWorld*)YYGetPtr(arg, 0);
	collisionWorld->computeOverlappingPairs();
}

////////////////////////////////////////////////////////////////////////////////
//
// Note: Skip btCollisionWorld::LocalShapeInfo
//

////////////////////////////////////////////////////////////////////////////////
//
// Note: Skip btCollisionWorld::LocalRayResult
//

////////////////////////////////////////////////////////////////////////////////
//
// btCollisionWorld::RayResultCallback
//

/// @func btRayResultCallback_destroy(rayResultCallback)
///
/// @desc
///
/// @param {Pointer} rayResultCallback
YYEXPORT void btRayResultCallback_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btRayResultCallback*)YYGetPtr(arg, 0);
}

/// @func btRayResultCallback_getClosestHitFraction(rayResultCallback)
///
/// @desc
///
/// @param {Pointer} rayResultCallback
///
/// @return {Real}
YYEXPORT void btRayResultCallback_getClosestHitFraction(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rayResultCallback = (btRayResultCallback*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = rayResultCallback->m_closestHitFraction;
}

/// @func btRayResultCallback_getCollisionObject(rayResultCallback)
///
/// @desc
///
/// @param {Pointer} rayResultCallback
///
/// @return {Pointer}
YYEXPORT void btRayResultCallback_getCollisionObject(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rayResultCallback = (btRayResultCallback*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = const_cast<btCollisionObject*>(rayResultCallback->m_collisionObject);
}

/// @func btRayResultCallback_getCollisionFilterGroup(rayResultCallback)
///
/// @desc
///
/// @param {Pointer} rayResultCallback
///
/// @return {Real}
YYEXPORT void btRayResultCallback_getCollisionFilterGroup(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rayResultCallback = (btRayResultCallback*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.val = rayResultCallback->m_collisionFilterGroup;
}

/// @func btRayResultCallback_setCollisionFilterGroup(rayResultCallback, collisionFilterGroup)
///
/// @desc
///
/// @param {Pointer} rayResultCallback
/// @param {Real} collisionFilterGroup
YYEXPORT void btRayResultCallback_setCollisionFilterGroup(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rayResultCallback = (btRayResultCallback*)YYGetPtr(arg, 0);
	int collisionFilterGroup = YYGetInt32(arg, 1);
	rayResultCallback->m_collisionFilterGroup = collisionFilterGroup;
}

/// @func btRayResultCallback_getCollisionFilterMask(rayResultCallback)
///
/// @desc
///
/// @param {Pointer} rayResultCallback
///
/// @return {Real}
YYEXPORT void btRayResultCallback_getCollisionFilterMask(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rayResultCallback = (btRayResultCallback*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.val = rayResultCallback->m_collisionFilterMask;
}

/// @func btRayResultCallback_setCollisionFilterMask(rayResultCallback, collisionFilterMask)
///
/// @desc
///
/// @param {Pointer} rayResultCallback
/// @param {Real} collisionFilterMask
YYEXPORT void btRayResultCallback_setCollisionFilterMask(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rayResultCallback = (btRayResultCallback*)YYGetPtr(arg, 0);
	int collisionFilterMask = YYGetInt32(arg, 1);
	rayResultCallback->m_collisionFilterMask = collisionFilterMask;
}

/// @func btRayResultCallback_hasHit(rayResultCallback)
///
/// @desc
///
/// @param {Pointer} rayResultCallback
///
/// @return {Bool}
YYEXPORT void btRayResultCallback_hasHit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rayResultCallback = (btRayResultCallback*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = rayResultCallback->hasHit();
}

// Note: Skip btRayResultCallback::needsCollision
// Note: Skip btRayResultCallback::addSingleResult

////////////////////////////////////////////////////////////////////////////////
//
// btCollisionWorld::ClosestRayResultCallback
//

/// @func btClosestRayResultCallback_create(rayFromWorld, rayToWorld)
///
/// @desc
///
/// @param {Pointer} rayFromWorld
/// @param {Pointer} rayToWorld
///
/// @return {Pointer}
YYEXPORT void btClosestRayResultCallback_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	btVector3& rayFromWorld = *(btVector3*)YYGetPtr(arg, 0);
	btVector3& rayToWorld = *(btVector3*)YYGetPtr(arg, 1);
	result.kind = VALUE_PTR;
	result.ptr = new btClosestRayResultCallback(rayFromWorld, rayToWorld);
}

/// @func btClosestRayResultCallback_createXYZ(rayFromWorldX, rayFromWorldY, rayFromWorldZ, rayToWorldX, rayToWorldY, rayToWorldZ)
///
/// @desc
///
/// @param {Real} rayFromWorldX
/// @param {Real} rayFromWorldY
/// @param {Real} rayFromWorldZ
/// @param {Real} rayToWorldX
/// @param {Real} rayToWorldY
/// @param {Real} rayToWorldZ
///
/// @return {Pointer}
YYEXPORT void btClosestRayResultCallback_createXYZ(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	double rayFromWorldX = YYGetReal(arg, 0);
	double rayFromWorldY = YYGetReal(arg, 1);
	double rayFromWorldZ = YYGetReal(arg, 2);
	double rayToWorldX = YYGetReal(arg, 3);
	double rayToWorldY = YYGetReal(arg, 4);
	double rayToWorldZ = YYGetReal(arg, 5);
	result.kind = VALUE_PTR;
	result.ptr = new btClosestRayResultCallback(
		btVector3(rayFromWorldX, rayFromWorldY, rayFromWorldZ),
		btVector3(rayToWorldX, rayToWorldY, rayToWorldZ));
}

/// @func btClosestRayResultCallback_destroy(closestRayResultCallback)
///
/// @desc
///
/// @param {Pointer} closestRayResultCallback
YYEXPORT void btClosestRayResultCallback_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btClosestRayResultCallback*)YYGetPtr(arg, 0);
}

/// @func btClosestRayResultCallback_getRayFromWorld(closestRayResultCallback, outVector3)
///
/// @desc
///
/// @param {Pointer} closestRayResultCallback
/// @param {Pointer} outVector3
YYEXPORT void btClosestRayResultCallback_getRayFromWorld(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto closestRayResultCallback = (btClosestRayResultCallback*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(closestRayResultCallback->m_rayFromWorld, outVector3);
}

/// @func btClosestRayResultCallback_getRayFromWorldArray(closestRayResultCallback, outArray)
///
/// @desc
///
/// @param {Pointer} closestRayResultCallback
/// @param {Array<Real>} outArray
YYEXPORT void btClosestRayResultCallback_getRayFromWorldArray(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto closestRayResultCallback = (btClosestRayResultCallback*)YYGetPtr(arg, 0);
	RValue* outArray = &arg[1];
	btVector3& rayFromWorld = closestRayResultCallback->m_rayFromWorld;
	RValue value;
	value.kind = VALUE_REAL;
	value.val = rayFromWorld.getZ(); SET_RValue(outArray, &value, NULL, 2);
	value.val = rayFromWorld.getY(); SET_RValue(outArray, &value, NULL, 1);
	value.val = rayFromWorld.getX(); SET_RValue(outArray, &value, NULL, 0);
	FREE_RValue(&value);
}

/// @func btClosestRayResultCallback_getRayToWorld(closestRayResultCallback, outVector3)
///
/// @desc
///
/// @param {Pointer} closestRayResultCallback
/// @param {Pointer} outVector3
YYEXPORT void btClosestRayResultCallback_getRayToWorld(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto closestRayResultCallback = (btClosestRayResultCallback*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(closestRayResultCallback->m_rayToWorld, outVector3);
}

/// @func btClosestRayResultCallback_getRayToWorldArray(closestRayResultCallback, outArray)
///
/// @desc
///
/// @param {Pointer} closestRayResultCallback
/// @param {Array<Real>} outArray
YYEXPORT void btClosestRayResultCallback_getRayToWorldArray(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto closestRayResultCallback = (btClosestRayResultCallback*)YYGetPtr(arg, 0);
	RValue* outArray = &arg[1];
	btVector3& rayToWorld = closestRayResultCallback->m_rayToWorld;
	RValue value;
	value.kind = VALUE_REAL;
	value.val = rayToWorld.getZ(); SET_RValue(outArray, &value, NULL, 2);
	value.val = rayToWorld.getY(); SET_RValue(outArray, &value, NULL, 1);
	value.val = rayToWorld.getX(); SET_RValue(outArray, &value, NULL, 0);
	FREE_RValue(&value);
}

/// @func btClosestRayResultCallback_getHitNormalWorld(closestRayResultCallback, outVector3)
///
/// @desc
///
/// @param {Pointer} closestRayResultCallback
/// @param {Pointer} outVector3
YYEXPORT void btClosestRayResultCallback_getHitNormalWorld(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto closestRayResultCallback = (btClosestRayResultCallback*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(closestRayResultCallback->m_hitNormalWorld, outVector3);
}

/// @func btClosestRayResultCallback_getHitNormalWorldArray(closestRayResultCallback, outArray)
///
/// @desc
///
/// @param {Pointer} closestRayResultCallback
/// @param {Array<Real>} outArray
YYEXPORT void btClosestRayResultCallback_getHitNormalWorldArray(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto closestRayResultCallback = (btClosestRayResultCallback*)YYGetPtr(arg, 0);
	RValue* outArray = &arg[1];
	btVector3& hitNormalWorld = closestRayResultCallback->m_hitNormalWorld;
	RValue value;
	value.kind = VALUE_REAL;
	value.val = hitNormalWorld.getZ(); SET_RValue(outArray, &value, NULL, 2);
	value.val = hitNormalWorld.getY(); SET_RValue(outArray, &value, NULL, 1);
	value.val = hitNormalWorld.getX(); SET_RValue(outArray, &value, NULL, 0);
	FREE_RValue(&value);
}

/// @func btClosestRayResultCallback_getHitPointWorld(closestRayResultCallback, outVector3)
///
/// @desc
///
/// @param {Pointer} closestRayResultCallback
/// @param {Pointer} outVector3
YYEXPORT void btClosestRayResultCallback_getHitPointWorld(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto closestRayResultCallback = (btClosestRayResultCallback*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(closestRayResultCallback->m_hitPointWorld, outVector3);
}

/// @func btClosestRayResultCallback_getHitPointWorldArray(closestRayResultCallback, outArray)
///
/// @desc
///
/// @param {Pointer} closestRayResultCallback
/// @param {Array<Real>} outArray
YYEXPORT void btClosestRayResultCallback_getHitPointWorldArray(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto closestRayResultCallback = (btClosestRayResultCallback*)YYGetPtr(arg, 0);
	RValue* outArray = &arg[1];
	btVector3& hitPointWorld = closestRayResultCallback->m_hitPointWorld;
	RValue value;
	value.kind = VALUE_REAL;
	value.val = hitPointWorld.getZ(); SET_RValue(outArray, &value, NULL, 2);
	value.val = hitPointWorld.getY(); SET_RValue(outArray, &value, NULL, 1);
	value.val = hitPointWorld.getX(); SET_RValue(outArray, &value, NULL, 0);
	FREE_RValue(&value);
}

// Note: Skip btClosestRayResultCallback::addSingleResult

////////////////////////////////////////////////////////////////////////////////
//
// btCollisionWorld::AllHitsRayResultCallback
//

/// @func btAllHitsRayResultCallback_create(rayFromWorld, rayToWorld)
///
/// @desc
///
/// @param {Pointer} rayFromWorld
/// @param {Pointer} rayToWorld
///
/// @return {Pointer}
YYEXPORT void btAllHitsRayResultCallback_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	btVector3& rayFromWorld = *(btVector3*)YYGetPtr(arg, 0);
	btVector3& rayToWorld = *(btVector3*)YYGetPtr(arg, 1);
	result.kind = VALUE_PTR;
	result.ptr = new btAllHitsRayResultCallback(rayFromWorld, rayToWorld);
}

/// @func btAllHitsRayResultCallback_createXYZ(rayFromWorldX, rayFromWorldY, rayFromWorldZ, rayToWorldX, rayToWorldY, rayToWorldZ)
///
/// @desc
///
/// @param {Real} rayFromWorldX
/// @param {Real} rayFromWorldY
/// @param {Real} rayFromWorldZ
/// @param {Real} rayToWorldX
/// @param {Real} rayToWorldY
/// @param {Real} rayToWorldZ
///
/// @return {Pointer}
YYEXPORT void btAllHitsRayResultCallback_createXYZ(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	double rayFromWorldX = YYGetReal(arg, 0);
	double rayFromWorldY = YYGetReal(arg, 1);
	double rayFromWorldZ = YYGetReal(arg, 2);
	double rayToWorldX = YYGetReal(arg, 3);
	double rayToWorldY = YYGetReal(arg, 4);
	double rayToWorldZ = YYGetReal(arg, 5);
	result.kind = VALUE_PTR;
	result.ptr = new btAllHitsRayResultCallback(
		btVector3(rayFromWorldX, rayFromWorldY, rayFromWorldZ),
		btVector3(rayToWorldX, rayToWorldY, rayToWorldZ));
}

/// @func btAllHitsRayResultCallback_destroy(allHitsRayResultCallback)
///
/// @desc
///
/// @param {Pointer} allHitsRayResultCallback
YYEXPORT void btAllHitsRayResultCallback_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btAllHitsRayResultCallback*)YYGetPtr(arg, 0);
}

/// @func btAllHitsRayResultCallback_getCollisionObjects(allHitsRayResultCallback, outArray)
///
/// @desc
///
/// @param {Pointer} allHitsRayResultCallback
/// @param {Array<Pointer>} outArray
YYEXPORT void btAllHitsRayResultCallback_getCollisionObjects(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto allHitsRayResultCallback = (btAllHitsRayResultCallback*)YYGetPtr(arg, 0);
	RValue* outArray = &arg[1];
	RValue value;
	value.kind = VALUE_PTR;
	for (int i = allHitsRayResultCallback->m_collisionObjects.size() - 1; i >= 0; --i)
	{
		value.ptr = const_cast<btCollisionObject*>(allHitsRayResultCallback->m_collisionObjects[i]);
		SET_RValue(outArray, &value, NULL, i);
	}
	FREE_RValue(&value);
}

/// @func btAllHitsRayResultCallback_getHitNormalWorld(allHitsRayResultCallback, outArray)
///
/// @desc
///
/// @param {Pointer} allHitsRayResultCallback
/// @param {Array<Pointer>} outArray
YYEXPORT void btAllHitsRayResultCallback_getHitNormalWorld(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto allHitsRayResultCallback = (btAllHitsRayResultCallback*)YYGetPtr(arg, 0);
	RValue* outArray = &arg[1];
	RValue value;
	value.kind = VALUE_PTR;
	for (int i = allHitsRayResultCallback->m_hitNormalWorld.size() - 1; i >= 0; --i)
	{
		value.ptr = &allHitsRayResultCallback->m_hitNormalWorld[i];
		SET_RValue(outArray, &value, NULL, i);
	}
	FREE_RValue(&value);
}

/// @func btAllHitsRayResultCallback_getHitNormalWorldArray(allHitsRayResultCallback, outArray)
///
/// @desc
///
/// @param {Pointer} allHitsRayResultCallback
/// @param {Array<Real>} outArray
YYEXPORT void btAllHitsRayResultCallback_getHitNormalWorldArray(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto allHitsRayResultCallback = (btAllHitsRayResultCallback*)YYGetPtr(arg, 0);
	RValue* outArray = &arg[1];
	RValue value;
	value.kind = VALUE_REAL;
	for (int i = allHitsRayResultCallback->m_hitNormalWorld.size() - 1; i >= 0; --i)
	{
		btVector3& hitNormalWorld = allHitsRayResultCallback->m_hitNormalWorld[i];
		value.val = hitNormalWorld.getZ(); SET_RValue(outArray, &value, NULL, i * 3 + 2);
		value.val = hitNormalWorld.getY(); SET_RValue(outArray, &value, NULL, i * 3 + 1);
		value.val = hitNormalWorld.getX(); SET_RValue(outArray, &value, NULL, i * 3 + 0);
	}
	FREE_RValue(&value);
}

/// @func btAllHitsRayResultCallback_getHitPointWorld(allHitsRayResultCallback, outArray)
///
/// @desc
///
/// @param {Pointer} allHitsRayResultCallback
/// @param {Array<Pointer>} outArray
YYEXPORT void btAllHitsRayResultCallback_getHitPointWorld(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto allHitsRayResultCallback = (btAllHitsRayResultCallback*)YYGetPtr(arg, 0);
	RValue* outArray = &arg[1];
	RValue value;
	value.kind = VALUE_PTR;
	for (int i = allHitsRayResultCallback->m_hitPointWorld.size() - 1; i >= 0; --i)
	{
		value.ptr = &allHitsRayResultCallback->m_hitPointWorld[i];
		SET_RValue(outArray, &value, NULL, i);
	}
	FREE_RValue(&value);
}

/// @func btAllHitsRayResultCallback_getHitPointWorldArray(allHitsRayResultCallback, outArray)
///
/// @desc
///
/// @param {Pointer} allHitsRayResultCallback
/// @param {Array<Real>} outArray
YYEXPORT void btAllHitsRayResultCallback_getHitPointWorldArray(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto allHitsRayResultCallback = (btAllHitsRayResultCallback*)YYGetPtr(arg, 0);
	RValue* outArray = &arg[1];
	RValue value;
	value.kind = VALUE_REAL;
	for (int i = allHitsRayResultCallback->m_hitPointWorld.size() - 1; i >= 0; --i)
	{
		btVector3& hitPointWorld = allHitsRayResultCallback->m_hitPointWorld[i];
		value.val = hitPointWorld.getZ(); SET_RValue(outArray, &value, NULL, i * 3 + 2);
		value.val = hitPointWorld.getY(); SET_RValue(outArray, &value, NULL, i * 3 + 1);
		value.val = hitPointWorld.getX(); SET_RValue(outArray, &value, NULL, i * 3 + 0);
	}
	FREE_RValue(&value);
}

/// @func btAllHitsRayResultCallback_getHitFractions(allHitsRayResultCallback, outArray)
///
/// @desc
///
/// @param {Pointer} allHitsRayResultCallback
/// @param {Array<Real>} outArray
YYEXPORT void btAllHitsRayResultCallback_getHitFractions(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto allHitsRayResultCallback = (btAllHitsRayResultCallback*)YYGetPtr(arg, 0);
	RValue* outArray = &arg[1];
	RValue value;
	value.kind = VALUE_REAL;
	for (int i = allHitsRayResultCallback->m_hitFractions.size() - 1; i >= 0; --i)
	{
		value.val = allHitsRayResultCallback->m_hitFractions[i];
		SET_RValue(outArray, &value, NULL, i);
	}
	FREE_RValue(&value);
}

// Note: Skip btClosestRayResultCallback::addSingleResult

////////////////////////////////////////////////////////////////////////////////
//
// Note: Skip btCollisionWorld::LocalConvexResult
//

////////////////////////////////////////////////////////////////////////////////
//
// btCollisionWorld::ConvexResultCallback
//

/// @func btConvexResultCallback_destroy(convexResultCallback)
///
/// @desc
///
/// @param {Pointer} convexResultCallback
YYEXPORT void btConvexResultCallback_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btConvexResultCallback*)YYGetPtr(arg, 0);
}

/// @func btConvexResultCallback_getClosestHitFraction(convexResultCallback)
///
/// @desc
///
/// @param {Pointer} convexResultCallback
///
/// @return {Real}
YYEXPORT void btConvexResultCallback_getClosestHitFraction(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto convexResultCallback = (btConvexResultCallback*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = convexResultCallback->m_closestHitFraction;
}

/// @func btConvexResultCallback_getCollisionFilterGroup(convexResultCallback)
///
/// @desc
///
/// @param {Pointer} convexResultCallback
///
/// @return {Real}
YYEXPORT void btConvexResultCallback_getCollisionFilterGroup(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto convexResultCallback = (btConvexResultCallback*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.val = convexResultCallback->m_collisionFilterGroup;
}

/// @func btConvexResultCallback_setCollisionFilterGroup(convexResultCallback, collisionFilterGroup)
///
/// @desc
///
/// @param {Pointer} convexResultCallback
/// @param {Real} collisionFilterGroup
YYEXPORT void btConvexResultCallback_setCollisionFilterGroup(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto convexResultCallback = (btConvexResultCallback*)YYGetPtr(arg, 0);
	int collisionFilterGroup = YYGetInt32(arg, 1);
	convexResultCallback->m_collisionFilterGroup = collisionFilterGroup;
}

/// @func btConvexResultCallback_getCollisionFilterMask(convexResultCallback)
///
/// @desc
///
/// @param {Pointer} convexResultCallback
///
/// @return {Real}
YYEXPORT void btConvexResultCallback_getCollisionFilterMask(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto convexResultCallback = (btConvexResultCallback*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.val = convexResultCallback->m_collisionFilterMask;
}

/// @func btConvexResultCallback_setCollisionFilterMask(convexResultCallback, collisionFilterMask)
///
/// @desc
///
/// @param {Pointer} convexResultCallback
/// @param {Real} collisionFilterMask
YYEXPORT void btConvexResultCallback_setCollisionFilterMask(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto convexResultCallback = (btConvexResultCallback*)YYGetPtr(arg, 0);
	int collisionFilterMask = YYGetInt32(arg, 1);
	convexResultCallback->m_collisionFilterMask = collisionFilterMask;
}

/// @func btConvexResultCallback_hasHit(convexResultCallback)
///
/// @desc
///
/// @param {Pointer} convexResultCallback
///
/// @return {Bool}
YYEXPORT void btConvexResultCallback_hasHit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto convexResultCallback = (btConvexResultCallback*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = convexResultCallback->hasHit();
}

// Note: Skip btConvexResultCallback::needsCollision
// Note: Skip btConvexResultCallback::addSingleResult

////////////////////////////////////////////////////////////////////////////////
//
// btCollisionWorld::ClosestConvexResultCallback
//

/// @func btClosestConvexResultCallback_create(convexFromWorld, convexToWorld)
///
/// @desc
///
/// @param {Pointer} convexFromWorld
/// @param {Pointer} convexToWorld
///
/// @return {Pointer}
YYEXPORT void btClosestConvexResultCallback_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	btVector3& convexFromWorld = *(btVector3*)YYGetPtr(arg, 0);
	btVector3& convexToWorld = *(btVector3*)YYGetPtr(arg, 1);
	result.kind = VALUE_PTR;
	result.ptr = new btClosestConvexResultCallback(convexFromWorld, convexToWorld);
}

/// @func btClosestConvexResultCallback_createXYZ(convexFromWorldX, convexFromWorldY, convexFromWorldZ, convexToWorldX, convexToWorldY, convexToWorldZ)
///
/// @desc
///
/// @param {Real} convexFromWorldX
/// @param {Real} convexFromWorldY
/// @param {Real} convexFromWorldZ
/// @param {Real} convexToWorldX
/// @param {Real} convexToWorldY
/// @param {Real} convexToWorldZ
///
/// @return {Pointer}
YYEXPORT void btClosestConvexResultCallback_createXYZ(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	double convexFromWorldX = YYGetReal(arg, 0);
	double convexFromWorldY = YYGetReal(arg, 1);
	double convexFromWorldZ = YYGetReal(arg, 2);
	double convexToWorldX = YYGetReal(arg, 3);
	double convexToWorldY = YYGetReal(arg, 4);
	double convexToWorldZ = YYGetReal(arg, 5);
	result.kind = VALUE_PTR;
	result.ptr = new btClosestConvexResultCallback(
		btVector3(convexFromWorldX, convexFromWorldY, convexFromWorldZ),
		btVector3(convexToWorldX, convexToWorldY, convexToWorldZ));
}

/// @func btClosestConvexResultCallback_destroy(closestConvexResultCallback)
///
/// @desc
///
/// @param {Pointer} closestConvexResultCallback
YYEXPORT void btClosestConvexResultCallback_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btClosestConvexResultCallback*)YYGetPtr(arg, 0);
}

/// @func btClosestConvexResultCallback_getConvexFromWorld(closestConvexResultCallback, outVector3)
///
/// @desc
///
/// @param {Pointer} closestConvexResultCallback
/// @param {Pointer} outVector3
YYEXPORT void btClosestConvexResultCallback_getConvexFromWorld(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto closestConvexResultCallback = (btClosestConvexResultCallback*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(closestConvexResultCallback->m_convexFromWorld, outVector3);
}

/// @func btClosestConvexResultCallback_getConvexFromWorldArray(closestConvexResultCallback, outArray)
///
/// @desc
///
/// @param {Pointer} closestConvexResultCallback
/// @param {Array<Real>} outArray
YYEXPORT void btClosestConvexResultCallback_getConvexFromWorldArray(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto closestConvexResultCallback = (btClosestConvexResultCallback*)YYGetPtr(arg, 0);
	RValue* outArray = &arg[1];
	btVector3& rayFromWorld = closestConvexResultCallback->m_convexFromWorld;
	RValue value;
	value.kind = VALUE_REAL;
	value.val = rayFromWorld.getZ(); SET_RValue(outArray, &value, NULL, 2);
	value.val = rayFromWorld.getY(); SET_RValue(outArray, &value, NULL, 1);
	value.val = rayFromWorld.getX(); SET_RValue(outArray, &value, NULL, 0);
	FREE_RValue(&value);
}

/// @func btClosestConvexResultCallback_getConvexToWorld(closestConvexResultCallback, outVector3)
///
/// @desc
///
/// @param {Pointer} closestConvexResultCallback
/// @param {Pointer} outVector3
YYEXPORT void btClosestConvexResultCallback_getConvexToWorld(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto closestConvexResultCallback = (btClosestConvexResultCallback*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(closestConvexResultCallback->m_convexToWorld, outVector3);
}

/// @func btClosestConvexResultCallback_getConvexToWorldArray(closestConvexResultCallback, outArray)
///
/// @desc
///
/// @param {Pointer} closestConvexResultCallback
/// @param {Array<Real>} outArray
YYEXPORT void btClosestConvexResultCallback_getConvexToWorldArray(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto closestConvexResultCallback = (btClosestConvexResultCallback*)YYGetPtr(arg, 0);
	RValue* outArray = &arg[1];
	btVector3& rayToWorld = closestConvexResultCallback->m_convexToWorld;
	RValue value;
	value.kind = VALUE_REAL;
	value.val = rayToWorld.getZ(); SET_RValue(outArray, &value, NULL, 2);
	value.val = rayToWorld.getY(); SET_RValue(outArray, &value, NULL, 1);
	value.val = rayToWorld.getX(); SET_RValue(outArray, &value, NULL, 0);
	FREE_RValue(&value);
}

/// @func btClosestConvexResultCallback_getHitNormalWorld(closestConvexResultCallback, outVector3)
///
/// @desc
///
/// @param {Pointer} closestConvexResultCallback
/// @param {Pointer} outVector3
YYEXPORT void btClosestConvexResultCallback_getHitNormalWorld(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto closestConvexResultCallback = (btClosestConvexResultCallback*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(closestConvexResultCallback->m_hitNormalWorld, outVector3);
}

/// @func btClosestConvexResultCallback_getHitNormalWorldArray(closestConvexResultCallback, outArray)
///
/// @desc
///
/// @param {Pointer} closestConvexResultCallback
/// @param {Array<Real>} outArray
YYEXPORT void btClosestConvexResultCallback_getHitNormalWorldArray(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto closestConvexResultCallback = (btClosestConvexResultCallback*)YYGetPtr(arg, 0);
	RValue* outArray = &arg[1];
	btVector3& hitNormalWorld = closestConvexResultCallback->m_hitNormalWorld;
	RValue value;
	value.kind = VALUE_REAL;
	value.val = hitNormalWorld.getZ(); SET_RValue(outArray, &value, NULL, 2);
	value.val = hitNormalWorld.getY(); SET_RValue(outArray, &value, NULL, 1);
	value.val = hitNormalWorld.getX(); SET_RValue(outArray, &value, NULL, 0);
	FREE_RValue(&value);
}

/// @func btClosestConvexResultCallback_getHitPointWorld(closestConvexResultCallback, outVector3)
///
/// @desc
///
/// @param {Pointer} closestConvexResultCallback
/// @param {Pointer} outVector3
YYEXPORT void btClosestConvexResultCallback_getHitPointWorld(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto closestConvexResultCallback = (btClosestConvexResultCallback*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(closestConvexResultCallback->m_hitPointWorld, outVector3);
}

/// @func btClosestConvexResultCallback_getHitPointWorldArray(closestConvexResultCallback, outArray)
///
/// @desc
///
/// @param {Pointer} closestConvexResultCallback
/// @param {Array<Real>} outArray
YYEXPORT void btClosestConvexResultCallback_getHitPointWorldArray(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto closestConvexResultCallback = (btClosestConvexResultCallback*)YYGetPtr(arg, 0);
	RValue* outArray = &arg[1];
	btVector3& hitPointWorld = closestConvexResultCallback->m_hitPointWorld;
	RValue value;
	value.kind = VALUE_REAL;
	value.val = hitPointWorld.getZ(); SET_RValue(outArray, &value, NULL, 2);
	value.val = hitPointWorld.getY(); SET_RValue(outArray, &value, NULL, 1);
	value.val = hitPointWorld.getX(); SET_RValue(outArray, &value, NULL, 0);
	FREE_RValue(&value);
}

/// @func btClosestConvexResultCallback_getHitCollisionObject(closestConvexResultCallback)
///
/// @desc
///
/// @param {Pointer} closestConvexResultCallback
///
/// @return {Pointer}
YYEXPORT void btClosestConvexResultCallback_getHitCollisionObject(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto closestConvexResultCallback = (btClosestConvexResultCallback*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = const_cast<btCollisionObject*>(closestConvexResultCallback->m_hitCollisionObject);
}

// Note: Skip btClosestConvexResultCallback::addSingleResult

////////////////////////////////////////////////////////////////////////////////
//
// btCollisionWorld::ContactResultCallback
//

/// @func btContactResultCallback_destroy(contactResultCallback)
///
/// @desc
///
/// @param {Pointer} contactResultCallback
YYEXPORT void btContactResultCallback_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btContactResultCallback*)YYGetPtr(arg, 0);
}

/// @func btContactResultCallback_getCollisionFilterGroup(contactResultCallback)
///
/// @desc
///
/// @param {Pointer} contactResultCallback
///
/// @return {Real}
YYEXPORT void btContactResultCallback_getCollisionFilterGroup(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto contactResultCallback = (btContactResultCallback*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.val = contactResultCallback->m_collisionFilterGroup;
}

/// @func btContactResultCallback_setCollisionFilterGroup(contactResultCallback, collisionFilterGroup)
///
/// @desc
///
/// @param {Pointer} contactResultCallback
/// @param {Real} collisionFilterGroup
YYEXPORT void btContactResultCallback_setCollisionFilterGroup(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto contactResultCallback = (btContactResultCallback*)YYGetPtr(arg, 0);
	int collisionFilterGroup = YYGetInt32(arg, 1);
	contactResultCallback->m_collisionFilterGroup = collisionFilterGroup;
}

/// @func btContactResultCallback_getCollisionFilterMask(contactResultCallback)
///
/// @desc
///
/// @param {Pointer} contactResultCallback
///
/// @return {Real}
YYEXPORT void btContactResultCallback_getCollisionFilterMask(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto contactResultCallback = (btContactResultCallback*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.val = contactResultCallback->m_collisionFilterMask;
}

/// @func btContactResultCallback_setCollisionFilterMask(contactResultCallback, collisionFilterMask)
///
/// @desc
///
/// @param {Pointer} contactResultCallback
/// @param {Real} collisionFilterMask
YYEXPORT void btContactResultCallback_setCollisionFilterMask(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto contactResultCallback = (btContactResultCallback*)YYGetPtr(arg, 0);
	int collisionFilterMask = YYGetInt32(arg, 1);
	contactResultCallback->m_collisionFilterMask = collisionFilterMask;
}

/// @func btContactResultCallback_getClosestDistanceThreshold(contactResultCallback)
///
/// @desc
///
/// @param {Pointer} contactResultCallback
///
/// @return {Real}
YYEXPORT void btContactResultCallback_getClosestDistanceThreshold(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto contactResultCallback = (btContactResultCallback*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = contactResultCallback->m_closestDistanceThreshold;
}

/// @func btContactResultCallback_setClosestDistanceThreshold(contactResultCallback, closestDistanceThreshold)
///
/// @desc
///
/// @param {Pointer} contactResultCallback
/// @param {Real} closestDistanceThreshold
YYEXPORT void btContactResultCallback_setClosestDistanceThreshold(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto contactResultCallback = (btContactResultCallback*)YYGetPtr(arg, 0);
	double closestDistanceThreshold = YYGetReal(arg, 1);
	contactResultCallback->m_closestDistanceThreshold = closestDistanceThreshold;
}

// Note: Skip btContactResultCallback::needsCollision
// Note: Skip btContactResultCallback::addSingleResult

////////////////////////////////////////////////////////////////////////////////

/// @func btCollisionWorld_getNumCollisionObjects(collisionWorld)
///
/// @desc
///
/// @param {Pointer} collisionWorld
///
/// @return {Real}
YYEXPORT void btCollisionWorld_getNumCollisionObjects(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionWorld = (btCollisionWorld*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = collisionWorld->getNumCollisionObjects();
}

/// @func btCollisionWorld_rayTest(collisionWorld, rayFromWorld, rayToWorld, resultCallback)
///
/// @desc
///
/// @param {Pointer} collisionWorld
/// @param {Pointer} rayFromWorld
/// @param {Pointer} rayToWorld
/// @param {Pointer} resultCallback
YYEXPORT void btCollisionWorld_rayTest(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionWorld = (btCollisionWorld*)YYGetPtr(arg, 0);
	btVector3& rayFromWorld = *(btVector3*)YYGetPtr(arg, 1);
	btVector3& rayToWorld = *(btVector3*)YYGetPtr(arg, 2);
	btRayResultCallback& resultCallback = *(btRayResultCallback*)YYGetPtr(arg, 3);
	collisionWorld->rayTest(rayFromWorld, rayToWorld, resultCallback);
}

/// @func btCollisionWorld_rayTestXYZ(collisionWorld, rayFromWorldX, rayFromWorldY, rayFromWorldZ, rayToWorldX, rayToWorldY, rayToWorldZ, resultCallback)
///
/// @desc
///
/// @param {Pointer} collisionWorld
/// @param {Real} rayFromWorldX
/// @param {Real} rayFromWorldY
/// @param {Real} rayFromWorldZ
/// @param {Real} rayToWorldX
/// @param {Real} rayToWorldY
/// @param {Real} rayToWorldZ
/// @param {Pointer} resultCallback
YYEXPORT void btCollisionWorld_rayTestXYZ(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionWorld = (btCollisionWorld*)YYGetPtr(arg, 0);
	double rayFromWorldX = YYGetReal(arg, 1);
	double rayFromWorldY = YYGetReal(arg, 2);
	double rayFromWorldZ = YYGetReal(arg, 3);
	double rayToWorldX = YYGetReal(arg, 4);
	double rayToWorldY = YYGetReal(arg, 5);
	double rayToWorldZ = YYGetReal(arg, 6);
	btRayResultCallback& resultCallback = *(btRayResultCallback*)YYGetPtr(arg, 7);
	collisionWorld->rayTest(
		btVector3(rayFromWorldX, rayFromWorldY, rayToWorldZ),
		btVector3(rayToWorldX, rayToWorldY, rayToWorldZ),
		resultCallback);
}

/// @func btCollisionWorld_convexSweepTest(collisionWorld, castShape, from, to, resultCallback[, allowedCcdPenetration])
///
/// @desc
///
/// @param {Pointer} collisionWorld
/// @param {Pointer} castShape
/// @param {Pointer} from
/// @param {Pointer} to
/// @param {Pointer} resultCallback
/// @param {Real} [allowedCcdPenetration]
YYEXPORT void btCollisionWorld_convexSweepTest(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionWorld = (btCollisionWorld*)YYGetPtr(arg, 0);
	auto castShape = (btConvexShape*)YYGetPtr(arg, 1);
	btTransform& from = *(btTransform*)YYGetPtr(arg, 2);
	btTransform to = *(btTransform*)YYGetPtr(arg, 3);
	btConvexResultCallback& resultCallback = *(btConvexResultCallback*)YYGetPtr(arg, 4);
	double allowedCcdPenetration = (argc > 5) ? YYGetReal(arg, 5) : 0.0;
	collisionWorld->convexSweepTest(castShape, from, to, resultCallback, allowedCcdPenetration);
}

/// @func btCollisionWorld_contactTest(collisionWorld, colObj, resultCallback)
///
/// @desc
///
/// @param {Pointer} collisionWorld
/// @param {Pointer} colObj
/// @param {Pointer} resultCallback
YYEXPORT void btCollisionWorld_contactTest(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionWorld = (btCollisionWorld*)YYGetPtr(arg, 0);
	auto colObj = (btCollisionObject*)YYGetPtr(arg, 1);
	btContactResultCallback& resultCallback = *(btContactResultCallback*)YYGetPtr(arg, 2);
	collisionWorld->contactTest(colObj, resultCallback);
}

/// @func btCollisionWorld_contactPairTest(collisionWorld, colObjA, colObjB, resultCallback)
///
/// @desc
///
/// @param {Pointer} collisionWorld
/// @param {Pointer} colObjA
/// @param {Pointer} colObjB
/// @param {Pointer} resultCallback
YYEXPORT void btCollisionWorld_contactPairTest(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionWorld = (btCollisionWorld*)YYGetPtr(arg, 0);
	auto colObjA = (btCollisionObject*)YYGetPtr(arg, 1);
	auto colObjB = (btCollisionObject*)YYGetPtr(arg, 2);
	btContactResultCallback& resultCallback = *(btContactResultCallback*)YYGetPtr(arg, 3);
	collisionWorld->contactPairTest(colObjA, colObjB, resultCallback);
}

// Note: Skip btCollisionWorld::rayTestSingle
// Note: Skip btCollisionWorld::rayTestSingleInternal
// Note: Skip btCollisionWorld::objectQuerySingle
// Note: Skip btCollisionWorld::objectQuerySingleInternal

/// @func btCollisionWorld_addCollisionObject(collisionWorld, collisionObject[, collisionFilterGroup[, collisionFilterMask]])
///
/// @desc
///
/// @param {Pointer} collisionWorld
/// @param {Pointer} collisionObject
/// @param {Real} [collisionFilterGroup]
/// @param {Real} [collisionFilterMask]
YYEXPORT void btCollisionWorld_addCollisionObject(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionWorld = (btCollisionWorld*)YYGetPtr(arg, 0);
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 1);
	int collisionFilterGroup = (argc > 2) ? YYGetInt32(arg, 2) : btBroadphaseProxy::DefaultFilter;
	int collisionFilterMask = (argc > 3) ? YYGetInt32(arg, 3) : btBroadphaseProxy::AllFilter;
	collisionWorld->addCollisionObject(collisionObject, collisionFilterGroup, collisionFilterMask);
}

/// @func btCollisionWorld_refreshBroadphaseProxy(collisionWorld, collisionObject)
///
/// @desc
///
/// @param {Pointer} collisionWorld
/// @param {Pointer} collisionObject
YYEXPORT void btCollisionWorld_refreshBroadphaseProxy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionWorld = (btCollisionWorld*)YYGetPtr(arg, 0);
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 1);
	collisionWorld->refreshBroadphaseProxy(collisionObject);
}

/// @func btCollisionWorld_getCollisionObjectArray(collisionWorld, outArray)
///
/// @desc
///
/// @param {Pointer} collisionWorld
/// @param {Array<Pointer>} outArray
YYEXPORT void btCollisionWorld_getCollisionObjectArray(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionWorld = (btCollisionWorld*)YYGetPtr(arg, 0);
	RValue* outArray = &arg[1];
	btCollisionObjectArray& collisionObjectArray = collisionWorld->getCollisionObjectArray();
	RValue value;
	value.kind = VALUE_PTR;
	for (int i = collisionObjectArray.size() - 1; i >= 0; --i)
	{
		value.ptr = collisionObjectArray[i];
		SET_RValue(outArray, &value, NULL, i);
	}
	FREE_RValue(&value);
}

/// @func btCollisionWorld_getCollisionObject(collisionWorld, index)
///
/// @desc
///
/// @param {Pointer} collisionWorld
/// @param {Real} index
///
/// @return {Pointer}
YYEXPORT void btCollisionWorld_getCollisionObject(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionWorld = (btCollisionWorld*)YYGetPtr(arg, 0);
	int index = YYGetInt32(arg, 1);
	result.kind = VALUE_PTR;
	result.ptr = collisionWorld->getCollisionObjectArray()[index];
}

/// @func btCollisionWorld_removeCollisionObject(collisionWorld, collisionObject)
///
/// @desc
///
/// @param {Pointer} collisionWorld
/// @param {Pointer} collisionObject
YYEXPORT void btCollisionWorld_removeCollisionObject(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionWorld = (btCollisionWorld*)YYGetPtr(arg, 0);
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 1);
	collisionWorld->removeCollisionObject(collisionObject);
}

/// @func btCollisionWorld_performDiscreteCollisionDetection(collisionWorld)
///
/// @desc
///
/// @param {Pointer} collisionWorld
YYEXPORT void btCollisionWorld_performDiscreteCollisionDetection(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionWorld = (btCollisionWorld*)YYGetPtr(arg, 0);
	collisionWorld->performDiscreteCollisionDetection();
}

/// @func btCollisionWorld_getDispatchInfo(collisionWorld)
///
/// @desc
///
/// @param {Pointer} collisionWorld
///
/// @return {Pointer}
YYEXPORT void btCollisionWorld_getDispatchInfo(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionWorld = (btCollisionWorld*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = &collisionWorld->getDispatchInfo();
}

/// @func btCollisionWorld_getForceUpdateAllAabbs(collisionWorld)
///
/// @desc
///
/// @param {Pointer} collisionWorld
///
/// @return {Bool}
YYEXPORT void btCollisionWorld_getForceUpdateAllAabbs(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionWorld = (btCollisionWorld*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = collisionWorld->getForceUpdateAllAabbs();
}

/// @func btCollisionWorld_setForceUpdateAllAabbs(collisionWorld, forceUpdateAllAabbs)
///
/// @desc
///
/// @param {Pointer} collisionWorld
/// @param {Bool} forceUpdateAllAabbs
YYEXPORT void btCollisionWorld_setForceUpdateAllAabbs(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionWorld = (btCollisionWorld*)YYGetPtr(arg, 0);
	bool forceUpdateAllAabbs = YYGetBool(arg, 1);
	collisionWorld->setForceUpdateAllAabbs(forceUpdateAllAabbs);
}

// Note: Skip btCollisionWorld::serialize
