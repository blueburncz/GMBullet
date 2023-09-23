#include <GMBullet.hpp>

/// @func btCollisionObject_create()
///
/// @desc
/// Creates a new instance of a Bullet Physics collision object.
///
/// @return {Pointer} Returns a pointer to the newly created instance of
/// btCollisionObject.
YYEXPORT void btCollisionObject_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	result.kind = VALUE_PTR;
	result.ptr = new btCollisionObject();
}

/// @func btCollisionObject_destroy(collisionObject)
///
/// @desc
/// Destroys a Bullet Physics collision object and releases associated memory.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance to be destroyed.
YYEXPORT void btCollisionObject_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btCollisionObject*)YYGetPtr(arg, 0);
}

/// @func btCollisionObject_getAnisotropicFriction(collisionObject, outVector3)
///
/// @desc
/// Gets the anisotropic friction of a Bullet Physics collision object.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 instance to store the anisotropic friction
///     values.
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
/// Sets the anisotropic friction for a Bullet Physics collision object.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
/// @param {Pointer} anisotropicFriction
///     A pointer to a btVector3 instance representing the anisotropic friction
///     values.
/// @param {Real} [frictionMode]
///     An integer representing the friction mode. Default is 1.
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
/// Checks if a Bullet Physics collision object has anisotropic friction set.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
/// @param {Real} [frictionMode]
///     An integer representing the friction mode. Default is 1.
///
/// @return {Bool} A boolean value indicating whether the collision object has
/// anisotropic friction.
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
/// Sets the contact processing threshold for a Bullet Physics collision object.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
/// @param {Real} contactProcessingThreshold
///     The contact processing threshold to be set for the collision object.
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
/// Gets the contact processing threshold for a Bullet Physics collision object.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
///
/// @return {Real} The contact processing threshold of the collision object.
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
/// Checks if a Bullet Physics collision object is a static object.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
///
/// @return {Bool} A boolean value indicating whether the collision object is
/// static.
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
/// Checks if a Bullet Physics collision object is a kinematic object.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
///
/// @return {Bool} A boolean value indicating whether the collision object is
/// kinematic.
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
/// Checks if a Bullet Physics collision object is either static or kinematic.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
///
/// @return {Bool} A boolean value indicating whether the collision object is
/// static or kinematic.
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
/// Checks if a Bullet Physics collision object has a contact response.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
///
/// @return {Bool} A boolean value indicating whether the collision object has a
/// contact response.
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
/// Sets the collision shape for a Bullet Physics collision object.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
/// @param {Pointer} collisionShape
///     A pointer to a btCollisionShape instance representing the collision
///     shape.
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
/// Gets the collision shape for a Bullet Physics collision object.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
///
/// @return {Pointer} A pointer to the collision shape associated with the
/// collision object.
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
/// Sets whether collision checking should be ignored between two collision
/// objects.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
/// @param {Pointer} otherObject
///     A pointer to another btCollisionObject instance to be checked for
///     collision.
/// @param {Bool} ignoreCollisionCheck
///     A boolean value indicating whether to ignore collision checking between
///     the objects.
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
/// Gets the number of objects without collision associated with a collision
/// object.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
///
/// @return {Real} The number of objects without collision associated with the
/// collision object.
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
/// Gets an object without collision associated with a collision object by index.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
/// @param {Real} index
///     The index of the object without collision to retrieve.
///
/// @return {Pointer} A pointer to the object without collision at the specified
/// index.
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
/// Checks if a Bullet Physics collision object should collide with another
/// object.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
/// @param {Pointer} otherObject
///     A pointer to another btCollisionObject instance.
///
/// @return {Bool} A boolean value indicating whether collisionObject should
/// collide with otherObject.
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
/// Gets the activation state of a Bullet Physics collision object.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
///
/// @return {Real} The activation state of the collision object.
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
/// Sets the activation state for a Bullet Physics collision object.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
/// @param {Real} newState
///     The new activation state to be set for the collision object.
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
/// Sets the deactivation time for a Bullet Physics collision object.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
/// @param {Real} time
///     The deactivation time to be set for the collision object.
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
/// Gets the deactivation time of a Bullet Physics collision object.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
///
/// @return {Real} The deactivation time of the collision object.
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
/// Forces a specific activation state for a Bullet Physics collision object.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
/// @param {Real} newState
///     The new activation state to be forced for the collision object.
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
/// Activates a Bullet Physics collision object, optionally with forced
/// activation.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
/// @param {Bool} [forceActivation]
///     A boolean indicating whether to force activation. Default is false.
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
/// Checks if a Bullet Physics collision object is currently active.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
///
/// @return {Bool} A boolean value indicating whether the collision object is
/// currently active.
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
/// Sets the restitution for a Bullet Physics collision object.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
/// @param {Real} restitution
///     The restitution to be set for the collision object.
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
/// Gets the restitution of a Bullet Physics collision object.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
///
/// @return {Real} The restitution of the collision object.
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
/// Sets the friction for a Bullet Physics collision object.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
/// @param {Real} friction
///     The friction to be set for the collision object.
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
/// Gets the friction of a Bullet Physics collision object.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
///
/// @return {Real} The friction of the collision object.
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
/// Sets the rolling friction for a Bullet Physics collision object.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
/// @param {Real} friction
///     The rolling friction to be set for the collision object.
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
/// Gets the rolling friction of a Bullet Physics collision object.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
///
/// @return {Real} The rolling friction of the collision object.
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
/// Sets the spinning friction for a Bullet Physics collision object.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
/// @param {Real} friction
///     The spinning friction to be set for the collision object.
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
/// Gets the spinning friction of a Bullet Physics collision object.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
///
/// @return {Real} The spinning friction of the collision object.
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
/// Sets the contact stiffness and damping for a Bullet Physics collision object.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
/// @param {Real} stiffness
///     The contact stiffness to be set for the collision object.
/// @param {Real} damping
///     The contact damping to be set for the collision object.
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
/// Gets the contact stiffness of a Bullet Physics collision object.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
///
/// @return {Real} The contact stiffness of the collision object.
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
/// Gets the contact damping of a Bullet Physics collision object.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
///
/// @return {Real} The contact damping of the collision object.
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
/// Gets the world transform of a Bullet Physics collision object.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
///
/// @return {Pointer} A pointer to the world transform of the collision object.
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
/// Gets the world transform as a 4x4 matrix of a Bullet Physics collision
/// object.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
/// @param {Array<Real>} outMatrix
///     An array to store the 4x4 matrix representing the world transform.
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
/// Sets the world transform of a Bullet Physics collision object.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
/// @param {Pointer} transform
///     A pointer to the btTransform that represents the new world transform.
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
/// Gets the interpolation world transform of a Bullet Physics collision object.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
///
/// @return {Pointer}
///     A pointer to the interpolation world transform of the collision object.
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
/// Sets the interpolation world transform of a Bullet Physics collision object.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
/// @param {Pointer} transform
///     A pointer to the btTransform that represents the new interpolation world
///     transform.
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
/// Sets the interpolation linear velocity of a Bullet Physics collision object.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
/// @param {Pointer} linearVelocity
///     A pointer to a btVector3 representing the new interpolation linear
///     velocity.
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
/// Sets the interpolation angular velocity of a Bullet Physics collision object.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
/// @param {Pointer} angularVelocity
///     A pointer to a btVector3 representing the new interpolation angular
///     velocity.
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
/// Retrieves the interpolation linear velocity of a Bullet Physics collision
/// object.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
/// @param {Pointer} outVec3
///     A pointer to a btVector3 where the interpolation linear velocity will be
///     copied.
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
/// Retrieves the interpolation angular velocity of a Bullet Physics collision
/// object.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
/// @param {Pointer} outVec3
///     A pointer to a btVector3 where the interpolation angular velocity will
///     be copied.
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
/// Retrieves the hit fraction of a Bullet Physics collision object.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
///
/// @return {Real} The hit fraction of the collision object.
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
/// Sets the hit fraction of a Bullet Physics collision object.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
/// @param {Real} hitFraction
///     The hit fraction to set for the collision object.
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
/// Retrieves the Continuous Collision Detection (CCD) swept sphere radius of a
/// Bullet Physics collision object.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
///
/// @return {Real} The CCD swept sphere radius of the collision object.
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
/// Sets the Continuous Collision Detection (CCD) swept sphere radius for a
/// Bullet Physics collision object.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
/// @param {Real} radius
///     The radius of the swept sphere for CCD.
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
/// Retrieves the squared motion threshold for Continuous Collision Detection
/// (CCD) of a Bullet Physics collision object.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
///
/// @return {Real}
///     The squared motion threshold for CCD of the collision object.
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
/// Sets the motion threshold for Continuous Collision Detection (CCD) of a
/// Bullet Physics collision object.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
/// @param {Real} ccdMotionThreshold
///     The motion threshold for CCD. When the motion (squared velocity) of the
///     object exceeds this threshold, CCD is triggered.
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

/// @func btCollisionObject_checkCollideWith(collisionObject, otherObject)
///
/// @desc
/// Checks if the specified collision object can collide with another collision
/// object.
///
/// @param {Pointer} collisionObject
///     A pointer to a btCollisionObject instance.
/// @param {Pointer} otherObject
///     A pointer to the other btCollisionObject instance to check for collision.
///
/// @return {Bool} Returns true if the collisionObject can collide with the
/// otherObject, false otherwise.
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
