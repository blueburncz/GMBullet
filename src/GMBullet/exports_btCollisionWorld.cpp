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
/// Creates a new instance of a Bullet Physics collision world.
///
/// @param {Pointer} dispatcher
///     A pointer to a btDispatcher object, responsible for managing collision
///     dispatch.
/// @param {Pointer} pairCache
///     A pointer to a btBroadphaseInterface object, representing the
///     broad-phase collision detection.
/// @param {Pointer} collisionConfiguration
///     A pointer to a btCollisionConfiguration object, defining collision
///     behavior and algorithms.
///
/// @return {Pointer} A pointer to the newly created btCollisionWorld instance.
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
/// This function destroys a btCollisionWorld instance, releasing the associated
/// memory.
///
/// @param {Pointer} collisionWorld
///     A pointer to the btCollisionWorld instance to be destroyed.
YYEXPORT void btCollisionWorld_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btCollisionWorld*)YYGetPtr(arg, 0);
}

/// @func btCollisionWorld_setBroadphase(collisionWorld, pairCache)
///
/// @desc
/// Sets the broadphase interface for a given btCollisionWorld instance. The
/// broadphase is used for the initial overlapping pairs determination in the
/// collision detection system.
///
/// @param {Pointer} collisionWorld
///     A pointer to the btCollisionWorld instance for which the broadphase
///     interface will be set. It should be a valid pointer to an existing
///     btCollisionWorld instance.
/// @param {Pointer} pairCache
///     A pointer to the btBroadphaseInterface instance that will serve as the
///     broadphase for the collision world. It should be a valid pointer to an
///     existing btBroadphaseInterface instance.
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
/// Retrieves the broadphase interface associated with a given btCollisionWorld
/// instance.
///
/// @param {Pointer} collisionWorld
///     A pointer to the btCollisionWorld instance for which the broadphase
///     interface will be retrieved. It should be a valid pointer to an existing
///     btCollisionWorld instance.
///
/// @return {Pointer} A pointer to the btBroadphaseInterface instance associated
/// with the specified collisionWorld.
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
/// Retrieves the pair cache associated with a given btCollisionWorld instance.
///
/// @param {Pointer} collisionWorld
///     A pointer to the btCollisionWorld instance for which the pair cache will
///     be retrieved. It should be a valid pointer to an existing
///     btCollisionWorld instance.
///
/// @return {Pointer} A pointer to the pair cache
/// (e.g., btHashedOverlappingPairCache) associated with the specified
/// collisionWorld.
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
/// Retrieves the dispatcher associated with a given btCollisionWorld instance.
/// The dispatcher is responsible for processing collision events and sending
/// them to appropriate collision algorithms.
///
/// @param {Pointer} collisionWorld
///     A pointer to the btCollisionWorld instance for which the dispatcher will
///     be retrieved. It should be a valid pointer to an existing
///     btCollisionWorld instance.
///
/// @return {Pointer} A pointer to the dispatcher (e.g., btDispatcher)
/// associated with the specified collisionWorld.
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
/// Updates the axis-aligned bounding box (AABB) of a single collision object in
/// the btCollisionWorld. This is typically done to reflect changes in the
/// object's position or shape before performing collision detection.
///
/// @param {Pointer} collisionWorld
///     A pointer to the btCollisionWorld instance in which the collision object
///     is present. It should be a valid pointer to an existing btCollisionWorld
///     instance.
/// @param {Pointer} collisionObject
///     A pointer to the btCollisionObject instance for which the AABB will be
///     updated. It should be a valid pointer to an existing btCollisionObject
///     instance.
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
/// Updates the axis-aligned bounding boxes (AABBs) of all collision objects in
/// the btCollisionWorld. This is typically done to reflect changes in the
/// objects' positions or shapes before performing collision detection.
///
/// @param {Pointer} collisionWorld
///     A pointer to the btCollisionWorld instance in which the collision
///     objects are present. It should be a valid pointer to an existing
///     btCollisionWorld instance.
YYEXPORT void btCollisionWorld_updateAabbs(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionWorld = (btCollisionWorld*)YYGetPtr(arg, 0);
	collisionWorld->updateAabbs();
}

/// @func btCollisionWorld_computeOverlappingPairs(collisionWorld)
///
/// @desc
/// Computes and updates the list of overlapping pairs of collision objects in
/// the btCollisionWorld. This function is typically called to determine which
/// pairs of objects are colliding or intersecting.
///
/// @param {Pointer} collisionWorld
///     A pointer to the btCollisionWorld instance for which overlapping pairs
///     will be computed. It should be a valid pointer to an existing
///     btCollisionWorld instance.
YYEXPORT void btCollisionWorld_computeOverlappingPairs(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionWorld = (btCollisionWorld*)YYGetPtr(arg, 0);
	collisionWorld->computeOverlappingPairs();
}

/// @func btCollisionWorld_setDebugDrawer(collisionWorld, debugDrawer)
///
/// @desc
/// Sets the debug drawer for a btCollisionWorld instance. The debug drawer is
/// used to visualize the collision shapes and contacts in the world for
/// debugging and visualization purposes.
///
/// @param {Pointer} collisionWorld
///     A pointer to a btCollisionWorld instance (btCollisionWorld).
/// @param {Pointer} debugDrawer
///     A pointer to a debug drawer instance (btIDebugDraw). The debug drawer
///     provides the functionality to draw debug information for collisions.
YYEXPORT void btCollisionWorld_setDebugDrawer(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionWorld = (btCollisionWorld*)YYGetPtr(arg, 0);
	auto debugDrawer = (btIDebugDraw*)YYGetPtr(arg, 1);
	collisionWorld->setDebugDrawer(debugDrawer);
}

/// @func btCollisionWorld_getDebugDrawer(collisionWorld)
///
/// @desc
/// Retrieves the debug drawer associated with a given btCollisionWorld instance.
/// The debug drawer is used to visualize the collision shapes and contacts in
/// the world for debugging and visualization purposes.
///
/// @param {Pointer} collisionWorld
///     A pointer to a btCollisionWorld instance (btCollisionWorld).
/// @return {Pointer}
///     A pointer to the debug drawer instance (btIDebugDraw) associated with
///     the specified collisionWorld.
YYEXPORT void btCollisionWorld_getDebugDrawer(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionWorld = (btCollisionWorld*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = collisionWorld->getDebugDrawer();
}

/// @func btCollisionWorld_debugDrawWorld(collisionWorld)
///
/// @desc
/// Initiates the debug drawing of the collision world. This function triggers
/// the visualization of collision shapes and contacts in the world using the
/// debug drawer associated with the btCollisionWorld instance.
///
/// @param {Pointer} collisionWorld
///     A pointer to a btCollisionWorld instance (btCollisionWorld).
YYEXPORT void btCollisionWorld_debugDrawWorld(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionWorld = (btCollisionWorld*)YYGetPtr(arg, 0);
	collisionWorld->debugDrawWorld();
}

/// @func btCollisionWorld_debugDrawObject(collisionWorld, worldTransform, shape, color)
///
/// @desc
/// Initiates the debug drawing of a specific collision object in the collision
/// world. This function triggers the visualization of the specified collision
/// object using the debug drawer associated with the btCollisionWorld instance.
///
/// @param {Pointer} collisionWorld
///     A pointer to a btCollisionWorld instance (btCollisionWorld).
/// @param {Pointer} worldTransform
///     A pointer to the transformation of the collision object (btTransform).
/// @param {Pointer} shape
///     A pointer to the collision shape of the object (btCollisionShape).
/// @param {Pointer} color
///     A pointer to the color used for visualization (btVector3).
YYEXPORT void btCollisionWorld_debugDrawObject(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionWorld = (btCollisionWorld*)YYGetPtr(arg, 0);
	auto& worldTransform = *(btTransform*)YYGetPtr(arg, 1);
	auto shape = (btCollisionShape*)YYGetPtr(arg, 2);
	auto& color = *(btVector3*)YYGetPtr(arg, 3);
	collisionWorld->debugDrawObject(worldTransform, shape, color);
}

////////////////////////////////////////////////////////////////////////////////
//
// Note: Skipped btCollisionWorld::LocalShapeInfo
//

////////////////////////////////////////////////////////////////////////////////
//
// Note: Skipped btCollisionWorld::LocalRayResult
//

////////////////////////////////////////////////////////////////////////////////
//
// btCollisionWorld::RayResultCallback
//

/// @func btRayResultCallback_destroy(rayResultCallback)
///
/// @desc
/// Destroys a btRayResultCallback instance, releasing the associated memory.
///
/// @param {Pointer} rayResultCallback
///     A pointer to the btRayResultCallback instance to be destroyed.
YYEXPORT void btRayResultCallback_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btRayResultCallback*)YYGetPtr(arg, 0);
}

/// @func btRayResultCallback_getClosestHitFraction(rayResultCallback)
///
/// @desc
/// Gets the closest hit fraction from a btRayResultCallback instance. The
/// closest hit fraction is a value between 0 and 1 representing the fractional
/// distance along the ray where the hit occurred. A value of 1 means no hit,
/// and a value of 0 means the hit occurred at the origin of the ray.
///
/// @param {Pointer} rayResultCallback
///      A pointer to the btRayResultCallback instance from which to get the
///      closest hit fraction. It should be a valid pointer to an existing
///      btRayResultCallback instance.
///
///
/// @return {Real} The closest hit fraction (a value between 0 and 1) from the
/// rayResultCallback instance.
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
/// Gets the collision object associated with a btRayResultCallback instance.
///
/// @param {Pointer} rayResultCallback
///      A pointer to the btRayResultCallback instance from which to get the
///      collision object. It should be a valid pointer to an existing
///      btRayResultCallback instance.
///
/// @return {Pointer} A pointer to the btCollisionObject associated with the
/// rayResultCallback instance.
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
/// Gets the collision filter group associated with a btRayResultCallback
/// instance. The collision filter group is a user-defined grouping used to
/// filter collisions.
///
/// @param {Pointer} rayResultCallback
///     A pointer to the btRayResultCallback instance from which to get the
///     collision filter group. It should be a valid pointer to an existing
///     btRayResultCallback instance.
///
/// @return {Real} The collision filter group associated with the
/// rayResultCallback instance.
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
/// Sets the collision filter group for a btRayResultCallback instance. The
/// collision filter group is a user-defined grouping used to filter collisions.
///
/// @param {Pointer} rayResultCallback
///     A pointer to the btRayResultCallback instance for which the collision
///     filter group will be set. It should be a valid pointer to an existing
///     btRayResultCallback instance.
/// @param {Real} collisionFilterGroup
///     The collision filter group to set for the rayResultCallback instance.
///     This value determines how objects will filter collisions.
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
/// Gets the collision filter mask associated with a btRayResultCallback
/// instance.
///
/// @param {Pointer} rayResultCallback
///     A pointer to the btRayResultCallback instance from which to get the
///     collision filter mask.
///
/// @return {Real} The collision filter mask associated with the
/// rayResultCallback instance.
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
/// Sets the collision filter mask for a btRayResultCallback instance.
///
/// @param {Pointer} rayResultCallback
///     A pointer to the btRayResultCallback instance for which the collision
///     filter mask will be set.
/// @param {Real} collisionFilterMask
///     The collision filter mask to set for the rayResultCallback instance.
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
/// Checks whether the ray result callback has hit any object.
///
/// @param {Pointer} rayResultCallback
///     A pointer to the btRayResultCallback instance to check for hits.
///
/// @return {Bool} True if the ray result callback has hit an object, false
/// otherwise.
YYEXPORT void btRayResultCallback_hasHit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rayResultCallback = (btRayResultCallback*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = rayResultCallback->hasHit();
}

// Note: Skipped btRayResultCallback::needsCollision
// Note: Skipped btRayResultCallback::addSingleResult

////////////////////////////////////////////////////////////////////////////////
//
// btCollisionWorld::ClosestRayResultCallback
//

/// @func btClosestRayResultCallback_create(rayFromWorld, rayToWorld)
///
/// @desc
/// Creates a btClosestRayResultCallback instance with the specified ray
/// parameters.
///
/// @param {Pointer} rayFromWorld
///     A pointer to a btVector3 representing the starting point of the ray in
///     world coordinates.
/// @param {Pointer} rayToWorld
///     A pointer to a btVector3 representing the end point of the ray in world
///     coordinates.
///
/// @return {Pointer} A pointer to the newly created btClosestRayResultCallback
/// instance.
YYEXPORT void btClosestRayResultCallback_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto& rayFromWorld = *(btVector3*)YYGetPtr(arg, 0);
	auto& rayToWorld = *(btVector3*)YYGetPtr(arg, 1);
	result.kind = VALUE_PTR;
	result.ptr = new btClosestRayResultCallback(rayFromWorld, rayToWorld);
}

/// @func btClosestRayResultCallback_createXYZ(rayFromWorldX, rayFromWorldY, rayFromWorldZ, rayToWorldX, rayToWorldY, rayToWorldZ)
///
/// @desc
/// Creates a btClosestRayResultCallback instance with the specified ray
/// parameters.
///
/// @param {Real} rayFromWorldX
///     The x-coordinate of the starting point of the ray in world coordinates.
/// @param {Real} rayFromWorldY
///     The y-coordinate of the starting point of the ray in world coordinates.
/// @param {Real} rayFromWorldZ
///     The z-coordinate of the starting point of the ray in world coordinates.
/// @param {Real} rayToWorldX
///     The x-coordinate of the end point of the ray in world coordinates.
/// @param {Real} rayToWorldY
///     The y-coordinate of the end point of the ray in world coordinates.
/// @param {Real} rayToWorldZ
///     The z-coordinate of the end point of the ray in world coordinates.
///
/// @return {Pointer} A pointer to the newly created btClosestRayResultCallback
/// instance.
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
/// Destroys a btClosestRayResultCallback instance, releasing the associated
/// memory.
///
/// @param {Pointer} closestRayResultCallback
///     A pointer to the btClosestRayResultCallback instance to be destroyed.
YYEXPORT void btClosestRayResultCallback_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btClosestRayResultCallback*)YYGetPtr(arg, 0);
}

/// @func btClosestRayResultCallback_getRayFromWorld(closestRayResultCallback, outVector3)
///
/// @desc
/// Gets the starting point of the ray in world coordinates from a
/// btClosestRayResultCallback instance.
///
/// @param {Pointer} closestRayResultCallback
///     A pointer to the btClosestRayResultCallback instance from which to get
///     the starting point of the ray.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 where the starting point of the ray will be
///     copied.
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
/// Gets the starting point of the ray in world coordinates from a
/// btClosestRayResultCallback instance and populates an array.
///
/// @param {Pointer} closestRayResultCallback
///     A pointer to the btClosestRayResultCallback instance from which to get
///     the starting point of the ray.
/// @param {Array<Real>} outArray
///     An array to be populated with the x, y, and z components of the starting
///     point of the ray.
YYEXPORT void btClosestRayResultCallback_getRayFromWorldArray(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto closestRayResultCallback = (btClosestRayResultCallback*)YYGetPtr(arg, 0);
	RValue* outArray = &arg[1];
	auto& rayFromWorld = closestRayResultCallback->m_rayFromWorld;
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
/// Gets the end point of the ray in world coordinates from a
/// btClosestRayResultCallback instance.
///
/// @param {Pointer} closestRayResultCallback
///     A pointer to the btClosestRayResultCallback instance from which to get
///     the end point of the ray.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 where the end point of the ray will be copied.
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
/// Gets the end point of the ray in world coordinates from a
/// btClosestRayResultCallback instance and populates an array.
///
/// @param {Pointer} closestRayResultCallback
///     A pointer to the btClosestRayResultCallback instance from which to get
///     the end point of the ray.
/// @param {Array<Real>} outArray
///     An array to be populated with the x, y, and z components of the end
///     point of the ray.
YYEXPORT void btClosestRayResultCallback_getRayToWorldArray(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto closestRayResultCallback = (btClosestRayResultCallback*)YYGetPtr(arg, 0);
	RValue* outArray = &arg[1];
	auto& rayToWorld = closestRayResultCallback->m_rayToWorld;
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
/// Gets the normal of the hit point in world coordinates from a
/// btClosestRayResultCallback instance.
///
/// @param {Pointer} closestRayResultCallback
///     A pointer to the btClosestRayResultCallback instance from which to get
///     the hit normal.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 where the hit normal will be copied.
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
/// Gets the normal of the hit point in world coordinates from a
/// btClosestRayResultCallback instance and populates an array.
///
/// @param {Pointer} closestRayResultCallback
///     A pointer to the btClosestRayResultCallback instance from which to get
///     the hit normal.
/// @param {Array<Real>} outArray
///     An array to be populated with the x, y, and z components of the hit
///     normal.
YYEXPORT void btClosestRayResultCallback_getHitNormalWorldArray(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto closestRayResultCallback = (btClosestRayResultCallback*)YYGetPtr(arg, 0);
	RValue* outArray = &arg[1];
	auto& hitNormalWorld = closestRayResultCallback->m_hitNormalWorld;
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
/// Gets the hit point in world coordinates from a btClosestRayResultCallback
/// instance.
///
/// @param {Pointer} closestRayResultCallback
///     A pointer to the btClosestRayResultCallback instance from which to get
///     the hit point.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 where the hit point will be copied.
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
/// Gets the hit point in world coordinates from a btClosestRayResultCallback
/// instance and populates an array.
///
/// @param {Pointer} closestRayResultCallback
///     A pointer to the btClosestRayResultCallback instance from which to get
///     the hit point.
/// @param {Array<Real>} outArray
///     An array to be populated with the x, y, and z components of the hit
///     point.
YYEXPORT void btClosestRayResultCallback_getHitPointWorldArray(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto closestRayResultCallback = (btClosestRayResultCallback*)YYGetPtr(arg, 0);
	RValue* outArray = &arg[1];
	auto& hitPointWorld = closestRayResultCallback->m_hitPointWorld;
	RValue value;
	value.kind = VALUE_REAL;
	value.val = hitPointWorld.getZ(); SET_RValue(outArray, &value, NULL, 2);
	value.val = hitPointWorld.getY(); SET_RValue(outArray, &value, NULL, 1);
	value.val = hitPointWorld.getX(); SET_RValue(outArray, &value, NULL, 0);
	FREE_RValue(&value);
}

// Note: Skipped btClosestRayResultCallback::addSingleResult

////////////////////////////////////////////////////////////////////////////////
//
// btCollisionWorld::AllHitsRayResultCallback
//

/// @func btAllHitsRayResultCallback_create(rayFromWorld, rayToWorld)
///
/// @desc
/// Creates a new instance of btAllHitsRayResultCallback with specified ray
/// start and end points.
///
/// @param {Pointer} rayFromWorld
///     A pointer to the starting point of the ray in world coordinates.
/// @param {Pointer} rayToWorld
///     A pointer to the end point of the ray in world coordinates.
///
/// @return {Pointer} A pointer to the newly created btAllHitsRayResultCallback
/// instance.
YYEXPORT void btAllHitsRayResultCallback_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto& rayFromWorld = *(btVector3*)YYGetPtr(arg, 0);
	auto& rayToWorld = *(btVector3*)YYGetPtr(arg, 1);
	result.kind = VALUE_PTR;
	result.ptr = new btAllHitsRayResultCallback(rayFromWorld, rayToWorld);
}

/// @func btAllHitsRayResultCallback_createXYZ(rayFromWorldX, rayFromWorldY, rayFromWorldZ, rayToWorldX, rayToWorldY, rayToWorldZ)
///
/// @desc
/// Creates a new instance of btAllHitsRayResultCallback with specified ray
/// start and end points.
///
/// @param {Real} rayFromWorldX
///     The x-coordinate of the starting point of the ray in world coordinates.
/// @param {Real} rayFromWorldY
///     The y-coordinate of the starting point of the ray in world coordinates.
/// @param {Real} rayFromWorldZ
///     The z-coordinate of the starting point of the ray in world coordinates.
/// @param {Real} rayToWorldX
///     The x-coordinate of the end point of the ray in world coordinates.
/// @param {Real} rayToWorldY
///     The y-coordinate of the end point of the ray in world coordinates.
/// @param {Real} rayToWorldZ
///     The z-coordinate of the end point of the ray in world coordinates.
///
/// @return {Pointer} A pointer to the newly created btAllHitsRayResultCallback
/// instance.
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
/// Destroys a btAllHitsRayResultCallback instance and frees its associated
/// memory.
///
/// @param {Pointer} allHitsRayResultCallback
///     A pointer to the btAllHitsRayResultCallback instance to be destroyed.
YYEXPORT void btAllHitsRayResultCallback_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btAllHitsRayResultCallback*)YYGetPtr(arg, 0);
}

/// @func btAllHitsRayResultCallback_getCollisionObjects(allHitsRayResultCallback, outArray)
///
/// @desc
/// Retrieves an array of collision objects from a btAllHitsRayResultCallback
/// instance.
///
/// @param {Pointer} allHitsRayResultCallback
///     A pointer to the btAllHitsRayResultCallback instance from which to
///     retrieve collision objects.
/// @param {Array<Pointer>} outArray
///     An array to be populated with pointers to collision objects.
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
/// Retrieves an array of hit normal vectors from a btAllHitsRayResultCallback
/// instance.
///
/// @param {Pointer} allHitsRayResultCallback
///     A pointer to the btAllHitsRayResultCallback instance from which to
///     retrieve hit normal vectors.
/// @param {Array<Pointer>} outArray
///     An array to be populated with pointers to hit normal vectors.
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
/// Retrieves an array of hit normal vectors (in XYZ order) from a
/// btAllHitsRayResultCallback instance.
///
/// @param {Pointer} allHitsRayResultCallback
///     A pointer to the btAllHitsRayResultCallback instance from which to
///     retrieve hit normal vectors.
/// @param {Array<Real>} outArray
///     An array to be populated with hit normal vectors in XYZ order.
YYEXPORT void btAllHitsRayResultCallback_getHitNormalWorldArray(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto allHitsRayResultCallback = (btAllHitsRayResultCallback*)YYGetPtr(arg, 0);
	RValue* outArray = &arg[1];
	RValue value;
	value.kind = VALUE_REAL;
	for (int i = allHitsRayResultCallback->m_hitNormalWorld.size() - 1; i >= 0; --i)
	{
		auto& hitNormalWorld = allHitsRayResultCallback->m_hitNormalWorld[i];
		value.val = hitNormalWorld.getZ(); SET_RValue(outArray, &value, NULL, i * 3 + 2);
		value.val = hitNormalWorld.getY(); SET_RValue(outArray, &value, NULL, i * 3 + 1);
		value.val = hitNormalWorld.getX(); SET_RValue(outArray, &value, NULL, i * 3 + 0);
	}
	FREE_RValue(&value);
}

/// @func btAllHitsRayResultCallback_getHitPointWorld(allHitsRayResultCallback, outArray)
///
/// @desc
/// Retrieves an array of hit points from a btAllHitsRayResultCallback instance.
///
/// @param {Pointer} allHitsRayResultCallback
///     A pointer to the btAllHitsRayResultCallback instance from which to
///     retrieve hit points.
/// @param {Array<Pointer>} outArray
///     An array to be populated with pointers to hit points.
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
/// Retrieves an array of hit points (in XYZ order) from a
/// btAllHitsRayResultCallback instance.
///
/// @param {Pointer} allHitsRayResultCallback
///     A pointer to the btAllHitsRayResultCallback instance from which to
///     retrieve hit points.
/// @param {Array<Real>} outArray
///     An array to be populated with hit points in XYZ order.
YYEXPORT void btAllHitsRayResultCallback_getHitPointWorldArray(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto allHitsRayResultCallback = (btAllHitsRayResultCallback*)YYGetPtr(arg, 0);
	RValue* outArray = &arg[1];
	RValue value;
	value.kind = VALUE_REAL;
	for (int i = allHitsRayResultCallback->m_hitPointWorld.size() - 1; i >= 0; --i)
	{
		auto& hitPointWorld = allHitsRayResultCallback->m_hitPointWorld[i];
		value.val = hitPointWorld.getZ(); SET_RValue(outArray, &value, NULL, i * 3 + 2);
		value.val = hitPointWorld.getY(); SET_RValue(outArray, &value, NULL, i * 3 + 1);
		value.val = hitPointWorld.getX(); SET_RValue(outArray, &value, NULL, i * 3 + 0);
	}
	FREE_RValue(&value);
}

/// @func btAllHitsRayResultCallback_getHitFractions(allHitsRayResultCallback, outArray)
///
/// @desc
/// Retrieves an array of hit fractions from a btAllHitsRayResultCallback
/// instance.
///
/// @param {Pointer} allHitsRayResultCallback
///     A pointer to the btAllHitsRayResultCallback instance from which to
///     retrieve hit fractions.
/// @param {Array<Real>} outArray
///     An array to be populated with hit fractions.
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

// Note: Skipped btClosestRayResultCallback::addSingleResult

////////////////////////////////////////////////////////////////////////////////
//
// Note: Skipped btCollisionWorld::LocalConvexResult
//

////////////////////////////////////////////////////////////////////////////////
//
// btCollisionWorld::ConvexResultCallback
//

/// @func btConvexResultCallback_destroy(convexResultCallback)
///
/// @desc
/// Destroys a btConvexResultCallback instance.
///
/// @param {Pointer} convexResultCallback
///     A pointer to the btConvexResultCallback instance to be destroyed.
YYEXPORT void btConvexResultCallback_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btConvexResultCallback*)YYGetPtr(arg, 0);
}

/// @func btConvexResultCallback_getClosestHitFraction(convexResultCallback)
///
/// @desc
/// Retrieves the closest hit fraction from a btConvexResultCallback instance.
///
/// @param {Pointer} convexResultCallback
///     A pointer to the btConvexResultCallback instance from which to retrieve
///     the closest hit fraction.
///
/// @return {Real} A real value representing the fraction along the ray where
/// the closest collision occurred.
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
/// Retrieves the collision filter group from a btConvexResultCallback instance.
///
/// @param {Pointer} convexResultCallback
///     A pointer to the btConvexResultCallback instance from which to retrieve
///     the collision filter group.
///
/// @return {Real} An integer representing the group used for collision
/// filtering.
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
/// Sets the collision filter group for a btConvexResultCallback instance.
///
/// @param {Pointer} convexResultCallback
///     A pointer to the btConvexResultCallback instance for which to set the
///     collision filter group.
/// @param {Real} collisionFilterGroup
///     An integer used for collision filtering.
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
/// Retrieves the collision filter mask of a btConvexResultCallback instance.
///
/// @param {Pointer} convexResultCallback
///     A pointer to the btConvexResultCallback instance from which to retrieve
///     the collision filter mask.
///
/// @return {Real} An integer representing collision filtering.
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
/// Sets the collision filter mask for a btConvexResultCallback instance.
///
/// @param {Pointer} convexResultCallback
///     A pointer to the btConvexResultCallback instance for which to set the
///     collision filter mask.
/// @param {Real} collisionFilterMask
///     An integer representing collision filtering.
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
/// Checks if the convex result callback has hit an object during a collision
/// test.
///
/// @param {Pointer} convexResultCallback
///     A pointer to the btConvexResultCallback instance to check for a hit.
///
/// @return {Bool} True if a hit occurred, false otherwise.
YYEXPORT void btConvexResultCallback_hasHit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto convexResultCallback = (btConvexResultCallback*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = convexResultCallback->hasHit();
}

// Note: Skipped btConvexResultCallback::needsCollision
// Note: Skipped btConvexResultCallback::addSingleResult

////////////////////////////////////////////////////////////////////////////////
//
// btCollisionWorld::ClosestConvexResultCallback
//

/// @func btClosestConvexResultCallback_create(convexFromWorld, convexToWorld)
///
/// @desc
/// Creates a new btClosestConvexResultCallback instance with specified
/// from-world and to-world vectors.
///
/// @param {Pointer} convexFromWorld
///     A pointer to a btVector3 representing the starting point in world
///    coordinates.
/// @param {Pointer} convexToWorld
///     A pointer to a btVector3 representing the end point in world coordinates.
///
/// @return {Pointer} A pointer to the newly created btClosestConvexResultCallback
/// instance.
YYEXPORT void btClosestConvexResultCallback_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto& convexFromWorld = *(btVector3*)YYGetPtr(arg, 0);
	auto& convexToWorld = *(btVector3*)YYGetPtr(arg, 1);
	result.kind = VALUE_PTR;
	result.ptr = new btClosestConvexResultCallback(convexFromWorld, convexToWorld);
}

/// @func btClosestConvexResultCallback_createXYZ(convexFromWorldX, convexFromWorldY, convexFromWorldZ, convexToWorldX, convexToWorldY, convexToWorldZ)
///
/// @desc
/// Creates a new btClosestConvexResultCallback instance with specified
/// from-world and to-world vectors.
///
/// @param {Real} convexFromWorldX
///     The x-coordinate of the starting point in world coordinates.
/// @param {Real} convexFromWorldY
///     The y-coordinate of the starting point in world coordinates.
/// @param {Real} convexFromWorldZ
///     The z-coordinate of the starting point in world coordinates.
/// @param {Real} convexToWorldX
///     The x-coordinate of the end point in world coordinates.
/// @param {Real} convexToWorldY
///     The y-coordinate of the end point in world coordinates.
/// @param {Real} convexToWorldZ
///     The z-coordinate of the end point in world coordinates.
///
/// @return {Pointer} A pointer to the newly created btClosestConvexResultCallback
/// instance.
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
/// Destroys a btClosestConvexResultCallback instance, releasing its allocated
/// resources.
///
/// @param {Pointer} closestConvexResultCallback
///     A pointer to the btClosestConvexResultCallback instance to be destroyed.
YYEXPORT void btClosestConvexResultCallback_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btClosestConvexResultCallback*)YYGetPtr(arg, 0);
}

/// @func btClosestConvexResultCallback_getConvexFromWorld(closestConvexResultCallback, outVector3)
///
/// @desc
/// Retrieves the `convexFromWorld` vector from a btClosestConvexResultCallback
/// instance.
///
/// @param {Pointer} closestConvexResultCallback
///     A pointer to the btClosestConvexResultCallback instance.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 that will receive the `convexFromWorld` vector.
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
/// Retrieves the `convexFromWorld` vector from a btClosestConvexResultCallback
/// instance and populates an array with its components.
///
/// @param {Pointer} closestConvexResultCallback
///     A pointer to the btClosestConvexResultCallback instance.
/// @param {Array<Real>} outArray
///     An array to be populated with the components of the `convexFromWorld`
///     vector in the order [x, y, z].
YYEXPORT void btClosestConvexResultCallback_getConvexFromWorldArray(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto closestConvexResultCallback = (btClosestConvexResultCallback*)YYGetPtr(arg, 0);
	RValue* outArray = &arg[1];
	auto& rayFromWorld = closestConvexResultCallback->m_convexFromWorld;
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
/// Retrieves the `convexToWorld` vector from a btClosestConvexResultCallback
/// instance.
///
/// @param {Pointer} closestConvexResultCallback
///     A pointer to the btClosestConvexResultCallback instance.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 instance where the `convexToWorld` vector will
///     be stored.
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
/// Retrieves the `convexToWorld` vector from a btClosestConvexResultCallback
/// instance and stores it in an array.
///
/// @param {Pointer} closestConvexResultCallback
///     A pointer to the btClosestConvexResultCallback instance.
/// @param {Array<Real>} outArray
///     An array to store the `convexToWorld` vector components in the order
///     [x, y, z].
YYEXPORT void btClosestConvexResultCallback_getConvexToWorldArray(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto closestConvexResultCallback = (btClosestConvexResultCallback*)YYGetPtr(arg, 0);
	RValue* outArray = &arg[1];
	auto& rayToWorld = closestConvexResultCallback->m_convexToWorld;
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
/// Retrieves the hit normal in world coordinates from a
/// btClosestConvexResultCallback instance and stores it in a vector.
///
/// @param {Pointer} closestConvexResultCallback
///     A pointer to the btClosestConvexResultCallback instance.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 instance where the hit normal will be stored.
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
/// Retrieves the hit normal in world coordinates from a
/// btClosestConvexResultCallback instance and stores it in an array.
///
/// @param {Pointer} closestConvexResultCallback
///     A pointer to the btClosestConvexResultCallback instance.
/// @param {Array<Real>} outArray
///     An array where the hit normal will be stored as [x, y, z] in world
///     coordinates.
YYEXPORT void btClosestConvexResultCallback_getHitNormalWorldArray(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto closestConvexResultCallback = (btClosestConvexResultCallback*)YYGetPtr(arg, 0);
	RValue* outArray = &arg[1];
	auto& hitNormalWorld = closestConvexResultCallback->m_hitNormalWorld;
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
/// Retrieves the hit point in world coordinates from a
/// btClosestConvexResultCallback instance.
///
/// @param {Pointer} closestConvexResultCallback
///     A pointer to the btClosestConvexResultCallback instance.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 instance where the hit point will be stored in
///     world coordinates.
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
/// Gets the hit point in world coordinates as an array of Real values from a
/// btClosestConvexResultCallback.
///
/// @param {Pointer} closestConvexResultCallback
///     A pointer to the btClosestConvexResultCallback from which to get the hit
///     point in world coordinates.
/// @param {Array<Real>} outArray
///     An array to store the hit point in world coordinates.
YYEXPORT void btClosestConvexResultCallback_getHitPointWorldArray(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto closestConvexResultCallback = (btClosestConvexResultCallback*)YYGetPtr(arg, 0);
	RValue* outArray = &arg[1];
	auto& hitPointWorld = closestConvexResultCallback->m_hitPointWorld;
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
/// Gets the hit collision object from a btClosestConvexResultCallback.
///
/// @param {Pointer} closestConvexResultCallback
///     A pointer to the btClosestConvexResultCallback from which to get the hit
///     collision object.
///
/// @return {Pointer} A pointer to the hit collision object, or nullptr if no
/// collision object was hit.
YYEXPORT void btClosestConvexResultCallback_getHitCollisionObject(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto closestConvexResultCallback = (btClosestConvexResultCallback*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = const_cast<btCollisionObject*>(closestConvexResultCallback->m_hitCollisionObject);
}

// Note: Skipped btClosestConvexResultCallback::addSingleResult

////////////////////////////////////////////////////////////////////////////////
//
// btCollisionWorld::ContactResultCallback
//

/// @func btContactResultCallback_destroy(contactResultCallback)
///
/// @desc
/// Destroys a contact result callback instance, releasing associated resources.
///
/// @param {Pointer} contactResultCallback
///     A pointer to the contact result callback instance to be destroyed.
YYEXPORT void btContactResultCallback_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btContactResultCallback*)YYGetPtr(arg, 0);
}

/// @func btContactResultCallback_getCollisionFilterGroup(contactResultCallback)
///
/// @desc
/// Retrieves the collision filter group from the contact result callback.
///
/// @param {Pointer} contactResultCallback
///     A pointer to the contact result callback instance.
///
/// @return {Real} The collision filter group associated with the contact result
/// callback.
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
/// Sets the collision filter group for the contact result callback.
///
/// @param {Pointer} contactResultCallback
///     A pointer to the contact result callback instance.
/// @param {Real} collisionFilterGroup
///     The collision filter group to set for the contact result callback.
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
/// Gets the collision filter mask from the contact result callback.
///
/// @param {Pointer} contactResultCallback
///     A pointer to the contact result callback instance.
///
/// @return {Real} The collision filter mask of the contact result callback.
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
/// Sets the collision filter mask for the contact result callback.
///
/// @param {Pointer} contactResultCallback
///     A pointer to the contact result callback instance.
/// @param {Real} collisionFilterMask
///     The collision filter mask to set.
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
/// Gets the closest distance threshold for the contact result callback.
///
/// @param {Pointer} contactResultCallback
///     A pointer to the contact result callback instance.
///
/// @return {Real} The closest distance threshold.
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
/// Sets the closest distance threshold for the contact result callback.
///
/// @param {Pointer} contactResultCallback
///     A pointer to the contact result callback instance.
/// @param {Real} closestDistanceThreshold
///     The closest distance threshold to set.
YYEXPORT void btContactResultCallback_setClosestDistanceThreshold(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto contactResultCallback = (btContactResultCallback*)YYGetPtr(arg, 0);
	double closestDistanceThreshold = YYGetReal(arg, 1);
	contactResultCallback->m_closestDistanceThreshold = closestDistanceThreshold;
}

// Note: Skipped btContactResultCallback::needsCollision
// Note: Skipped btContactResultCallback::addSingleResult

////////////////////////////////////////////////////////////////////////////////

/// @func btCollisionWorld_getNumCollisionObjects(collisionWorld)
///
/// @desc
/// Gets the number of collision objects in the collision world.
///
/// @param {Pointer} collisionWorld
///     A pointer to the collision world instance.
///
/// @return {Real} The number of collision objects in the collision world.
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
/// Performs a ray test in the collision world and collects the results using
/// the provided result callback.
///
/// @param {Pointer} collisionWorld
///     A pointer to the collision world instance.
/// @param {Pointer} rayFromWorld
///     A pointer to the starting point of the ray in world coordinates
///     (btVector3).
/// @param {Pointer} rayToWorld
///     A pointer to the end point of the ray in world coordinates (btVector3).
/// @param {Pointer} resultCallback
///     A pointer to the ray result callback (btRayResultCallback) used to
///     collect the results.
YYEXPORT void btCollisionWorld_rayTest(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionWorld = (btCollisionWorld*)YYGetPtr(arg, 0);
	auto& rayFromWorld = *(btVector3*)YYGetPtr(arg, 1);
	auto& rayToWorld = *(btVector3*)YYGetPtr(arg, 2);
	auto& resultCallback = *(btRayResultCallback*)YYGetPtr(arg, 3);
	collisionWorld->rayTest(rayFromWorld, rayToWorld, resultCallback);
}

/// @func btCollisionWorld_rayTestXYZ(collisionWorld, rayFromWorldX, rayFromWorldY, rayFromWorldZ, rayToWorldX, rayToWorldY, rayToWorldZ, resultCallback)
///
/// @desc
/// Performs a ray test in the collision world and collects the results using
/// the provided result callback.
///
/// @param {Pointer} collisionWorld
///     A pointer to the collision world instance.
/// @param {Real} rayFromWorldX
///     The x-coordinate of the starting point of the ray in world coordinates.
/// @param {Real} rayFromWorldY
///     The y-coordinate of the starting point of the ray in world coordinates.
/// @param {Real} rayFromWorldZ
///     The z-coordinate of the starting point of the ray in world coordinates.
/// @param {Real} rayToWorldX
///     The x-coordinate of the end point of the ray in world coordinates.
/// @param {Real} rayToWorldY
///     The y-coordinate of the end point of the ray in world coordinates.
/// @param {Real} rayToWorldZ
///     The z-coordinate of the end point of the ray in world coordinates.
/// @param {Pointer} resultCallback
///     A pointer to the ray result callback (btRayResultCallback) used to
///     collect the results.
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
	auto& resultCallback = *(btRayResultCallback*)YYGetPtr(arg, 7);
	collisionWorld->rayTest(
		btVector3(rayFromWorldX, rayFromWorldY, rayToWorldZ),
		btVector3(rayToWorldX, rayToWorldY, rayToWorldZ),
		resultCallback);
}

/// @func btCollisionWorld_convexSweepTest(collisionWorld, castShape, from, to, resultCallback[, allowedCcdPenetration])
///
/// @desc
/// Performs a convex sweep test in the collision world using the specified cast
/// shape and transforms, collecting the results using the provided result
/// callback.
///
/// @param {Pointer} collisionWorld
///     A pointer to the collision world instance.
/// @param {Pointer} castShape
///     A pointer to the convex shape used for the sweep test.
/// @param {Pointer} from
///     A pointer to the starting transform for the sweep.
/// @param {Pointer} to
///     A pointer to the ending transform for the sweep.
/// @param {Pointer} resultCallback
///     A pointer to the convex result callback (btConvexResultCallback) used to
///    collect the results.
/// @param {Real} [allowedCcdPenetration]
///     The allowed continuous collision detection (CCD) penetration. Defaults
///     to 0.
YYEXPORT void btCollisionWorld_convexSweepTest(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionWorld = (btCollisionWorld*)YYGetPtr(arg, 0);
	auto castShape = (btConvexShape*)YYGetPtr(arg, 1);
	auto& from = *(btTransform*)YYGetPtr(arg, 2);
	btTransform to = *(btTransform*)YYGetPtr(arg, 3);
	auto& resultCallback = *(btConvexResultCallback*)YYGetPtr(arg, 4);
	double allowedCcdPenetration = (argc > 5) ? YYGetReal(arg, 5) : 0.0;
	collisionWorld->convexSweepTest(castShape, from, to, resultCallback, allowedCcdPenetration);
}

/// @func btCollisionWorld_contactTest(collisionWorld, colObj, resultCallback)
///
/// @desc
/// Performs contact tests between a specific collision object and other objects
/// in the collision world.
///
/// @param {Pointer} collisionWorld
///     A pointer to the collision world instance.
/// @param {Pointer} colObj
///     A pointer to the collision object for which contacts are to be tested.
/// @param {Pointer} resultCallback
///     A pointer to the contact result callback object that will receive the
///     contact information.
YYEXPORT void btCollisionWorld_contactTest(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionWorld = (btCollisionWorld*)YYGetPtr(arg, 0);
	auto colObj = (btCollisionObject*)YYGetPtr(arg, 1);
	auto& resultCallback = *(btContactResultCallback*)YYGetPtr(arg, 2);
	collisionWorld->contactTest(colObj, resultCallback);
}

/// @func btCollisionWorld_contactPairTest(collisionWorld, colObjA, colObjB, resultCallback)
///
/// @desc
/// Performs a contact pair test between two collision objects in a
/// btCollisionWorld and invokes a result callback.
///
/// @param {Pointer} collisionWorld
///     A pointer to the btCollisionWorld in which the collision pair test is
///     performed.
/// @param {Pointer} colObjA
///     A pointer to the first collision object in the pair to test for contact.
/// @param {Pointer} colObjB
///     A pointer to the second collision object in the pair to test for contact.
/// @param {Pointer} resultCallback
///     A pointer to the result callback to be invoked for each contact found in
///     the pair test.
YYEXPORT void btCollisionWorld_contactPairTest(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionWorld = (btCollisionWorld*)YYGetPtr(arg, 0);
	auto colObjA = (btCollisionObject*)YYGetPtr(arg, 1);
	auto colObjB = (btCollisionObject*)YYGetPtr(arg, 2);
	auto& resultCallback = *(btContactResultCallback*)YYGetPtr(arg, 3);
	collisionWorld->contactPairTest(colObjA, colObjB, resultCallback);
}

// Note: Skipped btCollisionWorld::rayTestSingle
// Note: Skipped btCollisionWorld::rayTestSingleInternal
// Note: Skipped btCollisionWorld::objectQuerySingle
// Note: Skipped btCollisionWorld::objectQuerySingleInternal

/// @func btCollisionWorld_addCollisionObject(collisionWorld, collisionObject[, collisionFilterGroup[, collisionFilterMask]])
///
/// @desc
/// Adds a collision object to the collision world.
///
/// @param {Pointer} collisionWorld
///     A pointer to the collision world instance.
/// @param {Pointer} collisionObject
///     A pointer to the collision object to be added.
/// @param {Real} [collisionFilterGroup]
///     The collision filter group for the collision object. Defaults to 1.
/// @param {Real} [collisionFilterMask]
///     The collision filter mask for the collision object. Defaults to -1.
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
/// Refreshes the broadphase proxy for a specific collision object in the
/// collision world.
///
/// @param {Pointer} collisionWorld
///     A pointer to the collision world instance.
/// @param {Pointer} collisionObject
///     A pointer to the collision object for which the broadphase proxy is to
///     be refreshed.
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
/// Retrieves an array of collision objects from the collision world.
///
/// @param {Pointer} collisionWorld
///     A pointer to the collision world instance.
/// @param {Array<Pointer>} outArray
///     An array where the collision objects will be stored.
YYEXPORT void btCollisionWorld_getCollisionObjectArray(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionWorld = (btCollisionWorld*)YYGetPtr(arg, 0);
	RValue* outArray = &arg[1];
	auto& collisionObjectArray = collisionWorld->getCollisionObjectArray();
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
/// Retrieves a collision object from the collision world based on the provided
/// index.
///
/// @param {Pointer} collisionWorld
///     A pointer to the collision world instance.
/// @param {Real} index
///     The index of the collision object to retrieve.
///
/// @return {Pointer} A pointer to the retrieved collision object.
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
/// Removes a collision object from the collision world.
///
/// @param {Pointer} collisionWorld
///     A pointer to the collision world instance.
/// @param {Pointer} collisionObject
///     A pointer to the collision object to be removed from the collision world.
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
/// Triggers the discrete collision detection in the collision world, checking
/// for collisions between objects.
///
/// @param {Pointer} collisionWorld
///     A pointer to the collision world instance.
YYEXPORT void btCollisionWorld_performDiscreteCollisionDetection(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionWorld = (btCollisionWorld*)YYGetPtr(arg, 0);
	collisionWorld->performDiscreteCollisionDetection();
}

/// @func btCollisionWorld_getDispatchInfo(collisionWorld)
///
/// @desc
/// Gets the dispatch info associated with the collision world.
///
/// @param {Pointer} collisionWorld
///     A pointer to the collision world instance.
///
/// @return {Pointer} A pointer to the btDispatcherInfo associated with the
/// collision world.
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
/// Gets whether force update of all AABBs is enabled in the collision world.
///
/// @param {Pointer} collisionWorld
///     A pointer to the collision world instance.
///
/// @return {Bool} Returns true if force update of all AABBs is enabled, false
/// otherwise.
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
/// Sets whether to force update all AABBs in the collision world.
///
/// @param {Pointer} collisionWorld
///     A pointer to the collision world instance.
/// @param {Bool} forceUpdateAllAabbs
///     A boolean indicating whether to force update all AABBs.
YYEXPORT void btCollisionWorld_setForceUpdateAllAabbs(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionWorld = (btCollisionWorld*)YYGetPtr(arg, 0);
	bool forceUpdateAllAabbs = YYGetBool(arg, 1);
	collisionWorld->setForceUpdateAllAabbs(forceUpdateAllAabbs);
}

// Note: Skipped btCollisionWorld::serialize
