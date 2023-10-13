#include <GMBullet.hpp>
#include <BulletSoftBody/btSoftRigidDynamicsWorld.h>

/// @func btSoftRigidDynamicsWorld_create(dispatcher, pairCache, constraintSolver, collisionConfiguration[, softBodySolver])
///
/// @desc
/// Creates a new instance of btSoftRigidDynamicsWorld.
///
/// @param {Pointer} dispatcher
///     The dispatcher used for collision detection.
/// @param {Pointer} pairCache
///     The broadphase pair cache.
/// @param {Pointer} constraintSolver
///     The constraint solver.
/// @param {Pointer} collisionConfiguration
///     The collision configuration.
/// @param {Pointer} [softBodySolver]
///     The soft body solver. Default is nullptr, in which case a new
///     btDefaultSoftBodySolver is created.
///
/// @return {Pointer} A pointer to the created btSoftRigidDynamicsWorld instance.
YYEXPORT void btSoftRigidDynamicsWorld_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dispatcher = (btDispatcher*)YYGetPtr(arg, 0);
	auto pairCache = (btBroadphaseInterface*)YYGetPtr(arg, 1);
	auto constraintSolver = (btConstraintSolver*)YYGetPtr(arg, 2);
	auto collisionConfiguration = (btCollisionConfiguration*)YYGetPtr(arg, 3);
	auto softBodySolver = (argc > 4) ? (btSoftBodySolver*)YYGetPtr(arg, 4) : nullptr;
	result.kind = VALUE_PTR;
	result.ptr = new btSoftRigidDynamicsWorld(
		dispatcher, pairCache, constraintSolver, collisionConfiguration, softBodySolver);
}

/// @func btSoftRigidDynamicsWorld_destroy(softRigidDynamicsWorld)
///
/// @desc
/// Destroys a btSoftRigidDynamicsWorld instance.
///
/// @param {Pointer} softRigidDynamicsWorld
///     A pointer to the btSoftRigidDynamicsWorld instance to destroy.
YYEXPORT void btSoftRigidDynamicsWorld_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btSoftRigidDynamicsWorld*)YYGetPtr(arg, 0);
}

// Note: Skipped btSoftRigidDynamicsWorld::debugDrawWorld

/// @func btSoftRigidDynamicsWorld_addSoftBody(softRigidDynamicsWorld, softBody[, collisionFilterGroup[, collisionFilterMask]])
///
/// @desc
/// Adds a soft body to the dynamics world.
///
/// @param {Pointer} softRigidDynamicsWorld
///     A pointer to the btSoftRigidDynamicsWorld.
/// @param {Pointer} softBody
///     A pointer to the soft body to add.
/// @param {Real} [collisionFilterGroup]
///     The collision filter group. Default is `DefaultFilter`.
/// @param {Real} [collisionFilterMask]
///     The collision filter mask. Default is `AllFilter`.
YYEXPORT void btSoftRigidDynamicsWorld_addSoftBody(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto softRigidDynamicsWorld = (btSoftRigidDynamicsWorld*)YYGetPtr(arg, 0);
	auto softBody = (btSoftBody*)YYGetPtr(arg, 1);
	int collisionFilterGroup = (argc > 2) ? YYGetInt32(arg, 2) : btBroadphaseProxy::DefaultFilter;
	int collisionFilterMask = (argc > 3) ? YYGetInt32(arg, 3) : btBroadphaseProxy::AllFilter;
	softRigidDynamicsWorld->addSoftBody(softBody, collisionFilterGroup, collisionFilterMask);
}

/// @func btSoftRigidDynamicsWorld_removeSoftBody(softRigidDynamicsWorld, softBody)
///
/// @desc
/// Removes a soft body from the dynamics world.
///
/// @param {Pointer} softRigidDynamicsWorld
///     A pointer to the btSoftRigidDynamicsWorld.
/// @param {Pointer} softBody
///     A pointer to the soft body to remove.
YYEXPORT void btSoftRigidDynamicsWorld_removeSoftBody(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto softRigidDynamicsWorld = (btSoftRigidDynamicsWorld*)YYGetPtr(arg, 0);
	auto softBody = (btSoftBody*)YYGetPtr(arg, 1);
	softRigidDynamicsWorld->removeSoftBody(softBody);
}

// Note: Skipped btSoftRigidDynamicsWorld::removeCollisionObject
// Note: Skipped btSoftRigidDynamicsWorld::getDrawFlags
// Note: Skipped btSoftRigidDynamicsWorld::setDrawFlags

/// @func btSoftRigidDynamicsWorld_getWorldInfo(softRigidDynamicsWorld)
///
/// @desc
/// Retrieves the world info associated with the soft-rigid dynamics world.
///
/// @param {Pointer} softRigidDynamicsWorld
///     A pointer to the btSoftRigidDynamicsWorld instance.
///
/// @return {Pointer} A pointer to the btSoftBodyWorldInfo associated with the
/// world.
YYEXPORT void btSoftRigidDynamicsWorld_getWorldInfo(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto softRigidDynamicsWorld = (btSoftRigidDynamicsWorld*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = (btSoftBodyWorldInfo*)&softRigidDynamicsWorld->getWorldInfo();
}

// Note: Skipped btSoftRigidDynamicsWorld::getWorldType

/// @func btSoftRigidDynamicsWorld_getSoftBodyArray(softRigidDynamicsWorld, outArray)
///
/// @desc
/// Gets an array of soft bodies in the dynamics world.
///
/// @param {Pointer} softRigidDynamicsWorld
///     A pointer to the btSoftRigidDynamicsWorld.
/// @param {Array<Pointer>} outArray
///     The array to store the pointers to the soft bodies.
YYEXPORT void btSoftRigidDynamicsWorld_getSoftBodyArray(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto softRigidDynamicsWorld = (btSoftRigidDynamicsWorld*)YYGetPtr(arg, 0);
	RValue* outArray = &arg[1];
	btSoftBodyArray& softBodies = softRigidDynamicsWorld->getSoftBodyArray();
	RValue value;
	value.kind = VALUE_PTR;
	for (int i = softBodies.size() - 1; i >= 0; --i)
	{
		value.ptr = softBodies[i];
		SET_RValue(outArray, &value, NULL, i);
	}
	FREE_RValue(&value);
}

// Note: Skipped btSoftRigidDynamicsWorld::rayTest
// Note: Skipped btSoftRigidDynamicsWorld::rayTestSingle
// Note: Skipped btSoftRigidDynamicsWorld::serialize
