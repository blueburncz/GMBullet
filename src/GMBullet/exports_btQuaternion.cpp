#include <GMBullet.hpp>

/// @func btQuaternion_create([x[, y[, z[, w]]])
///
/// @desc
///
/// @param {Real} [x]
/// @param {Real} [y]
/// @param {Real} [z]
/// @param {Real} [w]
///
/// @return {Pointer}
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
///
/// @param {Pointer} axis
/// @param {Real} angle
///
/// @return {Pointer}
YYEXPORT void btQuaternion_createFromAxisAngle(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	btVector3& axis = *(btVector3*)YYGetPtr(arg, 0);
	double angle = YYGetReal(arg, 1);
	result.kind = VALUE_PTR;
	result.ptr = new btQuaternion(axis, angle);
}

/// @func btQuaternion_createFromAxisAngleXYZ(axisX, axisY, axisZ, angle)
///
/// @desc
///
/// @param {Real} axisX
/// @param {Real} axisY
/// @param {Real} axisZ
/// @param {Real} angle
///
/// @return {Pointer}
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
///
/// @param {Real} yaw
/// @param {Real} pitch
/// @param {Real} roll
///
/// @return {Pointer}
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
///
/// @param {Pointer} quaternion
YYEXPORT void btQuaternion_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btQuaternion*)YYGetPtr(arg, 0);
}

/// @func btQuaternion_getX(quaternion)
///
/// @desc
///
/// @param {Pointer} quaternion
///
/// @return {Real}
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
///
/// @param {Pointer} quaternion
/// @param {Real} x
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
///
/// @param {Pointer} quaternion
///
/// @return {Real}
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
///
/// @param {Pointer} quaternion
/// @param {Real} y
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
///
/// @param {Pointer} quaternion
///
/// @return {Real}
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
///
/// @param {Pointer} quaternion
/// @param {Real} z
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
///
/// @param {Pointer} quaternion
///
/// @return {Real}
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
///
/// @param {Pointer} quaternion
/// @param {Real} w
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
///
/// @param {Pointer} quaternion
/// @param {Real} x
/// @param {Real} y
/// @param {Real} z
/// @param {Real} w
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
