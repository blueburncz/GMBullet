#include <GMBullet.hpp>

/// @func btCollisionObject_create()
///
/// @desc
///
/// @return {Pointer}
YYEXPORT void btCollisionObject_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	result.kind = VALUE_PTR;
	result.ptr = new btCollisionObject();
}

/// @func btCollisionObject_destroy(collisionObject)
///
/// @desc
///
/// @param {Pointer} collisionObject
YYEXPORT void btCollisionObject_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btCollisionObject*)YYGetPtr(arg, 0);
}

/// @func btCollisionObject_getAnisotropicFriction(collisionObject, outVector3)
///
/// @desc
///
/// @param {Pointer} collisionObject
/// @param {Pointer} outVector3
YYEXPORT void btCollisionObject_getAnisotropicFriction(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	const btVector3& anisotropicFriction = collisionObject->getAnisotropicFriction();
	CopyVector3(anisotropicFriction, outVector3);
}

/// @func btCollisionObject_setAnisotropicFriction(collisionObject, anisotropicFriction[, frictionMode])
///
/// @desc
///
/// @param {Pointer} collisionObject
/// @param {Pointer} anisotropicFriction
/// @param {Real} [frictionMode]
YYEXPORT void btCollisionObject_setAnisotropicFriction(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	btVector3& anisotropicFriction = *(btVector3*)YYGetPtr(arg, 1);
	int frictionMode = (argc > 2) ? YYGetInt32(arg, 2) : 1;
	collisionObject->setAnisotropicFriction(anisotropicFriction, frictionMode);
}

/// @func btCollisionObject_hasAnisotropicFriction(collisionObject[, frictionMode])
///
/// @desc
///
/// @param {Pointer} collisionObject
/// @param {Real} [frictionMode]
///
/// @return {Bool}
YYEXPORT void btCollisionObject_hasAnisotropicFriction(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	int frictionMode = (argc > 1) ? YYGetInt32(arg, 1) : 1;
	result.kind = VALUE_BOOL;
	result.val = collisionObject->hasAnisotropicFriction(frictionMode);
}

/// @func btCollisionObject_setContactProcessingThreshold(collisionObject, contactProcessingThreshold)
///
/// @desc
///
/// @param {Pointer} collisionObject
/// @param {Real} contactProcessingThreshold
YYEXPORT void btCollisionObject_setContactProcessingThreshold(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	double contactProcessingThreshold = YYGetReal(arg, 1);
	collisionObject->setContactProcessingThreshold(contactProcessingThreshold);
}

/// @func btCollisionObject_getContactProcessingThreshold(collisionObject)
///
/// @desc
///
/// @param {Pointer} collisionObject
///
/// @return {Real}
YYEXPORT void btCollisionObject_getContactProcessingThreshold(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = collisionObject->getContactProcessingThreshold();
}

/// @func btCollisionObject_isStaticObject(collisionObject)
///
/// @desc
///
/// @param {Pointer} collisionObject
///
/// @return {Bool}
YYEXPORT void btCollisionObject_isStaticObject(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = collisionObject->isStaticObject();
}

/// @func btCollisionObject_isKinematicObject(collisionObject)
///
/// @desc
///
/// @param {Pointer} collisionObject
///
/// @return {Bool}
YYEXPORT void btCollisionObject_isKinematicObject(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = collisionObject->isKinematicObject();
}

/// @func btCollisionObject_isStaticOrKinematicObject(collisionObject)
///
/// @desc
///
/// @param {Pointer} collisionObject
///
/// @return {Bool}
YYEXPORT void btCollisionObject_isStaticOrKinematicObject(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = collisionObject->isStaticOrKinematicObject();
}

/// @func btCollisionObject_hasContactResponse(collisionObject)
///
/// @desc
///
/// @param {Pointer} collisionObject
///
/// @return {Bool}
YYEXPORT void btCollisionObject_hasContactResponse(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = collisionObject->hasContactResponse();
}

/// @func btCollisionObject_setCollisionShape(collisionObject, collisionShape)
///
/// @desc
///
/// @param {Pointer} collisionObject
/// @param {Pointer} collisionShape
YYEXPORT void btCollisionObject_setCollisionShape(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	auto collisionShape = (btCollisionShape*)YYGetPtr(arg, 1);
	collisionObject->setCollisionShape(collisionShape);
}

/// @func btCollisionObject_getCollisionShape(collisionObject)
///
/// @desc
///
/// @param {Pointer} collisionObject
///
/// @return {Pointer}
YYEXPORT void btCollisionObject_getCollisionShape(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = collisionObject->getCollisionShape();
}

/// @func btCollisionObject_setIgnoreCollisionCheck(collisionObject, otherObject, ignoreCollisionCheck)
///
/// @desc
///
/// @param {Pointer} collisionObject
/// @param {Pointer} otherObject
/// @param {Bool} ignoreCollisionCheck
YYEXPORT void btCollisionObject_setIgnoreCollisionCheck(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	auto otherObject = (btCollisionObject*)YYGetPtr(arg, 1);
	bool ignoreCollisionCheck = YYGetBool(arg, 2);
	collisionObject->setIgnoreCollisionCheck(otherObject, ignoreCollisionCheck);
}

/// @func btCollisionObject_getNumObjectsWithoutCollision(collisionObject)
///
/// @desc
///
/// @param {Pointer} collisionObject
///
/// @return {Real}
YYEXPORT void btCollisionObject_getNumObjectsWithoutCollision(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = collisionObject->getNumObjectsWithoutCollision();
}

/// @func btCollisionObject_getObjectWithoutCollision(collisionObject, index)
///
/// @desc
///
/// @param {Pointer} collisionObject
/// @param {Real} index
///
/// @return {Pointer}
YYEXPORT void btCollisionObject_getObjectWithoutCollision(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	int index = YYGetInt32(arg, 1);
	result.kind = VALUE_PTR;
	result.ptr = const_cast<btCollisionObject*>(collisionObject->getObjectWithoutCollision(index));
}

/// @func btCollisionObject_checkCollideWithOverride(collisionObject, otherObject)
///
/// @desc
///
/// @param {Pointer} collisionObject
/// @param {Pointer} otherObject
///
/// @return {Bool}
YYEXPORT void btCollisionObject_checkCollideWithOverride(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	auto otherObject = (btCollisionObject*)YYGetPtr(arg, 1);
	result.kind = VALUE_BOOL;
	result.val = collisionObject->checkCollideWithOverride(otherObject);
}

// Note: Skip btCollisionObject::internalGetExtensionPointer
// Note: Skip btCollisionObject::internalSetExtensionPointer

/// @func btCollisionObject_getActivationState(collisionObject)
///
/// @desc
///
/// @param {Pointer} collisionObject
///
/// @return {Real}
YYEXPORT void btCollisionObject_getActivationState(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.val = collisionObject->getActivationState();
}

/// @func btCollisionObject_setActivationState(collisionObject, newState)
///
/// @desc
///
/// @param {Pointer} collisionObject
/// @param {Real} newState
YYEXPORT void btCollisionObject_setActivationState(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	int newState = YYGetInt32(arg, 1);
	collisionObject->setActivationState(newState);
}

/// @func btCollisionObject_setDeactivationTime(collisionObject, time)
///
/// @desc
///
/// @param {Pointer} collisionObject
/// @param {Real} time
YYEXPORT void btCollisionObject_setDeactivationTime(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	double time = YYGetReal(arg, 1);
	collisionObject->setDeactivationTime(time);
}

/// @func btCollisionObject_getDeactivationTime(collisionObject)
///
/// @desc
///
/// @param {Pointer} collisionObject
///
/// @return {Real}
YYEXPORT void btCollisionObject_getDeactivationTime(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = collisionObject->getDeactivationTime();
}

/// @func btCollisionObject_forceActivationState(collisionObject, newState)
///
/// @desc
///
/// @param {Pointer} collisionObject
/// @param {Real} newState
YYEXPORT void btCollisionObject_forceActivationState(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	int newState = YYGetInt32(arg, 1);
	collisionObject->forceActivationState(newState);
}

/// @func btCollisionObject_activate(collisionObject[, forceActivation])
///
/// @desc
///
/// @param {Pointer} collisionObject
/// @param {Bool} [forceActivation]
YYEXPORT void btCollisionObject_activate(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	bool forceActivation = (argc > 1) ? YYGetBool(arg, 1) : false;
	collisionObject->activate(forceActivation);
}

/// @func btCollisionObject_isActive(collisionObject)
///
/// @desc
///
/// @param {Pointer} collisionObject
///
/// @param {Bool}
YYEXPORT void btCollisionObject_isActive(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = collisionObject->isActive();
}

/// @func btCollisionObject_setRestitution(collisionObject, restitution)
///
/// @desc
///
/// @param {Pointer} collisionObject
/// @param {Real} restitution
YYEXPORT void btCollisionObject_setRestitution(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	double restitution = YYGetReal(arg, 1);
	collisionObject->setRestitution(restitution);
}

/// @func btCollisionObject_getRestitution(collisionObject)
///
/// @desc
///
/// @param {Pointer} collisionObject
///
/// @param {Real}
YYEXPORT void btCollisionObject_getRestitution(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = collisionObject->getRestitution();
}

/// @func btCollisionObject_setFriction(collisionObject, friction)
///
/// @desc
///
/// @param {Pointer} collisionObject
/// @param {Real} friction
YYEXPORT void btCollisionObject_setFriction(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	double friction = YYGetReal(arg, 1);
	collisionObject->setFriction(friction);
}

/// @func btCollisionObject_getFriction(collisionObject)
///
/// @desc
///
/// @param {Pointer} collisionObject
///
/// @param {Real}
YYEXPORT void btCollisionObject_getFriction(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = collisionObject->getFriction();
}

/// @func btCollisionObject_setRollingFriction(collisionObject, friction)
///
/// @desc
///
/// @param {Pointer} collisionObject
/// @param {Real} friction
YYEXPORT void btCollisionObject_setRollingFriction(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	double friction = YYGetReal(arg, 1);
	collisionObject->setRollingFriction(friction);
}

/// @func btCollisionObject_getRollingFriction(collisionObject)
///
/// @desc
///
/// @param {Pointer} collisionObject
///
/// @param {Real}
YYEXPORT void btCollisionObject_getRollingFriction(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = collisionObject->getRollingFriction();
}

/// @func btCollisionObject_setSpinningFriction(collisionObject, friction)
///
/// @desc
///
/// @param {Pointer} collisionObject
/// @param {Real} friction
YYEXPORT void btCollisionObject_setSpinningFriction(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	double friction = YYGetReal(arg, 1);
	collisionObject->setSpinningFriction(friction);
}

/// @func btCollisionObject_getSpinningFriction(collisionObject)
///
/// @desc
///
/// @param {Pointer} collisionObject
///
/// @param {Real}
YYEXPORT void btCollisionObject_getSpinningFriction(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = collisionObject->getSpinningFriction();
}

/// @func btCollisionObject_setContactStiffnessAndDamping(collisionObject, stiffness, damping)
///
/// @desc
///
/// @param {Pointer} collisionObject
/// @param {Real} stiffness
/// @param {Real} damping
YYEXPORT void btCollisionObject_setContactStiffnessAndDamping(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	double stiffness = YYGetReal(arg, 1);
	double damping = YYGetReal(arg, 2);
	collisionObject->setContactStiffnessAndDamping(stiffness, damping);
}

/// @func btCollisionObject_getContactStiffness(collisionObject)
///
/// @desc
///
/// @param {Pointer} collisionObject
///
/// @param {Real}
YYEXPORT void btCollisionObject_getContactStiffness(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = collisionObject->getContactStiffness();
}

/// @func btCollisionObject_getContactDamping(collisionObject)
///
/// @desc
///
/// @param {Pointer} collisionObject
///
/// @param {Real}
YYEXPORT void btCollisionObject_getContactDamping(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = collisionObject->getContactDamping();
}

/// @func btCollisionObject_getWorldTransform(collisionObject)
///
/// @desc
///
/// @param {Pointer} collisionObject
///
/// @return {Pointer}
YYEXPORT void btCollisionObject_getWorldTransform(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = &collisionObject->getWorldTransform();
}

/// @func btCollisionObject_getWorldTransformMatrix(collisionObject, outMatrix)
///
/// @desc
///
/// @param {Pointer} collisionObject
/// @param {Array<Real>} outMatrix
YYEXPORT void btCollisionObject_getWorldTransformMatrix(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	RValue* outMatrix = &arg[1];
	static btScalar dest[16];
	collisionObject->getWorldTransform().getOpenGLMatrix(dest);
	RValue value;
	value.kind = VALUE_REAL;
	for (int i = 0; i < 16; ++i)
	{
		value.val = dest[i];
		SET_RValue(outMatrix, &value, NULL, i);
	}
	FREE_RValue(&value);
}

/// @func btCollisionObject_setWorldTransform(collisionObject, transform)
///
/// @desc
///
/// @param {Pointer} collisionObject
/// @param {Pointer} transform
YYEXPORT void btCollisionObject_setWorldTransform(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	btTransform& transform = *(btTransform*)YYGetPtr(arg, 1);
	collisionObject->setWorldTransform(transform);
}

// TODO: btCollisionObject::getBroadphaseHandle
// TODO: btCollisionObject::setBroadphaseHandle

/// @func btCollisionObject_getInterpolationWorldTransform(collisionObject)
///
/// @desc
///
/// @param {Pointer} collisionObject
///
/// @return {Pointer}
YYEXPORT void btCollisionObject_getInterpolationWorldTransform(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = &collisionObject->getInterpolationWorldTransform();
}

/// @func btCollisionObject_setInterpolationWorldTransform(collisionObject, transform)
///
/// @desc
///
/// @param {Pointer} collisionObject
/// @param {Pointer} transform
YYEXPORT void btCollisionObject_setInterpolationWorldTransform(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	btTransform& transform = *(btTransform*)YYGetPtr(arg, 1);
	collisionObject->setInterpolationWorldTransform(transform);
}

/// @func btCollisionObject_setInterpolationLinearVelocity(collisionObject, linearVelocity)
///
/// @desc
///
/// @param {Pointer} collisionObject
/// @param {Pointer} linearVelocity
YYEXPORT void btCollisionObject_setInterpolationLinearVelocity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	btVector3& linearVelocity = *(btVector3*)YYGetPtr(arg, 1);
	collisionObject->setInterpolationLinearVelocity(linearVelocity);
}

/// @func btCollisionObject_setInterpolationAngularVelocity(collisionObject, angularVelocity)
///
/// @desc
///
/// @param {Pointer} collisionObject
/// @param {Pointer} angularVelocity
YYEXPORT void btCollisionObject_setInterpolationAngularVelocity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	btVector3& angularVelocity = *(btVector3*)YYGetPtr(arg, 1);
	collisionObject->setInterpolationAngularVelocity(angularVelocity);
}

/// @func btCollisionObject_getInterpolationLinearVelocity(collisionObject, outVec3)
///
/// @desc
///
/// @param {Pointer} collisionObject
/// @param {Pointer} outVec3
YYEXPORT void btCollisionObject_getInterpolationLinearVelocity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(collisionObject->getInterpolationLinearVelocity(), outVector3);
}

/// @func btCollisionObject_getInterpolationAngularVelocity(collisionObject, outVec3)
///
/// @desc
///
/// @param {Pointer} collisionObject
/// @param {Pointer} outVec3
YYEXPORT void btCollisionObject_getInterpolationAngularVelocity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(collisionObject->getInterpolationAngularVelocity(), outVector3);
}

// Note: Skip btCollisionObject::getIslandTag
// Note: Skip btCollisionObject::setIslandTag
// Note: Skip btCollisionObject::getCompanionId
// Note: Skip btCollisionObject::setCompanionId
// Note: Skip btCollisionObject::getWorldArrayIndex
// Note: Skip btCollisionObject::setWorldArrayIndex

/// @func btCollisionObject_getHitFraction(collisionObject)
///
/// @desc
///
/// @param {Pointer} collisionObject
///
/// @return {Real}
YYEXPORT void btCollisionObject_getHitFraction(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = collisionObject->getHitFraction();
}

/// @func btCollisionObject_setHitFraction(collisionObject, hitFraction)
///
/// @desc
///
/// @param {Pointer} collisionObject
/// @param {Real} hitFraction
YYEXPORT void btCollisionObject_setHitFraction(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	double hitFraction = YYGetReal(arg, 1);
	collisionObject->setHitFraction(hitFraction);
}

/// @func btCollisionObject_getCollisionFlags(collisionObject)
///
/// @desc
///
/// @param {Pointer} collisionObject
///
/// @return {Real}
YYEXPORT void btCollisionObject_getCollisionFlags(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.val = collisionObject->getCollisionFlags();
}

/// @func btCollisionObject_setCollisionFlags(collisionObject, flags)
///
/// @desc
///
/// @param {Pointer} collisionObject
/// @param {Real} flags
YYEXPORT void btCollisionObject_setCollisionFlags(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	int flags = YYGetInt32(arg, 1);
	collisionObject->setCollisionFlags(flags);
}

/// @func btCollisionObject_getCcdSweptSphereRadius(collisionObject)
///
/// @desc
///
/// @param {Pointer} collisionObject
///
/// @return {Real}
YYEXPORT void btCollisionObject_getCcdSweptSphereRadius(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.val = collisionObject->getCcdSweptSphereRadius();
}

/// @func btCollisionObject_setCcdSweptSphereRadius(collisionObject, radius)
///
/// @desc
///
/// @param {Pointer} collisionObject
/// @param {Real} radius
YYEXPORT void btCollisionObject_setCcdSweptSphereRadius(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	double radius = YYGetReal(arg, 1);
	collisionObject->setCcdSweptSphereRadius(radius);
}

/// @func btCollisionObject_getCcdMotionThreshold(collisionObject)
///
/// @desc
///
/// @param {Pointer} collisionObject
///
/// @return {Real}
YYEXPORT void btCollisionObject_getCcdMotionThreshold(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.val = collisionObject->getCcdMotionThreshold();
}

/// @func btCollisionObject_getCcdSquareMotionThreshold(collisionObject)
///
/// @desc
///
/// @param {Pointer} collisionObject
///
/// @return {Real}
YYEXPORT void btCollisionObject_getCcdSquareMotionThreshold(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.val = collisionObject->getCcdSquareMotionThreshold();
}

/// @func btCollisionObject_setCcdMotionThreshold(collisionObject, ccdMotionThreshold)
///
/// @desc
///
/// @param {Pointer} collisionObject
/// @param {Real} ccdMotionThreshold
YYEXPORT void btCollisionObject_setCcdMotionThreshold(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	double ccdMotionThreshold = YYGetReal(arg, 1);
	collisionObject->setCcdMotionThreshold(ccdMotionThreshold);
}

// Note: Skip btCollisionObject::getUserPointer
// Note: Skip btCollisionObject::getUserIndex
// Note: Skip btCollisionObject::getUserIndex2
// Note: Skip btCollisionObject::getUserIndex3
// Note: Skip btCollisionObject::setUserPointer
// Note: Skip btCollisionObject::setUserIndex
// Note: Skip btCollisionObject::setUserIndex2
// Note: Skip btCollisionObject::setUserIndex3
// Note: Skip btCollisionObject::getUpdateRevisionInternal
// Note: Skip btCollisionObject::setCustomDebugColor
// Note: Skip btCollisionObject::removeCustomDebugColor
// Note: Skip btCollisionObject::getCustomDebugColor

/// @func btCollisionObject_setCcdMotionThreshold(collisionObject, otherObject)
///
/// @desc
///
/// @param {Pointer} collisionObject
/// @param {Pointer} otherObject
///
/// @return {Bool}
YYEXPORT void btCollisionObject_checkCollideWith(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionObject = (btCollisionObject*)YYGetPtr(arg, 0);
	auto otherObject = (btCollisionObject*)YYGetPtr(arg, 1);
	result.kind = VALUE_BOOL;
	result.val = collisionObject->checkCollideWith(otherObject);
}

// Note: Skip btCollisionObject::calculateSerializeBufferSize
// Note: Skip btCollisionObject::serialize
// Note: Skip btCollisionObject::serializeSingleObject
