#include <GMBullet.hpp>

/// @func btUniversalConstraint_create(rigidBodyA, rigidBodyB, anchor, axis1, axis2)
///
/// @desc
/// Creates a new universal constraint between two rigid bodies.
///
/// @param {Pointer} rigidBodyA
///     Pointer to the first rigid body involved in the constraint.
/// @param {Pointer} rigidBodyB
///     Pointer to the second rigid body involved in the constraint.
/// @param {Pointer} anchor
///     The anchor point for the constraint, specified as a btVector3.
/// @param {Pointer} axis1
///     The first rotational axis, specified as a btVector3.
/// @param {Pointer} axis2
///     The second rotational axis, specified as a btVector3.
///
/// @return {Pointer} A pointer to the created btUniversalConstraint instance.
YYEXPORT void btUniversalConstraint_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto& rigidBodyA = *(btRigidBody*)YYGetPtr(arg, 0);
	auto& rigidBodyB = *(btRigidBody*)YYGetPtr(arg, 1);
	auto& anchor = *(btVector3*)YYGetPtr(arg, 2);
	auto& axis1 = *(btVector3*)YYGetPtr(arg, 3);
	auto& axis2 = *(btVector3*)YYGetPtr(arg, 4);
	result.kind = VALUE_PTR;
	result.ptr = new btUniversalConstraint(
		rigidBodyA, rigidBodyB, anchor, axis1, axis2);
}

/// @func btUniversalConstraint_destroy(universalConstraint)
///
/// @desc
/// Destroys the specified universal constraint, releasing allocated resources.
///
/// @param {Pointer} universalConstraint
///     Pointer to the btUniversalConstraint instance to be destroyed.
YYEXPORT void btUniversalConstraint_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btUniversalConstraint*)YYGetPtr(arg, 0);
}

/// @func btUniversalConstraint_getAnchor(universalConstraint, outVector3)
///
/// @desc
/// Gets the anchor point for the first rigid body in the universal constraint.
///
/// @param {Pointer} universalConstraint
///     Pointer to the btUniversalConstraint instance.
/// @param {Pointer} outVector3
///     Pointer to a btVector3 to store the anchor point.
YYEXPORT void btUniversalConstraint_getAnchor(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto universalConstraint = (btUniversalConstraint*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(universalConstraint->getAnchor(), outVector3);
}

/// @func btUniversalConstraint_getAnchor2(universalConstraint, outVector3)
///
/// @desc
/// Gets the anchor point for the second rigid body in the universal constraint.
///
/// @param {Pointer} universalConstraint
///     Pointer to the btUniversalConstraint instance.
/// @param {Pointer} outVector3
///     Pointer to a btVector3 to store the anchor point.
YYEXPORT void btUniversalConstraint_getAnchor2(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto universalConstraint = (btUniversalConstraint*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(universalConstraint->getAnchor2(), outVector3);
}

/// @func btUniversalConstraint_getAxis1(universalConstraint, outVector3)
///
/// @desc
/// Gets the first rotational axis of the universal constraint.
///
/// @param {Pointer} universalConstraint
///     Pointer to the btUniversalConstraint instance.
/// @param {Pointer} outVector3
///     Pointer to a btVector3 to store the first rotational axis.
YYEXPORT void btUniversalConstraint_getAxis1(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto universalConstraint = (btUniversalConstraint*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(universalConstraint->getAxis1(), outVector3);
}

/// @func btUniversalConstraint_getAxis2(universalConstraint, outVector3)
///
/// @desc
/// Gets the second rotational axis of the universal constraint.
///
/// @param {Pointer} universalConstraint
///     Pointer to the btUniversalConstraint instance.
/// @param {Pointer} outVector3
///     Pointer to a btVector3 to store the second rotational axis.
YYEXPORT void btUniversalConstraint_getAxis2(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto universalConstraint = (btUniversalConstraint*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(universalConstraint->getAxis2(), outVector3);
}

/// @func btUniversalConstraint_getAngle1(universalConstraint)
///
/// @desc
/// Gets the angle around the first rotational axis of the universal constraint.
///
/// @param {Pointer} universalConstraint
///     Pointer to the btUniversalConstraint instance.
///
/// @return {Real} The angle around the first rotational axis.
YYEXPORT void btUniversalConstraint_getAngle1(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto universalConstraint = (btUniversalConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = universalConstraint->getAngle1();
}

/// @func btUniversalConstraint_getAngle2(universalConstraint)
///
/// @desc
/// Gets the angle around the second rotational axis of the universal constraint.
///
/// @param {Pointer} universalConstraint
///     Pointer to the btUniversalConstraint instance.
///
/// @return {Real} The angle around the second rotational axis.
YYEXPORT void btUniversalConstraint_getAngle2(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto universalConstraint = (btUniversalConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = universalConstraint->getAngle2();
}

/// @func btUniversalConstraint_setUpperLimit(universalConstraint, ang1max, ang2max)
///
/// @desc
/// Sets the upper limits for the rotational angles around the two rotational
/// axes of the universal constraint.
///
/// @param {Pointer} universalConstraint
///     Pointer to the btUniversalConstraint instance.
/// @param {Real} ang1max
///     The upper limit for the first rotational angle (angle around the first
///     rotational axis).
/// @param {Real} ang2max
///     The upper limit for the second rotational angle (angle around the second
///     rotational axis).
YYEXPORT void btUniversalConstraint_setUpperLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto universalConstraint = (btUniversalConstraint*)YYGetPtr(arg, 0);
	double ang1max = YYGetReal(arg, 1);
	double ang2max = YYGetReal(arg, 2);
	universalConstraint->setUpperLimit(ang1max, ang2max);
}

/// @func btUniversalConstraint_setLowerLimit(universalConstraint, ang1min, ang2min)
///
/// @desc
/// Sets the lower limits for the rotational angles around the two rotational
/// axes of the universal constraint.
///
/// @param {Pointer} universalConstraint
///     Pointer to the btUniversalConstraint instance.
/// @param {Real} ang1min
///     The lower limit for the first rotational angle (angle around the first
///     rotational axis).
/// @param {Real} ang2min
///     The lower limit for the second rotational angle (angle around the second
///     rotational axis).
YYEXPORT void btUniversalConstraint_setLowerLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto universalConstraint = (btUniversalConstraint*)YYGetPtr(arg, 0);
	double ang1min = YYGetReal(arg, 1);
	double ang2min = YYGetReal(arg, 2);
	universalConstraint->setLowerLimit(ang1min, ang2min);
}

/// @func btUniversalConstraint_setAxis(universalConstraint, axis1, axis2)
///
/// @desc
/// Sets the rotational axes for the universal constraint.
///
/// @param {Pointer} universalConstraint
///     Pointer to the btUniversalConstraint instance.
/// @param {Pointer} axis1
///     Pointer to a btVector3 representing the first rotational axis.
/// @param {Pointer} axis2
///     Pointer to a btVector3 representing the second rotational axis.
YYEXPORT void btUniversalConstraint_setAxis(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto universalConstraint = (btUniversalConstraint*)YYGetPtr(arg, 0);
	auto& axis1 = *(btVector3*)YYGetPtr(arg, 1);
	auto& axis2 = *(btVector3*)YYGetPtr(arg, 2);
	universalConstraint->setAxis(axis1, axis2);
}
