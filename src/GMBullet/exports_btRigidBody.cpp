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
		btVector3& localInertia = *(btVector3*)YYGetPtr(arg, 3);
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
	btVector3& gravity = *(btVector3*)YYGetPtr(arg, 1);
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
///
/// @param {Pointer} rigidBody
///
/// @return {Real}
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
///
/// @param {Pointer} rigidBody
///
/// @return {Real}
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
///
/// @param {Pointer} rigidBody
///
/// @return {Real}
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
///
/// @param {Pointer} rigidBody
///
/// @return {Real}
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
///
/// @param {Pointer} rigidBody
/// @param {Real} timeStep
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
///
/// @param {Pointer} rigidBody
///
/// @return {Pointer}
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
///
/// @param {Pointer} rigidBody
/// @param {Real} mass
/// @param {Pointer} inertia
///
/// @return {Pointer}
YYEXPORT void btRigidBody_setMassProps(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	double mass = YYGetReal(arg, 1);
	btVector3& inertia = *(btVector3*)YYGetPtr(arg, 2);
	rigidBody->setMassProps(mass, inertia);
}

/// @func btRigidBody_setMassProps(rigidBody, mass, inertiaX, inertiaY, inertiaZ)
///
/// @desc
///
/// @param {Pointer} rigidBody
/// @param {Real} mass
/// @param {Real} inertiaX
/// @param {Real} inertiaY
/// @param {Real} inertiaZ
///
/// @return {Pointer}
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
///
/// @param {Pointer} rigidBody
/// @param {Pointer} outVector3
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
///
/// @param {Pointer} rigidBody
/// @param {Pointer} linearFactor
YYEXPORT void btRigidBody_setLinearFactor(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	btVector3& linearFactor = *(btVector3*)YYGetPtr(arg, 1);
	rigidBody->setLinearFactor(linearFactor);
}

/// @func btRigidBody_getInvMass(rigidBody)
///
/// @desc
///
/// @param {Pointer} rigidBody
///
/// @return {Real}
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
///
/// @param {Pointer} rigidBody
///
/// @return {Real}
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
///
/// @param {Pointer} rigidBody
/// @param {Real} step
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
///
/// @param {Pointer} rigidBody
/// @param {Pointer} transform
YYEXPORT void btRigidBody_setCenterOfMassTransform(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	btTransform& transform = *(btTransform*)YYGetPtr(arg, 0);
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
	btVector3& force = *(btVector3*)YYGetPtr(arg, 1);
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
///
/// @param {Pointer} rigidBody
/// @param {Pointer} outVector3
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
///
/// @param {Pointer} rigidBody
/// @param {Pointer} outVector3
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
///
/// @param {Pointer} rigidBody
/// @param {Pointer} outVector3
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
///
/// @param {Pointer} rigidBody
/// @param {Pointer} diagInvInertia
YYEXPORT void btRigidBody_setInvInertiaDiagLocal(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	btVector3& diagInvInertia = *(btVector3*)YYGetPtr(arg, 1);
	rigidBody->setInvInertiaDiagLocal(diagInvInertia);
}

/// @func btRigidBody_setSleepingThresholds(rigidBody, linear, angular)
///
/// @desc
///
/// @param {Pointer} rigidBody
/// @param {Real} linear
/// @param {Real} angular
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
///
/// @param {Pointer} rigidBody
/// @param {Pointer} torque
YYEXPORT void btRigidBody_applyTorque(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	btVector3& torque = *(btVector3*)YYGetPtr(arg, 1);
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
	btVector3& force = *(btVector3*)YYGetPtr(arg, 1);
	btVector3& relPos = *(btVector3*)YYGetPtr(arg, 2);
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
	btVector3& impulse = *(btVector3*)YYGetPtr(arg, 1);
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
///
/// @param {Pointer} rigidBody
/// @param {Pointer} torque
YYEXPORT void btRigidBody_applyTorqueImpulse(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	btVector3& torque = *(btVector3*)YYGetPtr(arg, 1);
	rigidBody->applyTorqueImpulse(torque);
}

/// @func btRigidBody_applyTorqueImpulseXYZ(rigidBody, torqueX, torqueY, torqueZ)
///
/// @desc
///
/// @param {Pointer} rigidBody
/// @param {Real} torqueX
/// @param {Real} torqueY
/// @param {Real} torqueZ
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
	btVector3& impulse = *(btVector3*)YYGetPtr(arg, 1);
	btVector3& relPos = *(btVector3*)YYGetPtr(arg, 2);
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
///
/// @param {Pointer} rigidBody
/// @param {Pointer} impulse
/// @param {Pointer} relPos
YYEXPORT void btRigidBody_applyPushImpulse(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	btVector3& impulse = *(btVector3*)YYGetPtr(arg, 1);
	btVector3& relPos = *(btVector3*)YYGetPtr(arg, 2);
	rigidBody->applyPushImpulse(impulse, relPos);
}

/// @func btRigidBody_applyPushImpulseXYZ(rigidBody, impulseX, impulseY, impulseZ, relPosX, relPosY, relPosZ)
///
/// @desc
///
/// @param {Pointer} rigidBody
/// @param {Real} impulseX
/// @param {Real} impulseY
/// @param {Real} impulseZ
/// @param {Real} relPosX
/// @param {Real} relPosY
/// @param {Real} relPosZ
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
///
/// @param {Pointer} rigidBody
/// @param {Pointer} outVector3
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
///
/// @param {Pointer} rigidBody
/// @param {Pointer} outVector3
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
///
/// @param {Pointer} rigidBody
/// @param {Pointer} velocity
YYEXPORT void btRigidBody_setPushVelocity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	btVector3& velocity = *(btVector3*)YYGetPtr(arg, 1);
	rigidBody->setPushVelocity(velocity);
}

/// @func btRigidBody_setPushVelocityXYZ(rigidBody, velocityX, velocityY, velocityZ)
///
/// @desc
///
/// @param {Pointer} rigidBody
/// @param {Real} velocityX
/// @param {Real} velocityY
/// @param {Real} velocityZ
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
///
/// @param {Pointer} rigidBody
/// @param {Pointer} velocity
YYEXPORT void btRigidBody_setTurnVelocity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	btVector3& velocity = *(btVector3*)YYGetPtr(arg, 1);
	rigidBody->setTurnVelocity(velocity);
}

/// @func btRigidBody_setTurnVelocityXYZ(rigidBody, velocityX, velocityY, velocityZ)
///
/// @desc
///
/// @param {Pointer} rigidBody
/// @param {Real} velocityX
/// @param {Real} velocityY
/// @param {Real} velocityZ
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
///
/// @param {Pointer} rigidBody
/// @param {Pointer} impulse
YYEXPORT void btRigidBody_applyCentralPushImpulse(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	btVector3& impulse = *(btVector3*)YYGetPtr(arg, 1);
	rigidBody->applyCentralPushImpulse(impulse);
}

/// @func btRigidBody_applyCentralPushImpulseXYZ(rigidBody, impulseX, impulseY, impulseZ)
///
/// @desc
///
/// @param {Pointer} rigidBody
/// @param {Real} impulseX
/// @param {Real} impulseY
/// @param {Real} impulseZ
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
///
/// @param {Pointer} rigidBody
/// @param {Pointer} torque
YYEXPORT void btRigidBody_applyTorqueTurnImpulse(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	btVector3& torque = *(btVector3*)YYGetPtr(arg, 1);
	rigidBody->applyTorqueTurnImpulse(torque);
}

/// @func btRigidBody_applyTorqueTurnImpulseXYZ(rigidBody, torqueX, torqueY, torqueZ)
///
/// @desc
///
/// @param {Pointer} rigidBody
/// @param {Real} torqueX
/// @param {Real} torqueY
/// @param {Real} torqueZ
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
///
/// @param {Pointer} rigidBody
YYEXPORT void btRigidBody_clearForces(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	rigidBody->clearForces();
}

/// @func btRigidBody_updateInertiaTensor(rigidBody)
///
/// @desc
///
/// @param {Pointer} rigidBody
YYEXPORT void btRigidBody_updateInertiaTensor(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	rigidBody->updateInertiaTensor();
}

/// @func btRigidBody_getCenterOfMassPosition(rigidBody, outVector3)
///
/// @desc
///
/// @param {Pointer} rigidBody
/// @param {Pointer} outVector3
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
///
/// @param {Pointer} rigidBody
/// @param {Pointer} outQuaternion
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
///
/// @param {Pointer} rigidBody
/// @param {Pointer} outTransform
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
///
/// @param {Pointer} rigidBody
/// @param {Pointer} outVector3
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
///
/// @param {Pointer} rigidBody
/// @param {Pointer} outVector3
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
///
/// @param {Pointer} rigidBody
/// @param {Pointer} linearVelocity
YYEXPORT void btRigidBody_setLinearVelocity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	btVector3& linearVelocity = *(btVector3*)YYGetPtr(arg, 1);
	rigidBody->setLinearVelocity(linearVelocity);
}

/// @func btRigidBody_setLinearVelocityXYZ(rigidBody, linearVelocityX, linearVelocityY, linearVelocityZ)
///
/// @desc
///
/// @param {Pointer} rigidBody
/// @param {Real} linearVelocityX
/// @param {Real} linearVelocityY
/// @param {Real} linearVelocityZ
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
///
/// @param {Pointer} rigidBody
/// @param {Pointer} linearVelocity
YYEXPORT void btRigidBody_setAngularVelocity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	btVector3& angularVelocity = *(btVector3*)YYGetPtr(arg, 1);
	rigidBody->setAngularVelocity(angularVelocity);
}

/// @func btRigidBody_setAngularVelocityXYZ(rigidBody, angularVelocityX, angularVelocityY, angularVelocityZ)
///
/// @desc
///
/// @param {Pointer} rigidBody
/// @param {Real} angularVelocityX
/// @param {Real} angularVelocityY
/// @param {Real} angularVelocityZ
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
///
/// @param {Pointer} rigidBody
/// @param {Pointer} relPos
/// @param {Pointer} outVector3
YYEXPORT void btRigidBody_getVelocityInLocalPoint(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	btVector3& relPos = *(btVector3*)YYGetPtr(arg, 1);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 2);
	CopyVector3(rigidBody->getVelocityInLocalPoint(relPos), outVector3);
}

/// @func btRigidBody_getVelocityInLocalPointXYZ(rigidBody, relPosX, relPosY, relPosZ, outVector3)
///
/// @desc
///
/// @param {Pointer} rigidBody
/// @param {Real} relPosX
/// @param {Real} relPosY
/// @param {Real} relPosZ
/// @param {Pointer} outVector3
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
///
/// @param {Pointer} rigidBody
/// @param {Pointer} relPos
/// @param {Pointer} outVector3
YYEXPORT void btRigidBody_getPushVelocityInLocalPoint(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	btVector3& relPos = *(btVector3*)YYGetPtr(arg, 1);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 2);
	CopyVector3(rigidBody->getPushVelocityInLocalPoint(relPos), outVector3);
}

/// @func btRigidBody_getPushVelocityInLocalPointXYZ(rigidBody, relPosX, relPosY, relPosZ, outVector3)
///
/// @desc
///
/// @param {Pointer} rigidBody
/// @param {Real} relPosX
/// @param {Real} relPosY
/// @param {Real} relPosZ
/// @param {Pointer} outVector3
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
///
/// @param {Pointer} rigidBody
/// @param {Pointer} vector
YYEXPORT void btRigidBody_translate(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	btVector3& vector = *(btVector3*)YYGetPtr(arg, 1);
	rigidBody->translate(vector);
}

/// @func btRigidBody_translateXYZ(rigidBody, vectorX, vectorY, vectorZ)
///
/// @desc
///
/// @param {Pointer} rigidBody
/// @param {Real} vectorX
/// @param {Real} vectorY
/// @param {Real} vectorZ
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
///
/// @param {Pointer} rigidBody
/// @param {Pointer} aabbMin
/// @param {Pointer} aabbMax
YYEXPORT void btRigidBody_getAabb(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	btVector3& aabbMin = *(btVector3*)YYGetPtr(arg, 1);
	btVector3& aabbMax = *(btVector3*)YYGetPtr(arg, 2);
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
///
/// @param {Pointer} rigidBody
/// @param {Pointer} motionState
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
///
/// @param {Pointer} rigidBody
/// @param {Real} angularFactor
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
///
/// @param {Pointer} rigidBody
/// @param {Pointer} outVector3
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
///
/// @param {Pointer} rigidBody
///
/// @return {Bool}
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
///
/// @param {Pointer} rigidBody
/// @param {Real} flags
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
///
/// @param {Pointer} rigidBody
///
/// @return {Real}
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
///
/// @param {Pointer} rigidBody
/// @param {Pointer} outVector3
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
