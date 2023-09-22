#include <GMBullet.hpp>

/// @func btVector3_create([x[, y[, z]])
///
/// @desc
///
/// @param {Real} [x]
/// @param {Real} [y]
/// @param {Real} [z]
///
/// @return {Pointer}
YYEXPORT void btVector3_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	double x = (argc > 0) ? YYGetReal(arg, 0) : 0;
	double y = (argc > 1) ? YYGetReal(arg, 1) : 0;
	double z = (argc > 2) ? YYGetReal(arg, 2) : 0;
	result.kind = VALUE_PTR;
	result.ptr = new btVector3(x, y, z);
}

/// @func btVector3_destroy(vector)
///
/// @desc
///
/// @param {Pointer} vector
YYEXPORT void btVector3_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btVector3*)YYGetPtr(arg, 0);
}

/// @func btVector3_getX(vector)
///
/// @desc
///
/// @param {Pointer} vector
///
/// @return {Real}
YYEXPORT void btVector3_getX(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto vector = (btVector3*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = vector->getX();
}

/// @func btVector3_setX(vector, x)
///
/// @desc
///
/// @param {Pointer} vector
/// @param {Real} x
YYEXPORT void btVector3_setX(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto vector = (btVector3*)YYGetPtr(arg, 0);
	double x = YYGetReal(arg, 1);
	vector->setX(x);
}

/// @func btVector3_getY(vector)
///
/// @desc
///
/// @param {Pointer} vector
///
/// @return {Real}
YYEXPORT void btVector3_getY(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto vector = (btVector3*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = vector->getY();
}

/// @func btVector3_setY(vector, y)
///
/// @desc
///
/// @param {Pointer} vector
/// @param {Real} y
YYEXPORT void btVector3_setY(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto vector = (btVector3*)YYGetPtr(arg, 0);
	double y = YYGetReal(arg, 1);
	vector->setY(y);
}

/// @func btVector3_getZ(vector)
///
/// @desc
///
/// @param {Pointer} vector
///
/// @return {Real}
YYEXPORT void btVector3_getZ(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto vector = (btVector3*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = vector->getZ();
}

/// @func btVector3_setZ(vector, z)
///
/// @desc
///
/// @param {Pointer} vector
/// @param {Real} z
YYEXPORT void btVector3_setZ(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto vector = (btVector3*)YYGetPtr(arg, 0);
	double z = YYGetReal(arg, 1);
	vector->setZ(z);
}

/// @func btVector3_setValue(vector, x, y, z)
///
/// @desc
///
/// @param {Pointer} vector
/// @param {Real} x
/// @param {Real} y
/// @param {Real} z
YYEXPORT void btVector3_setValue(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto vector = (btVector3*)YYGetPtr(arg, 0);
	double x = YYGetReal(arg, 1);
	double y = YYGetReal(arg, 2);
	double z = YYGetReal(arg, 3);
	vector->setValue(x, y, z);
}
