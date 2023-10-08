#include <GMBullet.hpp>

/// @func btQuaternion_create([x[, y[, z[, w]]])
///
/// @desc
/// Creates a new quaternion with the specified x, y, z, and w components.
///
/// @param {Real} [x]
///     The x component of the quaternion. Default is 0.
/// @param {Real} [y]
///     The y component of the quaternion. Default is 0.
/// @param {Real} [z]
///     The z component of the quaternion. Default is 0.
/// @param {Real} [w]
///     The w component of the quaternion. Default is 1.
///
/// @return {Pointer} A pointer to the created btQuaternion.
YYEXPORT void btQuaternion_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	double x = (argc > 0) ? YYGetReal(arg, 0) : 0;
	double y = (argc > 1) ? YYGetReal(arg, 1) : 0;
	double z = (argc > 2) ? YYGetReal(arg, 2) : 0;
	double w = (argc > 3) ? YYGetReal(arg, 3) : 1;
	result.kind = VALUE_PTR;
	result.ptr = new btQuaternion(x, y, z, w);
}

/// @func btQuaternion_createFromAxisAngle(axis, angle)
///
/// @desc
/// Creates a new quaternion representing a rotation around the specified axis
/// by the given angle.
///
/// @param {Pointer} axis
///     A pointer to a btVector3 representing the axis of rotation.
/// @param {Real} angle
///     The angle of rotation in radians.
///
/// @return {Pointer} A pointer to the newly created btQuaternion representing
/// the rotation.
YYEXPORT void btQuaternion_createFromAxisAngle(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto& axis =  *(btVector3*)YYGetPtr(arg, 0);
	double angle = YYGetReal(arg, 1);
	result.kind = VALUE_PTR;
	result.ptr = new btQuaternion(axis, angle);
}

/// @func btQuaternion_createFromAxisAngleXYZ(axisX, axisY, axisZ, angle)
///
/// @desc
/// Creates a new quaternion representing a rotation around the specified axis
/// by the given angle.
///
/// @param {Real} axisX
///     The x-component of the axis of rotation.
/// @param {Real} axisY
///     The y-component of the axis of rotation.
/// @param {Real} axisZ
///     The z-component of the axis of rotation.
/// @param {Real} angle
///     The angle of rotation in radians.
///
/// @return {Pointer} A pointer to the newly created btQuaternion representing
/// the rotation.
YYEXPORT void btQuaternion_createFromAxisAngleXYZ(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	double axisX = YYGetReal(arg, 0);
	double axisY = YYGetReal(arg, 1);
	double axisZ = YYGetReal(arg, 2);
	double angle = YYGetReal(arg, 3);
	result.kind = VALUE_PTR;
	result.ptr = new btQuaternion(btVector3(axisX, axisY, axisZ), angle);
}

/// @func btQuaternion_createFromEuler(yaw, pitch, roll)
///
/// @desc
/// Creates a new quaternion representing a rotation using Euler angles (yaw,
/// pitch, roll).
///
/// @param {Real} yaw
///     The yaw angle (rotation around the vertical axis) in radians.
/// @param {Real} pitch
///     The pitch angle (rotation around the lateral axis) in radians.
/// @param {Real} roll
///     The roll angle (rotation around the longitudinal axis) in radians.
///
/// @return {Pointer} A pointer to the newly created btQuaternion representing
/// the rotation.
YYEXPORT void btQuaternion_createFromEuler(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	double yaw = YYGetReal(arg, 0);
	double pitch = YYGetReal(arg, 1);
	double roll = YYGetReal(arg, 2);
	result.kind = VALUE_PTR;
	result.ptr = new btQuaternion(yaw, pitch, roll);
}

/// @func btQuaternion_destroy(quaternion)
///
/// @desc
/// Destroys a btQuaternion object.
///
/// @param {Pointer} quaternion
///     A pointer to the btQuaternion object to be deallocated.
YYEXPORT void btQuaternion_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btQuaternion*)YYGetPtr(arg, 0);
}

/// @func btQuaternion_getX(quaternion)
///
/// @desc
/// Gets the x-component of a btQuaternion.
///
/// @param {Pointer} quaternion
///     A pointer to the btQuaternion object.
///
/// @return {Real} The x-component of the quaternion.
YYEXPORT void btQuaternion_getX(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto quaternion = (btQuaternion*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = quaternion->getX();
}

/// @func btQuaternion_setX(quaternion, x)
///
/// @desc
/// Sets the x-component of a btQuaternion.
///
/// @param {Pointer} quaternion
///     A pointer to the btQuaternion object.
/// @param {Real} x
///     The value to set as the x-component of the quaternion.
YYEXPORT void btQuaternion_setX(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto quaternion = (btQuaternion*)YYGetPtr(arg, 0);
	double x = YYGetReal(arg, 1);
	quaternion->setX(x);
}

/// @func btQuaternion_getY(quaternion)
///
/// @desc
/// Gets the y-component of a btQuaternion.
///
/// @param {Pointer} quaternion
///     A pointer to the btQuaternion object.
///
/// @return {Real} The y-component of the quaternion.
YYEXPORT void btQuaternion_getY(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto quaternion = (btQuaternion*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = quaternion->getY();
}

/// @func btQuaternion_setY(quaternion, y)
///
/// @desc
/// Sets the y-component of a btQuaternion.
///
/// @param {Pointer} quaternion
///     A pointer to the btQuaternion object.
/// @param {Real} y
///     The value to set as the y-component of the quaternion.
YYEXPORT void btQuaternion_setY(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto quaternion = (btQuaternion*)YYGetPtr(arg, 0);
	double y = YYGetReal(arg, 1);
	quaternion->setY(y);
}

/// @func btQuaternion_getZ(quaternion)
///
/// @desc
/// Gets the z-component of a btQuaternion.
///
/// @param {Pointer} quaternion
///     A pointer to the btQuaternion object.
///
/// @return {Real} The z-component of the quaternion.
YYEXPORT void btQuaternion_getZ(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto quaternion = (btQuaternion*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = quaternion->getZ();
}

/// @func btQuaternion_setZ(quaternion, z)
///
/// @desc
/// Sets the z-component of a btQuaternion.
///
/// @param {Pointer} quaternion
///     A pointer to the btQuaternion object.
/// @param {Real} z
///     The value to set as the z-component of the quaternion.
YYEXPORT void btQuaternion_setZ(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto quaternion = (btQuaternion*)YYGetPtr(arg, 0);
	double z = YYGetReal(arg, 1);
	quaternion->setZ(z);
}

/// @func btQuaternion_getW(quaternion)
///
/// @desc
/// Gets the w-component of a btQuaternion.
///
/// @param {Pointer} quaternion
///     A pointer to the btQuaternion object.
///
/// @return {Real} The w-component of the quaternion.
YYEXPORT void btQuaternion_getW(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto quaternion = (btQuaternion*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = quaternion->getW();
}

/// @func btQuaternion_setW(quaternion, w)
///
/// @desc
/// Sets the w-component of a btQuaternion.
///
/// @param {Pointer} quaternion
///     A pointer to the btQuaternion object.
/// @param {Real} w
///     The value to set as the w-component of the quaternion.
YYEXPORT void btQuaternion_setW(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto quaternion = (btQuaternion*)YYGetPtr(arg, 0);
	double w = YYGetReal(arg, 1);
	quaternion->setZ(w);
}

/// @func btQuaternion_setValue(quaternion, x, y, z, w)
///
/// @desc
/// Sets the components of a btQuaternion.
///
/// @param {Pointer} quaternion
///     A pointer to the btQuaternion object.
/// @param {Real} x
///     The x-component value to set.
/// @param {Real} y
///     The y-component value to set.
/// @param {Real} z
///     The z-component value to set.
/// @param {Real} w
///     The w-component value to set.
YYEXPORT void btQuaternion_setValue(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto quaternion = (btQuaternion*)YYGetPtr(arg, 0);
	double x = YYGetReal(arg, 1);
	double y = YYGetReal(arg, 2);
	double z = YYGetReal(arg, 3);
	double w = YYGetReal(arg, 4);
	quaternion->setValue(x, y, z, w);
}
