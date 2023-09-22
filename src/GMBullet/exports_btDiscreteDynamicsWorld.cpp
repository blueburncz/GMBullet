#include <GMBullet.hpp>

/// @func btDiscreteDynamicsWorld_create(dispatcher, pairCache, constraintSolver, collisionConfiguration)
///
/// @desc
///
/// @param {Pointer} dispatcher
/// @param {Pointer} pairCache
/// @param {Pointer} constraintSolver
/// @param {Pointer} collisionConfiguration
///
/// @return {Pointer}
YYEXPORT void btDiscreteDynamicsWorld_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dispatcher = (btDispatcher*)YYGetPtr(arg, 0);
	auto pairCache = (btBroadphaseInterface*)YYGetPtr(arg, 1);
	auto constraintSolver = (btConstraintSolver*)YYGetPtr(arg, 2);
	auto collisionConfiguration = (btCollisionConfiguration*)YYGetPtr(arg, 3);
	result.kind = VALUE_PTR;
	result.ptr = new btDiscreteDynamicsWorld(dispatcher, pairCache, constraintSolver, collisionConfiguration);
}

/// @func btDiscreteDynamicsWorld_destroy(discreteDynamicsWorld)
///
/// @desc
///
/// @param {Pointer} discreteDynamicsWorld
YYEXPORT void btDiscreteDynamicsWorld_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btDiscreteDynamicsWorld*)YYGetPtr(arg, 0);
}

/// @func btDiscreteDynamicsWorld_getCollisionWorld(discreteDynamicsWorld)
///
/// @desc
///
/// @param {Pointer} discreteDynamicsWorld
///
/// @return {Pointer}
YYEXPORT void btDiscreteDynamicsWorld_getCollisionWorld(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dynamicsWorld = (btDiscreteDynamicsWorld*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = dynamicsWorld->getCollisionWorld();
}

/// @func btDiscreteDynamicsWorld_setGravityXYZ(discreteDynamicsWorld, gravityX, gravityY, gravityZ)
///
/// @desc
///
/// @param {Pointer} discreteDynamicsWorld
/// @param {Real} gravityX
/// @param {Real} gravityY
/// @param {Real} gravityZ
YYEXPORT void btDiscreteDynamicsWorld_setGravityXYZ(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dynamicsWorld = (btDiscreteDynamicsWorld*)YYGetPtr(arg, 0);
	double gravityX = YYGetReal(arg, 1);
	double gravityY = YYGetReal(arg, 2);
	double gravityZ = YYGetReal(arg, 3);
	dynamicsWorld->setGravity(btVector3(gravityX, gravityY, gravityZ));
}

/// @func btDiscreteDynamicsWorld_addRigidBody(discreteDynamicsWorld, rigidBody, group, mask)
///
/// @desc
///
/// @param {Pointer} discreteDynamicsWorld
/// @param {Pointer} rigidBody
/// @param {Real} group
/// @param {Real} mask
YYEXPORT void btDiscreteDynamicsWorld_addRigidBody(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dynamicsWorld = (btDiscreteDynamicsWorld*)YYGetPtr(arg, 0);
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 1);
	int group = YYGetInt32(arg, 2);
	int mask = YYGetInt32(arg, 3);
	dynamicsWorld->addRigidBody(rigidBody, group, mask);
}

/// @func btDiscreteDynamicsWorld_removeRigidBody(discreteDynamicsWorld, rigidBody)
///
/// @desc
///
/// @param {Pointer} discreteDynamicsWorld
/// @param {Pointer} rigidBody
YYEXPORT void btDiscreteDynamicsWorld_removeRigidBody(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dynamicsWorld = (btDiscreteDynamicsWorld*)YYGetPtr(arg, 0);
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 1);
	dynamicsWorld->removeRigidBody(rigidBody);
}

/// @func btDiscreteDynamicsWorld_stepSimulation(discreteDynamicsWorld, timeStep[, maxSubSteps[, fixedTimeStep]])
///
/// @desc
///
/// @param {Pointer} discreteDynamicsWorld
/// @param {Real} timeStep
/// @param {Real} [maxSubSteps]
/// @param {Real} [fixedTimeStep]
YYEXPORT void btDiscreteDynamicsWorld_stepSimulation(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dynamicsWorld = (btDiscreteDynamicsWorld*)YYGetPtr(arg, 0);
	double timeStep = YYGetReal(arg, 1);
	int maxSubSteps = (argc > 1) ? YYGetInt32(arg, 2) : 1;
	double fixedTimeStep = (argc > 2) ? YYGetReal(arg, 3) : (1.0 / 60.0);
	dynamicsWorld->stepSimulation(timeStep, maxSubSteps, fixedTimeStep);
}
