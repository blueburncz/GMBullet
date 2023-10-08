#include <GMBullet.hpp>

/// @func btTransform_create()
///
/// @desc
/// Creates a new instance of a Bullet Physics transform.
///
/// @return {Pointer} A pointer to the newly created instance of btTransform.
YYEXPORT void btTransform_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	result.kind = VALUE_PTR;
	result.ptr = new btTransform();
}

/// @func btTransform_destroy(transform)
///
/// @desc
/// Destroys an instance of a Bullet Physics transform.
///
/// @param {Pointer} transform
///     A pointer to the btTransform object to be destroyed.
YYEXPORT void btTransform_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btTransform*)YYGetPtr(arg, 0);
}

/// @func btTransform_setIdentity(transform)
///
/// @desc
///
/// @param {Pointer} transform
YYEXPORT void btTransform_setIdentity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto transform = (btTransform*)YYGetPtr(arg, 0);
	transform->setIdentity();
}

/// @func btTransform_getOrigin(transform, outVector3)
///
/// @desc
/// Sets the transform to the identity transformation.
///
/// @param {Pointer} transform
///     A pointer to the btTransform object to be set to identity.
YYEXPORT void btTransform_getOrigin(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto transform = (btTransform*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(transform->getOrigin(), outVector3);
}

/// @func btTransform_setOrigin(transform, origin)
///
/// @desc
/// Sets the origin of the transform using a btVector3.
///
/// @param {Pointer} transform
///     A pointer to the btTransform object.
/// @param {Pointer} origin
///     A pointer to the btVector3 representing the origin.
YYEXPORT void btTransform_setOrigin(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto transform = (btTransform*)YYGetPtr(arg, 0);
	auto& origin =  *(btVector3*)YYGetPtr(arg, 0);
	transform->setOrigin(origin);
}

/// @func btTransform_setOriginXYZ(transform, x, y, z)
///
/// @desc
/// Sets the origin of the transform using individual x, y, and z coordinates.
///
/// @param {Pointer} transform
///     A pointer to the btTransform object.
/// @param {Real} x
///     The x-coordinate of the origin.
/// @param {Real} y
///     The y-coordinate of the origin.
/// @param {Real} z
///     The z-coordinate of the origin.
YYEXPORT void btTransform_setOriginXYZ(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto transform = (btTransform*)YYGetPtr(arg, 0);
	double x = YYGetReal(arg, 1);
	double y = YYGetReal(arg, 2);
	double z = YYGetReal(arg, 3);
	transform->setOrigin(btVector3(x, y, z));
}

/// @func btTransform_getRotation(transform, outQuaternion)
///
/// @desc
/// Retrieves the rotation of the transform as a quaternion and stores it in the
/// specified btQuaternion.
///
/// @param {Pointer} transform
///     A pointer to the btTransform object.
/// @param {Pointer} outQuaternion
///     A pointer to a btQuaternion to store the rotation.
YYEXPORT void btTransform_getRotation(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto transform = (btTransform*)YYGetPtr(arg, 0);
	auto outQuaternion = (btQuaternion*)YYGetPtr(arg, 1);
	CopyQuaternion(transform->getRotation(), outQuaternion);
}

/// @func btTransform_setRotation(transform, quaternion)
///
/// @desc
/// Sets the rotation of the transform using a btQuaternion.
///
/// @param {Pointer} transform
///     A pointer to the btTransform object.
/// @param {Pointer} quaternion
///     A pointer to the btQuaternion representing the rotation.
YYEXPORT void btTransform_setRotation(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto transform = (btTransform*)YYGetPtr(arg, 0);
	auto& quaternion =  *(btQuaternion*)YYGetPtr(arg, 1);
	transform->setRotation(quaternion);
}

/// @func btTransform_setRotationEuler(transform, yaw, pitch, roll)
///
/// @desc
/// Sets the rotation of the transform using Euler angles (yaw, pitch, roll).
///
/// @param {Pointer} transform
///     A pointer to the btTransform object.
/// @param {Real} yaw
///     The yaw angle in radians.
/// @param {Real} pitch
///     The pitch angle in radians.
/// @param {Real} roll
///     The roll angle in radians.
YYEXPORT void btTransform_setRotationEuler(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto transform = (btTransform*)YYGetPtr(arg, 0);
	double yaw = YYGetReal(arg, 1);
	double pitch = YYGetReal(arg, 2);
	double roll = YYGetReal(arg, 3);
	transform->setRotation(btQuaternion(yaw, pitch, roll));
}

/// @func btTransform_getMatrix(transform, outMatrix)
///
/// @desc
/// Retrieves the transformation matrix of the btTransform and stores it in the
/// specified array.
///
/// @param {Pointer} transform
///     A pointer to the btTransform object.
/// @param {Array<Real>} outMatrix
///     An array to store the transformation matrix (16 elements).
YYEXPORT void btTransform_getMatrix(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto transform = (btTransform*)YYGetPtr(arg, 0);
	RValue* outMatrix = &arg[1];
	static btScalar dest[16];
	transform->getOpenGLMatrix(dest);
	RValue value;
	value.kind = VALUE_REAL;
	for (int i = 0; i < 16; ++i)
	{
		value.val = dest[i];
		SET_RValue(outMatrix, &value, NULL, i);
	}
	FREE_RValue(&value);
}

/// @func btTransform_setFromMatrix(transform, matrix)
///
/// @desc
/// Sets the transformation of the btTransform using the provided transformation
/// matrix.
///
/// @param {Pointer} transform
///     A pointer to the btTransform object.
/// @param {Array<Real>} matrix
///     An array representing the transformation matrix (16 elements).
YYEXPORT void btTransform_setFromMatrix(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto transform = (btTransform*)YYGetPtr(arg, 0);
	RValue* matrix = &arg[1];
	static btScalar src[16];
	RValue value;
	for (int i = 0; i < 16; ++i)
	{
		GET_RValue(&value, matrix, NULL, i);
		src[i] = value.val;
	}
	FREE_RValue(&value);
	transform->setFromOpenGLMatrix(src);
}
