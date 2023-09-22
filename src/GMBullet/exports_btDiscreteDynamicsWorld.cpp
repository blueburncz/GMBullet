#include <GMBullet.hpp>

/// @func btDiscreteDynamicsWorld_create(dispatcher, pairCache, constraintSolver, collisionConfiguration)
///
/// @desc
/// Creates a btDiscreteDynamicsWorld instance for simulating discrete dynamic
/// rigid body physics.
///
/// @param {Pointer} dispatcher
///     A pointer to the btDispatcher instance that handles collision detection
///     and resolution.
/// @param {Pointer} pairCache
///     A pointer to the btBroadphaseInterface instance that manages overlapping
///     pairs efficiently.
/// @param {Pointer} constraintSolver
///     A pointer to the btConstraintSolver instance that solves constraints and
///     forces between rigid bodies.
/// @param {Pointer} collisionConfiguration
///     A pointer to the btCollisionConfiguration instance that provides
///     collision-related configuration settings.
/// @return {Pointer}
///     A pointer to the created btDiscreteDynamicsWorld instance for simulating
///     physics.
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
/// Destroys a btDiscreteDynamicsWorld instance, releasing its allocated
/// resources.
///
/// @param {Pointer} discreteDynamicsWorld
///     A pointer to the btDiscreteDynamicsWorld instance to be destroyed.
YYEXPORT void btDiscreteDynamicsWorld_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btDiscreteDynamicsWorld*)YYGetPtr(arg, 0);
}

/// @func btDiscreteDynamicsWorld_getCollisionWorld(discreteDynamicsWorld)
///
/// @desc
/// Gets the collision world associated with the btDiscreteDynamicsWorld
/// instance.
///
/// @param {Pointer} discreteDynamicsWorld
///     A pointer to the btDiscreteDynamicsWorld instance.
///
/// @return {Pointer}
///     A pointer to the associated collision world.
YYEXPORT void btDiscreteDynamicsWorld_getCollisionWorld(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dynamicsWorld = (btDiscreteDynamicsWorld*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = dynamicsWorld->getCollisionWorld();
}

/// @func btDiscreteDynamicsWorld_setGravity(discreteDynamicsWorld, gravity)
///
/// @desc
/// Sets the gravity for the btDiscreteDynamicsWorld instance.
///
/// @param {Pointer} discreteDynamicsWorld
///     A pointer to the btDiscreteDynamicsWorld instance.
/// @param {Pointer} gravity
///     A pointer to a btVector3 representing the gravity to be set.
YYEXPORT void btDiscreteDynamicsWorld_setGravity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dynamicsWorld = (btDiscreteDynamicsWorld*)YYGetPtr(arg, 0);
	btVector3& gravity = *(btVector3*)YYGetPtr(arg, 0);
	dynamicsWorld->setGravity(gravity);
}

/// @func btDiscreteDynamicsWorld_setGravityXYZ(discreteDynamicsWorld, gravityX, gravityY, gravityZ)
///
/// @desc
/// Sets the gravity for the btDiscreteDynamicsWorld instance using individual
/// components along the x, y, and z axes.
///
/// @param {Pointer} discreteDynamicsWorld
///     A pointer to the btDiscreteDynamicsWorld instance.
/// @param {Real} gravityX
///     The x-component of the gravity to be set.
/// @param {Real} gravityY
///     The y-component of the gravity to be set.
/// @param {Real} gravityZ
///     The z-component of the gravity to be set.
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
/// Adds a rigid body to the dynamics world.
///
/// @param {Pointer} dynamicsWorld
///     Pointer to the btDiscreteDynamicsWorld instance.
/// @param {Pointer} rigidBody
///     Pointer to the btRigidBody instance to be added.
/// @param {Real} group
///     Collision group to which the rigid body belongs.
/// @param {Real} mask
///     Collision mask for the rigid body.
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
/// Removes a rigid body from the dynamics world.
///
/// @param {Pointer} dynamicsWorld
///     Pointer to the btDiscreteDynamicsWorld instance.
/// @param {Pointer} rigidBody
///     Pointer to the btRigidBody instance to be removed.
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
/// Steps the dynamics simulation forward by the given time step, allowing for
/// substeps if specified.
///
/// @param {Pointer} dynamicsWorld
///     A pointer to the btDiscreteDynamicsWorld instance.
/// @param {Real} timeStep
///     The time step to advance the simulation.
/// @param {Real} [maxSubSteps]
///     The maximum number of substeps allowed in this simulation step. Defaults
///     to 1.
/// @param {Real} [fixedTimeStep]
///     The fixed time step for each substep.
YYEXPORT void btDiscreteDynamicsWorld_stepSimulation(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dynamicsWorld = (btDiscreteDynamicsWorld*)YYGetPtr(arg, 0);
	double timeStep = YYGetReal(arg, 1);
	int maxSubSteps = (argc > 1) ? YYGetInt32(arg, 2) : 1;
	double fixedTimeStep = (argc > 2) ? YYGetReal(arg, 3) : (1.0 / 60.0);
	dynamicsWorld->stepSimulation(timeStep, maxSubSteps, fixedTimeStep);
}
