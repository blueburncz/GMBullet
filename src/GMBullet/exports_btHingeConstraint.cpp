#include <GMBullet.hpp>

/// @func btHingeConstraint_create1(rigidBodyA, pivotInA, axisInA[, useReferenceFrameA])
///
/// @desc
/// Creates a btHingeConstraint between a single rigid body and a pivot point
/// and axis in the local space of the rigid body.
///
/// @param {Pointer} rigidBodyA
///     The pointer to the btRigidBody representing the first rigid body.
/// @param {Pointer} pivotInA
///     The pointer to the pivot point in the local space of the first rigid
///     body (btVector3).
/// @param {Pointer} axisInA
///     The pointer to the axis in the local space of the first rigid body
///    (btVector3).
/// @param {Bool} [useReferenceFrameA]
///     Indicates whether to use the reference frame of the first rigid body for
///     the constraint. Default is false.
///
/// @return {Pointer} Returns a pointer to the created btHingeConstraint.
YYEXPORT void btHingeConstraint_create1(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto& rigidBodyA = *(btRigidBody*)YYGetPtr(arg, 0);
	auto& pivotInA = *(btVector3*)YYGetPtr(arg, 1);
	auto& axisInA = *(btVector3*)YYGetPtr(arg, 2);
	bool useReferenceFrameA = (argc > 3) ? YYGetBool(arg, 3) : false;
	result.kind = VALUE_PTR;
	result.ptr = new btHingeConstraint(
		rigidBodyA, pivotInA, axisInA, useReferenceFrameA);
}

/// @func btHingeConstraint_create2(rigidBodyA, rigidBodyB, pivotInA, pivotInB, axisInA, axisInB[, useReferenceFrameA])
///
/// @desc
/// Creates a btHingeConstraint between two rigid bodies using specified pivot
/// points and axes in their local spaces.
///
/// @param {Pointer} rigidBodyA
///     The pointer to the first btRigidBody participating in the constraint.
/// @param {Pointer} rigidBodyB
///     The pointer to the second btRigidBody participating in the constraint.
/// @param {Pointer} pivotInA
///     The pointer to the pivot point in the local space of the first rigid
///     body (btVector3).
/// @param {Pointer} pivotInB
///     The pointer to the pivot point in the local space of the second rigid
///     body (btVector3).
/// @param {Pointer} axisInA
///     The pointer to the axis in the local space of the first rigid body
///     (btVector3).
/// @param {Pointer} axisInB
///     The pointer to the axis in the local space of the second rigid body
///     (btVector3).
/// @param {Bool} [useReferenceFrameA]
///     Indicates whether to use the reference frame of the first rigid body for
///     the constraint. Default is false.
///
/// @return {Pointer} Returns a pointer to the created btHingeConstraint.
YYEXPORT void btHingeConstraint_create2(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto& rigidBodyA = *(btRigidBody*)YYGetPtr(arg, 0);
	auto& rigidBodyB = *(btRigidBody*)YYGetPtr(arg, 1);
	auto& pivotInA = *(btVector3*)YYGetPtr(arg, 2);
	auto& pivotInB = *(btVector3*)YYGetPtr(arg, 3);
	auto& axisInA = *(btVector3*)YYGetPtr(arg, 4);
	auto& axisInB = *(btVector3*)YYGetPtr(arg, 5);
	bool useReferenceFrameA = (argc > 6) ? YYGetBool(arg, 6) : false;
	result.kind = VALUE_PTR;
	result.ptr = new btHingeConstraint(
		rigidBodyA, rigidBodyB, pivotInA, pivotInB, axisInA, axisInB, useReferenceFrameA);
}

/// @func btHingeConstraint_create1Transform(rigidBodyA, rigidBodyAFrame[, useReferenceFrameA])
///
/// @desc
/// Creates a btHingeConstraint between a single rigid body and a specified
/// frame in the local space of the rigid body.
///
/// @param {Pointer} rigidBodyA
///     The pointer to the btRigidBody representing the first rigid body.
/// @param {Pointer} rigidBodyAFrame
///     The pointer to the frame in the local space of the first rigid body
///     (btTransform).
/// @param {Bool} [useReferenceFrameA]
///     Indicates whether to use the reference frame of the first rigid body for
///     the constraint. Default is false.
///
/// @return {Pointer} Returns a pointer to the created btHingeConstraint.
YYEXPORT void btHingeConstraint_create1Transform(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto& rigidBodyA = *(btRigidBody*)YYGetPtr(arg, 0);
	auto& rigidBodyAFrame = *(btTransform*)YYGetPtr(arg, 1);
	bool useReferenceFrameA = (argc > 2) ? YYGetBool(arg, 2) : false;
	result.kind = VALUE_PTR;
	result.ptr = new btHingeConstraint(
		rigidBodyA, rigidBodyAFrame, useReferenceFrameA);
}

/// @func btHingeConstraint_create2Transform(rigidBodyA, rigidBodyB, rigidBodyAFrame, rigidBodyBFrame[, useReferenceFrameA])
///
/// @desc
/// Creates a btHingeConstraint between two rigid bodies using specified frames
/// in their local spaces.
///
/// @param {Pointer} rigidBodyA
///     The pointer to the first btRigidBody participating in the constraint.
/// @param {Pointer} rigidBodyB
///     The pointer to the second btRigidBody participating in the constraint.
/// @param {Pointer} rigidBodyAFrame
///     The pointer to the frame in the local space of the first rigid body
///    (btTransform).
/// @param {Pointer} rigidBodyBFrame
///     The pointer to the frame in the local space of the second rigid body
///     (btTransform).
/// @param {Bool} [useReferenceFrameA]
///     Indicates whether to use the reference frame of the first rigid body for
///     the constraint. Default is false.
///
/// @return {Pointer}
///     Returns a pointer to the created btHingeConstraint.
YYEXPORT void btHingeConstraint_create2Transform(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto& rigidBodyA = *(btRigidBody*)YYGetPtr(arg, 0);
	auto& rigidBodyB = *(btRigidBody*)YYGetPtr(arg, 1);
	auto& rigidBodyAFrame = *(btTransform*)YYGetPtr(arg, 2);
	auto& rigidBodyBFrame = *(btTransform*)YYGetPtr(arg, 3);
	bool useReferenceFrameA = (argc > 4) ? YYGetBool(arg, 4) : false;
	result.kind = VALUE_PTR;
	result.ptr = new btHingeConstraint(
		rigidBodyA, rigidBodyB, rigidBodyAFrame, rigidBodyBFrame, useReferenceFrameA);
}

/// @func btHingeConstraint_destroy(hingeConstraint)
///
/// @desc
/// Destroys the btHingeConstraint and releases the allocated memory.
///
/// @param {Pointer} hingeConstraint
///     The pointer to the btHingeConstraint to be destroyed.
YYEXPORT void btHingeConstraint_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btHingeConstraint*)YYGetPtr(arg, 0);
}

// Note: Skipped btHingeConstraint::buildJacobian
// Note: Skipped btHingeConstraint::getInfo1
// Note: Skipped btHingeConstraint::getInfo1NonVirtual
// Note: Skipped btHingeConstraint::getInfo2
// Note: Skipped btHingeConstraint::getInfo2NonVirtual
// Note: Skipped btHingeConstraint::getInfo2Internal
// Note: Skipped btHingeConstraint::getInfo2InternalUsingFrameOffset

/// @func btHingeConstraint_updateRHS(hingeConstraint, timeStep)
///
/// @desc
/// Updates the right-hand side of the hinge constraint based on the given time
/// step.
///
/// @param {Pointer} hingeConstraint
///     The pointer to the btHingeConstraint.
/// @param {Real} timeStep
///     The time step for the update.
YYEXPORT void btHingeConstraint_updateRHS(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hingeConstraint = (btHingeConstraint*)YYGetPtr(arg, 0);
	double timeStep = YYGetReal(arg, 1);
	hingeConstraint->updateRHS(timeStep);
}

/// @func btHingeConstraint_getRigidBodyA(hingeConstraint)
///
/// @desc
/// Gets the first rigid body connected to the hinge constraint.
///
/// @param {Pointer} hingeConstraint
///     The pointer to the btHingeConstraint.
///
/// @return {Pointer} A pointer to the first btRigidBody connected to the hinge
/// constraint.
YYEXPORT void btHingeConstraint_getRigidBodyA(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hingeConstraint = (btHingeConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = const_cast<btRigidBody*>(&hingeConstraint->getRigidBodyA());
}

/// @func btHingeConstraint_getRigidBodyB(hingeConstraint)
///
/// @desc
/// Gets the second rigid body connected to the hinge constraint.
///
/// @param {Pointer} hingeConstraint
///     The pointer to the btHingeConstraint.
///
/// @return {Pointer} A pointer to the second btRigidBody connected to the hinge
/// constraint.
YYEXPORT void btHingeConstraint_getRigidBodyB(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hingeConstraint = (btHingeConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = const_cast<btRigidBody*>(&hingeConstraint->getRigidBodyB());
}

/// @func btHingeConstraint_getFrameOffsetA(hingeConstraint)
///
/// @desc
/// Gets the frame offset of the first rigid body in the hinge constraint.
///
/// @param {Pointer} hingeConstraint
///     The pointer to the btHingeConstraint.
///
/// @return {Pointer} A pointer to the btTransform representing the frame offset
/// for the first rigid body.
YYEXPORT void btHingeConstraint_getFrameOffsetA(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hingeConstraint = (btHingeConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = (btTransform*)&hingeConstraint->getFrameOffsetA();
}

/// @func btHingeConstraint_getFrameOffsetB(hingeConstraint)
///
/// @desc
/// Gets the frame offset of the second rigid body in the hinge constraint.
///
/// @param {Pointer} hingeConstraint
///     The pointer to the btHingeConstraint.
///
/// @return {Pointer} A pointer to the btTransform representing the frame offset
/// for the second rigid body.
YYEXPORT void btHingeConstraint_getFrameOffsetB(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hingeConstraint = (btHingeConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = (btTransform*)&hingeConstraint->getFrameOffsetB();
}

/// @func btHingeConstraint_setFrames(hingeConstraint, frameA, frameB)
///
/// @desc
/// Sets the transformation frames for the hinge constraint.
///
/// @param {Pointer} hingeConstraint
///     The pointer to the btHingeConstraint.
/// @param {Pointer} frameA
///     A pointer to the btTransform representing the frame of the first rigid
///     body.
/// @param {Pointer} frameB
///     A pointer to the btTransform representing the frame of the second rigid
///     body.
YYEXPORT void btHingeConstraint_setFrames(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hingeConstraint = (btHingeConstraint*)YYGetPtr(arg, 0);
	auto& frameA = *(btTransform*)YYGetPtr(arg, 1);
	auto& frameB = *(btTransform*)YYGetPtr(arg, 2);
	hingeConstraint->setFrames(frameA, frameB);
}

/// @func btHingeConstraint_setAngularOnly(hingeConstraint, angularOnly)
///
/// @desc
/// Sets whether the hinge constraint allows only angular motion.
///
/// @param {Pointer} hingeConstraint
///     The pointer to the btHingeConstraint.
/// @param {Bool} angularOnly
///     A boolean indicating whether to allow only angular motion.
YYEXPORT void btHingeConstraint_setAngularOnly(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hingeConstraint = (btHingeConstraint*)YYGetPtr(arg, 0);
	bool angularOnly = YYGetBool(arg, 1);
	hingeConstraint->setAngularOnly(angularOnly);
}

/// @func btHingeConstraint_enableAngularMotor(hingeConstraint, enableMotor, targetVelocity, maxMotorImpulse)
///
/// @desc
/// Enables the angular motor for the hinge constraint with specified parameters.
///
/// @param {Pointer} hingeConstraint
///     The pointer to the btHingeConstraint.
/// @param {Bool} enableMotor
///     A boolean indicating whether to enable the motor.
/// @param {Real} targetVelocity
///     The target angular velocity for the motor.
/// @param {Real} maxMotorImpulse
///     The maximum impulse the motor can apply.
YYEXPORT void btHingeConstraint_enableAngularMotor(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hingeConstraint = (btHingeConstraint*)YYGetPtr(arg, 0);
	bool enableMotor = YYGetBool(arg, 1);
	double targetVelocity = YYGetReal(arg, 2);
	double maxMotorImpulse = YYGetReal(arg, 3);
	hingeConstraint->enableAngularMotor(enableMotor, targetVelocity, maxMotorImpulse);
}

/// @func btHingeConstraint_enableMotor(hingeConstraint, enableMotor)
///
/// @desc
/// Enables or disables the motor for the hinge constraint.
///
/// @param {Pointer} hingeConstraint
///     The pointer to the btHingeConstraint.
/// @param {Bool} enableMotor
///     A boolean indicating whether to enable the motor.
YYEXPORT void btHingeConstraint_enableMotor(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hingeConstraint = (btHingeConstraint*)YYGetPtr(arg, 0);
	bool enableMotor = YYGetBool(arg, 1);
	hingeConstraint->enableMotor(enableMotor);
}

/// @func btHingeConstraint_setMaxMotorImpulse(hingeConstraint, maxMotorImpulse)
///
/// @desc
/// Sets the maximum impulse the motor can apply for the hinge constraint.
///
/// @param {Pointer} hingeConstraint
///     The pointer to the btHingeConstraint.
/// @param {Real} maxMotorImpulse
///     The maximum impulse the motor can apply.
YYEXPORT void btHingeConstraint_setMaxMotorImpulse(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hingeConstraint = (btHingeConstraint*)YYGetPtr(arg, 0);
	double maxMotorImpulse = YYGetReal(arg, 1);
	hingeConstraint->setMaxMotorImpulse(maxMotorImpulse);
}

/// @func btHingeConstraint_setMotorTargetVelocity(hingeConstraint, motorTargetVelocity)
///
/// @desc
/// Sets the target angular velocity for the motor of the hinge constraint.
///
/// @param {Pointer} hingeConstraint
///     The pointer to the btHingeConstraint.
/// @param {Real} motorTargetVelocity
///     The target angular velocity for the motor.
YYEXPORT void btHingeConstraint_setMotorTargetVelocity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hingeConstraint = (btHingeConstraint*)YYGetPtr(arg, 0);
	double motorTargetVelocity = YYGetReal(arg, 1);
	hingeConstraint->setMotorTargetVelocity(motorTargetVelocity);
}

/// @func btHingeConstraint_setMotorTargetQuaternion(hingeConstraint, qAinB, dt)
///
/// @desc
/// Sets the target rotation for the motor using a quaternion for the hinge
/// constraint.
///
/// @param {Pointer} hingeConstraint
///     The pointer to the btHingeConstraint.
/// @param {Pointer} qAinB
///     A pointer to the btQuaternion representing the target rotation.
/// @param {Real} dt
///     The time step for the motor.
YYEXPORT void btHingeConstraint_setMotorTargetQuaternion(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hingeConstraint = (btHingeConstraint*)YYGetPtr(arg, 0);
	auto& qAinB = *(btQuaternion*)YYGetPtr(arg, 1);
	double dt = YYGetReal(arg, 2);
	hingeConstraint->setMotorTarget(qAinB, dt);
}

/// @func btHingeConstraint_setMotorTargetAngle(hingeConstraint, targetAngle, dt)
///
/// @desc
/// Sets the target angle for the motor for the hinge constraint.
///
/// @param {Pointer} hingeConstraint
///     The pointer to the btHingeConstraint.
/// @param {Real} targetAngle
///     The target angle for the motor.
/// @param {Real} dt
///     The time step for the motor.
YYEXPORT void btHingeConstraint_setMotorTargetAngle(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hingeConstraint = (btHingeConstraint*)YYGetPtr(arg, 0);
	double targetAngle = YYGetReal(arg, 1);
	double dt = YYGetReal(arg, 2);
	hingeConstraint->setMotorTarget(targetAngle, dt);
}

/// @func btHingeConstraint_setLimit(hingeConstraint, low, high[, softness[, biasFactor[, relaxationFactor]]])
///
/// @desc
/// Sets the limits for the hinge constraint.
///
/// @param {Pointer} hingeConstraint
///     The pointer to the btHingeConstraint.
/// @param {Real} low
///     The lower limit for the hinge angle.
/// @param {Real} high
///     The upper limit for the hinge angle.
/// @param {Real} [softness]
///     The softness for the limits. Default is 0.9.
/// @param {Real} [biasFactor]
///     The bias factor for the limits. Default is 0.3.
/// @param {Real} [relaxationFactor]
///     The relaxation factor for the limits. Default is 1.0.
YYEXPORT void btHingeConstraint_setLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hingeConstraint = (btHingeConstraint*)YYGetPtr(arg, 0);
	double low = YYGetReal(arg, 1);
	double high = YYGetReal(arg, 2);
	double softness = (argc > 3) ? YYGetReal(arg, 3) : 0.9;
	double biasFactor = (argc > 4) ? YYGetReal(arg, 4) : 0.3;
	double relaxationFactor = (argc > 5) ? YYGetReal(arg, 5) : 1.0;
	hingeConstraint->setLimit(low, high, softness, biasFactor, relaxationFactor);
}

/// @func btHingeConstraint_getLimitSoftness(hingeConstraint)
///
/// @desc
/// Gets the softness parameter for the hinge constraint's limits.
///
/// @param {Pointer} hingeConstraint
///     The pointer to the btHingeConstraint.
///
/// @return {Real} The softness parameter for the limits.
YYEXPORT void btHingeConstraint_getLimitSoftness(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hingeConstraint = (btHingeConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = hingeConstraint->getLimitSoftness();
}

/// @func btHingeConstraint_getLimitBiasFactor(hingeConstraint)
///
/// @desc
/// Gets the bias factor parameter for the hinge constraint's limits.
///
/// @param {Pointer} hingeConstraint
///     The pointer to the btHingeConstraint.
///
/// @return {Real} The bias factor parameter for the limits.
YYEXPORT void btHingeConstraint_getLimitBiasFactor(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hingeConstraint = (btHingeConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = hingeConstraint->getLimitBiasFactor();
}

/// @func btHingeConstraint_getLimitRelaxationFactor(hingeConstraint)
///
/// @desc
/// Gets the relaxation factor parameter for the hinge constraint's limits.
///
/// @param {Pointer} hingeConstraint
///     The pointer to the btHingeConstraint.
///
/// @return {Real} The relaxation factor parameter for the limits.
YYEXPORT void btHingeConstraint_getLimitRelaxationFactor(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hingeConstraint = (btHingeConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = hingeConstraint->getLimitRelaxationFactor();
}

/// @func btHingeConstraint_setAxis(hingeConstraint, axisInA)
///
/// @desc
/// Sets the axis for the hinge constraint.
///
/// @param {Pointer} hingeConstraint
///     The pointer to the btHingeConstraint.
/// @param {Pointer} axisInA
///     The axis in local space of the first rigid body, represented as a
///     btVector3.
YYEXPORT void btHingeConstraint_setAxis(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hingeConstraint = (btHingeConstraint*)YYGetPtr(arg, 0);
	auto& axisInA = *(btVector3*)YYGetPtr(arg, 1);
	hingeConstraint->setAxis(axisInA);
}

/// @func btHingeConstraint_setAxisXYZ(hingeConstraint, axisInAX, axisInAY, axisInAZ)
///
/// @desc
/// Sets the axis for the hinge constraint using individual components.
///
/// @param {Pointer} hingeConstraint
///     The pointer to the btHingeConstraint.
/// @param {Real} axisInAX
///     The x-component of the axis in local space of the first rigid body.
/// @param {Real} axisInAY
///     The y-component of the axis in local space of the first rigid body.
/// @param {Real} axisInAZ
///     The z-component of the axis in local space of the first rigid body.
YYEXPORT void btHingeConstraint_setAxisXYZ(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hingeConstraint = (btHingeConstraint*)YYGetPtr(arg, 0);
	double axisInAX = YYGetReal(arg, 1);
	double axisInAY = YYGetReal(arg, 2);
	double axisInAZ = YYGetReal(arg, 3);
	btVector3 axisInA(axisInAX, axisInAY, axisInAZ);
	hingeConstraint->setAxis(axisInA);
}

/// @func btHingeConstraint_hasLimit(hingeConstraint)
///
/// @desc
/// Checks if the hinge constraint has a defined limit.
///
/// @param {Pointer} hingeConstraint
///     The pointer to the btHingeConstraint.
///
/// @return {Bool} Returns true if the hinge constraint has a limit, false
/// otherwise.
YYEXPORT void btHingeConstraint_hasLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hingeConstraint = (btHingeConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = hingeConstraint->hasLimit();
}

/// @func btHingeConstraint_getLowerLimit(hingeConstraint)
///
/// @desc
/// Gets the lower limit of the hinge constraint.
///
/// @param {Pointer} hingeConstraint
///     The pointer to the btHingeConstraint.
///
/// @return {Real} The lower limit of the hinge constraint in radians.
YYEXPORT void btHingeConstraint_getLowerLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hingeConstraint = (btHingeConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = hingeConstraint->getLowerLimit();
}

/// @func btHingeConstraint_getUpperLimit(hingeConstraint)
///
/// @desc
/// Gets the upper limit of the hinge constraint.
///
/// @param {Pointer} hingeConstraint
///     The pointer to the btHingeConstraint.
///
/// @return {Real} The upper limit of the hinge constraint in radians.
YYEXPORT void btHingeConstraint_getUpperLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hingeConstraint = (btHingeConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = hingeConstraint->getUpperLimit();
}

/// @func btHingeConstraint_getHingeAngle(hingeConstraint)
///
/// @desc
/// Gets the hinge angle of the hinge constraint.
///
/// @param {Pointer} hingeConstraint
///     The pointer to the btHingeConstraint.
///
/// @return {Real} The hinge angle in radians.
YYEXPORT void btHingeConstraint_getHingeAngle(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hingeConstraint = (btHingeConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = hingeConstraint->getHingeAngle();
}

/// @func btHingeConstraint_getHingeAngleTransform(hingeConstraint, transA, transB)
///
/// @desc
/// Gets the hinge angle of the hinge constraint using specified transforms.
///
/// @param {Pointer} hingeConstraint
///     The pointer to the btHingeConstraint.
/// @param {Pointer} transA
///     The transform for the first body.
/// @param {Pointer} transB
///     The transform for the second body.
///
/// @return {Real} The hinge angle in radians.
YYEXPORT void btHingeConstraint_getHingeAngleTransform(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hingeConstraint = (btHingeConstraint*)YYGetPtr(arg, 0);
	auto& transA = *(btTransform*)YYGetPtr(arg, 1);
	auto& transB = *(btTransform*)YYGetPtr(arg, 2);
	result.kind = VALUE_REAL;
	result.val = hingeConstraint->getHingeAngle(transA, transB);
}

/// @func btHingeConstraint_testLimit(hingeConstraint, transA, transB)
///
/// @desc
/// Tests the hinge angle against the limits of the hinge constraint using
/// specified transforms.
///
/// @param {Pointer} hingeConstraint
///     The pointer to the btHingeConstraint.
/// @param {Pointer} transA
///     The transform for the first body.
/// @param {Pointer} transB
///     The transform for the second body.
YYEXPORT void btHingeConstraint_testLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hingeConstraint = (btHingeConstraint*)YYGetPtr(arg, 0);
	auto& transA = *(btTransform*)YYGetPtr(arg, 1);
	auto& transB = *(btTransform*)YYGetPtr(arg, 2);
	hingeConstraint->testLimit(transA, transB);
}

/// @func btHingeConstraint_getAFrame(hingeConstraint)
///
/// @desc
/// Gets the A frame of the hinge constraint.
///
/// @param {Pointer} hingeConstraint
///     The pointer to the btHingeConstraint.
///
/// @return {Pointer} A pointer to the btTransform representing the A frame.
YYEXPORT void btHingeConstraint_getAFrame(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hingeConstraint = (btHingeConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = (btTransform*)&hingeConstraint->getAFrame();
}

/// @func btHingeConstraint_getBFrame(hingeConstraint)
///
/// @desc
/// Gets the B frame of the hinge constraint.
///
/// @param {Pointer} hingeConstraint
///     The pointer to the btHingeConstraint.
///
/// @return {Pointer} A pointer to the btTransform representing the B frame.
YYEXPORT void btHingeConstraint_getBFrame(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hingeConstraint = (btHingeConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = (btTransform*)&hingeConstraint->getBFrame();
}

/// @func btHingeConstraint_getSolveLimit(hingeConstraint)
///
/// @desc
/// Gets the flag indicating whether the limits are solved.
///
/// @param {Pointer} hingeConstraint
///     The pointer to the btHingeConstraint.
///
/// @return {Real} Returns 1 if the limits are solved, 0 otherwise.
YYEXPORT void btHingeConstraint_getSolveLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hingeConstraint = (btHingeConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.val = hingeConstraint->getSolveLimit();
}

/// @func btHingeConstraint_getLimitSign(hingeConstraint)
///
/// @desc
/// Gets the sign of the hinge constraint's applied limits.
///
/// @param {Pointer} hingeConstraint
///     The pointer to the btHingeConstraint.
///
/// @return {Real} Returns the sign of the applied limits. 1 for positive, -1
/// for negative.
YYEXPORT void btHingeConstraint_getLimitSign(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hingeConstraint = (btHingeConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = hingeConstraint->getLimitSign();
}

/// @func btHingeConstraint_getAngularOnly(hingeConstraint)
///
/// @desc
/// Gets a boolean indicating if the hinge constraint is angular only.
///
/// @param {Pointer} hingeConstraint
///     The pointer to the btHingeConstraint.
///
/// @return {Bool} Returns true if the constraint is angular only, false
/// otherwise.
YYEXPORT void btHingeConstraint_getAngularOnly(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hingeConstraint = (btHingeConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = hingeConstraint->getAngularOnly();
}

/// @func btHingeConstraint_getEnableAngularMotor(hingeConstraint)
///
/// @desc
/// Gets a boolean indicating if the angular motor is enabled for the hinge
/// constraint.
///
/// @param {Pointer} hingeConstraint
///     The pointer to the btHingeConstraint.
///
/// @return {Bool} Returns true if the angular motor is enabled, false otherwise.
YYEXPORT void btHingeConstraint_getEnableAngularMotor(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hingeConstraint = (btHingeConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = hingeConstraint->getEnableAngularMotor();
}

/// @func btHingeConstraint_getMotorTargetVelocity(hingeConstraint)
///
/// @desc
/// Gets the target velocity of the angular motor for the hinge constraint.
///
/// @param {Pointer} hingeConstraint
///     The pointer to the btHingeConstraint.
///
/// @return {Real} Returns the target velocity for the angular motor.
YYEXPORT void btHingeConstraint_getMotorTargetVelocity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hingeConstraint = (btHingeConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = hingeConstraint->getMotorTargetVelocity();
}

/// @func btHingeConstraint_getMaxMotorImpulse(hingeConstraint)
///
/// @desc
/// Gets the maximum motor impulse for the hinge constraint.
///
/// @param {Pointer} hingeConstraint
///     The pointer to the btHingeConstraint.
///
/// @return {Real} Returns the maximum motor impulse for the hinge constraint.
YYEXPORT void btHingeConstraint_getMaxMotorImpulse(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hingeConstraint = (btHingeConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = hingeConstraint->getMaxMotorImpulse();
}

/// @func btHingeConstraint_getUseFrameOffset(hingeConstraint)
///
/// @desc
/// Gets whether the hinge constraint uses frame offset.
///
/// @param {Pointer} hingeConstraint
///     The pointer to the btHingeConstraint.
///
/// @return {Bool} Returns true if the hinge constraint uses frame offset, false
/// otherwise.
YYEXPORT void btHingeConstraint_getUseFrameOffset(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hingeConstraint = (btHingeConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = hingeConstraint->getUseFrameOffset();
}

/// @func btHingeConstraint_setUseFrameOffset(hingeConstraint, frameOffsetOnOff)
///
/// @desc
/// Sets whether the hinge constraint uses frame offset.
///
/// @param {Pointer} hingeConstraint
///     The pointer to the btHingeConstraint.
/// @param {Bool} frameOffsetOnOff
///     True to enable frame offset, false to disable.
YYEXPORT void btHingeConstraint_setUseFrameOffset(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hingeConstraint = (btHingeConstraint*)YYGetPtr(arg, 0);
	bool frameOffsetOnOff = YYGetBool(arg, 1);
	hingeConstraint->setUseFrameOffset(frameOffsetOnOff);
}

/// @func btHingeConstraint_getUseReferenceFrameA(hingeConstraint)
///
/// @desc
/// Gets whether the hinge constraint uses reference frame A.
///
/// @param {Pointer} hingeConstraint
///     The pointer to the btHingeConstraint.
///
/// @return {Bool} Returns true if the hinge constraint uses reference frame A,
/// false otherwise.
YYEXPORT void btHingeConstraint_getUseReferenceFrameA(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hingeConstraint = (btHingeConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = hingeConstraint->getUseReferenceFrameA();
}

/// @func btHingeConstraint_setUseReferenceFrameA(hingeConstraint, useReferenceFrameA)
///
/// @desc
/// Sets whether the hinge constraint uses reference frame A.
///
/// @param {Pointer} hingeConstraint
///     The pointer to the btHingeConstraint.
/// @param {Bool} useReferenceFrameA
///     True to enable reference frame A, false to disable.
YYEXPORT void btHingeConstraint_setUseReferenceFrameA(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hingeConstraint = (btHingeConstraint*)YYGetPtr(arg, 0);
	bool useReferenceFrameA = YYGetBool(arg, 1);
	hingeConstraint->setUseReferenceFrameA(useReferenceFrameA);
}

// Note: Skipped btHingeConstraint::setParam
// Note: Skipped btHingeConstraint::getParam

/// @func btHingeConstraint_getFlags(hingeConstraint)
///
/// @desc
/// Gets the flags associated with the hinge constraint.
///
/// @param {Pointer} hingeConstraint
///     The pointer to the btHingeConstraint.
///
/// @return {Real} Returns the flags associated with the hinge constraint.
YYEXPORT void btHingeConstraint_getFlags(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hingeConstraint = (btHingeConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.val = hingeConstraint->getFlags();
}

// Note: Skipped btHingeConstraint::calculateSerializeBufferSize
// Note: Skipped btHingeConstraint::serialize

////////////////////////////////////////////////////////////////////////////////
//
// Note: Skipped btHingeConstraintDoubleData
//

////////////////////////////////////////////////////////////////////////////////
//
// btHingeAccumulatedAngleConstraint
//

/// @func btHingeAccumulatedAngleConstraint_create1(rigidBodyA, pivotInA, axisInA[, useReferenceFrameA])
///
/// @desc
/// Creates a hinge constraint with accumulated angle and links it to a single
/// rigid body.
///
/// @param {Pointer} rigidBodyA
///     The pointer to the first rigid body.
/// @param {Pointer} pivotInA
///     The pivot point in local space of the first rigid body.
/// @param {Pointer} axisInA
///     The axis in local space of the first rigid body around which the hinge
///     rotates.
/// @param {Bool} [useReferenceFrameA]
///     A boolean indicating whether to use the reference frame of the first
///     body. Default is false.
///
/// @return {Pointer} Returns a pointer to the created hinge constraint with
/// accumulated angle.
YYEXPORT void btHingeAccumulatedAngleConstraint_create1(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto& rigidBodyA = *(btRigidBody*)YYGetPtr(arg, 0);
	auto& pivotInA = *(btVector3*)YYGetPtr(arg, 1);
	auto& axisInA = *(btVector3*)YYGetPtr(arg, 2);
	bool useReferenceFrameA = (argc > 3) ? YYGetBool(arg, 3) : false;
	result.kind = VALUE_PTR;
	result.ptr = new btHingeAccumulatedAngleConstraint(
		rigidBodyA, pivotInA, axisInA, useReferenceFrameA);
}

/// @func btHingeAccumulatedAngleConstraint_create2(rigidBodyA, rigidBodyB, pivotInA, pivotInB, axisInA, axisInB[, useReferenceFrameA])
///
/// @desc
/// Creates a hinge constraint with accumulated angle and links it to two rigid
/// bodies.
///
/// @param {Pointer} rigidBodyA
///     The pointer to the first rigid body.
/// @param {Pointer} rigidBodyB
///     The pointer to the second rigid body.
/// @param {Pointer} pivotInA
///     The pivot point in local space of the first rigid body.
/// @param {Pointer} pivotInB
///     The pivot point in local space of the second rigid body.
/// @param {Pointer} axisInA
///     The axis in local space of the first rigid body around which the hinge
///     rotates.
/// @param {Pointer} axisInB
///     The axis in local space of the second rigid body around which the hinge
///     rotates.
/// @param {Bool} [useReferenceFrameA]
///     A boolean indicating whether to use the reference frame of the first
///     body. Default is false.
///
/// @return {Pointer} Returns a pointer to the created hinge constraint with
/// accumulated angle.
YYEXPORT void btHingeAccumulatedAngleConstraint_create2(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto& rigidBodyA = *(btRigidBody*)YYGetPtr(arg, 0);
	auto& rigidBodyB = *(btRigidBody*)YYGetPtr(arg, 1);
	auto& pivotInA = *(btVector3*)YYGetPtr(arg, 2);
	auto& pivotInB = *(btVector3*)YYGetPtr(arg, 3);
	auto& axisInA = *(btVector3*)YYGetPtr(arg, 4);
	auto& axisInB = *(btVector3*)YYGetPtr(arg, 5);
	bool useReferenceFrameA = (argc > 6) ? YYGetBool(arg, 6) : false;
	result.kind = VALUE_PTR;
	result.ptr = new btHingeAccumulatedAngleConstraint(
		rigidBodyA, rigidBodyB, pivotInA, pivotInB, axisInA, axisInB, useReferenceFrameA);
}

/// @func btHingeAccumulatedAngleConstraint_create1Transform(rigidBodyA, rigidBodyAFrame[, useReferenceFrameA])
///
/// @desc
/// Creates a hinge constraint with accumulated angle and links it to a single
/// rigid body using transforms.
///
/// @param {Pointer} rigidBodyA
///     The pointer to the first rigid body.
/// @param {Pointer} rigidBodyAFrame
///     The transform representing the frame of the first rigid body.
/// @param {Bool} [useReferenceFrameA]
///     A boolean indicating whether to use the reference frame of the first
///     body. Default is false.
///
/// @return {Pointer} Returns a pointer to the created hinge constraint with
/// accumulated angle.
YYEXPORT void btHingeAccumulatedAngleConstraint_create1Transform(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto& rigidBodyA = *(btRigidBody*)YYGetPtr(arg, 0);
	auto& rigidBodyAFrame = *(btTransform*)YYGetPtr(arg, 1);
	bool useReferenceFrameA = (argc > 2) ? YYGetBool(arg, 2) : false;
	result.kind = VALUE_PTR;
	result.ptr = new btHingeAccumulatedAngleConstraint(
		rigidBodyA, rigidBodyAFrame, useReferenceFrameA);
}

/// @func btHingeAccumulatedAngleConstraint_create2Transform(rigidBodyA, rigidBodyB, rigidBodyAFrame, rigidBodyBFrame[, useReferenceFrameA])
///
/// @desc
/// Creates a hinge constraint with accumulated angle and links it to two rigid
/// bodies using transforms.
///
/// @param {Pointer} rigidBodyA
///     The pointer to the first rigid body.
/// @param {Pointer} rigidBodyB
///     The pointer to the second rigid body.
/// @param {Pointer} rigidBodyAFrame
///     The transform representing the frame of the first rigid body.
/// @param {Pointer} rigidBodyBFrame
///     The transform representing the frame of the second rigid body.
/// @param {Bool} [useReferenceFrameA]
///     A boolean indicating whether to use the reference frame of the first
///     body. Default is false.
///
/// @return {Pointer} Returns a pointer to the created hinge constraint with
/// accumulated angle.
YYEXPORT void btHingeAccumulatedAngleConstraint_create2Transform(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto& rigidBodyA = *(btRigidBody*)YYGetPtr(arg, 0);
	auto& rigidBodyB = *(btRigidBody*)YYGetPtr(arg, 1);
	auto& rigidBodyAFrame = *(btTransform*)YYGetPtr(arg, 2);
	auto& rigidBodyBFrame = *(btTransform*)YYGetPtr(arg, 3);
	bool useReferenceFrameA = (argc > 4) ? YYGetBool(arg, 4) : false;
	result.kind = VALUE_PTR;
	result.ptr = new btHingeAccumulatedAngleConstraint(
		rigidBodyA, rigidBodyB, rigidBodyAFrame, rigidBodyBFrame, useReferenceFrameA);
}

/// @func btHingeAccumulatedAngleConstraint_destroy(hingeAccumulatedAngleConstraint)
///
/// @desc
/// Destroys a previously created hinge constraint with accumulated angle.
///
/// @param {Pointer} hingeAccumulatedAngleConstraint
///     The pointer to the hinge constraint to be destroyed.
YYEXPORT void btHingeAccumulatedAngleConstraint_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btHingeAccumulatedAngleConstraint*)YYGetPtr(arg, 0);
}

/// @func btHingeAccumulatedAngleConstraint_getAccumulatedHingeAngle(hingeAccumulatedAngleConstraint)
///
/// @desc
/// Gets the accumulated hinge angle of the hinge constraint.
///
/// @param {Pointer} hingeAccumulatedAngleConstraint
///     The pointer to the hinge constraint.
///
/// @return {Real} Returns the accumulated hinge angle in radians.
YYEXPORT void btHingeAccumulatedAngleConstraint_getAccumulatedHingeAngle(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hingeAccumulatedAngleConstraint = (btHingeAccumulatedAngleConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = hingeAccumulatedAngleConstraint->getAccumulatedHingeAngle();
}

/// @func btHingeAccumulatedAngleConstraint_setAccumulatedHingeAngle(hingeAccumulatedAngleConstraint, accAngle)
///
/// @desc
/// Sets the accumulated hinge angle of the hinge constraint.
///
/// @param {Pointer} hingeAccumulatedAngleConstraint
///     The pointer to the hinge constraint.
/// @param {Real} accAngle
///     The accumulated hinge angle to be set in radians.
YYEXPORT void btHingeAccumulatedAngleConstraint_setAccumulatedHingeAngle(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto hingeAccumulatedAngleConstraint = (btHingeAccumulatedAngleConstraint*)YYGetPtr(arg, 0);
	double accAngle = YYGetReal(arg, 1);
	hingeAccumulatedAngleConstraint->setAccumulatedHingeAngle(accAngle);
}

// Note: Skipped btHingeAccumulatedAngleConstraint::getInfo1

////////////////////////////////////////////////////////////////////////////////
//
// Note: Skipped btHingeConstraintFloatData
//

////////////////////////////////////////////////////////////////////////////////
//
// Note: Skipped btHingeConstraintDoubleData2
//
