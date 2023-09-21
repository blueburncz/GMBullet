#include <GMBullet.hpp>

////////////////////////////////////////////////////////////////////////////////
//
// btCollisionWorld
//

/// @func btCollisionWorld_create(dispatcher, pairCache, collisionConfiguration)
///
/// @desc
///
/// @param {Pointer} dispatcher
/// @param {Pointer} pairCache
/// @param {Pointer} collisionConfiguration
///
/// @return {Pointer}
YYEXPORT void btCollisionWorld_create(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	btDispatcher* dispatcher = (btDispatcher*)YYGetPtr(arg, 0);
	btBroadphaseInterface* pairCache = (btBroadphaseInterface*)YYGetPtr(arg, 1);
	btCollisionConfiguration* collisionConfiguration = (btCollisionConfiguration*)YYGetPtr(arg, 2);
	Result.kind = VALUE_PTR;
	Result.ptr = new btCollisionWorld(dispatcher, pairCache, collisionConfiguration);
}

/// @func btCollisionWorld_destroy(collisionWorld)
///
/// @desc
///
/// @param {Pointer} collisionWorld
YYEXPORT void btCollisionWorld_destroy(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	delete (btCollisionWorld*)YYGetPtr(arg, 0);
}

/// @func btCollisionWorld_rayTest(collisionWorld, rayFromWorld, rayToWorld, resultCallback)
///
/// @desc
///
/// @param {Pointer} collisionWorld
/// @param {Pointer} rayFromWorld
/// @param {Pointer} rayToWorld
/// @param {Pointer} resultCallback
YYEXPORT void btCollisionWorld_rayTest(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	btCollisionWorld* collisionWorld = (btCollisionWorld*)YYGetPtr(arg, 0);
	btVector3* rayFromWorld = (btVector3*)YYGetPtr(arg, 1);
	btVector3* rayToWorld = (btVector3*)YYGetPtr(arg, 2);
	btCollisionWorld::RayResultCallback* resultCallback = (btCollisionWorld::RayResultCallback*)YYGetPtr(arg, 3);
	collisionWorld->rayTest(*rayFromWorld, *rayToWorld, *resultCallback);
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
YYEXPORT void btCollisionWorld_rayTestXYZ(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	btCollisionWorld* collisionWorld = (btCollisionWorld*)YYGetPtr(arg, 0);
	double rayFromWorldX = YYGetReal(arg, 1);
	double rayFromWorldY = YYGetReal(arg, 2);
	double rayFromWorldZ = YYGetReal(arg, 3);
	double rayToWorldX = YYGetReal(arg, 4);
	double rayToWorldY = YYGetReal(arg, 5);
	double rayToWorldZ = YYGetReal(arg, 6);
	btCollisionWorld::RayResultCallback* resultCallback = (btCollisionWorld::RayResultCallback*)YYGetPtr(arg, 7);
	collisionWorld->rayTest(
		btVector3(rayFromWorldX, rayFromWorldY, rayToWorldZ),
		btVector3(rayToWorldX, rayToWorldY, rayToWorldZ),
		*resultCallback);
}

/// @func btCollisionWorld_getNumCollisionObjects(collisionWorld)
///
/// @desc
///
/// @param {Pointer} collisionWorld
///
/// @return {Real}
YYEXPORT void btCollisionWorld_getNumCollisionObjects(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	btCollisionWorld* collisionWorld = (btCollisionWorld*)YYGetPtr(arg, 0);
	Result.kind = VALUE_REAL;
	Result.val = collisionWorld->getNumCollisionObjects();
}

/// @func btCollisionWorld_getCollisionObjectArray(collisionWorld, outArray)
///
/// @desc
///
/// @param {Pointer} collisionWorld
/// @param {Array<Pointer>} outArray
YYEXPORT void btCollisionWorld_getCollisionObjectArray(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	btCollisionWorld* collisionWorld = (btCollisionWorld*)YYGetPtr(arg, 0);
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
YYEXPORT void btCollisionWorld_getCollisionObject(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	btCollisionWorld* collisionWorld = (btCollisionWorld*)YYGetPtr(arg, 0);
	int index = YYGetInt32(arg, 1);
	Result.kind = VALUE_PTR;
	Result.ptr = collisionWorld->getCollisionObjectArray()[index];
}

/// @func btCollisionWorld_removeCollisionObject(collisionWorld, collisionObject)
///
/// @desc
///
/// @param {Pointer} collisionWorld
/// @param {Pointer} collisionObject
YYEXPORT void btCollisionWorld_removeCollisionObject(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	btCollisionWorld* collisionWorld = (btCollisionWorld*)YYGetPtr(arg, 0);
	btCollisionObject* collisionObject = (btCollisionObject*)YYGetPtr(arg, 1);
	collisionWorld->removeCollisionObject(collisionObject);
}

////////////////////////////////////////////////////////////////////////////////
//
// btCollisionWorld::RayResultCallback
//

using btRayResultCallback = btCollisionWorld::RayResultCallback;

/// @func btRayResultCallback_destroy(rayResultCallback)
///
/// @desc
///
/// @param {Pointer} rayResultCallback
YYEXPORT void btRayResultCallback_destroy(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
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
YYEXPORT void btRayResultCallback_getClosestHitFraction(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	btRayResultCallback* rayResultCallback = (btRayResultCallback*)YYGetPtr(arg, 0);
	Result.kind = VALUE_REAL;
	Result.val = rayResultCallback->m_closestHitFraction;
}

/// @func btRayResultCallback_getCollisionObject(rayResultCallback)
///
/// @desc
///
/// @param {Pointer} rayResultCallback
///
/// @return {Pointer}
YYEXPORT void btRayResultCallback_getCollisionObject(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	btRayResultCallback* rayResultCallback = (btRayResultCallback*)YYGetPtr(arg, 0);
	Result.kind = VALUE_PTR;
	Result.ptr = (void*)const_cast<btCollisionObject*>(rayResultCallback->m_collisionObject);
}

/// @func btRayResultCallback_getCollisionFilterGroup(rayResultCallback)
///
/// @desc
///
/// @param {Pointer} rayResultCallback
///
/// @return {Real}
YYEXPORT void btRayResultCallback_getCollisionFilterGroup(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	btRayResultCallback* rayResultCallback = (btRayResultCallback*)YYGetPtr(arg, 0);
	Result.kind = VALUE_INT32;
	Result.val = rayResultCallback->m_collisionFilterGroup;
}

/// @func btRayResultCallback_setCollisionFilterGroup(rayResultCallback, collisionFilterGroup)
///
/// @desc
///
/// @param {Pointer} rayResultCallback
/// @param {Real} collisionFilterGroup
YYEXPORT void btRayResultCallback_setCollisionFilterGroup(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	btRayResultCallback* rayResultCallback = (btRayResultCallback*)YYGetPtr(arg, 0);
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
YYEXPORT void btRayResultCallback_getCollisionFilterMask(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	btRayResultCallback* rayResultCallback = (btRayResultCallback*)YYGetPtr(arg, 0);
	Result.kind = VALUE_INT32;
	Result.val = rayResultCallback->m_collisionFilterMask;
}

/// @func btRayResultCallback_setCollisionFilterMask(rayResultCallback, collisionFilterMask)
///
/// @desc
///
/// @param {Pointer} rayResultCallback
/// @param {Real} collisionFilterMask
YYEXPORT void btRayResultCallback_setCollisionFilterMask(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	btRayResultCallback* rayResultCallback = (btRayResultCallback*)YYGetPtr(arg, 0);
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
YYEXPORT void btRayResultCallback_hasHit(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	btRayResultCallback* rayResultCallback = (btRayResultCallback*)YYGetPtr(arg, 0);
	Result.kind = VALUE_BOOL;
	Result.val = rayResultCallback->hasHit();
}

////////////////////////////////////////////////////////////////////////////////
//
// btCollisionWorld::ClosestRayResultCallback
//

using btClosestRayResultCallback = btCollisionWorld::ClosestRayResultCallback;

/// @func btClosestRayResultCallback_create(rayFromWorld, rayToWorld)
///
/// @desc
///
/// @param {Pointer} rayFromWorld
/// @param {Pointer} rayToWorld
///
/// @return {Pointer}
YYEXPORT void btClosestRayResultCallback_create(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	btVector3* rayFromWorld = (btVector3*)YYGetPtr(arg, 0);
	btVector3* rayToWorld = (btVector3*)YYGetPtr(arg, 1);
	Result.kind = VALUE_PTR;
	Result.ptr = new btClosestRayResultCallback(*rayFromWorld, *rayToWorld);
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
YYEXPORT void btClosestRayResultCallback_createXYZ(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double rayFromWorldX = YYGetReal(arg, 0);
	double rayFromWorldY = YYGetReal(arg, 1);
	double rayFromWorldZ = YYGetReal(arg, 2);
	double rayToWorldX = YYGetReal(arg, 3);
	double rayToWorldY = YYGetReal(arg, 4);
	double rayToWorldZ = YYGetReal(arg, 5);
	Result.kind = VALUE_PTR;
	Result.ptr = new btClosestRayResultCallback(
		btVector3(rayFromWorldX, rayFromWorldY, rayFromWorldZ),
		btVector3(rayToWorldX, rayToWorldY, rayToWorldZ));
}

/// @func btClosestRayResultCallback_destroy(closestRayResultCallback)
///
/// @desc
///
/// @param {Pointer} closestRayResultCallback
YYEXPORT void btClosestRayResultCallback_destroy(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	delete (btClosestRayResultCallback*)YYGetPtr(arg, 0);
}

/// @func btClosestRayResultCallback_getRayFromWorld(closestRayResultCallback, outVector3)
///
/// @desc
///
/// @param {Pointer} closestRayResultCallback
/// @param {Pointer} outVector3
YYEXPORT void btClosestRayResultCallback_getRayFromWorld(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	btClosestRayResultCallback* closestRayResultCallback = (btClosestRayResultCallback*)YYGetPtr(arg, 0);
	btVector3* outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(closestRayResultCallback->m_rayFromWorld, outVector3);
}

/// @func btClosestRayResultCallback_getRayFromWorldArray(closestRayResultCallback, outArray)
///
/// @desc
///
/// @param {Pointer} closestRayResultCallback
/// @param {Array<Real>} outArray
YYEXPORT void btClosestRayResultCallback_getRayFromWorldArray(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	btClosestRayResultCallback* closestRayResultCallback = (btClosestRayResultCallback*)YYGetPtr(arg, 0);
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
YYEXPORT void btClosestRayResultCallback_getRayToWorld(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	btClosestRayResultCallback* closestRayResultCallback = (btClosestRayResultCallback*)YYGetPtr(arg, 0);
	btVector3* outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(closestRayResultCallback->m_rayToWorld, outVector3);
}

/// @func btClosestRayResultCallback_getRayToWorldArray(closestRayResultCallback, outArray)
///
/// @desc
///
/// @param {Pointer} closestRayResultCallback
/// @param {Array<Real>} outArray
YYEXPORT void btClosestRayResultCallback_getRayToWorldArray(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	btClosestRayResultCallback* closestRayResultCallback = (btClosestRayResultCallback*)YYGetPtr(arg, 0);
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
YYEXPORT void btClosestRayResultCallback_getHitNormalWorld(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	btClosestRayResultCallback* closestRayResultCallback = (btClosestRayResultCallback*)YYGetPtr(arg, 0);
	btVector3* outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(closestRayResultCallback->m_hitNormalWorld, outVector3);
}

/// @func btClosestRayResultCallback_getHitNormalWorldArray(closestRayResultCallback, outArray)
///
/// @desc
///
/// @param {Pointer} closestRayResultCallback
/// @param {Array<Real>} outArray
YYEXPORT void btClosestRayResultCallback_getHitNormalWorldArray(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	btClosestRayResultCallback* closestRayResultCallback = (btClosestRayResultCallback*)YYGetPtr(arg, 0);
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
YYEXPORT void btClosestRayResultCallback_getHitPointWorld(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	btClosestRayResultCallback* closestRayResultCallback = (btClosestRayResultCallback*)YYGetPtr(arg, 0);
	btVector3* outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(closestRayResultCallback->m_hitPointWorld, outVector3);
}

/// @func btClosestRayResultCallback_getHitPointWorldArray(closestRayResultCallback, outArray)
///
/// @desc
///
/// @param {Pointer} closestRayResultCallback
/// @param {Array<Real>} outArray
YYEXPORT void btClosestRayResultCallback_getHitPointWorldArray(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	btClosestRayResultCallback* closestRayResultCallback = (btClosestRayResultCallback*)YYGetPtr(arg, 0);
	RValue* outArray = &arg[1];
	btVector3& hitPointWorld = closestRayResultCallback->m_hitPointWorld;
	RValue value;
	value.kind = VALUE_REAL;
	value.val = hitPointWorld.getZ(); SET_RValue(outArray, &value, NULL, 2);
	value.val = hitPointWorld.getY(); SET_RValue(outArray, &value, NULL, 1);
	value.val = hitPointWorld.getX(); SET_RValue(outArray, &value, NULL, 0);
	FREE_RValue(&value);
}

////////////////////////////////////////////////////////////////////////////////
//
// btCollisionWorld::AllHitsRayResultCallback
//

using btAllHitsRayResultCallback = btCollisionWorld::AllHitsRayResultCallback;

/// @func btAllHitsRayResultCallback_create(rayFromWorld, rayToWorld)
///
/// @desc
///
/// @param {Pointer} rayFromWorld
/// @param {Pointer} rayToWorld
///
/// @return {Pointer}
YYEXPORT void btAllHitsRayResultCallback_create(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	btVector3* rayFromWorld = (btVector3*)YYGetPtr(arg, 0);
	btVector3* rayToWorld = (btVector3*)YYGetPtr(arg, 1);
	Result.kind = VALUE_PTR;
	Result.ptr = new btAllHitsRayResultCallback(*rayFromWorld, *rayToWorld);
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
YYEXPORT void btAllHitsRayResultCallback_createXYZ(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double rayFromWorldX = YYGetReal(arg, 0);
	double rayFromWorldY = YYGetReal(arg, 1);
	double rayFromWorldZ = YYGetReal(arg, 2);
	double rayToWorldX = YYGetReal(arg, 3);
	double rayToWorldY = YYGetReal(arg, 4);
	double rayToWorldZ = YYGetReal(arg, 5);
	Result.kind = VALUE_PTR;
	Result.ptr = new btAllHitsRayResultCallback(
		btVector3(rayFromWorldX, rayFromWorldY, rayFromWorldZ),
		btVector3(rayToWorldX, rayToWorldY, rayToWorldZ));
}

/// @func btAllHitsRayResultCallback_destroy(allHitsRayResultCallback)
///
/// @desc
///
/// @param {Pointer} allHitsRayResultCallback
YYEXPORT void btAllHitsRayResultCallback_destroy(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	delete (btAllHitsRayResultCallback*)YYGetPtr(arg, 0);
}

/// @func btAllHitsRayResultCallback_getCollisionObjects(allHitsRayResultCallback, outArray)
///
/// @desc
///
/// @param {Pointer} allHitsRayResultCallback
/// @param {Array<Pointer>} outArray
YYEXPORT void btAllHitsRayResultCallback_getCollisionObjects(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	btAllHitsRayResultCallback* allHitsRayResultCallback = (btAllHitsRayResultCallback*)YYGetPtr(arg, 0);
	RValue* outArray = &arg[1];
	RValue value;
	value.kind = VALUE_PTR;
	for (int i = allHitsRayResultCallback->m_collisionObjects.size() - 1; i >= 0; --i)
	{
		value.ptr = (void*)const_cast<btCollisionObject*>(allHitsRayResultCallback->m_collisionObjects[i]);
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
YYEXPORT void btAllHitsRayResultCallback_getHitNormalWorld(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	btAllHitsRayResultCallback* allHitsRayResultCallback = (btAllHitsRayResultCallback*)YYGetPtr(arg, 0);
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
YYEXPORT void btAllHitsRayResultCallback_getHitNormalWorldArray(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	btAllHitsRayResultCallback* allHitsRayResultCallback = (btAllHitsRayResultCallback*)YYGetPtr(arg, 0);
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
YYEXPORT void btAllHitsRayResultCallback_getHitPointWorld(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	btAllHitsRayResultCallback* allHitsRayResultCallback = (btAllHitsRayResultCallback*)YYGetPtr(arg, 0);
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
YYEXPORT void btAllHitsRayResultCallback_getHitPointWorldArray(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	btAllHitsRayResultCallback* allHitsRayResultCallback = (btAllHitsRayResultCallback*)YYGetPtr(arg, 0);
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
YYEXPORT void btAllHitsRayResultCallback_getHitFractions(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	btAllHitsRayResultCallback* allHitsRayResultCallback = (btAllHitsRayResultCallback*)YYGetPtr(arg, 0);
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
