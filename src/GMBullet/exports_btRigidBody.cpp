#include <GMBullet.hpp>

/// @func btRigidBody_create(mass, motionState, collisionShape[, localInertia])
///
/// @desc
/// Creates a new instance of a btRigidBody.
///
/// @param {Real} mass
///     The mass of the rigid body. Use 0 to make a static rigid body.
/// @param {Pointer} motionState
///     A pointer to the btMotionState object representing the motion state for
///     the rigid body.
/// @param {Pointer} collisionShape
///     A pointer to the btCollisionShape object representing the collision
///     shape for the rigid body.
/// @param {Pointer} [localInertia]
///     A pointer to a btVector3 object representing the local inertia for the
///     rigid body. Defaults to (0, 0, 0).
///
/// @return {Pointer} A pointer to the newly created btRigidBody instance.
YYEXPORT void btRigidBody_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	double mass = YYGetReal(arg, 0);
	auto motionState = (btMotionState*)YYGetPtr(arg, 1);
	auto collisionShape = (btCollisionShape*)YYGetPtr(arg, 2);
	result.kind = VALUE_PTR;
	if (argc > 3)
	{
		auto& localInertia = *(btVector3*)YYGetPtr(arg, 3);
		btRigidBody::btRigidBodyConstructionInfo rbInfo(mass, motionState, collisionShape, localInertia);
		result.ptr = new btRigidBody(rbInfo);
	}
	else
	{
		btRigidBody::btRigidBodyConstructionInfo rbInfo(mass, motionState, collisionShape);
		result.ptr = new btRigidBody(rbInfo);
	}
}

/// @func btRigidBody_destroy(rigidBody)
///
/// @desc
/// Destroys an instance of a btRigidBody.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object to be destroyed.
YYEXPORT void btRigidBody_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btRigidBody*)YYGetPtr(arg, 0);
}

// Note: Skipped btRigidBody::proceedToTransform

/// @func btRigidBody_upcast(collisionObject)
///
/// @desc
/// Upcasts a btCollisionObject to a btRigidBody, if possible.
///
/// @param {Pointer} collisionObject
///     A pointer to the btCollisionObject object.
///
/// @return {Pointer} A pointer to the upcasted btRigidBody, or nullptr if the
/// upcast is not possible.
YYEXPORT void btRigidBody_upcast(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = btRigidBody::upcast(collisionObject);
}

// Note: Skipped btRigidBody::predictIntegratedTransform
// Note: Skipped btRigidBody::saveKinematicState

/// @func btRigidBody_applyGravity(rigidBody)
///
/// @desc
/// Applies gravity to a btRigidBody.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object to which gravity will be applied.
YYEXPORT void btRigidBody_applyGravity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	rigidBody->applyGravity();
}

/// @func btRigidBody_clearGravity(rigidBody)
///
/// @desc
/// Clears any applied gravity from a btRigidBody.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object from which gravity will be cleared.
YYEXPORT void btRigidBody_clearGravity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	rigidBody->clearGravity();
}

/// @func btRigidBody_setGravity(rigidBody, gravity)
///
/// @desc
/// Sets the gravity for a rigid body.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Pointer} gravity
///     A pointer to a btVector3 representing the gravity to be set.
YYEXPORT void btRigidBody_setGravity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	auto& gravity = *(btVector3*)YYGetPtr(arg, 1);
	rigidBody->setGravity(gravity);
}

/// @func btRigidBody_setGravityXYZ(rigidBody, gravityX, gravityY, gravityZ)
///
/// @desc
/// Sets the gravity for a rigid body using individual components (x, y, z).
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Real} gravityX
///     The x-component of the gravity.
/// @param {Real} gravityY
///     The y-component of the gravity.
/// @param {Real} gravityZ
///     The z-component of the gravity.
YYEXPORT void btRigidBody_setGravityXYZ(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	double gravityX = YYGetReal(arg, 1);
	double gravityY = YYGetReal(arg, 2);
	double gravityZ = YYGetReal(arg, 3);
	rigidBody->setGravity(btVector3(gravityX, gravityY, gravityZ));
}

/// @func btRigidBody_getGravity(rigidBody, outVector3)
///
/// @desc
/// Gets the gravity applied to the rigid body.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 object that will receive the gravity.
YYEXPORT void btRigidBody_getGravity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(rigidBody->getGravity(), outVector3);
}

/// @func btRigidBody_setDamping(rigidBody, linearDamping, angularDamping)
///
/// @desc
/// Sets the linear and angular damping for the rigid body.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Real} linearDamping
///     The linear damping factor.
/// @param {Real} angularDamping
///     The angular damping factor.
YYEXPORT void btRigidBody_setDamping(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	double linearDamping = YYGetReal(arg, 1);
	double angularDamping = YYGetReal(arg, 2);
	rigidBody->setDamping(linearDamping, angularDamping);
}

/// @func btRigidBody_getLinearDamping(rigidBody)
///
/// @desc
/// Gets the linear damping factor of the rigid body.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
///
/// @return {Real} The linear damping factor of the rigid body.
YYEXPORT void btRigidBody_getLinearDamping(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = rigidBody->getLinearDamping();
}

/// @func btRigidBody_getAngularDamping(rigidBody)
///
/// @desc
/// Gets the angular damping factor of the rigid body.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
///
/// @return {Real} The angular damping factor of the rigid body.
YYEXPORT void btRigidBody_getAngularDamping(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = rigidBody->getAngularDamping();
}

/// @func btRigidBody_getLinearSleepingThreshold(rigidBody)
///
/// @desc
/// Gets the linear sleeping threshold of the rigid body.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
///
/// @return {Real} The linear sleeping threshold of the rigid body.
YYEXPORT void btRigidBody_getLinearSleepingThreshold(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = rigidBody->getLinearSleepingThreshold();
}

/// @func btRigidBody_getAngularSleepingThreshold(rigidBody)
///
/// @desc
/// Gets the angular sleeping threshold of the rigid body.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
///
/// @return {Real} The angular sleeping threshold of the rigid body.
YYEXPORT void btRigidBody_getAngularSleepingThreshold(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = rigidBody->getAngularSleepingThreshold();
}

/// @func btRigidBody_applyDamping(rigidBody, timeStep)
///
/// @desc
/// Applies damping to the rigid body for the given time step.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Real} timeStep
///     The time step for the damping calculation.
YYEXPORT void btRigidBody_applyDamping(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	double timeStep = YYGetReal(arg, 1);
	rigidBody->applyDamping(timeStep);
}

/// @func btRigidBody_getCollisionShape(rigidBody)
///
/// @desc
/// Gets the collision shape of the rigid body.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
///
/// @return {Pointer} A pointer to the btCollisionShape associated with the
/// rigid body.
YYEXPORT void btRigidBody_getCollisionShape(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = rigidBody->getCollisionShape();
}

/// @func btRigidBody_setMassProps(rigidBody, mass, inertia)
///
/// @desc
/// Sets the mass and inertia tensor properties for the rigid body.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Real} mass
///     The mass of the rigid body.
/// @param {Pointer} inertia
///     A pointer to a btVector3 representing the inertia of the rigid body.
YYEXPORT void btRigidBody_setMassProps(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	double mass = YYGetReal(arg, 1);
	auto& inertia = *(btVector3*)YYGetPtr(arg, 2);
	rigidBody->setMassProps(mass, inertia);
}

/// @func btRigidBody_setMassPropsXYZ(rigidBody, mass, inertiaX, inertiaY, inertiaZ)
///
/// @desc
/// Sets the mass and inertia tensor properties for the rigid body using
/// individual components for inertia.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Real} mass
///     The mass of the rigid body.
/// @param {Real} inertiaX
///     The x-component of the inertia tensor.
/// @param {Real} inertiaY
///     The y-component of the inertia tensor.
/// @param {Real} inertiaZ
///     The z-component of the inertia tensor.
YYEXPORT void btRigidBody_setMassPropsXYZ(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	double mass = YYGetReal(arg, 1);
	double inertiaX = YYGetReal(arg, 2);
	double inertiaY = YYGetReal(arg, 3);
	double inertiaZ = YYGetReal(arg, 4);
	rigidBody->setMassProps(mass, btVector3(inertiaX, inertiaY, inertiaZ));
}

/// @func btRigidBody_getLinearFactor(rigidBody, outVector3)
///
/// @desc
/// Gets the linear factor of the btRigidBody, which controls the linear
/// motion's freedom along each axis.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 where the linear factor will be copied.
YYEXPORT void btRigidBody_getLinearFactor(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(rigidBody->getLinearFactor(), outVector3);
}

/// @func btRigidBody_setLinearFactor(rigidBody, linearFactor)
///
/// @desc
/// Sets the linear factor of the btRigidBody, which controls the linear
/// motion's freedom along each axis.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Pointer} linearFactor
///     A pointer to a btVector3 representing the linear factor.
YYEXPORT void btRigidBody_setLinearFactor(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	auto& linearFactor = *(btVector3*)YYGetPtr(arg, 1);
	rigidBody->setLinearFactor(linearFactor);
}

/// @func btRigidBody_getInvMass(rigidBody)
///
/// @desc
/// Gets the inverse mass of the btRigidBody.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
///
/// @return {Real} The inverse mass of the rigid body. Returns 0 for bodies with
/// zero mass.
YYEXPORT void btRigidBody_getInvMass(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = rigidBody->getInvMass();
}

/// @func btRigidBody_getMass(rigidBody)
///
/// @desc
/// Gets the mass of the btRigidBody.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
///
/// @return {Real} The mass of the rigid body.
YYEXPORT void btRigidBody_getMass(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = rigidBody->getMass();
}

/// @func btRigidBody_integrateVelocities(rigidBody, step)
///
/// @desc
/// Integrates rigid body velocities over a specified time step.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Real} step
///     The time step for integration.
YYEXPORT void btRigidBody_integrateVelocities(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	double step = YYGetReal(arg, 1);
	rigidBody->integrateVelocities(step);
}

/// @func btRigidBody_setCenterOfMassTransform(rigidBody, transform)
///
/// @desc
/// Sets the center of mass transform for the rigid body.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Pointer} transform
///     A pointer to the btTransform representing the new center of mass
///     transform.
YYEXPORT void btRigidBody_setCenterOfMassTransform(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	auto& transform = *(btTransform*)YYGetPtr(arg, 1);
	rigidBody->setCenterOfMassTransform(transform);
}

/// @func btRigidBody_applyCentralForce(rigidBody, force)
///
/// @desc
/// Applies a central force to a rigid body.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Pointer} force
///     A pointer to a btVector3 representing the central force to apply.
YYEXPORT void btRigidBody_applyCentralForce(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	auto& force = *(btVector3*)YYGetPtr(arg, 1);
	rigidBody->applyCentralForce(force);
}

/// @func btRigidBody_applyCentralForceXYZ(rigidBody, forceX, forceY, forceZ)
///
/// @desc
/// Applies a central force to a rigid body using individual components.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Real} forceX
///     The x-component of the central force to apply.
/// @param {Real} forceY
///     The y-component of the central force to apply.
/// @param {Real} forceZ
///     The z-component of the central force to apply.
YYEXPORT void btRigidBody_applyCentralForceXYZ(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	double forceX = YYGetReal(arg, 1);
	double forceY = YYGetReal(arg, 2);
	double forceZ = YYGetReal(arg, 3);
	rigidBody->applyCentralForce(btVector3(forceX, forceY, forceZ));
}

/// @func btRigidBody_getTotalForce(rigidBody, outVector3)
///
/// @desc
/// Gets the total force applied to the rigid body.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the total force.
YYEXPORT void btRigidBody_getTotalForce(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(rigidBody->getTotalForce(), outVector3);
}

/// @func btRigidBody_getTotalTorque(rigidBody, outVector3)
///
/// @desc
/// Gets the total torque applied to the rigid body.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the total torque.
YYEXPORT void btRigidBody_getTotalTorque(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(rigidBody->getTotalTorque(), outVector3);
}

/// @func btRigidBody_getInvInertiaDiagLocal(rigidBody, outVector3)
///
/// @desc
/// Gets the inverse of the local inertia diagonal of the rigid body.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the inverse inertia diagonal.
YYEXPORT void btRigidBody_getInvInertiaDiagLocal(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(rigidBody->getInvInertiaDiagLocal(), outVector3);
}

/// @func btRigidBody_setInvInertiaDiagLocal(rigidBody, diagInvInertia)
///
/// @desc
/// Sets the inverse of the local inertia diagonal of the rigid body.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Pointer} diagInvInertia
///     A pointer to a btVector3 representing the inverse inertia diagonal.
YYEXPORT void btRigidBody_setInvInertiaDiagLocal(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	auto& diagInvInertia = *(btVector3*)YYGetPtr(arg, 1);
	rigidBody->setInvInertiaDiagLocal(diagInvInertia);
}

/// @func btRigidBody_setSleepingThresholds(rigidBody, linear, angular)
///
/// @desc
/// Sets the thresholds for when the rigid body is considered sleeping.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Real} linear
///     The linear sleeping threshold. If the linear velocity is below this
///     threshold, the body may go to sleep.
/// @param {Real} angular
///     The angular sleeping threshold. If the angular velocity is below this
///     threshold, the body may go to sleep.
YYEXPORT void btRigidBody_setSleepingThresholds(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	double linear = YYGetReal(arg, 1);
	double angular = YYGetReal(arg, 2);
	rigidBody->setSleepingThresholds(linear, angular);
}

/// @func btRigidBody_applyTorque(rigidBody, torque)
///
/// @desc
/// Applies a torque to the rigid body.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Pointer} torque
///     A pointer to a btVector3 representing the torque to apply.
YYEXPORT void btRigidBody_applyTorque(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	auto& torque = *(btVector3*)YYGetPtr(arg, 1);
	rigidBody->applyTorque(torque);
}

/// @func btRigidBody_applyForce(rigidBody, forceX, forceY, forceZ, relPosX, relPosY, relPosZ)
///
/// @desc
/// Applies a force to a rigid body at a given position.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Pointer} force
///     A pointer to a btVector3 representing the force to apply.
/// @param {Pointer} relPos
///     A pointer to a btVector3 representing the position where the force is
///     applied, relative to the center of mass.
YYEXPORT void btRigidBody_applyForce(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	auto& force = *(btVector3*)YYGetPtr(arg, 1);
	auto& relPos = *(btVector3*)YYGetPtr(arg, 2);
	rigidBody->applyForce(force, relPos);
}

/// @func btRigidBody_applyForceXYZ(rigidBody, forceX, forceY, forceZ, relPosX, relPosY, relPosZ)
///
/// @desc
/// Applies a force to a rigid body at a given position using individual components.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Real} forceX
///     The x-component of the force to apply.
/// @param {Real} forceY
///     The y-component of the force to apply.
/// @param {Real} forceZ
///     The z-component of the force to apply.
/// @param {Real} relPosX
///     The x-component of the position where the force is applied, relative to
///     the center of mass.
/// @param {Real} relPosY
///     The y-component of the position where the force is applied, relative
///     to the center of mass.
/// @param {Real} relPosZ
///     The z-component of the position where the force is applied, relative to
///     the center of mass.
YYEXPORT void btRigidBody_applyForceXYZ(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	double forceX = YYGetReal(arg, 1);
	double forceY = YYGetReal(arg, 2);
	double forceZ = YYGetReal(arg, 3);
	double relPosX = YYGetReal(arg, 4);
	double relPosY = YYGetReal(arg, 5);
	double relPosZ = YYGetReal(arg, 6);
	rigidBody->applyForce(btVector3(forceX, forceY, forceZ), btVector3(relPosX, relPosY, relPosZ));
}

/// @func btRigidBody_applyCentralImpulse(rigidBody, impulse)
///
/// @desc
/// Applies an impulse to the center of mass of a rigid body.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Pointer} impulse
///     A pointer to a btVector3 representing the impulse to apply.
YYEXPORT void btRigidBody_applyCentralImpulse(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	auto& impulse = *(btVector3*)YYGetPtr(arg, 1);
	rigidBody->applyCentralImpulse(impulse);
}

/// @func btRigidBody_applyCentralImpulseXYZ(rigidBody, impulseX, impulseY, impulseZ)
///
/// @desc
/// Applies an impulse to the center of mass of a rigid body using individual
/// components.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Real} impulseX
///     The x-component of the impulse to apply.
/// @param {Real} impulseY
///     The y-component of the impulse to apply.
/// @param {Real} impulseZ
///     The z-component of the impulse to apply.
YYEXPORT void btRigidBody_applyCentralImpulseXYZ(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	double impulseX = YYGetReal(arg, 1);
	double impulseY = YYGetReal(arg, 2);
	double impulseZ = YYGetReal(arg, 3);
	rigidBody->applyCentralImpulse(btVector3(impulseX, impulseY, impulseZ));
}

/// @func btRigidBody_applyTorqueImpulse(rigidBody, torque)
///
/// @desc
/// Applies an impulse torque to the rigid body.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Pointer} torque
///     A pointer to a btVector3 representing the impulse torque to apply.
YYEXPORT void btRigidBody_applyTorqueImpulse(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	auto& torque = *(btVector3*)YYGetPtr(arg, 1);
	rigidBody->applyTorqueImpulse(torque);
}

/// @func btRigidBody_applyTorqueImpulseXYZ(rigidBody, torqueX, torqueY, torqueZ)
///
/// @desc
/// Applies an impulse torque to the rigid body using individual torque
/// components along the axes.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Real} torqueX
///     The torque along the X-axis.
/// @param {Real} torqueY
///     The torque along the Y-axis.
/// @param {Real} torqueZ
///     The torque along the Z-axis.
YYEXPORT void btRigidBody_applyTorqueImpulseXYZ(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	double torqueX = YYGetReal(arg, 1);
	double torqueY = YYGetReal(arg, 2);
	double torqueZ = YYGetReal(arg, 3);
	rigidBody->applyTorqueImpulse(btVector3(torqueX, torqueY, torqueZ));
}

/// @func btRigidBody_applyImpulse(rigidBody, impulse, relPos)
///
/// @desc
/// Applies an impulse to a btRigidBody at a relative position.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object to which the impulse is applied.
/// @param {Pointer} impulse
///     A pointer to a btVector3 representing the impulse to apply.
/// @param {Pointer} relPos
///     A pointer to a btVector3 representing the relative position where the
///     impulse is applied.
YYEXPORT void btRigidBody_applyImpulse(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	auto& impulse = *(btVector3*)YYGetPtr(arg, 1);
	auto& relPos = *(btVector3*)YYGetPtr(arg, 2);
	rigidBody->applyImpulse(impulse, relPos);
}

/// @func btRigidBody_applyImpulseXYZ(rigidBody, impulseX, impulseY, impulseZ, relPosX, relPosY, relPosZ)
///
/// @desc
/// Applies an impulse to a btRigidBody at a specified position in world
/// coordinates.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Real} impulseX
///     The x-component of the impulse to apply.
/// @param {Real} impulseY
///     The y-component of the impulse to apply.
/// @param {Real} impulseZ
///     The z-component of the impulse to apply.
/// @param {Real} relPosX
///     The x-component of the position relative to the center of mass where the
///     impulse is applied.
/// @param {Real} relPosY
///     The y-component of the position relative to the center of mass where the
///     impulse is applied.
/// @param {Real} relPosZ
///     The z-component of the position relative to the center of mass where the
///     impulse is applied.
YYEXPORT void btRigidBody_applyImpulseXYZ(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	double impulseX = YYGetReal(arg, 1);
	double impulseY = YYGetReal(arg, 2);
	double impulseZ = YYGetReal(arg, 3);
	double relPosX = YYGetReal(arg, 4);
	double relPosY = YYGetReal(arg, 5);
	double relPosZ = YYGetReal(arg, 6);
	rigidBody->applyImpulse(btVector3(impulseX, impulseY, impulseZ), btVector3(relPosX, relPosY, relPosZ));
}

/// @func btRigidBody_applyPushImpulse(rigidBody, impulse, relPos)
///
/// @desc
/// Applies a push impulse to the rigid body at a relative position.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Pointer} impulse
///     A pointer to a btVector3 representing the impulse to apply.
/// @param {Pointer} relPos
///     A pointer to a btVector3 representing the relative position where the
///    impulse is applied.
YYEXPORT void btRigidBody_applyPushImpulse(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	auto& impulse = *(btVector3*)YYGetPtr(arg, 1);
	auto& relPos = *(btVector3*)YYGetPtr(arg, 2);
	rigidBody->applyPushImpulse(impulse, relPos);
}

/// @func btRigidBody_applyPushImpulseXYZ(rigidBody, impulseX, impulseY, impulseZ, relPosX, relPosY, relPosZ)
///
/// @desc
/// Applies a push impulse to the rigid body at a specified relative position.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Real} impulseX
///     The X component of the impulse to apply.
/// @param {Real} impulseY
///     The Y component of the impulse to apply.
/// @param {Real} impulseZ
///     The Z component of the impulse to apply.
/// @param {Real} relPosX
///     The X component of the relative position where the impulse is applied.
/// @param {Real} relPosY
///     The Y component of the relative position where the impulse is applied.
/// @param {Real} relPosZ
///     The Z component of the relative position where the impulse is applied.
YYEXPORT void btRigidBody_applyPushImpulseXYZ(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	double impulseX = YYGetReal(arg, 1);
	double impulseY = YYGetReal(arg, 2);
	double impulseZ = YYGetReal(arg, 3);
	double relPosX = YYGetReal(arg, 4);
	double relPosY = YYGetReal(arg, 5);
	double relPosZ = YYGetReal(arg, 6);
	rigidBody->applyPushImpulse(btVector3(impulseX, impulseY, impulseZ), btVector3(relPosX, relPosY, relPosZ));
}

/// @func btRigidBody_getPushVelocity(rigidBody, outVector3)
///
/// @desc
/// Gets the push velocity of the rigid body.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the push velocity.
YYEXPORT void btRigidBody_getPushVelocity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(rigidBody->getPushVelocity(), outVector3);
}

/// @func btRigidBody_getTurnVelocity(rigidBody, outVector3)
///
/// @desc
/// Gets the turn velocity of the rigid body.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the turn velocity.
YYEXPORT void btRigidBody_getTurnVelocity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(rigidBody->getTurnVelocity(), outVector3);
}

/// @func btRigidBody_setPushVelocity(rigidBody, velocity)
///
/// @desc
/// Sets the push velocity of the rigid body.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Pointer} velocity
///     A pointer to a btVector3 representing the push velocity to set.
YYEXPORT void btRigidBody_setPushVelocity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	auto& velocity = *(btVector3*)YYGetPtr(arg, 1);
	rigidBody->setPushVelocity(velocity);
}

/// @func btRigidBody_setPushVelocityXYZ(rigidBody, velocityX, velocityY, velocityZ)
///
/// @desc
/// Sets the push velocity of the rigid body using individual components in the
/// XYZ axes.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Real} velocityX
///     The push velocity along the X-axis.
/// @param {Real} velocityY
///     The push velocity along the Y-axis.
/// @param {Real} velocityZ
///     The push velocity along the Z-axis.
YYEXPORT void btRigidBody_setPushVelocityXYZ(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	double velocityX = YYGetReal(arg, 1);
	double velocityY = YYGetReal(arg, 2);
	double velocityZ = YYGetReal(arg, 3);
	rigidBody->setPushVelocity(btVector3(velocityX, velocityY, velocityZ));
}

// Note: Skipped btRigidBody::clampVelocity

/// @func btRigidBody_setTurnVelocity(rigidBody, velocity)
///
/// @desc
/// Sets the turn velocity of the rigid body using a btVector3.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Pointer} velocity
///     A pointer to a btVector3 representing the turn velocity to set.
YYEXPORT void btRigidBody_setTurnVelocity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	auto& velocity = *(btVector3*)YYGetPtr(arg, 1);
	rigidBody->setTurnVelocity(velocity);
}

/// @func btRigidBody_setTurnVelocityXYZ(rigidBody, velocityX, velocityY, velocityZ)
///
/// @desc
/// Sets the turn velocity of the rigid body using individual components in the
/// XYZ axes.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Real} velocityX
///     The turn velocity along the X-axis.
/// @param {Real} velocityY
///     The turn velocity along the Y-axis.
/// @param {Real} velocityZ
///     The turn velocity along the Z-axis.
YYEXPORT void btRigidBody_setTurnVelocityXYZ(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	double velocityX = YYGetReal(arg, 1);
	double velocityY = YYGetReal(arg, 2);
	double velocityZ = YYGetReal(arg, 3);
	rigidBody->setTurnVelocity(btVector3(velocityX, velocityY, velocityZ));
}

/// @func btRigidBody_applyCentralPushImpulse(rigidBody, impulse)
///
/// @desc
/// Applies a central push impulse to the rigid body using a btVector3.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Pointer} impulse
///     A pointer to a btVector3 representing the central push impulse to apply.
YYEXPORT void btRigidBody_applyCentralPushImpulse(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	auto& impulse = *(btVector3*)YYGetPtr(arg, 1);
	rigidBody->applyCentralPushImpulse(impulse);
}

/// @func btRigidBody_applyCentralPushImpulseXYZ(rigidBody, impulseX, impulseY, impulseZ)
///
/// @desc
/// Applies a central push impulse to the rigid body using individual components
/// in the XYZ axes.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Real} impulseX
///     The impulse along the X-axis.
/// @param {Real} impulseY
///     The impulse along the Y-axis.
/// @param {Real} impulseZ
///     The impulse along the Z-axis.
YYEXPORT void btRigidBody_applyCentralPushImpulseXYZ(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	double impulseX = YYGetReal(arg, 1);
	double impulseY = YYGetReal(arg, 2);
	double impulseZ = YYGetReal(arg, 3);
	rigidBody->applyCentralPushImpulse(btVector3(impulseX, impulseY, impulseZ));
}

/// @func btRigidBody_applyTorqueTurnImpulse(rigidBody, torque)
///
/// @desc
/// Applies a torque turn impulse to the rigid body using a btVector3.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Pointer} torque
///     A pointer to a btVector3 representing the torque turn impulse to apply.
YYEXPORT void btRigidBody_applyTorqueTurnImpulse(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	auto& torque = *(btVector3*)YYGetPtr(arg, 1);
	rigidBody->applyTorqueTurnImpulse(torque);
}

/// @func btRigidBody_applyTorqueTurnImpulseXYZ(rigidBody, torqueX, torqueY, torqueZ)
///
/// @desc
/// Applies a torque turn impulse to the rigid body using individual components
/// in the XYZ axes.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Real} torqueX
///     The torque impulse along the X-axis.
/// @param {Real} torqueY
///     The torque impulse along the Y-axis.
/// @param {Real} torqueZ
///     The torque impulse along the Z-axis.
YYEXPORT void btRigidBody_applyTorqueTurnImpulseXYZ(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	double torqueX = YYGetReal(arg, 1);
	double torqueY = YYGetReal(arg, 2);
	double torqueZ = YYGetReal(arg, 3);
	rigidBody->applyTorqueTurnImpulse(btVector3(torqueX, torqueY, torqueZ));
}

/// @func btRigidBody_clearForces(rigidBody)
///
/// @desc
/// Clears all forces and torques applied to the rigid body.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
YYEXPORT void btRigidBody_clearForces(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	rigidBody->clearForces();
}

/// @func btRigidBody_updateInertiaTensor(rigidBody)
///
/// @desc
/// Recalculates the inertia tensor of the rigid body based on its current mass
/// and shape.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
YYEXPORT void btRigidBody_updateInertiaTensor(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	rigidBody->updateInertiaTensor();
}

/// @func btRigidBody_getCenterOfMassPosition(rigidBody, outVector3)
///
/// @desc
/// Retrieves the center of mass position of the rigid body.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the center of mass position.
YYEXPORT void btRigidBody_getCenterOfMassPosition(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(rigidBody->getCenterOfMassPosition(), outVector3);
}

/// @func btRigidBody_getOrientation(rigidBody, outQuaternion)
///
/// @desc
/// Retrieves the orientation (rotation) of the rigid body as a quaternion.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Pointer} outQuaternion
///     A pointer to a btQuaternion to store the orientation.
YYEXPORT void btRigidBody_getOrientation(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	auto outQuaternion = (btQuaternion*)YYGetPtr(arg, 1);
	CopyQuaternion(rigidBody->getOrientation(), outQuaternion);
}

/// @func btRigidBody_getCenterOfMassTransform(rigidBody, outTransform)
///
/// @desc
/// Retrieves the transform representing the center of mass of the rigid body.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Pointer} outTransform
///     A pointer to a btTransform to store the center of mass transform.
YYEXPORT void btRigidBody_getCenterOfMassTransform(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	auto outTransform = (btTransform*)YYGetPtr(arg, 1);
	CopyTransform(rigidBody->getCenterOfMassTransform(), outTransform);
}

/// @func btRigidBody_getLinearVelocity(rigidBody, outVector3)
///
/// @desc
/// Retrieves the linear velocity of the rigid body.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the linear velocity.
YYEXPORT void btRigidBody_getLinearVelocity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(rigidBody->getLinearVelocity(), outVector3);
}

/// @func btRigidBody_getAngularVelocity(rigidBody, outVector3)
///
/// @desc
/// Retrieves the angular velocity of the rigid body.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the angular velocity.
YYEXPORT void btRigidBody_getAngularVelocity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(rigidBody->getAngularVelocity(), outVector3);
}

/// @func btRigidBody_setLinearVelocity(rigidBody, linearVelocity)
///
/// @desc
/// Sets the linear velocity of the rigid body.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Pointer} linearVelocity
///     A pointer to a btVector3 representing the linear velocity.

YYEXPORT void btRigidBody_setLinearVelocity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	auto& linearVelocity = *(btVector3*)YYGetPtr(arg, 1);
	rigidBody->setLinearVelocity(linearVelocity);
}

/// @func btRigidBody_setLinearVelocityXYZ(rigidBody, linearVelocityX, linearVelocityY, linearVelocityZ)
///
/// @desc
/// Sets the linear velocity of the rigid body using individual components.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Real} linearVelocityX
///     The linear velocity along the X-axis.
/// @param {Real} linearVelocityY
///     The linear velocity along the Y-axis.
/// @param {Real} linearVelocityZ
///     The linear velocity along the Z-axis.
YYEXPORT void btRigidBody_setLinearVelocityXYZ(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	double linearVelocityX = YYGetReal(arg, 1);
	double linearVelocityY = YYGetReal(arg, 2);
	double linearVelocityZ = YYGetReal(arg, 3);
	rigidBody->setLinearVelocity(btVector3(linearVelocityX, linearVelocityY, linearVelocityZ));
}

/// @func btRigidBody_setAngularVelocity(rigidBody, angularVelocity)
///
/// @desc
/// Sets the angular velocity of the rigid body.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Pointer} angularVelocity
///     A pointer to a btVector3 representing the angular velocity.
YYEXPORT void btRigidBody_setAngularVelocity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	auto& angularVelocity = *(btVector3*)YYGetPtr(arg, 1);
	rigidBody->setAngularVelocity(angularVelocity);
}

/// @func btRigidBody_setAngularVelocityXYZ(rigidBody, angularVelocityX, angularVelocityY, angularVelocityZ)
///
/// @desc
/// Sets the angular velocity of the rigid body using individual components.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Real} angularVelocityX
///     The angular velocity around the X-axis.
/// @param {Real} angularVelocityY
///     The angular velocity around the Y-axis.
/// @param {Real} angularVelocityZ
///     The angular velocity around the Z-axis.
YYEXPORT void btRigidBody_setAngularVelocityXYZ(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	double angularVelocityX = YYGetReal(arg, 1);
	double angularVelocityY = YYGetReal(arg, 2);
	double angularVelocityZ = YYGetReal(arg, 3);
	rigidBody->setAngularVelocity(btVector3(angularVelocityX, angularVelocityY, angularVelocityZ));
}

/// @func btRigidBody_getVelocityInLocalPoint(rigidBody, relPos, outVector3)
///
/// @desc
/// Gets the velocity of a point in the local frame of the rigid body.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Pointer} relPos
///     A pointer to a btVector3 representing the relative position of the point.
/// @param {Pointer} outVector3
///     A pointer to store the resulting velocity vector.
YYEXPORT void btRigidBody_getVelocityInLocalPoint(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	auto& relPos = *(btVector3*)YYGetPtr(arg, 1);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 2);
	CopyVector3(rigidBody->getVelocityInLocalPoint(relPos), outVector3);
}

/// @func btRigidBody_getVelocityInLocalPointXYZ(rigidBody, relPosX, relPosY, relPosZ, outVector3)
///
/// @desc
/// Gets the velocity of a point in the local frame of the rigid body using
/// individual components for the relative position.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Real} relPosX
///     The X-component of the relative position.
/// @param {Real} relPosY
///     The Y-component of the relative position.
/// @param {Real} relPosZ
///     The Z-component of the relative position.
/// @param {Pointer} outVector3
///     A pointer to store the resulting velocity vector.
YYEXPORT void btRigidBody_getVelocityInLocalPointXYZ(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	double relPosX = YYGetReal(arg, 1);
	double relPosY = YYGetReal(arg, 2);
	double relPosZ = YYGetReal(arg, 3);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 4);
	CopyVector3(rigidBody->getVelocityInLocalPoint(btVector3(relPosX, relPosY, relPosZ)), outVector3);
}

/// @func btRigidBody_getPushVelocityInLocalPoint(rigidBody, relPos, outVector3)
///
/// @desc
/// Gets the push velocity of a point in the local frame of the rigid body.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Pointer} relPos
///     A pointer to a btVector3 representing the relative position of the point.
/// @param {Pointer} outVector3
///     A pointer to store the resulting push velocity vector.
YYEXPORT void btRigidBody_getPushVelocityInLocalPoint(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	auto& relPos = *(btVector3*)YYGetPtr(arg, 1);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 2);
	CopyVector3(rigidBody->getPushVelocityInLocalPoint(relPos), outVector3);
}

/// @func btRigidBody_getPushVelocityInLocalPointXYZ(rigidBody, relPosX, relPosY, relPosZ, outVector3)
///
/// @desc
/// Gets the push velocity of a point in the local frame of the rigid body using
/// individual components for the relative position.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Real} relPosX
///     The X-component of the relative position.
/// @param {Real} relPosY
///     The Y-component of the relative position.
/// @param {Real} relPosZ
///     The Z-component of the relative position.
/// @param {Pointer} outVector3
///     A pointer to store the resulting push velocity vector.
YYEXPORT void btRigidBody_getPushVelocityInLocalPointXYZ(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	double relPosX = YYGetReal(arg, 1);
	double relPosY = YYGetReal(arg, 2);
	double relPosZ = YYGetReal(arg, 3);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 4);
	CopyVector3(rigidBody->getPushVelocityInLocalPoint(btVector3(relPosX, relPosY, relPosZ)), outVector3);
}

/// @func btRigidBody_translate(rigidBody, vector)
///
/// @desc
/// Translates the rigid body by a specified vector.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Pointer} vector
///     A pointer to a btVector3 representing the translation vector.
YYEXPORT void btRigidBody_translate(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	auto& vector = *(btVector3*)YYGetPtr(arg, 1);
	rigidBody->translate(vector);
}

/// @func btRigidBody_translateXYZ(rigidBody, vectorX, vectorY, vectorZ)
///
/// @desc
/// Translates the rigid body by specified X, Y, and Z components of the
/// translation vector.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Real} vectorX
///     The X-component of the translation vector.
/// @param {Real} vectorY
///     The Y-component of the translation vector.
/// @param {Real} vectorZ
///     The Z-component of the translation vector.
YYEXPORT void btRigidBody_translateXYZ(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	double vectorX = YYGetReal(arg, 1);
	double vectorY = YYGetReal(arg, 2);
	double vectorZ = YYGetReal(arg, 3);
	rigidBody->translate(btVector3(vectorX, vectorY, vectorZ));
}

/// @func btRigidBody_getAabb(rigidBody, aabbMin, aabbMax)
///
/// @desc
/// Gets the axis-aligned bounding box (AABB) of the rigid body.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Pointer} aabbMin
///     A pointer to a btVector3 to store the minimum coordinates of the AABB.
/// @param {Pointer} aabbMax
///     A pointer to a btVector3 to store the maximum coordinates of the AABB.
YYEXPORT void btRigidBody_getAabb(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	auto& aabbMin = *(btVector3*)YYGetPtr(arg, 1);
	auto& aabbMax = *(btVector3*)YYGetPtr(arg, 2);
	rigidBody->getAabb(aabbMin, aabbMax);
}

// Note: Skipped btRigidBody::computeImpulseDenominator
// Note: Skipped btRigidBody::computeAngularImpulseDenominator
// Note: Skipped btRigidBody::updateDeactivation
// Note: Skipped btRigidBody::wantsSleeping
// Note: Skipped btRigidBody::getBroadphaseProxy
// Note: Skipped btRigidBody::setNewBroadphaseProxy

/// @func btRigidBody_getMotionState(rigidBody)
///
/// @desc
/// Gets the motion state associated with a btRigidBody.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
///
/// @return {Pointer} A pointer to the btMotionState associated with the rigid
/// body.
YYEXPORT void btRigidBody_getMotionState(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = rigidBody->getMotionState();
}

/// @func btRigidBody_setMotionState(rigidBody, motionState)
///
/// @desc
/// Sets the motion state for a btRigidBody.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Pointer} motionState
///     A pointer to the btMotionState object to set.
YYEXPORT void btRigidBody_setMotionState(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	auto motionState = (btMotionState*)YYGetPtr(arg, 1);
	rigidBody->setMotionState(motionState);
}

// Note: Skipped btRigidBody::m_contactSolverType
// Note: Skipped btRigidBody::m_frictionSolverType

/// @func btRigidBody_setAngularFactor(rigidBody, angularFactor)
///
/// @desc
/// Sets the angular factor for a btRigidBody.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Real} angularFactor
///     The angular factor to set.
YYEXPORT void btRigidBody_setAngularFactor(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	double angularFactor = YYGetReal(arg, 1);
	rigidBody->setAngularFactor(angularFactor);
}

/// @func btRigidBody_getAngularFactor(rigidBody, outVector3)
///
/// @desc
/// Gets the angular factor for a btRigidBody.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the angular factor.
YYEXPORT void btRigidBody_getAngularFactor(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(rigidBody->getAngularFactor(), outVector3);
}

/// @func btRigidBody_isInWorld(rigidBody)
///
/// @desc
/// Checks if the btRigidBody is added to a physics world.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
///
/// @return {Bool} True if the rigid body is added to a physics world, false
/// otherwise.
YYEXPORT void btRigidBody_isInWorld(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = rigidBody->isInWorld();
}

// Note: Skipped btRigidBody::addConstraintRef
// Note: Skipped btRigidBody::removeConstraintRef
// Note: Skipped btRigidBody::getConstraintRef
// Note: Skipped btRigidBody::getNumConstraintRefs

/// @func btRigidBody_setFlags(rigidBody, flags)
///
/// @desc
/// Sets the flags for the btRigidBody.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Real} flags
///     The flags to be set for the rigid body.
YYEXPORT void btRigidBody_setFlags(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	int flags = YYGetInt32(arg, 1);
	rigidBody->setFlags(flags);
}

/// @func btRigidBody_getFlags(rigidBody)
///
/// @desc
/// Gets the flags associated with the btRigidBody.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
///
/// @return {Real} The flags associated with the rigid body.
YYEXPORT void btRigidBody_getFlags(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.val = rigidBody->getFlags();
}

// Note: Skipped btRigidBody::computeGyroscopicImpulseImplicit_World
// Note: Skipped btRigidBody::computeGyroscopicImpulseImplicit_Body
// Note: Skipped btRigidBody::computeGyroscopicForceExplicit

/// @func btRigidBody_getLocalInertia(rigidBody, outVector3)
///
/// @desc
/// Gets the local inertia of the rigid body.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
/// @param {Pointer} outVector3
///     Pointer to a btVector3 where the local inertia will be stored.
YYEXPORT void btRigidBody_getLocalInertia(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(rigidBody->getLocalInertia(), outVector3);
}

// Note: Skipped btRigidBody::calculateSerializeBufferSize
// Note: Skipped btRigidBody::serialize
// Note: Skipped btRigidBody::serializeSingleObject

////////////////////////////////////////////////////////////////////////////////
//
// Note: Skipped btRigidBodyFloatData
//

////////////////////////////////////////////////////////////////////////////////
//
// Note: Skipped btRigidBodyDoubleData
//
