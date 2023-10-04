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
	int maxSubSteps = (argc > 2) ? YYGetInt32(arg, 2) : 1;
	double fixedTimeStep = (argc > 3) ? YYGetReal(arg, 3) : (1.0 / 60.0);
	dynamicsWorld->stepSimulation(timeStep, maxSubSteps, fixedTimeStep);
}

// Note: Skipped btDiscreteDynamicsWorld::solveConstraints
// Note: Skipped btDiscreteDynamicsWorld::synchronizeMotionStates
// Note: Skipped btDiscreteDynamicsWorld::synchronizeSingleMotionState

/// @func btDiscreteDynamicsWorld_addConstraint(discreteDynamicsWorld, constraint[, disableCollisionBetweenLinkedBodies])
///
/// @desc
/// Adds a constraint to the btDiscreteDynamicsWorld.
///
/// @param {Pointer} discreteDynamicsWorld
///     A pointer to the btDiscreteDynamicsWorld object.
/// @param {Pointer} constraint
///     A pointer to the btTypedConstraint object to be added.
/// @param {Bool} [disableCollisionBetweenLinkedBodies]
///     If true, disable collisions between linked bodies for this constraint.
///     Defaults to false.
YYEXPORT void btDiscreteDynamicsWorld_addConstraint(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dynamicsWorld = (btDiscreteDynamicsWorld*)YYGetPtr(arg, 0);
	auto constraint = (btTypedConstraint*)YYGetPtr(arg, 1);
	bool disableCollisionBetweenLinkedBodies = (argc > 2) ? YYGetBool(arg, 2) : false;
	dynamicsWorld->addConstraint(constraint, disableCollisionBetweenLinkedBodies);
}

/// @func btDiscreteDynamicsWorld_removeConstraint(discreteDynamicsWorld, constraint)
///
/// @desc
/// Removes a constraint from the btDiscreteDynamicsWorld.
///
/// @param {Pointer} discreteDynamicsWorld
///     A pointer to the btDiscreteDynamicsWorld object.
/// @param {Pointer} constraint
///     A pointer to the btTypedConstraint object to be removed.
YYEXPORT void btDiscreteDynamicsWorld_removeConstraint(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dynamicsWorld = (btDiscreteDynamicsWorld*)YYGetPtr(arg, 0);
	auto constraint = (btTypedConstraint*)YYGetPtr(arg, 1);
	dynamicsWorld->removeConstraint(constraint);
}

/// @func btDiscreteDynamicsWorld_addAction(discreteDynamicsWorld, action)
///
/// @desc
/// Adds a physics action to the dynamics world.
///
/// @param {Pointer} discreteDynamicsWorld
///     A pointer to the btDiscreteDynamicsWorld object.
/// @param {Pointer} action
///     A pointer to the btActionInterface object to be added to the dynamics
///     world.
YYEXPORT void btDiscreteDynamicsWorld_addAction(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dynamicsWorld = (btDiscreteDynamicsWorld*)YYGetPtr(arg, 0);
	auto action = (btActionInterface*)YYGetPtr(arg, 1);
	dynamicsWorld->addAction(action);
}

/// @func btDiscreteDynamicsWorld_removeAction(discreteDynamicsWorld, action)
///
/// @desc
/// Removes a physics action from the dynamics world.
///
/// @param {Pointer} discreteDynamicsWorld
///     A pointer to the btDiscreteDynamicsWorld object.
/// @param {Pointer} action
///     A pointer to the btActionInterface object to be removed from the
///     dynamics world.
YYEXPORT void btDiscreteDynamicsWorld_removeAction(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dynamicsWorld = (btDiscreteDynamicsWorld*)YYGetPtr(arg, 0);
	auto action = (btActionInterface*)YYGetPtr(arg, 1);
	dynamicsWorld->removeAction(action);
}

// Note: Skipped btDiscreteDynamicsWorld::getSimulationIslandManager

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

/// @func btDiscreteDynamicsWorld_getGravity(discreteDynamicsWorld, outVector3)
///
/// @desc
/// Retrieves the gravity vector from the btDiscreteDynamicsWorld.
///
/// @param {Pointer} discreteDynamicsWorld
///     A pointer to the btDiscreteDynamicsWorld object.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 where the gravity vector will be stored.
YYEXPORT void btDiscreteDynamicsWorld_getGravity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dynamicsWorld = (btDiscreteDynamicsWorld*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(dynamicsWorld->getGravity(), outVector3);
}

// Note: Skipped btDiscreteDynamicsWorld::addCollisionObject

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

// Note: Skipped btDiscreteDynamicsWorld::removeCollisionObject
// Note: Skipped btDiscreteDynamicsWorld::debugDrawConstraint
// Note: Skipped btDiscreteDynamicsWorld::debugDrawWorld

/// @func btDiscreteDynamicsWorld_setConstraintSolver(discreteDynamicsWorld, solver)
///
/// @desc
/// Sets the constraint solver for the btDiscreteDynamicsWorld.
///
/// @param {Pointer} discreteDynamicsWorld
///     A pointer to the btDiscreteDynamicsWorld object.
/// @param {Pointer} solver
///     A pointer to the btConstraintSolver to be set as the solver.
YYEXPORT void btDiscreteDynamicsWorld_setConstraintSolver(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dynamicsWorld = (btDiscreteDynamicsWorld*)YYGetPtr(arg, 0);
	auto solver = (btConstraintSolver*)YYGetPtr(arg, 1);
	dynamicsWorld->setConstraintSolver(solver);
}

/// @func btDiscreteDynamicsWorld_getConstraintSolver(discreteDynamicsWorld)
///
/// @desc
/// Retrieves the constraint solver from the btDiscreteDynamicsWorld.
///
/// @param {Pointer} discreteDynamicsWorld
///     A pointer to the btDiscreteDynamicsWorld object.
///
/// @return {Pointer} Returns a pointer to the btConstraintSolver associated
/// with the world.
YYEXPORT void btDiscreteDynamicsWorld_getConstraintSolver(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dynamicsWorld = (btDiscreteDynamicsWorld*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = dynamicsWorld->getConstraintSolver();
}

/// @func btDiscreteDynamicsWorld_getNumConstraints(discreteDynamicsWorld)
///
/// @desc
/// Gets the total number of constraints in the btDiscreteDynamicsWorld.
///
/// @param {Pointer} discreteDynamicsWorld
///     A pointer to the btDiscreteDynamicsWorld object.
///
/// @return {Real} Returns the total number of constraints in the dynamics world.
YYEXPORT void btDiscreteDynamicsWorld_getNumConstraints(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dynamicsWorld = (btDiscreteDynamicsWorld*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.val = dynamicsWorld->getNumConstraints();
}

/// @func btDiscreteDynamicsWorld_getConstraint(discreteDynamicsWorld, index)
///
/// @desc
/// Gets a constraint at the specified index from the btDiscreteDynamicsWorld.
///
/// @param {Pointer} discreteDynamicsWorld
///     A pointer to the btDiscreteDynamicsWorld object.
/// @param {Real} index
///     The index of the constraint to retrieve.
///
/// @return {Pointer} Returns a pointer to the constraint at the specified index.
YYEXPORT void btDiscreteDynamicsWorld_getConstraint(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dynamicsWorld = (btDiscreteDynamicsWorld*)YYGetPtr(arg, 0);
	int index = YYGetInt32(arg, 1);
	result.kind = VALUE_PTR;
	result.ptr = dynamicsWorld->getConstraint(index);
}

/// @func btDiscreteDynamicsWorld_getWorldType(discreteDynamicsWorld)
///
/// @desc
/// Gets the world type for the btDiscreteDynamicsWorld.
///
/// @param {Pointer} discreteDynamicsWorld
///     A pointer to the btDiscreteDynamicsWorld object.
///
/// @return {Real} Returns the world type as an integer.
YYEXPORT void btDiscreteDynamicsWorld_getWorldType(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dynamicsWorld = (btDiscreteDynamicsWorld*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.val = dynamicsWorld->getWorldType();
}

/// @func btDiscreteDynamicsWorld_clearForces()
///
/// @desc
/// Clears all applied forces and torques on objects within the
/// btDiscreteDynamicsWorld.
///
/// @param {Pointer} discreteDynamicsWorld
///     A pointer to the btDiscreteDynamicsWorld object.
YYEXPORT void btDiscreteDynamicsWorld_clearForces(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dynamicsWorld = (btDiscreteDynamicsWorld*)YYGetPtr(arg, 0);
	dynamicsWorld->clearForces();
}

/// @func btDiscreteDynamicsWorld_applyGravity()
///
/// @desc
/// Applies gravity to all objects within the btDiscreteDynamicsWorld.
///
/// @param {Pointer} discreteDynamicsWorld
///     A pointer to the btDiscreteDynamicsWorld object.
YYEXPORT void btDiscreteDynamicsWorld_applyGravity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dynamicsWorld = (btDiscreteDynamicsWorld*)YYGetPtr(arg, 0);
	dynamicsWorld->applyGravity();
}

// Note: Skipped btDiscreteDynamicsWorld::setNumTasks
// Note: Skipped btDiscreteDynamicsWorld::updateVehicles
// Note: Skipped btDiscreteDynamicsWorld::addVehicle
// Note: Skipped btDiscreteDynamicsWorld::removeVehicle
// Note: Skipped btDiscreteDynamicsWorld::addCharacter
// Note: Skipped btDiscreteDynamicsWorld::removeCharacter
// Note: Skipped btDiscreteDynamicsWorld::setSynchronizeAllMotionStates
// Note: Skipped btDiscreteDynamicsWorld::getSynchronizeAllMotionStates
// Note: Skipped btDiscreteDynamicsWorld::setApplySpeculativeContactRestitution
// Note: Skipped btDiscreteDynamicsWorld::getApplySpeculativeContactRestitution
// Note: Skipped btDiscreteDynamicsWorld::serialize
// Note: Skipped btDiscreteDynamicsWorld::setLatencyMotionStateInterpolation
// Note: Skipped btDiscreteDynamicsWorld::getLatencyMotionStateInterpolation

/// @func btDiscreteDynamicsWorld_getNonStaticRigidBodies(dynamicsWorld, outArray)
///
/// @desc
/// Retrieves an array of pointers to non-static rigid bodies in the
/// btDiscreteDynamicsWorld.
///
/// @param {Pointer} dynamicsWorld
///     A pointer to the btDiscreteDynamicsWorld object.
/// @param {Array<Pointer>} outArray
///     An array to store pointers to non-static rigid bodies. This array will
///     be populated by the function.
YYEXPORT void btDiscreteDynamicsWorld_getNonStaticRigidBodies(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto dynamicsWorld = (btDiscreteDynamicsWorld*)YYGetPtr(arg, 0);
	RValue* outArray = &arg[1];
	btAlignedObjectArray<btRigidBody*>& alignedObjectArray = dynamicsWorld->getNonStaticRigidBodies();
	RValue value;
	value.kind = VALUE_PTR;
	for (int i = alignedObjectArray.size() - 1; i >= 0; --i)
	{
		value.ptr = alignedObjectArray[i];
		SET_RValue(outArray, &value, NULL, i);
	}
	FREE_RValue(&value);
}
