#include <GMBullet.hpp>

////////////////////////////////////////////////////////////////////////////////
//
// btConstraintSetting
//

/// @func btConstraintSetting_setTau(constraintSetting, tau)
///
/// @desc
/// Sets the tau value in the constraint setting.
///
/// @param {Pointer} constraintSetting
///     The pointer to the btConstraintSetting instance.
/// @param {Real} tau
///     The tau value to set.
YYEXPORT void btConstraintSetting_setTau(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto constraintSetting = (btConstraintSetting*)YYGetPtr(arg, 0);
	double tau = YYGetReal(arg, 1);
	constraintSetting->m_tau = tau;
}

/// @func btConstraintSetting_getTau(constraintSetting)
///
/// @desc
/// Gets the tau value from the constraint setting.
///
/// @param {Pointer} constraintSetting
///     The pointer to the btConstraintSetting instance.
///
/// @return {Real} The tau value from the constraint setting.
YYEXPORT void btConstraintSetting_getTau(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto constraintSetting = (btConstraintSetting*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = constraintSetting->m_tau;
}

/// @func btConstraintSetting_setDamping(constraintSetting, damping)
///
/// @desc
/// Sets the damping value in the constraint setting.
///
/// @param {Pointer} constraintSetting
///     The pointer to the btConstraintSetting instance.
/// @param {Real} damping
///     The damping value to set.
YYEXPORT void btConstraintSetting_setDamping(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto constraintSetting = (btConstraintSetting*)YYGetPtr(arg, 0);
	double damping = YYGetReal(arg, 1);
	constraintSetting->m_damping = damping;
}

/// @func btConstraintSetting_getDamping(constraintSetting)
///
/// @desc
/// Gets the damping value from the constraint setting.
///
/// @param {Pointer} constraintSetting
///     The pointer to the btConstraintSetting instance.
///
/// @return {Real} The damping value from the constraint setting.
YYEXPORT void btConstraintSetting_getDamping(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto constraintSetting = (btConstraintSetting*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = constraintSetting->m_damping;
}

/// @func btConstraintSetting_setImpulseClamp(constraintSetting, impulseClamp)
///
/// @desc
/// Sets the impulse clamp value in the constraint setting.
///
/// @param {Pointer} constraintSetting
///     The pointer to the btConstraintSetting instance.
/// @param {Real} impulseClamp
///     The impulse clamp value to set.
YYEXPORT void btConstraintSetting_setImpulseClamp(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto constraintSetting = (btConstraintSetting*)YYGetPtr(arg, 0);
	double impulseClamp = YYGetReal(arg, 1);
	constraintSetting->m_impulseClamp = impulseClamp;
}

/// @func btConstraintSetting_getImpulseClamp(constraintSetting)
///
/// @desc
/// Gets the impulse clamp value from the constraint setting.
///
/// @param {Pointer} constraintSetting
///     The pointer to the btConstraintSetting instance.
///
/// @return {Real} The impulse clamp value from the constraint setting.
YYEXPORT void btConstraintSetting_getImpulseClamp(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto constraintSetting = (btConstraintSetting*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = constraintSetting->m_impulseClamp;
}

////////////////////////////////////////////////////////////////////////////////
//
// btPoint2PointConstraint
//

/// @func btPoint2PointConstraint_create1(rigidBodyA, pivotInA)
///
/// @desc
/// Creates a btPoint2PointConstraint between a rigid body and a pivot point in
/// the local coordinate system of the rigid body.
///
/// @param {Pointer} rigidBodyA
///     The pointer to the btRigidBody that the constraint is attached to.
/// @param {Pointer} pivotInA
///     The pointer to a btVector3 specifying the pivot point in the local
///     coordinate system of rigidBodyA.
///
/// @return {Pointer} A pointer to the created btPoint2PointConstraint.
YYEXPORT void btPoint2PointConstraint_create1(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto& rigidBodyA = *(btRigidBody*)YYGetPtr(arg, 0);
	auto& pivotInA = *(btVector3*)YYGetPtr(arg, 1);
	result.kind = VALUE_PTR;
	result.ptr = new btPoint2PointConstraint(rigidBodyA, pivotInA);
}

/// @func btPoint2PointConstraint_create1XYZ(rigidBodyA, pivotInAX, pivotInAY, pivotInAZ)
///
/// @desc
/// Creates a btPoint2PointConstraint between a rigid body and a pivot point
/// specified by coordinates in the local coordinate system of the rigid body.
///
/// @param {Pointer} rigidBodyA
///     The pointer to the btRigidBody that the constraint is attached to.
/// @param {Real} pivotInAX
///     The x-coordinate of the pivot point in the local coordinate system of
///     rigidBodyA.
/// @param {Real} pivotInAY
///     The y-coordinate of the pivot point in the local coordinate system of
///     rigidBodyA.
/// @param {Real} pivotInAZ
///     The z-coordinate of the pivot point in the local coordinate system of
///     rigidBodyA.
///
/// @return {Pointer} A pointer to the created btPoint2PointConstraint.
YYEXPORT void btPoint2PointConstraint_create1XYZ(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto& rigidBodyA = *(btRigidBody*)YYGetPtr(arg, 0);
	double pivotInAX = YYGetReal(arg, 1);
	double pivotInAY = YYGetReal(arg, 2);
	double pivotInAZ = YYGetReal(arg, 3);
	result.kind = VALUE_PTR;
	result.ptr = new btPoint2PointConstraint(
		rigidBodyA, btVector3(pivotInAX, pivotInAY, pivotInAZ));
}

/// @func btPoint2PointConstraint_create2(rigidBodyA, rigidBodyB, pivotInA, pivotInB)
///
/// @desc
/// Creates a btPoint2PointConstraint between two rigid bodies, each with their
/// respective pivot points in their local coordinate systems.
///
/// @param {Pointer} rigidBodyA
///     The pointer to the first btRigidBody that the constraint is attached to.
/// @param {Pointer} rigidBodyB
///     The pointer to the second btRigidBody that the constraint is attached to.
/// @param {Pointer} pivotInA
///     The pointer to a btVector3 specifying the pivot point in the local
///     coordinate system of rigidBodyA.
/// @param {Pointer} pivotInB
///     The pointer to a btVector3 specifying the pivot point in the local
///     coordinate system of rigidBodyB.
///
/// @return {Pointer} A pointer to the created btPoint2PointConstraint.
YYEXPORT void btPoint2PointConstraint_create2(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto& rigidBodyA = *(btRigidBody*)YYGetPtr(arg, 0);
	auto& rigidBodyB = *(btRigidBody*)YYGetPtr(arg, 1);
	auto& pivotInA = *(btVector3*)YYGetPtr(arg, 2);
	auto& pivotInB = *(btVector3*)YYGetPtr(arg, 3);
	result.kind = VALUE_PTR;
	result.ptr = new btPoint2PointConstraint(rigidBodyA, rigidBodyB, pivotInA, pivotInB);
}

/// @func btPoint2PointConstraint_create2XYZ(rigidBodyA, rigidBodyB, pivotInAX, pivotInAY, pivotInAZ, pivotInBX, pivotInBY, pivotInBZ)
///
/// @desc
/// Creates a btPoint2PointConstraint between two rigid bodies, each with their
/// respective pivot points specified by coordinates in their local coordinate
/// systems.
///
/// @param {Pointer} rigidBodyA
///     The pointer to the first btRigidBody that the constraint is attached to.
/// @param {Pointer} rigidBodyB
///     The pointer to the second btRigidBody that the constraint is attached to.
/// @param {Real} pivotInAX
///     The x-coordinate of the pivot point in the local coordinate system of
///     rigidBodyA.
/// @param {Real} pivotInAY
///     The y-coordinate of the pivot point in the local coordinate system of
///     rigidBodyA.
/// @param {Real} pivotInAZ
///     The z-coordinate of the pivot point in the local coordinate system of
///     rigidBodyA.
/// @param {Real} pivotInBX
///     The x-coordinate of the pivot point in the local coordinate system of
///     rigidBodyB.
/// @param {Real} pivotInBY
///     The y-coordinate of the pivot point in the local coordinate system of
///     rigidBodyB.
/// @param {Real} pivotInBZ
///     The z-coordinate of the pivot point in the local coordinate system of
///     rigidBodyB.
///
/// @return {Pointer} A pointer to the created btPoint2PointConstraint.
YYEXPORT void btPoint2PointConstraint_create2XYZ(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto& rigidBodyA = *(btRigidBody*)YYGetPtr(arg, 0);
	auto& rigidBodyB = *(btRigidBody*)YYGetPtr(arg, 1);
	double pivotInAX = YYGetReal(arg, 2);
	double pivotInAY = YYGetReal(arg, 3);
	double pivotInAZ = YYGetReal(arg, 4);
	double pivotInBX = YYGetReal(arg, 5);
	double pivotInBY = YYGetReal(arg, 6);
	double pivotInBZ = YYGetReal(arg, 7);
	result.kind = VALUE_PTR;
	result.ptr = new btPoint2PointConstraint(
		rigidBodyA,
		rigidBodyB,
		btVector3(pivotInAX, pivotInAY, pivotInAZ),
		btVector3(pivotInBX, pivotInBY, pivotInBZ));
}

/// @func btPoint2PointConstraint_destroy(point2PointConstraint)
///
/// @desc
/// Destroys the btPoint2PointConstraint object, freeing its allocated memory.
///
/// @param {Pointer} point2PointConstraint
///     The pointer to the btPoint2PointConstraint object to be destroyed.
YYEXPORT void btPoint2PointConstraint_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btPoint2PointConstraint*)YYGetPtr(arg, 0);
}

/// @func btPoint2PointConstraint_getSetting(point2PointConstraint)
///
/// @desc
/// Gets the pointer to the btConstraintSetting object associated with the
/// btPoint2PointConstraint.
///
/// @param {Pointer} point2PointConstraint
///     The pointer to the btPoint2PointConstraint.
///
/// @return {Pointer} A pointer to the btConstraintSetting associated with the
/// btPoint2PointConstraint.
YYEXPORT void btPoint2PointConstraint_getSetting(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto point2PointConstraint = (btPoint2PointConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = (btConstraintSetting*)&point2PointConstraint->m_setting;
}

// Note: Skipped btPoint2PointConstraint::buildJacobian
// Note: Skipped btPoint2PointConstraint::getInfo1
// Note: Skipped btPoint2PointConstraint::getInfo1NonVirtual
// Note: Skipped btPoint2PointConstraint::getInfo2
// Note: Skipped btPoint2PointConstraint::getInfo2NonVirtual

/// @func btPoint2PointConstraint_updateRHS(point2PointConstraint, timeStep)
///
/// @desc
/// Updates the right-hand side (RHS) of the point-to-point constraint based on
/// the given time step.
///
/// @param {Pointer} point2PointConstraint
///     The pointer to the btPoint2PointConstraint.
/// @param {Real} timeStep
///     The time step used for the update.
YYEXPORT void btPoint2PointConstraint_updateRHS(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto point2PointConstraint = (btPoint2PointConstraint*)YYGetPtr(arg, 0);
	double timeStep = YYGetReal(arg, 1);
	point2PointConstraint->updateRHS(timeStep);
}

/// @func btPoint2PointConstraint_setPivotA(point2PointConstraint, pivotA)
///
/// @desc
/// Sets the pivot point in local space for the first rigid body of the
/// point-to-point constraint.
///
/// @param {Pointer} point2PointConstraint
///     The pointer to the btPoint2PointConstraint.
/// @param {Pointer} pivotA
///     The pointer to a btVector3 representing the pivot point in local space
///     of the first rigid body.
YYEXPORT void btPoint2PointConstraint_setPivotA(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto point2PointConstraint = (btPoint2PointConstraint*)YYGetPtr(arg, 0);
	auto& pivotA = *(btVector3*)YYGetPtr(arg, 1);
	point2PointConstraint->setPivotA(pivotA);
}

/// @func btPoint2PointConstraint_setPivotB(point2PointConstraint, pivotB)
///
/// @desc
/// Sets the pivot point in local space for the second rigid body of the
/// point-to-point constraint.
///
/// @param {Pointer} point2PointConstraint
///     The pointer to the btPoint2PointConstraint.
/// @param {Pointer} pivotB
///     The pointer to a btVector3 representing the pivot point in local space
///     of the second rigid body.
YYEXPORT void btPoint2PointConstraint_setPivotB(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto point2PointConstraint = (btPoint2PointConstraint*)YYGetPtr(arg, 0);
	auto& pivotB = *(btVector3*)YYGetPtr(arg, 1);
	point2PointConstraint->setPivotB(pivotB);
}

/// @func btPoint2PointConstraint_getPivotInA(point2PointConstraint, outVector3)
///
/// @desc
/// Gets the pivot point in local space for the first rigid body of the
/// point-to-point constraint and stores it in the provided btVector3.
///
/// @param {Pointer} point2PointConstraint
///     The pointer to the btPoint2PointConstraint.
/// @param {Pointer} outVector3
///     The pointer to a btVector3 to store the pivot point in local space of
///     the first rigid body.
YYEXPORT void btPoint2PointConstraint_getPivotInA(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto point2PointConstraint = (btPoint2PointConstraint*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(point2PointConstraint->getPivotInA(), outVector3);
}

/// @func btPoint2PointConstraint_getPivotInB(point2PointConstraint, outVector3)
///
/// @desc
/// Gets the pivot point in local space for the second rigid body of the
/// point-to-point constraint and stores it in the provided btVector3.
///
/// @param {Pointer} point2PointConstraint
///     The pointer to the btPoint2PointConstraint.
/// @param {Pointer} outVector3
///     The pointer to a btVector3 to store the pivot point in local space of
///     the second rigid body.
YYEXPORT void btPoint2PointConstraint_getPivotInB(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto point2PointConstraint = (btPoint2PointConstraint*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(point2PointConstraint->getPivotInB(), outVector3);
}

// Note: Skipped btPoint2PointConstraint::setParam
// Note: Skipped btPoint2PointConstraint::getParam

/// @func btPoint2PointConstraint_getFlags(point2PointConstraint)
///
/// @desc
/// Gets the flags of the point-to-point constraint.
///
/// @param {Pointer} point2PointConstraint
///     The pointer to the btPoint2PointConstraint.
///
/// @return {Real} Returns an integer representing the flags of the
/// point-to-point constraint.
YYEXPORT void btPoint2PointConstraint_getFlags(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto point2PointConstraint = (btPoint2PointConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.val = point2PointConstraint->getFlags();
}

// Note: Skipped btPoint2PointConstraint::calculateSerializeBufferSize
// Note: Skipped btPoint2PointConstraint::serialize

////////////////////////////////////////////////////////////////////////////////
//
// Note: Skipped btPoint2PointConstraintFloatData
//

////////////////////////////////////////////////////////////////////////////////
//
// Note: Skipped btPoint2PointConstraintDoubleData2
//

////////////////////////////////////////////////////////////////////////////////
//
// Note: Skipped btPoint2PointConstraintDoubleData
//
