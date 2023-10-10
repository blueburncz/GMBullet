#include <GMBullet.hpp>

/// @func btHinge2Constraint_create(rigidBodyA, rigidBodyB, anchor, axis1, axis2)
///
/// @desc
/// Creates a btHinge2Constraint between two rigid bodies using specified anchor
/// and axis vectors.
///
/// @param {Pointer} rigidBodyA
///     A pointer to the first btRigidBody.
/// @param {Pointer} rigidBodyB
///     A pointer to the second btRigidBody.
/// @param {Pointer} anchor
///     A pointer to a btVector3 representing the anchor point in world space.
/// @param {Pointer} axis1
///     A pointer to the primary axis of rotation represented as a btVector3 in
///     world space.
/// @param {Pointer} axis2
///     A pointer to the secondary axis of rotation represented as a btVector3
///     in world space.
///
/// @return {Pointer} A pointer to the created btHinge2Constraint.
YYEXPORT void btHinge2Constraint_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto& rigidBodyA = *(btRigidBody*)YYGetPtr(arg, 0);
	auto& rigidBodyB = *(btRigidBody*)YYGetPtr(arg, 1);
	auto& anchor = *(btVector3*)YYGetPtr(arg, 2);
	auto& axis1 = *(btVector3*)YYGetPtr(arg, 3);
	auto& axis2 = *(btVector3*)YYGetPtr(arg, 4);
	result.kind = VALUE_PTR;
	result.ptr = new btHinge2Constraint(
		rigidBodyA, rigidBodyB, anchor, axis1, axis2);
}

/// @func btHinge2Constraint_destroy(hinge2Constraint)
///
/// @desc
/// Destroys the specified btHinge2Constraint.
///
/// @param {Pointer} hinge2Constraint
///     A pointer to the btHinge2Constraint to be destroyed.
YYEXPORT void btHinge2Constraint_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btHinge2Constraint*)YYGetPtr(arg, 0);
}

/// @func btHinge2Constraint_getAnchor(hinge2Constraint, outVector3)
///
/// @desc
/// Gets the anchor point for the first rigid body connected by the hinge
/// constraint.
///
/// @param {Pointer} hinge2Constraint
///     A pointer to the btHinge2Constraint.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the anchor point (output).
YYEXPORT void btHinge2Constraint_getAnchor(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hinge2Constraint = (btHinge2Constraint*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(hinge2Constraint->getAnchor(), outVector3);
}

/// @func btHinge2Constraint_getAnchor2(hinge2Constraint, outVector3)
///
/// @desc
/// Gets the anchor point for the second rigid body connected by the hinge
/// constraint.
///
/// @param {Pointer} hinge2Constraint
///     A pointer to the btHinge2Constraint.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the anchor point (output).
YYEXPORT void btHinge2Constraint_getAnchor2(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hinge2Constraint = (btHinge2Constraint*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(hinge2Constraint->getAnchor2(), outVector3);
}

/// @func btHinge2Constraint_getAxis1(hinge2Constraint, outVector3)
///
/// @desc
/// Gets the primary axis of rotation for the hinge constraint.
///
/// @param {Pointer} hinge2Constraint
///     A pointer to the btHinge2Constraint.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the axis (output).
YYEXPORT void btHinge2Constraint_getAxis1(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hinge2Constraint = (btHinge2Constraint*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(hinge2Constraint->getAxis1(), outVector3);
}

/// @func btHinge2Constraint_getAxis2(hinge2Constraint, outVector3)
///
/// @desc
/// Gets the secondary axis of rotation for the hinge constraint.
///
/// @param {Pointer} hinge2Constraint
///     A pointer to the btHinge2Constraint.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the axis (output).
YYEXPORT void btHinge2Constraint_getAxis2(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hinge2Constraint = (btHinge2Constraint*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(hinge2Constraint->getAxis2(), outVector3);
}

/// @func btHinge2Constraint_getAngle1(hinge2Constraint)
///
/// @desc
/// Gets the current angle around the primary axis of rotation.
///
/// @param {Pointer} hinge2Constraint
///     A pointer to the btHinge2Constraint.
///
/// @return {Real} The current angle in radians around the primary axis of
/// rotation.
YYEXPORT void btHinge2Constraint_getAngle1(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hinge2Constraint = (btHinge2Constraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = hinge2Constraint->getAngle1();
}

/// @func btHinge2Constraint_getAngle2(hinge2Constraint)
///
/// @desc
/// Gets the current angle around the secondary axis of rotation.
///
/// @param {Pointer} hinge2Constraint
///     A pointer to the btHinge2Constraint.
///
/// @return {Real} The current angle in radians around the secondary axis of
/// rotation.
YYEXPORT void btHinge2Constraint_getAngle2(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hinge2Constraint = (btHinge2Constraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = hinge2Constraint->getAngle2();
}

/// @func btHinge2Constraint_setUpperLimit(hinge2Constraint, ang1max)
///
/// @desc
/// Sets the upper limit for the angle around the primary axis of rotation.
///
/// @param {Pointer} hinge2Constraint
///     A pointer to the btHinge2Constraint.
/// @param {Real} ang1max
///     The upper limit for the angle in radians.
YYEXPORT void btHinge2Constraint_setUpperLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hinge2Constraint = (btHinge2Constraint*)YYGetPtr(arg, 0);
	double ang1max = YYGetReal(arg, 1);
	hinge2Constraint->setUpperLimit(ang1max);
}

/// @func btHinge2Constraint_setLowerLimit(hinge2Constraint, ang1min)
///
/// @desc
/// Sets the lower limit for the angle around the primary axis of rotation.
///
/// @param {Pointer} hinge2Constraint
///     A pointer to the btHinge2Constraint.
/// @param {Real} ang1min
///     The lower limit for the angle in radians.
YYEXPORT void btHinge2Constraint_setLowerLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hinge2Constraint = (btHinge2Constraint*)YYGetPtr(arg, 0);
	double ang1min = YYGetReal(arg, 1);
	hinge2Constraint->setLowerLimit(ang1min);
}
