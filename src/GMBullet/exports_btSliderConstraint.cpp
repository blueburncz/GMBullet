#include <GMBullet.hpp>

/// @func btSliderConstraint_create1(rigidBodyB, transformB, useLinearReferenceFrameA)
///
/// @desc
/// Creates a slider constraint between rigidBodyB and a specified transform,
/// optionally using a linear reference frame A.
///
/// @param {Pointer} rigidBodyB
///     Pointer to the btRigidBody instance for rigid body B.
/// @param {Pointer} transformB
///     Pointer to the btTransform instance specifying the transform for rigid
///     body B.
/// @param {Bool} useLinearReferenceFrameA
///     A boolean indicating whether to use a linear reference frame A for the
///     constraint.
///
/// @return {Pointer} Returns a pointer to the created btSliderConstraint
/// instance.
YYEXPORT void btSliderConstraint_create1(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto& rigidBodyB = *(btRigidBody*)YYGetPtr(arg, 0);
	auto& transformB = *(btTransform*)YYGetPtr(arg, 1);
	bool useLinearReferenceFrameA = YYGetBool(arg, 2);
	result.kind = VALUE_PTR;
	result.ptr = new btSliderConstraint(
		rigidBodyB, transformB, useLinearReferenceFrameA);
}

/// @func btSliderConstraint_create2(rigidBodyA, rigidBodyB, transformA, transformB, useLinearReferenceFrameA)
///
/// @desc
/// Creates a slider constraint between rigidBodyA and rigidBodyB with specified
/// transforms, optionally using a linear reference frame A.
///
/// @param {Pointer} rigidBodyA
///     Pointer to the btRigidBody instance for rigid body A.
/// @param {Pointer} rigidBodyB
///     Pointer to the btRigidBody instance for rigid body B.
/// @param {Pointer} transformA
///     Pointer to the btTransform instance specifying the transform for rigid
///     body A.
/// @param {Pointer} transformB
///     Pointer to the btTransform instance specifying the transform for rigid
///     body B.
/// @param {Bool} useLinearReferenceFrameA
///     A boolean indicating whether to use a linear reference frame A for the
///     constraint.
///
/// @return {Pointer} Returns a pointer to the created btSliderConstraint
/// instance.
YYEXPORT void btSliderConstraint_create2(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto& rigidBodyA = *(btRigidBody*)YYGetPtr(arg, 0);
	auto& rigidBodyB = *(btRigidBody*)YYGetPtr(arg, 1);
	auto& transformA = *(btTransform*)YYGetPtr(arg, 2);
	auto& transformB = *(btTransform*)YYGetPtr(arg, 3);
	bool useLinearReferenceFrameA = YYGetBool(arg, 4);
	result.kind = VALUE_PTR;
	result.ptr = new btSliderConstraint(
		rigidBodyA, rigidBodyB, transformA, transformB, useLinearReferenceFrameA);
}

/// @func btSliderConstraint_destroy(sliderConstraint)
///
/// @desc
/// Destroys the specified slider constraint, releasing its allocated resources.
///
/// @param {Pointer} sliderConstraint
///     Pointer to the btSliderConstraint instance to be destroyed.
YYEXPORT void btSliderConstraint_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btSliderConstraint*)YYGetPtr(arg, 0);
}

// Note: Skipped btSliderConstraint::getInfo1
// Note: Skipped btSliderConstraint::getInfo1NonVirtual
// Note: Skipped btSliderConstraint::getInfo2
// Note: Skipped btSliderConstraint::getInfo2NonVirtual

/// @func btSliderConstraint_getRigidBodyA(sliderConstraint)
///
/// @desc
/// Gets the pointer to the rigid body associated with the first end of the
/// slider constraint.
///
/// @param {Pointer} sliderConstraint
///     Pointer to the btSliderConstraint instance.
///
/// @return {Pointer} Returns a pointer to the btRigidBody associated with the
/// first end of the slider constraint.
YYEXPORT void btSliderConstraint_getRigidBodyA(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = const_cast<btRigidBody*>(&sliderConstraint->getRigidBodyA());
}

/// @func btSliderConstraint_getRigidBodyB(sliderConstraint)
///
/// @desc
/// Gets the pointer to the rigid body associated with the second end of the
/// slider constraint.
///
/// @param {Pointer} sliderConstraint
///     Pointer to the btSliderConstraint instance.
///
/// @return {Pointer} Returns a pointer to the btRigidBody associated with the
/// second end of the slider constraint.
YYEXPORT void btSliderConstraint_getRigidBodyB(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = const_cast<btRigidBody*>(&sliderConstraint->getRigidBodyB());
}

/// @func btSliderConstraint_getCalculatedTransformA(sliderConstraint)
///
/// @desc
/// Gets the calculated transform of the first rigid body in the slider
/// constraint.
///
/// @param {Pointer} sliderConstraint
///     Pointer to the btSliderConstraint instance.
///
/// @return {Pointer} Returns a pointer to the calculated btTransform of the
/// first rigid body in the slider constraint.
YYEXPORT void btSliderConstraint_getCalculatedTransformA(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = const_cast<btTransform*>(&sliderConstraint->getCalculatedTransformA());
}

/// @func btSliderConstraint_getCalculatedTransformB(sliderConstraint)
///
/// @desc
/// Gets the calculated transform of the second rigid body in the slider
/// constraint.
///
/// @param {Pointer} sliderConstraint
///     Pointer to the btSliderConstraint instance.
///
/// @return {Pointer} Returns a pointer to the calculated btTransform of the
/// second rigid body in the slider constraint.
YYEXPORT void btSliderConstraint_getCalculatedTransformB(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = const_cast<btTransform*>(&sliderConstraint->getCalculatedTransformB());
}

/// @func btSliderConstraint_getFrameOffsetA(sliderConstraint)
///
/// @desc
/// Gets the frame offset A of a btSliderConstraint instance. The frame offset A
/// represents the transformation of the first rigid body in the slider
/// constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
///
/// @return {Pointer} Returns a pointer to the btTransform representing the
/// frame offset A of the slider constraint's first rigid body.
YYEXPORT void btSliderConstraint_getFrameOffsetA(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = (btTransform*)&sliderConstraint->getFrameOffsetA();
}

/// @func btSliderConstraint_getFrameOffsetB(sliderConstraint)
///
/// @desc
/// Gets the frame offset B of a btSliderConstraint instance. The frame offset B
/// represents the transformation of the second rigid body in the slider
/// constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
///
/// @return {Pointer} Returns a pointer to the btTransform representing the
/// frame offset B of the slider constraint's second rigid body.
YYEXPORT void btSliderConstraint_getFrameOffsetB(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = (btTransform*)&sliderConstraint->getFrameOffsetB();
}

/// @func btSliderConstraint_getLowerLinLimit(sliderConstraint)
///
/// @desc
/// Gets the lower linear limit of a btSliderConstraint instance. The lower
/// linear limit represents the minimum allowable linear movement along the
/// slider's axis.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
///
/// @return {Real} Returns the lower linear limit as a real value.
YYEXPORT void btSliderConstraint_getLowerLinLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = sliderConstraint->getLowerLinLimit();
}

/// @func btSliderConstraint_setLowerLinLimit(sliderConstraint, lowerLimit)
///
/// @desc
/// Sets the lower linear limit of a btSliderConstraint instance. The lower
/// linear limit represents the minimum allowable linear movement along the
/// slider's axis.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
/// @param {Real} lowerLimit
///     The lower linear limit to be set.
YYEXPORT void btSliderConstraint_setLowerLinLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	double lowerLimit = YYGetReal(arg, 1);
	sliderConstraint->setLowerLinLimit(lowerLimit);
}

/// @func btSliderConstraint_getUpperLinLimit(sliderConstraint)
///
/// @desc
/// Gets the upper linear limit of a btSliderConstraint instance. The upper
/// linear limit represents the maximum allowable linear movement along the
/// slider's axis.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
///
/// @return {Real} Returns the upper linear limit as a real value.
YYEXPORT void btSliderConstraint_getUpperLinLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = sliderConstraint->getUpperLinLimit();
}

/// @func btSliderConstraint_setUpperLinLimit(sliderConstraint, upperLimit)
///
/// @desc
/// Sets the upper linear limit of a btSliderConstraint instance. The upper
/// linear limit represents the maximum allowable linear movement along the
/// slider's axis.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
/// @param {Real} upperLimit
///     The upper linear limit to be set.
YYEXPORT void btSliderConstraint_setUpperLinLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	double upperLimit = YYGetReal(arg, 1);
	sliderConstraint->setUpperLinLimit(upperLimit);
}

/// @func btSliderConstraint_getLowerAngLimit(sliderConstraint)
///
/// @desc
/// Gets the lower angular limit of a btSliderConstraint instance. The lower
/// angular limit represents the minimum allowable angular movement around the
/// slider's axis.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
///
/// @return {Real} Returns the lower angular limit as a real value.
YYEXPORT void btSliderConstraint_getLowerAngLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = sliderConstraint->getLowerAngLimit();
}
/// @func btSliderConstraint_setLowerAngLimit(sliderConstraint, lowerLimit)
///
/// @desc
/// Sets the lower angular limit of a btSliderConstraint instance. The lower
/// angular limit represents the minimum allowable angular movement around the
/// slider's axis.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
/// @param {Real} lowerLimit
///     The lower angular limit to be set.
YYEXPORT void btSliderConstraint_setLowerAngLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	double lowerLimit = YYGetReal(arg, 1);
	sliderConstraint->setLowerAngLimit(lowerLimit);
}

/// @func btSliderConstraint_getUpperAngLimit(sliderConstraint)
///
/// @desc
/// Gets the upper angular limit of a btSliderConstraint instance. The upper
/// angular limit represents the maximum allowable angular movement around the
/// slider's axis.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
///
/// @return {Real} Returns the upper angular limit as a real value.
YYEXPORT void btSliderConstraint_getUpperAngLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = sliderConstraint->getUpperAngLimit();
}

/// @func btSliderConstraint_setUpperAngLimit(sliderConstraint, upperLimit)
///
/// @desc
/// Sets the upper angular limit of a btSliderConstraint instance. The upper
/// angular limit represents the maximum allowable angular movement around the
/// slider's axis.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
/// @param {Real} upperLimit
///     The upper angular limit to be set.
YYEXPORT void btSliderConstraint_setUpperAngLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	double upperLimit = YYGetReal(arg, 1);
	sliderConstraint->setUpperAngLimit(upperLimit);
}

/// @func btSliderConstraint_getUseLinearReferenceFrameA(sliderConstraint)
///
/// @desc
/// Gets whether the linear reference frame A is being used in the slider
/// constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
///
/// @return {Bool} Returns a boolean indicating whether the linear reference
/// frame A is being used.
YYEXPORT void btSliderConstraint_getUseLinearReferenceFrameA(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = sliderConstraint->getUseLinearReferenceFrameA();
}

/// @func btSliderConstraint_getSoftnessDirLin(sliderConstraint)
///
/// @desc
/// Gets the softness value for linear direction in the slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
///
/// @return {Real} Returns the softness value for linear direction.
YYEXPORT void btSliderConstraint_getSoftnessDirLin(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = sliderConstraint->getSoftnessDirLin();
}

/// @func btSliderConstraint_getRestitutionDirLin(sliderConstraint)
///
/// @desc
/// Gets the restitution value for linear direction in the slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
///
/// @return {Real} Returns the restitution value for linear direction.
YYEXPORT void btSliderConstraint_getRestitutionDirLin(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = sliderConstraint->getRestitutionDirLin();
}

/// @func btSliderConstraint_getDampingDirLin(sliderConstraint)
///
/// @desc
/// Gets the damping value for linear direction in the slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
///
/// @return {Real} Returns the damping value for linear direction.
YYEXPORT void btSliderConstraint_getDampingDirLin(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = sliderConstraint->getDampingDirLin();
}

/// @func btSliderConstraint_getSoftnessDirAng(sliderConstraint)
///
/// @desc
/// Gets the softness value for angular direction in the slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
///
/// @return {Real} Returns the softness value for angular direction.
YYEXPORT void btSliderConstraint_getSoftnessDirAng(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = sliderConstraint->getSoftnessDirAng();
}

/// @func btSliderConstraint_getRestitutionDirAng(sliderConstraint)
///
/// @desc
/// Gets the restitution value for angular direction in the slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
///
/// @return {Real} Returns the restitution value for angular direction.
YYEXPORT void btSliderConstraint_getRestitutionDirAng(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = sliderConstraint->getRestitutionDirAng();
}

/// @func btSliderConstraint_getDampingDirAng(sliderConstraint)
///
/// @desc
/// Gets the damping value for angular direction in the slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
///
/// @return {Real} Returns the damping value for angular direction.
YYEXPORT void btSliderConstraint_getDampingDirAng(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = sliderConstraint->getDampingDirAng();
}

/// @func btSliderConstraint_getSoftnessLimLin(sliderConstraint)
///
/// @desc
/// Gets the softness value for linear limit in the slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
///
/// @return {Real} Returns the softness value for linear limit.
YYEXPORT void btSliderConstraint_getSoftnessLimLin(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = sliderConstraint->getSoftnessLimLin();
}

/// @func btSliderConstraint_getRestitutionLimLin(sliderConstraint)
///
/// @desc
/// Gets the restitution value for linear limit in the slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
///
/// @return {Real} Returns the restitution value for linear limit.
YYEXPORT void btSliderConstraint_getRestitutionLimLin(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = sliderConstraint->getRestitutionLimLin();
}

/// @func btSliderConstraint_getDampingLimLin(sliderConstraint)
///
/// @desc
/// Gets the damping value for linear limit in the slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
///
/// @return {Real} Returns the damping value for linear limit.
YYEXPORT void btSliderConstraint_getDampingLimLin(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = sliderConstraint->getDampingLimLin();
}

/// @func btSliderConstraint_getSoftnessLimAng(sliderConstraint)
///
/// @desc
/// Gets the softness value for angular limit in the slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
///
/// @return {Real} Returns the softness value for angular limit.
YYEXPORT void btSliderConstraint_getSoftnessLimAng(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = sliderConstraint->getSoftnessLimAng();
}

/// @func btSliderConstraint_getRestitutionLimAng(sliderConstraint)
///
/// @desc
/// Gets the restitution value for angular limit in the slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
///
/// @return {Real} Returns the restitution value for angular limit.
YYEXPORT void btSliderConstraint_getRestitutionLimAng(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = sliderConstraint->getRestitutionLimAng();
}

/// @func btSliderConstraint_getDampingLimAng(sliderConstraint)
///
/// @desc
/// Gets the damping value for angular limit in the slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
///
/// @return {Real} Returns the damping value for angular limit.
YYEXPORT void btSliderConstraint_getDampingLimAng(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = sliderConstraint->getDampingLimAng();
}

/// @func btSliderConstraint_getSoftnessOrthoLin(sliderConstraint)
///
/// @desc
/// Gets the softness value for orthogonal linear movement in the slider
/// constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
///
/// @return {Real} Returns the softness value for orthogonal linear movement.
YYEXPORT void btSliderConstraint_getSoftnessOrthoLin(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = sliderConstraint->getSoftnessOrthoLin();
}

/// @func btSliderConstraint_getRestitutionOrthoLin(sliderConstraint)
///
/// @desc
/// Gets the restitution value for orthogonal linear movement in the slider
/// constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
///
/// @return {Real} Returns the restitution value for orthogonal linear movement.
YYEXPORT void btSliderConstraint_getRestitutionOrthoLin(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = sliderConstraint->getRestitutionOrthoLin();
}

/// @func btSliderConstraint_getDampingOrthoLin(sliderConstraint)
///
/// @desc
/// Gets the damping value for orthogonal linear movement in the slider
/// constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
///
/// @return {Real} Returns the damping value for orthogonal linear movement.
YYEXPORT void btSliderConstraint_getDampingOrthoLin(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = sliderConstraint->getDampingOrthoLin();
}

/// @func btSliderConstraint_getSoftnessOrthoAng(sliderConstraint)
///
/// @desc
/// Gets the softness value for orthogonal angular movement in the slider
/// constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
///
/// @return {Real} Returns the softness value for orthogonal angular movement.
YYEXPORT void btSliderConstraint_getSoftnessOrthoAng(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = sliderConstraint->getSoftnessOrthoAng();
}

/// @func btSliderConstraint_getRestitutionOrthoAng(sliderConstraint)
///
/// @desc
/// Gets the restitution value for orthogonal angular movement in the slider
/// constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
///
/// @return {Real} Returns the restitution value for orthogonal angular movement.
YYEXPORT void btSliderConstraint_getRestitutionOrthoAng(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = sliderConstraint->getRestitutionOrthoAng();
}

/// @func btSliderConstraint_getDampingOrthoAng(sliderConstraint)
///
/// @desc
/// Gets the damping value for orthogonal angular movement in the slider
/// constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
///
/// @return {Real} Returns the damping value for orthogonal angular movement.
YYEXPORT void btSliderConstraint_getDampingOrthoAng(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = sliderConstraint->getDampingOrthoAng();
}

/// @func btSliderConstraint_setSoftnessDirLin(sliderConstraint, softnessDirLin)
///
/// @desc
/// Sets the softness value for linear direction in the slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
/// @param {Real} softnessDirLin
///     The softness value for linear direction to be set.
YYEXPORT void btSliderConstraint_setSoftnessDirLin(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	double softnessDirLin = YYGetReal(arg, 1);
	sliderConstraint->setSoftnessDirLin(softnessDirLin);
}

/// @func btSliderConstraint_setRestitutionDirLin(sliderConstraint, restitutionDirLin)
///
/// @desc
/// Sets the restitution value for linear direction in the slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
/// @param {Real} restitutionDirLin
///     The restitution value for linear direction to be set.
YYEXPORT void btSliderConstraint_setRestitutionDirLin(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	double restitutionDirLin = YYGetReal(arg, 1);
	sliderConstraint->setRestitutionDirLin(restitutionDirLin);
}

/// @func btSliderConstraint_setDampingDirLin(sliderConstraint, dampingDirLin)
///
/// @desc
/// Sets the damping value for linear direction in the slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
/// @param {Real} dampingDirLin
///     The damping value for linear direction to be set.
YYEXPORT void btSliderConstraint_setDampingDirLin(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	double dampingDirLin = YYGetReal(arg, 1);
	sliderConstraint->setDampingDirLin(dampingDirLin);
}

/// @func btSliderConstraint_setSoftnessDirAng(sliderConstraint, softnessDirAng)
///
/// @desc
/// Sets the softness value for angular direction in the slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
/// @param {Real} softnessDirAng
///     The softness value for angular direction to be set.
YYEXPORT void btSliderConstraint_setSoftnessDirAng(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	double softnessDirAng = YYGetReal(arg, 1);
	sliderConstraint->setSoftnessDirAng(softnessDirAng);
}

/// @func btSliderConstraint_setRestitutionDirAng(sliderConstraint, restitutionDirAng)
///
/// @desc
/// Sets the restitution value for angular direction in the slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
/// @param {Real} restitutionDirAng
///     The restitution value for angular direction to be set.
YYEXPORT void btSliderConstraint_setRestitutionDirAng(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	double restitutionDirAng = YYGetReal(arg, 1);
	sliderConstraint->setRestitutionDirAng(restitutionDirAng);
}

/// @func btSliderConstraint_setDampingDirAng(sliderConstraint, dampingDirAng)
///
/// @desc
/// Sets the damping value for angular direction in the slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
/// @param {Real} dampingDirAng
///     The damping value for angular direction to be set.
YYEXPORT void btSliderConstraint_setDampingDirAng(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	double dampingDirAng = YYGetReal(arg, 1);
	sliderConstraint->setDampingDirAng(dampingDirAng);
}

/// @func btSliderConstraint_setSoftnessLimLin(sliderConstraint, softnessLimLin)
///
/// @desc
/// Sets the softness value for linear limit in the slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
/// @param {Real} softnessLimLin
///     The softness value for linear limit to be set.
YYEXPORT void btSliderConstraint_setSoftnessLimLin(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	double softnessLimLin = YYGetReal(arg, 1);
	sliderConstraint->setSoftnessLimLin(softnessLimLin);
}

/// @func btSliderConstraint_setRestitutionLimLin(sliderConstraint, restitutionLimLin)
///
/// @desc
/// Sets the restitution value for linear limit in the slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
/// @param {Real} restitutionLimLin
///     The restitution value for linear limit to be set.
YYEXPORT void btSliderConstraint_setRestitutionLimLin(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	double restitutionLimLin = YYGetReal(arg, 1);
	sliderConstraint->setRestitutionLimLin(restitutionLimLin);
}

/// @func btSliderConstraint_setDampingLimLin(sliderConstraint, dampingLimLin)
///
/// @desc
/// Sets the damping value for linear limit in the slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
/// @param {Real} dampingLimLin
///     The damping value for linear limit to be set.
YYEXPORT void btSliderConstraint_setDampingLimLin(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	double dampingLimLin = YYGetReal(arg, 1);
	sliderConstraint->setDampingLimLin(dampingLimLin);
}

/// @func btSliderConstraint_setSoftnessLimAng(sliderConstraint, softnessLimAng)
///
/// @desc
/// Sets the softness value for angular limit in the slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
/// @param {Real} softnessLimAng
///     The softness value for angular limit to be set.
YYEXPORT void btSliderConstraint_setSoftnessLimAng(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	double softnessLimAng = YYGetReal(arg, 1);
	sliderConstraint->setSoftnessLimAng(softnessLimAng);
}

/// @func btSliderConstraint_setRestitutionLimAng(sliderConstraint, restitutionLimAng)
///
/// @desc
/// Sets the restitution value for angular limit in the slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
/// @param {Real} restitutionLimAng
///     The restitution value for angular limit to be set.
YYEXPORT void btSliderConstraint_setRestitutionLimAng(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	double restitutionLimAng = YYGetReal(arg, 1);
	sliderConstraint->setRestitutionLimAng(restitutionLimAng);
}

/// @func btSliderConstraint_setDampingLimAng(sliderConstraint, dampingLimAng)
///
/// @desc
/// Sets the damping value for angular limit in the slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
/// @param {Real} dampingLimAng
///     The damping value for angular limit to be set.
YYEXPORT void btSliderConstraint_setDampingLimAng(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	double dampingLimAng = YYGetReal(arg, 1);
	sliderConstraint->setDampingLimAng(dampingLimAng);
}

/// @func btSliderConstraint_setSoftnessOrthoLin(sliderConstraint, softnessOrthoLin)
///
/// @desc
/// Sets the softness value for orthogonal linear movement in the slider
/// constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
/// @param {Real} softnessOrthoLin
///     The softness value for orthogonal linear movement to be set.
YYEXPORT void btSliderConstraint_setSoftnessOrthoLin(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	double softnessOrthoLin = YYGetReal(arg, 1);
	sliderConstraint->setSoftnessOrthoLin(softnessOrthoLin);
}

/// @func btSliderConstraint_setRestitutionOrthoLin(sliderConstraint, restitutionOrthoLin)
///
/// @desc
/// Sets the restitution value for orthogonal linear movement in the slider
/// constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
/// @param {Real} restitutionOrthoLin
///     The restitution value for orthogonal linear movement to be set.
YYEXPORT void btSliderConstraint_setRestitutionOrthoLin(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	double restitutionOrthoLin = YYGetReal(arg, 1);
	sliderConstraint->setRestitutionOrthoLin(restitutionOrthoLin);
}

/// @func btSliderConstraint_setDampingOrthoLin(sliderConstraint, dampingOrthoLin)
///
/// @desc
/// Sets the damping value for orthogonal linear movement in the slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
/// @param {Real} dampingOrthoLin
///     The damping value for orthogonal linear movement to be set.
YYEXPORT void btSliderConstraint_setDampingOrthoLin(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	double dampingOrthoLin = YYGetReal(arg, 1);
	sliderConstraint->setDampingOrthoLin(dampingOrthoLin);
}

/// @func btSliderConstraint_setSoftnessOrthoAng(sliderConstraint, softnessOrthoAng)
///
/// @desc
/// Sets the softness value for orthogonal angular movement in the slider
/// constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
/// @param {Real} softnessOrthoAng
///     The softness value for orthogonal angular movement to be set.
YYEXPORT void btSliderConstraint_setSoftnessOrthoAng(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	double softnessOrthoAng = YYGetReal(arg, 1);
	sliderConstraint->setSoftnessOrthoAng(softnessOrthoAng);
}

/// @func btSliderConstraint_setRestitutionOrthoAng(sliderConstraint, restitutionOrthoAng)
///
/// @desc
/// Sets the restitution value for orthogonal angular movement in the slider
/// constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
/// @param {Real} restitutionOrthoAng
///     The restitution value for orthogonal angular movement to be set.
YYEXPORT void btSliderConstraint_setRestitutionOrthoAng(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	double restitutionOrthoAng = YYGetReal(arg, 1);
	sliderConstraint->setRestitutionOrthoAng(restitutionOrthoAng);
}

/// @func btSliderConstraint_setDampingOrthoAng(sliderConstraint, dampingOrthoAng)
///
/// @desc
/// Sets the damping value for orthogonal angular movement in the slider
/// constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
/// @param {Real} dampingOrthoAng
///     The damping value for orthogonal angular movement to be set.
YYEXPORT void btSliderConstraint_setDampingOrthoAng(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	double dampingOrthoAng = YYGetReal(arg, 1);
	sliderConstraint->setDampingOrthoAng(dampingOrthoAng);
}

/// @func btSliderConstraint_setPoweredLinMotor(sliderConstraint, onOff)
///
/// @desc
/// Sets whether the linear motor for the slider constraint is powered or not.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
/// @param {Bool} onOff
///     A boolean indicating whether the linear motor is powered (true) or not
///     (false).
YYEXPORT void btSliderConstraint_setPoweredLinMotor(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	bool onOff = YYGetBool(arg, 1);
	sliderConstraint->setPoweredLinMotor(onOff);
}

/// @func btSliderConstraint_getPoweredLinMotor(sliderConstraint)
///
/// @desc
/// Gets whether the linear motor for the slider constraint is powered or not.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
///
/// @return {Bool} Returns a boolean indicating whether the linear motor is
/// powered (true) or not (false).
YYEXPORT void btSliderConstraint_getPoweredLinMotor(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = sliderConstraint->getPoweredLinMotor();
}

/// @func btSliderConstraint_setTargetLinMotorVelocity(sliderConstraint, targetLinMotorVelocity)
///
/// @desc
/// Sets the target linear motor velocity for the slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
/// @param {Real} targetLinMotorVelocity
///     The target linear motor velocity to be set.
YYEXPORT void btSliderConstraint_setTargetLinMotorVelocity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	double targetLinMotorVelocity = YYGetReal(arg, 1);
	sliderConstraint->setTargetLinMotorVelocity(targetLinMotorVelocity);
}

/// @func btSliderConstraint_getTargetLinMotorVelocity(sliderConstraint)
///
/// @desc
/// Gets the target linear motor velocity for the slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
///
/// @return {Real} Returns the target linear motor velocity set for the slider
/// constraint.
YYEXPORT void btSliderConstraint_getTargetLinMotorVelocity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = sliderConstraint->getTargetLinMotorVelocity();
}

/// @func btSliderConstraint_setMaxLinMotorForce(sliderConstraint, maxLinMotorForce)
///
/// @desc
/// Sets the maximum linear motor force for the slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
/// @param {Real} maxLinMotorForce
///     The maximum linear motor force to be set.
YYEXPORT void btSliderConstraint_setMaxLinMotorForce(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	double maxLinMotorForce = YYGetReal(arg, 1);
	sliderConstraint->setMaxLinMotorForce(maxLinMotorForce);
}

/// @func btSliderConstraint_getMaxLinMotorForce(sliderConstraint)
///
/// @desc
/// Gets the maximum linear motor force for the slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
///
/// @return {Real} Returns the maximum linear motor force set for the slider
/// constraint.
YYEXPORT void btSliderConstraint_getMaxLinMotorForce(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = sliderConstraint->getMaxLinMotorForce();
}

/// @func btSliderConstraint_setPoweredAngMotor(sliderConstraint, onOff)
///
/// @desc
/// Sets whether the angular motor for the slider constraint is powered on or
/// off.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
/// @param {Bool} onOff
///     A boolean indicating whether the angular motor is powered on (true) or
///     off (false).
YYEXPORT void btSliderConstraint_setPoweredAngMotor(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	bool onOff = YYGetBool(arg, 1);
	sliderConstraint->setPoweredAngMotor(onOff);
}

/// @func btSliderConstraint_getPoweredAngMotor(sliderConstraint)
///
/// @desc
/// Gets whether the angular motor for the slider constraint is powered on or
/// off.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
///
/// @return {Bool} Returns true if the angular motor is powered on, false if it
/// is powered off.
YYEXPORT void btSliderConstraint_getPoweredAngMotor(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = sliderConstraint->getPoweredAngMotor();
}

/// @func btSliderConstraint_setTargetAngMotorVelocity(sliderConstraint, targetAngMotorVelocity)
///
/// @desc
/// Sets the target angular motor velocity for the slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
/// @param {Real} targetAngMotorVelocity
///     The target angular motor velocity to be set.
YYEXPORT void btSliderConstraint_setTargetAngMotorVelocity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	double targetAngMotorVelocity = YYGetReal(arg, 1);
	sliderConstraint->setTargetAngMotorVelocity(targetAngMotorVelocity);
}

/// @func btSliderConstraint_getTargetAngMotorVelocity(sliderConstraint)
///
/// @desc
/// Gets the target angular motor velocity for the slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
///
/// @return {Real} Returns the target angular motor velocity.
YYEXPORT void btSliderConstraint_getTargetAngMotorVelocity(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = sliderConstraint->getTargetAngMotorVelocity();
}

/// @func btSliderConstraint_setMaxAngMotorForce(sliderConstraint, maxAngMotorForce)
///
/// @desc
/// Sets the maximum angular motor force for the slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
/// @param {Real} maxAngMotorForce
///     The maximum angular motor force to be set.
YYEXPORT void btSliderConstraint_setMaxAngMotorForce(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	double maxAngMotorForce = YYGetReal(arg, 1);
	sliderConstraint->setMaxAngMotorForce(maxAngMotorForce);
}

/// @func btSliderConstraint_getMaxAngMotorForce(sliderConstraint)
///
/// @desc
/// Gets the maximum angular motor force for the slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
///
/// @return {Real} Returns the maximum angular motor force.
YYEXPORT void btSliderConstraint_getMaxAngMotorForce(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = sliderConstraint->getMaxAngMotorForce();
}

/// @func btSliderConstraint_getLinearPos(sliderConstraint)
///
/// @desc
/// Gets the linear position of the slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
///
/// @return {Real} Returns the linear position.
YYEXPORT void btSliderConstraint_getLinearPos(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = sliderConstraint->getLinearPos();
}

/// @func btSliderConstraint_getAngularPos(sliderConstraint)
///
/// @desc
/// Gets the angular position of the slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
///
/// @return {Real} Returns the angular position.
YYEXPORT void btSliderConstraint_getAngularPos(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = sliderConstraint->getAngularPos();
}

/// @func btSliderConstraint_getSolveLinLimit(sliderConstraint)
///
/// @desc
/// Gets whether the linear limits are being solved for the slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
///
/// @return {Bool} Returns true if the linear limits are being solved, false
/// otherwise.
YYEXPORT void btSliderConstraint_getSolveLinLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = sliderConstraint->getSolveLinLimit();
}

/// @func btSliderConstraint_getLinDepth(sliderConstraint)
///
/// @desc
/// Gets the linear depth of the slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
///
/// @return {Real} Returns the linear depth.
YYEXPORT void btSliderConstraint_getLinDepth(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = sliderConstraint->getLinDepth();
}

/// @func btSliderConstraint_getSolveAngLimit(sliderConstraint)
///
/// @desc
/// Gets whether the angular limits are being solved for the slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
///
/// @return {Bool} Returns true if the angular limits are being solved, false
/// otherwise.
YYEXPORT void btSliderConstraint_getSolveAngLimit(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = sliderConstraint->getSolveAngLimit();
}

/// @func btSliderConstraint_getAngDepth(sliderConstraint)
///
/// @desc
/// Gets the angular depth of the slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
///
/// @return {Real} Returns the angular depth.
YYEXPORT void btSliderConstraint_getAngDepth(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = sliderConstraint->getAngDepth();
}

/// @func btSliderConstraint_calculateTransforms(sliderConstraint, transA, transB)
///
/// @desc
/// Calculates and updates the transforms associated with the slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
/// @param {Pointer} transA
///     A pointer to a btTransform representing the transform of the first body.
/// @param {Pointer} transB
///     A pointer to a btTransform representing the transform of the second body.
YYEXPORT void btSliderConstraint_calculateTransforms(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	auto& transA = *(btTransform*)YYGetPtr(arg, 1);
	auto& transB = *(btTransform*)YYGetPtr(arg, 2);
	sliderConstraint->calculateTransforms(transA, transB);
}

/// @func btSliderConstraint_testLinLimits(sliderConstraint)
///
/// @desc
/// Tests and enforces the linear limits of the slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
YYEXPORT void btSliderConstraint_testLinLimits(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	sliderConstraint->testLinLimits();
}

/// @func btSliderConstraint_testAngLimits(sliderConstraint)
///
/// @desc
/// Tests and enforces the angular limits of the slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
YYEXPORT void btSliderConstraint_testAngLimits(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	sliderConstraint->testAngLimits();
}

/// @func btSliderConstraint_getAncorInA(sliderConstraint, outVector3)
///
/// @desc
/// Gets the anchor point in the local frame of body A associated with the
/// slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 where the anchor point in the local frame of
///     body A will be copied.
YYEXPORT void btSliderConstraint_getAncorInA(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(sliderConstraint->getAncorInA(), outVector3);
}

/// @func btSliderConstraint_getAncorInB(sliderConstraint, outVector3)
///
/// @desc
/// Gets the anchor point in the local frame of body B associated with the
/// slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 where the anchor point in the local frame of
///     body B will be copied.
YYEXPORT void btSliderConstraint_getAncorInB(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(sliderConstraint->getAncorInB(), outVector3);
}

/// @func btSliderConstraint_getUseFrameOffset(sliderConstraint)
///
/// @desc
/// Gets whether the constraint uses frame offset.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
///
/// @return {Bool} True if the constraint uses frame offset, false otherwise.
YYEXPORT void btSliderConstraint_getUseFrameOffset(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = sliderConstraint->getUseFrameOffset();
}

/// @func btSliderConstraint_setUseFrameOffset(sliderConstraint, frameOffsetOnOff)
///
/// @desc
/// Sets whether the constraint uses frame offset.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
/// @param {Bool} frameOffsetOnOff
///     True to enable frame offset, false to disable.
YYEXPORT void btSliderConstraint_setUseFrameOffset(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	bool frameOffsetOnOff = YYGetBool(arg, 1);
	sliderConstraint->setUseFrameOffset(frameOffsetOnOff);
}

/// @func btSliderConstraint_setFrames(sliderConstraint, frameA, frameB)
///
/// @desc
/// Sets the frames for the slider constraint.
///
/// @param {Pointer} sliderConstraint
///     A pointer to the btSliderConstraint instance.
/// @param {Pointer} frameA
///     A pointer to a btTransform representing the frame for body A.
/// @param {Pointer} frameB
///     A pointer to a btTransform representing the frame for body B.
YYEXPORT void btSliderConstraint_setFrames(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	auto& frameA = *(btTransform*)YYGetPtr(arg, 1);
	auto& frameB = *(btTransform*)YYGetPtr(arg, 2);
	sliderConstraint->setFrames(frameA, frameB);
}

// Note: Skipped btSliderConstraint::setParam
// Note: Skipped btSliderConstraint::getParam

/// @func btSliderConstraint_getFlags(sliderConstraint)
///
/// @desc
/// Gets the current flags associated with the slider constraint.
///
/// @param {Pointer} sliderConstraint
///     Pointer to the btSliderConstraint instance.
///
/// @return {Real} Returns a numeric value representing the current flags of the
/// slider constraint.
YYEXPORT void btSliderConstraint_getFlags(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.v32 = sliderConstraint->getFlags();
}

// Note: Skipped btSliderConstraint::calculateSerializeBufferSize
// Note: Skipped btSliderConstraint::serialize
