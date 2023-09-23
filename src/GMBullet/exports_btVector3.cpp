#include <GMBullet.hpp>

/// @func btVector3_create([x[, y[, z]])
///
/// @desc
/// Creates a new instance of a Bullet Physics 3D vector.
///
/// @param {Real} [x]
///     The x-coordinate of the vector.
/// @param {Real} [y]
///     The y-coordinate of the vector.
/// @param {Real} [z]
///     The z-coordinate of the vector.
///
/// @return {Pointer} A pointer to the newly created btVector3 instance.
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
/// Destroys a previously created btVector3 instance.
///
/// @param {Pointer} vector
///     A pointer to the btVector3 instance to be destroyed.
YYEXPORT void btVector3_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btVector3*)YYGetPtr(arg, 0);
}

/// @func btVector3_getX(vector)
///
/// @desc
/// Gets the x-component of a btVector3.
///
/// @param {Pointer} vector
///     A pointer to the btVector3 object.
///
/// @return {Real} The x-component of the vector.
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
/// Sets the x-component of a btVector3.
///
/// @param {Pointer} vector
///     A pointer to the btVector3 object.
/// @param {Real} x
///     The value to set as the x-component of the vector.
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
/// Gets the y-component of a btVector3.
///
/// @param {Pointer} vector
///     A pointer to the btVector3 object.
///
/// @return {Real} The y-component of the vector.
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
/// Sets the y-component of a btVector3.
///
/// @param {Pointer} vector
///     A pointer to the btVector3 object.
/// @param {Real} y
///     The value to set as the y-component of the vector.
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
/// Gets the z-component of a btVector3.
///
/// @param {Pointer} vector
///     A pointer to the btVector3 object.
///
/// @return {Real} The z-component of the vector.
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
/// Sets the z-component of a btVector3.
///
/// @param {Pointer} vector
///     A pointer to the btVector3 object.
/// @param {Real} z
///     The value to set as the z-component of the vector.
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
/// Sets the components of a btVector3.
///
/// @param {Pointer} vector
///     A pointer to the btVector3 object.
/// @param {Real} x
///     The value to set as the x-component of the vector.
/// @param {Real} y
///     The value to set as the y-component of the vector.
/// @param {Real} z
///     The value to set as the z-component of the vector.
YYEXPORT void btVector3_setValue(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto vector = (btVector3*)YYGetPtr(arg, 0);
	double x = YYGetReal(arg, 1);
	double y = YYGetReal(arg, 2);
	double z = YYGetReal(arg, 3);
	vector->setValue(x, y, z);
}
