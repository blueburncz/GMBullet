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
///
/// @param {Pointer} sliderConstraint
///
/// @return {Pointer}
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
///
/// @param {Pointer} sliderConstraint
///
/// @return {Pointer}
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
///
/// @param {Pointer} sliderConstraint
///
/// @return {Pointer}
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
///
/// @param {Pointer} sliderConstraint
///
/// @return {Pointer}
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
///
/// @param {Pointer} sliderConstraint
///
/// @return {Pointer}
YYEXPORT void btSliderConstraint_getFrameOffsetA(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = &sliderConstraint->getFrameOffsetA();
}

/// @func btSliderConstraint_getFrameOffsetB(sliderConstraint)
///
/// @desc
///
/// @param {Pointer} sliderConstraint
///
/// @return {Pointer}
YYEXPORT void btSliderConstraint_getFrameOffsetB(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = &sliderConstraint->getFrameOffsetB();
}

/// @func btSliderConstraint_getLowerLinLimit(sliderConstraint)
///
/// @desc
///
/// @param {Pointer} sliderConstraint
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
///
/// @param {Pointer} sliderConstraint
/// @param {Real} lowerLimit
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
///
/// @param {Pointer} sliderConstraint
///
/// @return {Real}
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
///
/// @param {Pointer} sliderConstraint
/// @param {Real} upperLimit
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
///
/// @param {Pointer} sliderConstraint
///
/// @return {Real}
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
///
/// @param {Pointer} sliderConstraint
/// @param {Real} lowerLimit
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
///
/// @param {Pointer} sliderConstraint
///
/// @return {Real}
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
///
/// @param {Pointer} sliderConstraint
/// @param {Real} upperLimit
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
///
/// @param {Pointer} sliderConstraint
///
/// @return {Bool}
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
///
/// @param {Pointer} sliderConstraint
///
/// @return {Real}
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
///
/// @param {Pointer} sliderConstraint
///
/// @return {Real}
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
///
/// @param {Pointer} sliderConstraint
///
/// @return {Real}
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
///
/// @param {Pointer} sliderConstraint
///
/// @return {Real}
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
///
/// @param {Pointer} sliderConstraint
///
/// @return {Real}
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
///
/// @param {Pointer} sliderConstraint
///
/// @return {Real}
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
///
/// @param {Pointer} sliderConstraint
///
/// @return {Real}
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
///
/// @param {Pointer} sliderConstraint
///
/// @return {Real}
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
///
/// @param {Pointer} sliderConstraint
///
/// @return {Real}
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
///
/// @param {Pointer} sliderConstraint
///
/// @return {Real}
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
///
/// @param {Pointer} sliderConstraint
///
/// @return {Real}
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
///
/// @param {Pointer} sliderConstraint
///
/// @return {Real}
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
///
/// @param {Pointer} sliderConstraint
///
/// @return {Real}
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
///
/// @param {Pointer} sliderConstraint
///
/// @return {Real}
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
///
/// @param {Pointer} sliderConstraint
///
/// @return {Real}
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
///
/// @param {Pointer} sliderConstraint
///
/// @return {Real}
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
///
/// @param {Pointer} sliderConstraint
///
/// @return {Real}
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
///
/// @param {Pointer} sliderConstraint
///
/// @return {Real}
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
///
/// @param {Pointer} sliderConstraint
/// @param {Real} softnessDirLin
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
///
/// @param {Pointer} sliderConstraint
/// @param {Real} restitutionDirLin
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
///
/// @param {Pointer} sliderConstraint
/// @param {Real} dampingDirLin
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
///
/// @param {Pointer} sliderConstraint
/// @param {Real} softnessDirAng
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
///
/// @param {Pointer} sliderConstraint
/// @param {Real} restitutionDirAng
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
///
/// @param {Pointer} sliderConstraint
/// @param {Real} dampingDirAng
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
///
/// @param {Pointer} sliderConstraint
/// @param {Real} softnessLimLin
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
///
/// @param {Pointer} sliderConstraint
/// @param {Real} restitutionLimLin
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
///
/// @param {Pointer} sliderConstraint
/// @param {Real} dampingLimLin
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
///
/// @param {Pointer} sliderConstraint
/// @param {Real} softnessLimAng
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
///
/// @param {Pointer} sliderConstraint
/// @param {Real} restitutionLimAng
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
///
/// @param {Pointer} sliderConstraint
/// @param {Real} dampingLimAng
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
///
/// @param {Pointer} sliderConstraint
/// @param {Real} softnessOrthoLin
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
///
/// @param {Pointer} sliderConstraint
/// @param {Real} restitutionOrthoLin
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
///
/// @param {Pointer} sliderConstraint
/// @param {Real} dampingOrthoLin
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
///
/// @param {Pointer} sliderConstraint
/// @param {Real} softnessOrthoAng
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
///
/// @param {Pointer} sliderConstraint
/// @param {Real} restitutionOrthoAng
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
///
/// @param {Pointer} sliderConstraint
/// @param {Real} dampingOrthoAng
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
///
/// @param {Pointer} sliderConstraint
/// @param {Bool} onOff
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
///
/// @param {Pointer} sliderConstraint
///
/// @return {Real}
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
///
/// @param {Pointer} sliderConstraint
/// @param {Real} targetLinMotorVelocity
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
///
/// @param {Pointer} sliderConstraint
///
/// @return {Real}
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
///
/// @param {Pointer} sliderConstraint
/// @param {Real} maxLinMotorForce
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
///
/// @param {Pointer} sliderConstraint
///
/// @return {Real}
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
///
/// @param {Pointer} sliderConstraint
/// @param {Bool} onOff
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
///
/// @param {Pointer} sliderConstraint
///
/// @return {Bool}
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
///
/// @param {Pointer} sliderConstraint
/// @param {Real} targetAngMotorVelocity
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
///
/// @param {Pointer} sliderConstraint
///
/// @return {Real}
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
///
/// @param {Pointer} sliderConstraint
/// @param {Real} maxAngMotorForce
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
///
/// @param {Pointer} sliderConstraint
///
/// @return {Real}
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
///
/// @param {Pointer} sliderConstraint
///
/// @return {Real}
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
///
/// @param {Pointer} sliderConstraint
///
/// @return {Real}
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
///
/// @param {Pointer} sliderConstraint
///
/// @return {Bool}
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
///
/// @param {Pointer} sliderConstraint
///
/// @return {Real}
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
///
/// @param {Pointer} sliderConstraint
///
/// @return {Bool}
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
///
/// @param {Pointer} sliderConstraint
///
/// @return {Real}
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
///
/// @param {Pointer} sliderConstraint
/// @param {Pointer} transA
/// @param {Pointer} transB
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
///
/// @param {Pointer} sliderConstraint
YYEXPORT void btSliderConstraint_testLinLimits(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	sliderConstraint->testLinLimits();
}

/// @func btSliderConstraint_testAngLimits(sliderConstraint)
///
/// @desc
///
/// @param {Pointer} sliderConstraint
YYEXPORT void btSliderConstraint_testAngLimits(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sliderConstraint = (btSliderConstraint*)YYGetPtr(arg, 0);
	sliderConstraint->testAngLimits();
}

/// @func btSliderConstraint_getAncorInA(sliderConstraint, outVector3)
///
/// @desc
///
/// @param {Pointer} sliderConstraint
/// @param {Pointer} outVector3
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
///
/// @param {Pointer} sliderConstraint
/// @param {Pointer} outVector3
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
///
/// @param {Pointer} sliderConstraint
///
/// @return {Bool}
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
///
/// @param {Pointer} sliderConstraint
/// @param {Bool} frameOffsetOnOff
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
///
/// @param {Pointer} sliderConstraint
/// @param {Pointer} frameA
/// @param {Pointer} frameB
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
	result.val = sliderConstraint->getFlags();
}

// Note: Skipped btSliderConstraint::calculateSerializeBufferSize
// Note: Skipped btSliderConstraint::serialize
