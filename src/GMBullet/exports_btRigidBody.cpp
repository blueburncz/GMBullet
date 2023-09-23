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

/// @func btRigidBody_isActive(rigidBody)
///
/// @desc
/// Checks whether a btRigidBody is active and responding to physics simulation.
///
/// @param {Pointer} rigidBody
///     A pointer to the btRigidBody object.
///
/// @return {Bool} True if the rigid body is active and responding to physics
/// simulation, false otherwise.
YYEXPORT void btRigidBody_isActive(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto rigidBody = (btRigidBody*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = rigidBody->isActive();
}

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
