#include <GMBullet.hpp>

/// @func btTransform_create()
///
/// @desc
///
/// @return {Pointer}
YYEXPORT void btTransform_create(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	Result.kind = VALUE_PTR;
	Result.ptr = new btTransform();
}

/// @func btTransform_destroy(transform)
///
/// @desc
///
/// @param {Pointer} transform
YYEXPORT void btTransform_destroy(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	delete (btTransform*)YYGetPtr(arg, 0);
}

/// @func btTransform_setIdentity(transform)
///
/// @desc
///
/// @param {Pointer} transform
YYEXPORT void btTransform_setIdentity(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	btTransform* transform = (btTransform*)YYGetPtr(arg, 0);
	transform->setIdentity();
}

/// @func btTransform_getOrigin(transform, outVector3)
///
/// @desc
///
/// @param {Pointer} transform
/// @param {Pointer} outVector3
YYEXPORT void btTransform_getOrigin(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	btTransform* transform = (btTransform*)YYGetPtr(arg, 0);
	btVector3* outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(transform->getOrigin(), outVector3);
}

/// @func btTransform_setOrigin(transform, origin)
///
/// @desc
///
/// @param {Pointer} transform
/// @param {Pointer} origin
YYEXPORT void btTransform_setOrigin(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	btTransform* transform = (btTransform*)YYGetPtr(arg, 0);
	btVector3* origin = (btVector3*)YYGetPtr(arg, 0);
	transform->setOrigin(*origin);
}

/// @func btTransform_setOriginXYZ(transform, x, y, z)
///
/// @desc
///
/// @param {Pointer} transform
/// @param {Real} x
/// @param {Real} y
/// @param {Real} z
YYEXPORT void btTransform_setOriginXYZ(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	btTransform* transform = (btTransform*)YYGetPtr(arg, 0);
	double x = YYGetReal(arg, 1);
	double y = YYGetReal(arg, 2);
	double z = YYGetReal(arg, 3);
	transform->setOrigin(btVector3(x, y, z));
}

/// @func btTransform_getRotation(transform, outQuaternion)
///
/// @desc
///
/// @param {Pointer} transform
/// @param {Pointer} outQuaternion
YYEXPORT void btTransform_getRotation(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	btTransform* transform = (btTransform*)YYGetPtr(arg, 0);
	btQuaternion* outQuaternion = (btQuaternion*)YYGetPtr(arg, 1);
	CopyQuaternion(transform->getRotation(), outQuaternion);
}

/// @func btTransform_setRotation(transform, quaternion)
///
/// @desc
///
/// @param {Pointer} transform
/// @param {Pointer} quaternion
YYEXPORT void btTransform_setRotation(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	btTransform* transform = (btTransform*)YYGetPtr(arg, 0);
	btQuaternion* quaternion = (btQuaternion*)YYGetPtr(arg, 1);
	transform->setRotation(*quaternion);
}

/// @func btTransform_setRotationXYZ(transform, yaw, pitch, roll)
///
/// @desc
///
/// @param {Pointer} transform
/// @param {Real} yaw
/// @param {Real} pitch
/// @param {Real} roll
YYEXPORT void btTransform_setRotationXYZ(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	btTransform* transform = (btTransform*)YYGetPtr(arg, 0);
	double yaw = YYGetReal(arg, 1);
	double pitch = YYGetReal(arg, 2);
	double roll = YYGetReal(arg, 3);
	transform->setRotation(btQuaternion(yaw, pitch, roll));
}

/// @func btTransform_getMatrix(transform, outMatrix)
///
/// @desc
///
/// @param {Pointer} transform
/// @param {Array<real>} outMatrix
YYEXPORT void btTransform_getMatrix(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	btTransform* transform = (btTransform*)YYGetPtr(arg, 0);
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
///
/// @param {Pointer} transform
/// @param {Array<real>} matrix
YYEXPORT void btTransform_setFromMatrix(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	btTransform* transform = (btTransform*)YYGetPtr(arg, 0);
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
