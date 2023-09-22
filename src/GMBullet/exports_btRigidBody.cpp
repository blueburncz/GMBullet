#include <GMBullet.hpp>

/// @func btRigidBody_create(mass, motionState, collisionShape[, localInertia])
///
/// @desc
///
/// @param {Real} mass
/// @param {Pointer} motionState
/// @param {Pointer} collisionShape
/// @param {Pointer} [localInertia]
///
/// @return {Pointer}
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
///
/// @param {Pointer} rigidBody
YYEXPORT void btRigidBody_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btRigidBody*)YYGetPtr(arg, 0);
}

/// @func btRigidBody_applyImpulse(rigidBody, impulse, relPos)
///
/// @desc
///
/// @param {Pointer} rigidBody
/// @param {Pointer} impulse
/// @param {Pointer} relPos
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
///
/// @param {Pointer} rigidBody
/// @param {Real} impulseX
/// @param {Real} impulseY
/// @param {Real} impulseZ
/// @param {Real} relPosX
/// @param {Real} relPosY
/// @param {Real} relPosZ
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
///
/// @param {Pointer} rigidBody
/// @param {Pointer} impulse
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
///
/// @param {Pointer} rigidBody
/// @param {Real} impulseX
/// @param {Real} impulseY
/// @param {Real} impulseZ
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
///
/// @param {Pointer} rigidBody
/// @param {Pointer} force
/// @param {Pointer} relPos
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
///
/// @param {Pointer} rigidBody
/// @param {Real} forceX
/// @param {Real} forceY
/// @param {Real} forceZ
/// @param {Real} relPosX
/// @param {Real} relPosY
/// @param {Real} relPosZ
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
///
/// @param {Pointer} rigidBody
/// @param {Pointer} force
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
///
/// @param {Pointer} rigidBody
/// @param {Real} forceX
/// @param {Real} forceY
/// @param {Real} forceZ
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
///
/// @param {Pointer} rigidBody
///
/// @return {Pointer}
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
///
/// @param {Pointer} rigidBody
///
/// @return {Bool}
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
///
/// @param {Pointer} collisionObject
///
/// @return {Pointer}
YYEXPORT void btRigidBody_upcast(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = btRigidBody::upcast(collisionObject);
}
