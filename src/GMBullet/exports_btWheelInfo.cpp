#include <GMBullet.hpp>

using btRaycastInfo = btWheelInfo::RaycastInfo;

////////////////////////////////////////////////////////////////////////////////
//
// btWheelInfoConstructionInfo
//

/// @func btWheelInfoConstructionInfo_create()
///
/// @desc
/// Create a new instance of the btWheelInfoConstructionInfo.
///
/// @return {Pointer} A pointer to the newly created btWheelInfoConstructionInfo
/// object.
YYEXPORT void btWheelInfoConstructionInfo_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	result.kind = VALUE_PTR;
	result.ptr = new btWheelInfoConstructionInfo();
}

/// @func btWheelInfoConstructionInfo_destroy(wheelInfoConstructionInfo)
///
/// @desc
/// Destroy the btWheelInfoConstructionInfo instance.
///
/// @param {Pointer} wheelInfoConstructionInfo
///     A pointer to the btWheelInfoConstructionInfo object.
YYEXPORT void btWheelInfoConstructionInfo_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btWheelInfoConstructionInfo*)YYGetPtr(arg, 0);
}

/// @func btWheelInfoConstructionInfo_setChassisConnectionCS(wheelInfoConstructionInfo, chassisConnectionCS)
///
/// @desc
/// Set the chassis connection point in the chassis local coordinate system.
///
/// @param {Pointer} wheelInfoConstructionInfo
///     A pointer to the btWheelInfoConstructionInfo object.
/// @param {Pointer} chassisConnectionCS
///     A pointer to a btVector3 representing the chassis connection point in
///     the chassis local coordinate system.
YYEXPORT void btWheelInfoConstructionInfo_setChassisConnectionCS(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfoConstructionInfo = (btWheelInfoConstructionInfo*)YYGetPtr(arg, 0);
	btVector3& chassisConnectionCS = *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(chassisConnectionCS, &wheelInfoConstructionInfo->m_chassisConnectionCS);
}

/// @func btWheelInfoConstructionInfo_getChassisConnectionCS(wheelInfoConstructionInfo, outVector3)
///
/// @desc
/// Get the chassis connection point in the chassis local coordinate system.
///
/// @param {Pointer} wheelInfoConstructionInfo
///     A pointer to the btWheelInfoConstructionInfo object.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the chassis connection point in the
///     chassis local coordinate system.
YYEXPORT void btWheelInfoConstructionInfo_getChassisConnectionCS(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfoConstructionInfo = (btWheelInfoConstructionInfo*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(wheelInfoConstructionInfo->m_chassisConnectionCS, outVector3);
}

/// @func btWheelInfoConstructionInfo_setWheelDirectionCS(wheelInfoConstructionInfo, wheelDirectionCS)
///
/// @desc
/// Set the wheel direction in the wheel local coordinate system.
///
/// @param {Pointer} wheelInfoConstructionInfo
///     A pointer to the btWheelInfoConstructionInfo object.
/// @param {Pointer} wheelDirectionCS
///     A pointer to a btVector3 representing the wheel direction in the wheel
///     local coordinate system.
YYEXPORT void btWheelInfoConstructionInfo_setWheelDirectionCS(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfoConstructionInfo = (btWheelInfoConstructionInfo*)YYGetPtr(arg, 0);
	btVector3& wheelDirectionCS = *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(wheelDirectionCS, &wheelInfoConstructionInfo->m_wheelDirectionCS);
}

/// @func btWheelInfoConstructionInfo_getWheelDirectionCS(wheelInfoConstructionInfo, outVector3)
///
/// @desc
/// Get the wheel direction in the wheel local coordinate system.
///
/// @param {Pointer} wheelInfoConstructionInfo
///     A pointer to the btWheelInfoConstructionInfo object.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the wheel direction in the wheel local
///     coordinate system.
YYEXPORT void btWheelInfoConstructionInfo_getWheelDirectionCS(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfoConstructionInfo = (btWheelInfoConstructionInfo*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(wheelInfoConstructionInfo->m_wheelDirectionCS, outVector3);
}

/// @func btWheelInfoConstructionInfo_setWheelAxleCS(wheelInfoConstructionInfo, wheelAxleCS)
///
/// @desc
/// Set the wheel axle direction in the wheel local coordinate system.
///
/// @param {Pointer} wheelInfoConstructionInfo
///     A pointer to the btWheelInfoConstructionInfo object.
/// @param {Pointer} wheelAxleCS
///     A pointer to a btVector3 representing the wheel axle direction in the
///     wheel local coordinate system.
YYEXPORT void btWheelInfoConstructionInfo_setWheelAxleCS(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfoConstructionInfo = (btWheelInfoConstructionInfo*)YYGetPtr(arg, 0);
	btVector3& wheelAxleCS = *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(wheelAxleCS, &wheelInfoConstructionInfo->m_wheelAxleCS);
}

/// @func btWheelInfoConstructionInfo_getWheelAxleCS(wheelInfoConstructionInfo, outVector3)
///
/// @desc
/// Get the wheel axle direction in the wheel local coordinate system.
///
/// @param {Pointer} wheelInfoConstructionInfo
///     A pointer to the btWheelInfoConstructionInfo object.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the wheel axle direction in the wheel
///     local coordinate system.
YYEXPORT void btWheelInfoConstructionInfo_getWheelAxleCS(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfoConstructionInfo = (btWheelInfoConstructionInfo*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(wheelInfoConstructionInfo->m_wheelAxleCS, outVector3);
}

/// @func btWheelInfoConstructionInfo_setSuspensionRestLength(wheelInfoConstructionInfo, suspensionRestLength)
///
/// @desc
/// Set the suspension rest length for the wheel.
///
/// @param {Pointer} wheelInfoConstructionInfo
///     A pointer to the btWheelInfoConstructionInfo object.
/// @param {Real} suspensionRestLength
///     The suspension rest length for the wheel.
YYEXPORT void btWheelInfoConstructionInfo_setSuspensionRestLength(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfoConstructionInfo = (btWheelInfoConstructionInfo*)YYGetPtr(arg, 0);
	double suspensionRestLength = YYGetReal(arg, 1);
	wheelInfoConstructionInfo->m_suspensionRestLength = suspensionRestLength;
}

/// @func btWheelInfoConstructionInfo_getSuspensionRestLength(wheelInfoConstructionInfo)
///
/// @desc
/// Get the suspension rest length for the wheel.
///
/// @param {Pointer} wheelInfoConstructionInfo
///     A pointer to the btWheelInfoConstructionInfo object.
///
/// @return {Real} The suspension rest length for the wheel.
YYEXPORT void btWheelInfoConstructionInfo_getSuspensionRestLength(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfoConstructionInfo = (btWheelInfoConstructionInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = wheelInfoConstructionInfo->m_suspensionRestLength;
}

/// @func btWheelInfoConstructionInfo_setMaxSuspensionTravelCm(wheelInfoConstructionInfo, maxSuspensionTravelCm)
///
/// @desc
/// Set the maximum suspension travel in centimeters for the wheel.
///
/// @param {Pointer} wheelInfoConstructionInfo
///     A pointer to the btWheelInfoConstructionInfo object.
/// @param {Real} maxSuspensionTravelCm
///     The maximum suspension travel in centimeters for the wheel.
YYEXPORT void btWheelInfoConstructionInfo_setMaxSuspensionTravelCm(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfoConstructionInfo = (btWheelInfoConstructionInfo*)YYGetPtr(arg, 0);
	double maxSuspensionTravelCm = YYGetReal(arg, 1);
	wheelInfoConstructionInfo->m_maxSuspensionTravelCm = maxSuspensionTravelCm;
}

/// @func btWheelInfoConstructionInfo_getMaxSuspensionTravelCm(wheelInfoConstructionInfo)
///
/// @desc
/// Get the maximum suspension travel in centimeters for the wheel.
///
/// @param {Pointer} wheelInfoConstructionInfo
///     A pointer to the btWheelInfoConstructionInfo object.
///
/// @return {Real} The maximum suspension travel in centimeters for the wheel.
YYEXPORT void btWheelInfoConstructionInfo_getMaxSuspensionTravelCm(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfoConstructionInfo = (btWheelInfoConstructionInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = wheelInfoConstructionInfo->m_maxSuspensionTravelCm;
}

/// @func btWheelInfoConstructionInfo_setWheelRadius(wheelInfoConstructionInfo, wheelRadius)
///
/// @desc
/// Set the wheel radius for the wheel.
///
/// @param {Pointer} wheelInfoConstructionInfo
///     A pointer to the btWheelInfoConstructionInfo object.
/// @param {Real} wheelRadius
///     The wheel radius for the wheel.
YYEXPORT void btWheelInfoConstructionInfo_setWheelRadius(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfoConstructionInfo = (btWheelInfoConstructionInfo*)YYGetPtr(arg, 0);
	double wheelRadius = YYGetReal(arg, 1);
	wheelInfoConstructionInfo->m_wheelRadius = wheelRadius;
}

/// @func btWheelInfoConstructionInfo_getWheelRadius(wheelInfoConstructionInfo)
///
/// @desc
/// Get the wheel radius for the wheel.
///
/// @param {Pointer} wheelInfoConstructionInfo
///     A pointer to the btWheelInfoConstructionInfo object.
///
/// @return {Real} The wheel radius for the wheel.
YYEXPORT void btWheelInfoConstructionInfo_getWheelRadius(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfoConstructionInfo = (btWheelInfoConstructionInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = wheelInfoConstructionInfo->m_wheelRadius;
}

/// @func btWheelInfoConstructionInfo_setSuspensionStiffness(wheelInfoConstructionInfo, suspensionStiffness)
///
/// @desc
/// Set the suspension stiffness for the wheel.
///
/// @param {Pointer} wheelInfoConstructionInfo
///     A pointer to the btWheelInfoConstructionInfo object.
/// @param {Real} suspensionStiffness
///     The suspension stiffness for the wheel.
YYEXPORT void btWheelInfoConstructionInfo_setSuspensionStiffness(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfoConstructionInfo = (btWheelInfoConstructionInfo*)YYGetPtr(arg, 0);
	double suspensionStiffness = YYGetReal(arg, 1);
	wheelInfoConstructionInfo->m_suspensionStiffness = suspensionStiffness;
}

/// @func btWheelInfoConstructionInfo_getSuspensionStiffness(wheelInfoConstructionInfo)
///
/// @desc
/// Get the suspension stiffness for the wheel.
///
/// @param {Pointer} wheelInfoConstructionInfo
///     A pointer to the btWheelInfoConstructionInfo object.
///
/// @return {Real} The suspension stiffness for the wheel.
YYEXPORT void btWheelInfoConstructionInfo_getSuspensionStiffness(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfoConstructionInfo = (btWheelInfoConstructionInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = wheelInfoConstructionInfo->m_suspensionStiffness;
}

/// @func btWheelInfoConstructionInfo_setWheelsDampingCompression(wheelInfoConstructionInfo, wheelsDampingCompression)
///
/// @desc
/// Set the wheels damping compression for the wheel.
///
/// @param {Pointer} wheelInfoConstructionInfo
///     A pointer to the btWheelInfoConstructionInfo object.
/// @param {Real} wheelsDampingCompression
///     The wheels damping compression for the wheel.
YYEXPORT void btWheelInfoConstructionInfo_setWheelsDampingCompression(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfoConstructionInfo = (btWheelInfoConstructionInfo*)YYGetPtr(arg, 0);
	double wheelsDampingCompression = YYGetReal(arg, 1);
	wheelInfoConstructionInfo->m_wheelsDampingCompression = wheelsDampingCompression;
}

/// @func btWheelInfoConstructionInfo_getWheelsDampingCompression(wheelInfoConstructionInfo)
///
/// @desc
/// Get the wheels damping compression for the wheel.
///
/// @param {Pointer} wheelInfoConstructionInfo
///     A pointer to the btWheelInfoConstructionInfo object.
///
/// @return {Real} The wheels damping compression for the wheel.
YYEXPORT void btWheelInfoConstructionInfo_getWheelsDampingCompression(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfoConstructionInfo = (btWheelInfoConstructionInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = wheelInfoConstructionInfo->m_wheelsDampingCompression;
}

/// @func btWheelInfoConstructionInfo_setWheelsDampingRelaxation(wheelInfoConstructionInfo, wheelsDampingRelaxation)
///
/// @desc
/// Set the wheels damping relaxation for the wheel.
///
/// @param {Pointer} wheelInfoConstructionInfo
///     A pointer to the btWheelInfoConstructionInfo object.
/// @param {Real} wheelsDampingRelaxation
///     The wheels damping relaxation for the wheel.
YYEXPORT void btWheelInfoConstructionInfo_setWheelsDampingRelaxation(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfoConstructionInfo = (btWheelInfoConstructionInfo*)YYGetPtr(arg, 0);
	double wheelsDampingRelaxation = YYGetReal(arg, 1);
	wheelInfoConstructionInfo->m_wheelsDampingRelaxation = wheelsDampingRelaxation;
}

/// @func btWheelInfoConstructionInfo_getWheelsDampingRelaxation(wheelInfoConstructionInfo)
///
/// @desc
/// Get the wheels damping relaxation for the wheel.
///
/// @param {Pointer} wheelInfoConstructionInfo
///     A pointer to the btWheelInfoConstructionInfo object.
///
/// @return {Real} The wheels damping relaxation for the wheel.
YYEXPORT void btWheelInfoConstructionInfo_getWheelsDampingRelaxation(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfoConstructionInfo = (btWheelInfoConstructionInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = wheelInfoConstructionInfo->m_wheelsDampingRelaxation;
}

/// @func btWheelInfoConstructionInfo_setFrictionSlip(wheelInfoConstructionInfo, frictionSlip)
///
/// @desc
/// Set the friction slip for the wheel.
///
/// @param {Pointer} wheelInfoConstructionInfo
///     A pointer to the btWheelInfoConstructionInfo object.
/// @param {Real} frictionSlip
///     The friction slip for the wheel.
YYEXPORT void btWheelInfoConstructionInfo_setFrictionSlip(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfoConstructionInfo = (btWheelInfoConstructionInfo*)YYGetPtr(arg, 0);
	double frictionSlip = YYGetReal(arg, 1);
	wheelInfoConstructionInfo->m_frictionSlip = frictionSlip;
}

/// @func btWheelInfoConstructionInfo_getFrictionSlip(wheelInfoConstructionInfo)
///
/// @desc
/// Get the friction slip for the wheel.
///
/// @param {Pointer} wheelInfoConstructionInfo
///     A pointer to the btWheelInfoConstructionInfo object.
///
/// @return {Real} The friction slip for the wheel.
YYEXPORT void btWheelInfoConstructionInfo_getFrictionSlip(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfoConstructionInfo = (btWheelInfoConstructionInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = wheelInfoConstructionInfo->m_frictionSlip;
}

/// @func btWheelInfoConstructionInfo_setMaxSuspensionForce(wheelInfoConstructionInfo, maxSuspensionForce)
///
/// @desc
/// Set the maximum suspension force for the wheel.
///
/// @param {Pointer} wheelInfoConstructionInfo
///     A pointer to the btWheelInfoConstructionInfo object.
/// @param {Real} maxSuspensionForce
///     The maximum suspension force for the wheel.
YYEXPORT void btWheelInfoConstructionInfo_setMaxSuspensionForce(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfoConstructionInfo = (btWheelInfoConstructionInfo*)YYGetPtr(arg, 0);
	double maxSuspensionForce = YYGetReal(arg, 1);
	wheelInfoConstructionInfo->m_maxSuspensionForce = maxSuspensionForce;
}

/// @func btWheelInfoConstructionInfo_getMaxSuspensionForce(wheelInfoConstructionInfo)
///
/// @desc
/// Get the maximum suspension force for the wheel.
///
/// @param {Pointer} wheelInfoConstructionInfo
///     A pointer to the btWheelInfoConstructionInfo object.
///
/// @return {Real} The maximum suspension force for the wheel.
YYEXPORT void btWheelInfoConstructionInfo_getMaxSuspensionForce(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfoConstructionInfo = (btWheelInfoConstructionInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = wheelInfoConstructionInfo->m_maxSuspensionForce;
}

/// @func btWheelInfoConstructionInfo_setIsFrontWheel(wheelInfoConstructionInfo, isFrontWheel)
///
/// @desc
/// Set whether the wheel is a front wheel.
///
/// @param {Pointer} wheelInfoConstructionInfo
///     A pointer to the btWheelInfoConstructionInfo object.
/// @param {Bool} isFrontWheel
///     A boolean indicating whether the wheel is a front wheel.
YYEXPORT void btWheelInfoConstructionInfo_setIsFrontWheel(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfoConstructionInfo = (btWheelInfoConstructionInfo*)YYGetPtr(arg, 0);
	bool isFrontWheel = YYGetBool(arg, 1);
	wheelInfoConstructionInfo->m_bIsFrontWheel = isFrontWheel;
}

/// @func btWheelInfoConstructionInfo_getIsFrontWheel(wheelInfoConstructionInfo)
///
/// @desc
/// Check if the wheel is a front wheel.
///
/// @param {Pointer} wheelInfoConstructionInfo
///     A pointer to the btWheelInfoConstructionInfo object.
///
/// @return {Bool} True if the wheel is a front wheel, false otherwise.
YYEXPORT void btWheelInfoConstructionInfo_getIsFrontWheel(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfoConstructionInfo = (btWheelInfoConstructionInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = wheelInfoConstructionInfo->m_bIsFrontWheel;
}

////////////////////////////////////////////////////////////////////////////////
//
// btRaycastInfo
//

/// @func btRaycastInfo_getContactNormalWS(raycastInfo, outVector3)
///
/// @desc
/// Get the contact normal in world space from the raycast info.
///
/// @param {Pointer} raycastInfo
///     A pointer to the btRaycastInfo object.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 where the contact normal will be copied.
YYEXPORT void btRaycastInfo_getContactNormalWS(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto raycastInfo = (btRaycastInfo*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(raycastInfo->m_contactNormalWS, outVector3);
}

/// @func btRaycastInfo_getContactPointWS(raycastInfo, outVector3)
///
/// @desc
/// Get the contact point in world space from the raycast info.
///
/// @param {Pointer} raycastInfo
///     A pointer to the btRaycastInfo object.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 where the contact point will be copied.
YYEXPORT void btRaycastInfo_getContactPointWS(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto raycastInfo = (btRaycastInfo*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(raycastInfo->m_contactPointWS, outVector3);
}

/// @func btRaycastInfo_getSuspensionLength(raycastInfo)
///
/// @desc
/// Get the suspension length from the raycast info.
///
/// @param {Pointer} raycastInfo
///     A pointer to the btRaycastInfo object.
///
/// @return {Real} The suspension length.
YYEXPORT void btRaycastInfo_getSuspensionLength(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto raycastInfo = (btRaycastInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = raycastInfo->m_suspensionLength;
}

/// @func btRaycastInfo_getHardPointWS(raycastInfo, outVector3)
///
/// @desc
/// Get the hard point in world space from the raycast info.
///
/// @param {Pointer} raycastInfo
///     A pointer to the btRaycastInfo object.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 where the hard point will be copied.
YYEXPORT void btRaycastInfo_getHardPointWS(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto raycastInfo = (btRaycastInfo*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(raycastInfo->m_hardPointWS, outVector3);
}

/// @func btRaycastInfo_getWheelDirectionWS(raycastInfo, outVector3)
///
/// @desc
/// Get the wheel direction in world space from the raycast info.
///
/// @param {Pointer} raycastInfo
///     A pointer to the btRaycastInfo object.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 where the wheel direction will be copied.
YYEXPORT void btRaycastInfo_getWheelDirectionWS(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto raycastInfo = (btRaycastInfo*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(raycastInfo->m_wheelDirectionWS, outVector3);
}

/// @func btRaycastInfo_getWheelAxleWS(raycastInfo, outVector3)
///
/// @desc
/// Get the wheel axle in world space from the raycast info.
///
/// @param {Pointer} raycastInfo
///     A pointer to the btRaycastInfo object.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 where the wheel axle will be copied.
YYEXPORT void btRaycastInfo_getWheelAxleWS(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto raycastInfo = (btRaycastInfo*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(raycastInfo->m_wheelAxleWS, outVector3);
}

/// @func btRaycastInfo_getIsInContact(raycastInfo)
///
/// @desc
/// Check if the raycast is in contact with an object.
///
/// @param {Pointer} raycastInfo
///     A pointer to the btRaycastInfo object.
///
/// @return {Bool} True if in contact, false otherwise.
YYEXPORT void btRaycastInfo_getIsInContact(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto raycastInfo = (btRaycastInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = raycastInfo->m_isInContact;
}

/// @func btRaycastInfo_getGroundObject(raycastInfo)
///
/// @desc
/// Get the object in contact with the raycast.
///
/// @param {Pointer} raycastInfo
///     A pointer to the btRaycastInfo object.
///
/// @return {Pointer} A pointer to the object in contact.
YYEXPORT void btRaycastInfo_getGroundObject(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto raycastInfo = (btRaycastInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = raycastInfo->m_groundObject;
}

////////////////////////////////////////////////////////////////////////////////
//
// btWheelInfo
//

/// @func btWheelInfo_create([ci])
///
/// @desc
/// Create a btWheelInfo instance.
///
/// @param {Pointer} [ci]
///     A pointer to a btWheelInfoConstructionInfo object for wheel construction
///     info.
///
/// @return {Pointer} A pointer to the created btWheelInfo instance.
YYEXPORT void btWheelInfo_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	result.kind = VALUE_PTR;
	if (argc > 0)
	{
		btWheelInfoConstructionInfo& ci = *(btWheelInfoConstructionInfo*)YYGetPtr(arg, 0);
		result.ptr = new btWheelInfo(ci);
	}
	else
	{
		result.ptr = new btWheelInfo();
	}
}

/// @func btWheelInfo_destroy(wheelInfo)
///
/// @desc
/// Destroy a btWheelInfo instance.
///
/// @param {Pointer} wheelInfo
///     A pointer to the btWheelInfo instance to be destroyed.
YYEXPORT void btWheelInfo_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btWheelInfo*)YYGetPtr(arg, 0);
}

/// @func btWheelInfo_getRaycastInfo(wheelInfo)
///
/// @desc
/// Get the raycast information associated with a btWheelInfo instance.
///
/// @param {Pointer} wheelInfo
///     A pointer to the btWheelInfo instance.
///
/// @return {Pointer} A pointer to the btRaycastInfo associated with the
/// wheelInfo.
YYEXPORT void btWheelInfo_getRaycastInfo(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfo = (btWheelInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = (btRaycastInfo*)&wheelInfo->m_raycastInfo;
}

/// @func btWheelInfo_getWorldTransform(wheelInfo)
///
/// @desc
/// Get the world transform associated with a btWheelInfo instance.
///
/// @param {Pointer} wheelInfo
///     A pointer to the btWheelInfo instance.
///
/// @return {Pointer} A pointer to the btTransform representing the world
/// transform of the wheelInfo.
YYEXPORT void btWheelInfo_getWorldTransform(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfo = (btWheelInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = (btTransform*)&wheelInfo->m_worldTransform;
}

/// @func btWheelInfo_setChassisConnectionPointCS(wheelInfo, chassisConnectionPointCS)
///
/// @desc
/// Set the chassis connection point in chassis space for a btWheelInfo
/// instance.
///
/// @param {Pointer} wheelInfo
///     A pointer to the btWheelInfo instance.
/// @param {Pointer} chassisConnectionPointCS
///     A pointer to a btVector3 representing the chassis connection point in
///     chassis space.
YYEXPORT void btWheelInfo_setChassisConnectionPointCS(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfo = (btWheelInfo*)YYGetPtr(arg, 0);
	btVector3& chassisConnectionPointCS = *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(chassisConnectionPointCS, &wheelInfo->m_chassisConnectionPointCS);
}

/// @func btWheelInfo_getChassisConnectionPointCS(wheelInfo, outVector3)
///
/// @desc
/// Get the chassis connection point in chassis space from a btWheelInfo
/// instance.
///
/// @param {Pointer} wheelInfo
///     A pointer to the btWheelInfo instance.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the chassis connection point in
///     chassis space.
YYEXPORT void btWheelInfo_getChassisConnectionPointCS(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfo = (btWheelInfo*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(wheelInfo->m_chassisConnectionPointCS, outVector3);
}

/// @func btWheelInfo_setWheelDirectionCS(wheelInfo, wheelDirectionCS)
///
/// @desc
/// Set the wheel direction in local space for a btWheelInfo instance.
///
/// @param {Pointer} wheelInfo
///     A pointer to the btWheelInfo instance.
/// @param {Pointer} wheelDirectionCS
///     A pointer to a btVector3 representing the wheel direction in local space.
YYEXPORT void btWheelInfo_setWheelDirectionCS(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfo = (btWheelInfo*)YYGetPtr(arg, 0);
	btVector3& wheelDirectionCS = *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(wheelDirectionCS, &wheelInfo->m_wheelDirectionCS);
}

/// @func btWheelInfo_getWheelDirectionCS(wheelInfo, outVector3)
///
/// @desc
/// Get the wheel direction in local space from a btWheelInfo instance.
///
/// @param {Pointer} wheelInfo
///     A pointer to the btWheelInfo instance.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the wheel direction in local space.
YYEXPORT void btWheelInfo_getWheelDirectionCS(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfo = (btWheelInfo*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(wheelInfo->m_wheelDirectionCS, outVector3);
}

/// @func btWheelInfo_setWheelAxleCS(wheelInfo, wheelAxleCS)
///
/// @desc
/// Set the wheel axle direction in local space for a btWheelInfo instance.
///
/// @param {Pointer} wheelInfo
///     A pointer to the btWheelInfo instance.
/// @param {Pointer} wheelAxleCS
///     A pointer to a btVector3 representing the wheel axle direction in local
///     space.
YYEXPORT void btWheelInfo_setWheelAxleCS(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfo = (btWheelInfo*)YYGetPtr(arg, 0);
	btVector3& wheelAxleCS = *(btVector3*)YYGetPtr(arg, 1);
	CopyVector3(wheelAxleCS, &wheelInfo->m_wheelAxleCS);
}

/// @func btWheelInfo_getWheelAxleCS(wheelInfo, outVector3)
///
/// @desc
/// Get the wheel axle direction in local space from a btWheelInfo instance.
///
/// @param {Pointer} wheelInfo
///     A pointer to the btWheelInfo instance.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 to store the wheel axle direction in local
///     space.
YYEXPORT void btWheelInfo_getWheelAxleCS(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfo = (btWheelInfo*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(wheelInfo->m_wheelAxleCS, outVector3);
}

/// @func btWheelInfo_setSuspensionRestLength1(wheelInfo, suspensionRestLength1)
///
/// @desc
/// Set the suspension rest length for the wheel in a btWheelInfo instance.
///
/// @param {Pointer} wheelInfo
///     A pointer to the btWheelInfo instance.
/// @param {Real} suspensionRestLength1
///     The suspension rest length for the wheel.
YYEXPORT void btWheelInfo_setSuspensionRestLength1(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfo = (btWheelInfo*)YYGetPtr(arg, 0);
	double suspensionRestLength1 = YYGetReal(arg, 1);
	wheelInfo->m_suspensionRestLength1 = suspensionRestLength1;
}

/// @func btWheelInfo_getSuspensionRestLength1(wheelInfo)
///
/// @desc
/// Get the suspension rest length for the wheel from a btWheelInfo instance.
///
/// @param {Pointer} wheelInfo
///     A pointer to the btWheelInfo instance.
///
/// @return {Real} The suspension rest length for the wheel.
YYEXPORT void btWheelInfo_getSuspensionRestLength1(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfo = (btWheelInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = wheelInfo->m_suspensionRestLength1;
}

/// @func btWheelInfo_setMaxSuspensionTravelCm(wheelInfo, maxSuspensionTravelCm)
///
/// @desc
/// Set the maximum suspension travel in centimeters for the wheel in a
/// btWheelInfo instance.
///
/// @param {Pointer} wheelInfo
///     A pointer to the btWheelInfo instance.
/// @param {Real} maxSuspensionTravelCm
///     The maximum suspension travel in centimeters for the wheel.
YYEXPORT void btWheelInfo_setMaxSuspensionTravelCm(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfo = (btWheelInfo*)YYGetPtr(arg, 0);
	double maxSuspensionTravelCm = YYGetReal(arg, 1);
	wheelInfo->m_maxSuspensionTravelCm = maxSuspensionTravelCm;
}

/// @func btWheelInfo_getMaxSuspensionTravelCm(wheelInfo)
///
/// @desc
/// Get the maximum suspension travel in centimeters for the wheel from a
/// btWheelInfo instance.
///
/// @param {Pointer} wheelInfo
///     A pointer to the btWheelInfo instance.
///
/// @return {Real} The maximum suspension travel in centimeters for the wheel.
YYEXPORT void btWheelInfo_getMaxSuspensionTravelCm(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfo = (btWheelInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = wheelInfo->m_maxSuspensionTravelCm;
}

/// @func btWheelInfo_getSuspensionRestLength(wheelInfo)
///
/// @desc
/// Get the suspension rest length for the wheel from a btWheelInfo instance.
///
/// @param {Pointer} wheelInfo
///     A pointer to the btWheelInfo instance.
///
/// @return {Real} The suspension rest length for the wheel.
YYEXPORT void btWheelInfo_getSuspensionRestLength(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfo = (btWheelInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = wheelInfo->getSuspensionRestLength();
}

/// @func btWheelInfo_setWheelsRadius(wheelInfo, wheelsRadius)
///
/// @desc
/// Set the radius of the wheel for a btWheelInfo instance.
///
/// @param {Pointer} wheelInfo
///     A pointer to the btWheelInfo instance.
/// @param {Real} wheelsRadius
///     The radius of the wheel.
YYEXPORT void btWheelInfo_setWheelsRadius(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfo = (btWheelInfo*)YYGetPtr(arg, 0);
	double wheelsRadius = YYGetReal(arg, 1);
	wheelInfo->m_wheelsRadius = wheelsRadius;
}

/// @func btWheelInfo_getWheelsRadius(wheelInfo)
///
/// @desc
/// Get the radius of the wheel from a btWheelInfo instance.
///
/// @param {Pointer} wheelInfo
///     A pointer to the btWheelInfo instance.
///
/// @return {Real} The radius of the wheel.
YYEXPORT void btWheelInfo_getWheelsRadius(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfo = (btWheelInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = wheelInfo->m_wheelsRadius;
}

/// @func btWheelInfo_setSuspensionStiffness(wheelInfo, suspensionStiffness)
///
/// @desc
/// Set the suspension stiffness for a btWheelInfo instance.
///
/// @param {Pointer} wheelInfo
///     A pointer to the btWheelInfo instance.
/// @param {Real} suspensionStiffness
///     The suspension stiffness value to set.
YYEXPORT void btWheelInfo_setSuspensionStiffness(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfo = (btWheelInfo*)YYGetPtr(arg, 0);
	double suspensionStiffness = YYGetReal(arg, 1);
	wheelInfo->m_suspensionStiffness = suspensionStiffness;
}

/// @func btWheelInfo_getSuspensionStiffness(wheelInfo)
///
/// @desc
/// Get the suspension stiffness from a btWheelInfo instance.
///
/// @param {Pointer} wheelInfo
///     A pointer to the btWheelInfo instance.
///
/// @return {Real} The suspension stiffness value.
YYEXPORT void btWheelInfo_getSuspensionStiffness(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfo = (btWheelInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = wheelInfo->m_suspensionStiffness;
}

/// @func btWheelInfo_setWheelsDampingCompression(wheelInfo, wheelsDampingCompression)
///
/// @desc
/// Set the damping compression for a btWheelInfo instance.
///
/// @param {Pointer} wheelInfo
///     A pointer to the btWheelInfo instance.
/// @param {Real} wheelsDampingCompression
///     The damping compression value to set.
YYEXPORT void btWheelInfo_setWheelsDampingCompression(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfo = (btWheelInfo*)YYGetPtr(arg, 0);
	double wheelsDampingCompression = YYGetReal(arg, 1);
	wheelInfo->m_wheelsDampingCompression = wheelsDampingCompression;
}

/// @func btWheelInfo_getWheelsDampingCompression(wheelInfo)
///
/// @desc
/// Get the damping compression from a btWheelInfo instance.
///
/// @param {Pointer} wheelInfo
///     A pointer to the btWheelInfo instance.
///
/// @return {Real} The damping compression value.
YYEXPORT void btWheelInfo_getWheelsDampingCompression(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfo = (btWheelInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = wheelInfo->m_wheelsDampingCompression;
}

/// @func btWheelInfo_setWheelsDampingRelaxation(wheelInfo, wheelsDampingRelaxation)
///
/// @desc
/// Set the wheels damping relaxation for a btWheelInfo instance.
///
/// @param {Pointer} wheelInfo
///     A pointer to the btWheelInfo instance.
/// @param {Real} wheelsDampingRelaxation
///     The wheels damping relaxation value to set.
YYEXPORT void btWheelInfo_setWheelsDampingRelaxation(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfo = (btWheelInfo*)YYGetPtr(arg, 0);
	double wheelsDampingRelaxation = YYGetReal(arg, 1);
	wheelInfo->m_wheelsDampingRelaxation = wheelsDampingRelaxation;
}

/// @func btWheelInfo_getWheelsDampingRelaxation(wheelInfo)
///
/// @desc
/// Get the wheels damping relaxation from a btWheelInfo instance.
///
/// @param {Pointer} wheelInfo
///     A pointer to the btWheelInfo instance.
///
/// @return {Real} The wheels damping relaxation value.
YYEXPORT void btWheelInfo_getWheelsDampingRelaxation(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfo = (btWheelInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = wheelInfo->m_wheelsDampingRelaxation;
}

/// @func btWheelInfo_setFrictionSlip(wheelInfo, frictionSlip)
///
/// @desc
/// Set the friction slip for a btWheelInfo instance.
///
/// @param {Pointer} wheelInfo
///     A pointer to the btWheelInfo instance.
/// @param {Real} frictionSlip
///     The friction slip value to set.
YYEXPORT void btWheelInfo_setFrictionSlip(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfo = (btWheelInfo*)YYGetPtr(arg, 0);
	double frictionSlip = YYGetReal(arg, 1);
	wheelInfo->m_frictionSlip = frictionSlip;
}

/// @func btWheelInfo_getFrictionSlip(wheelInfo)
///
/// @desc
/// Get the friction slip from a btWheelInfo instance.
///
/// @param {Pointer} wheelInfo
///     A pointer to the btWheelInfo instance.
///
/// @return {Real} The friction slip value.
YYEXPORT void btWheelInfo_getFrictionSlip(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfo = (btWheelInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = wheelInfo->m_frictionSlip;
}

/// @func btWheelInfo_setSteering(wheelInfo, steering)
///
/// @desc
/// Set the steering value for a btWheelInfo instance, controlling the steering
/// angle.
///
/// @param {Pointer} wheelInfo
///     A pointer to the btWheelInfo instance.
/// @param {Real} steering
///     The steering value to set.
YYEXPORT void btWheelInfo_setSteering(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfo = (btWheelInfo*)YYGetPtr(arg, 0);
	double steering = YYGetReal(arg, 1);
	wheelInfo->m_steering = steering;
}

/// @func btWheelInfo_getSteering(wheelInfo)
///
/// @desc
/// Get the steering value from a btWheelInfo instance, representing the
/// steering angle.
///
/// @param {Pointer} wheelInfo
///     A pointer to the btWheelInfo instance.
///
/// @return {Real} The steering value (steering angle).
YYEXPORT void btWheelInfo_getSteering(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfo = (btWheelInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = wheelInfo->m_steering;
}

/// @func btWheelInfo_setRotation(wheelInfo, rotation)
///
/// @desc
/// Set the rotation value for a btWheelInfo instance, representing the wheel's
/// rotation.
///
/// @param {Pointer} wheelInfo
///     A pointer to the btWheelInfo instance.
/// @param {Real} rotation
///     The rotation value to set.
YYEXPORT void btWheelInfo_setRotation(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfo = (btWheelInfo*)YYGetPtr(arg, 0);
	double rotation = YYGetReal(arg, 1);
	wheelInfo->m_rotation = rotation;
}

/// @func btWheelInfo_getRotation(wheelInfo)
///
/// @desc
/// Get the rotation value from a btWheelInfo instance, representing the wheel's
/// rotation.
///
/// @param {Pointer} wheelInfo
///     A pointer to the btWheelInfo instance.
///
/// @return {Real} The rotation value.
YYEXPORT void btWheelInfo_getRotation(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfo = (btWheelInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = wheelInfo->m_rotation;
}

/// @func btWheelInfo_setDeltaRotation(wheelInfo, deltaRotation)
///
/// @desc
/// Set the delta rotation value for a btWheelInfo instance, controlling the
/// change in rotation per time step.
///
/// @param {Pointer} wheelInfo
///     A pointer to the btWheelInfo instance.
/// @param {Real} deltaRotation
///     The delta rotation value to set.
YYEXPORT void btWheelInfo_setDeltaRotation(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfo = (btWheelInfo*)YYGetPtr(arg, 0);
	double deltaRotation = YYGetReal(arg, 1);
	wheelInfo->m_deltaRotation = deltaRotation;
}

/// @func btWheelInfo_getDeltaRotation(wheelInfo)
///
/// @desc
/// Get the delta rotation value from a btWheelInfo instance, representing the
/// change in rotation per time step.
///
/// @param {Pointer} wheelInfo
///     A pointer to the btWheelInfo instance.
///
/// @return {Real} The delta rotation value.
YYEXPORT void btWheelInfo_getDeltaRotation(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfo = (btWheelInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = wheelInfo->m_deltaRotation;
}

/// @func btWheelInfo_setRollInfluence(wheelInfo, rollInfluence)
///
/// @desc
/// Set the roll influence value for a btWheelInfo instance, affecting the
/// vehicle's roll stability.
///
/// @param {Pointer} wheelInfo
///     A pointer to the btWheelInfo instance.
/// @param {Real} rollInfluence
///     The roll influence value to set, affecting roll stability.
YYEXPORT void btWheelInfo_setRollInfluence(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfo = (btWheelInfo*)YYGetPtr(arg, 0);
	double rollInfluence = YYGetReal(arg, 1);
	wheelInfo->m_rollInfluence = rollInfluence;
}

/// @func btWheelInfo_getRollInfluence(wheelInfo)
///
/// @desc
/// Get the roll influence value from a btWheelInfo instance, affecting the
/// vehicle's roll stability.
///
/// @param {Pointer} wheelInfo
///     A pointer to the btWheelInfo instance.
///
/// @return {Real} The roll influence value affecting roll stability.
YYEXPORT void btWheelInfo_getRollInfluence(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfo = (btWheelInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = wheelInfo->m_rollInfluence;
}

/// @func btWheelInfo_setMaxSuspensionForce(wheelInfo, maxSuspensionForce)
///
/// @desc
/// Set the maximum suspension force for a btWheelInfo instance, affecting
/// suspension behavior.
///
/// @param {Pointer} wheelInfo
///     A pointer to the btWheelInfo instance.
/// @param {Real} maxSuspensionForce
///     The maximum suspension force value to set.
YYEXPORT void btWheelInfo_setMaxSuspensionForce(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfo = (btWheelInfo*)YYGetPtr(arg, 0);
	double maxSuspensionForce = YYGetReal(arg, 1);
	wheelInfo->m_maxSuspensionForce = maxSuspensionForce;
}

/// @func btWheelInfo_getMaxSuspensionForce(wheelInfo)
///
/// @desc
/// Get the maximum suspension force from a btWheelInfo instance, affecting
/// suspension behavior.
///
/// @param {Pointer} wheelInfo
///     A pointer to the btWheelInfo instance.
///
/// @return {Real} The maximum suspension force value.
YYEXPORT void btWheelInfo_getMaxSuspensionForce(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfo = (btWheelInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = wheelInfo->m_maxSuspensionForce;
}

/// @func btWheelInfo_setEngineForce(wheelInfo, engineForce)
///
/// @desc
/// Set the engine force for a btWheelInfo instance, controlling the driving
/// force applied to the wheel.
///
/// @param {Pointer} wheelInfo
///     A pointer to the btWheelInfo instance.
/// @param {Real} engineForce
///     The engine force value to set.
YYEXPORT void btWheelInfo_setEngineForce(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfo = (btWheelInfo*)YYGetPtr(arg, 0);
	double engineForce = YYGetReal(arg, 1);
	wheelInfo->m_engineForce = engineForce;
}

/// @func btWheelInfo_getEngineForce(wheelInfo)
///
/// @desc
/// Get the engine force from a btWheelInfo instance, representing the driving
/// force applied to the wheel.
///
/// @param {Pointer} wheelInfo
///     A pointer to the btWheelInfo instance.
///
/// @return {Real} The engine force value (driving force).
YYEXPORT void btWheelInfo_getEngineForce(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfo = (btWheelInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = wheelInfo->m_engineForce;
}

/// @func btWheelInfo_setBrake(wheelInfo, brake)
///
/// @desc
/// Set the brake value for a btWheelInfo instance, controlling the braking
/// force applied to the wheel.
///
/// @param {Pointer} wheelInfo
///     A pointer to the btWheelInfo instance.
/// @param {Real} brake
///     The brake value to set.
YYEXPORT void btWheelInfo_setBrake(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfo = (btWheelInfo*)YYGetPtr(arg, 0);
	double brake = YYGetReal(arg, 1);
	wheelInfo->m_brake = brake;
}

/// @func btWheelInfo_getBrake(wheelInfo)
///
/// @desc
/// Get the brake value from a btWheelInfo instance, representing the braking
/// force applied to the wheel.
///
/// @param {Pointer} wheelInfo
///     A pointer to the btWheelInfo instance.
///
/// @return {Real} The brake value (braking force).
YYEXPORT void btWheelInfo_getBrake(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfo = (btWheelInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = wheelInfo->m_brake;
}

/// @func btWheelInfo_setIsFrontWheel(wheelInfo, isFrontWheel)
///
/// @desc
/// Set whether the wheel is a front wheel for a btWheelInfo instance.
///
/// @param {Pointer} wheelInfo
///     A pointer to the btWheelInfo instance.
/// @param {Bool} isFrontWheel
///     A boolean value indicating whether the wheel is a front wheel (true) or
///     not (false).
YYEXPORT void btWheelInfo_setIsFrontWheel(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfo = (btWheelInfo*)YYGetPtr(arg, 0);
	bool isFrontWheel = YYGetBool(arg, 1);
	wheelInfo->m_bIsFrontWheel = isFrontWheel;
}

/// @func btWheelInfo_getIsFrontWheel(wheelInfo)
///
/// @desc
/// Get whether the wheel is a front wheel for a btWheelInfo instance.
///
/// @param {Pointer} wheelInfo
///     A pointer to the btWheelInfo instance.
///
/// @return {Bool} A boolean value indicating whether the wheel is a front wheel
/// (true) or not (false).
YYEXPORT void btWheelInfo_getIsFrontWheel(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfo = (btWheelInfo*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = wheelInfo->m_bIsFrontWheel;
}

// Note: Skipped btWheelInfo::m_clientInfo

/// @func btWheelInfo_updateWheel(wheelInfo, chassis, raycastInfo)
///
/// @desc
/// Update the wheel using the provided chassis and raycast information.
///
/// @param {Pointer} wheelInfo
///     A pointer to the btWheelInfo instance to be updated.
/// @param {Pointer} chassis
///     A pointer to the btRigidBody representing the chassis of the vehicle.
/// @param {Pointer} raycastInfo
///     A pointer to the btRaycastInfo providing information about the wheel's
///     raycast.
YYEXPORT void btWheelInfo_updateWheel(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto wheelInfo = (btWheelInfo*)YYGetPtr(arg, 0);
	btRigidBody& chassis = *(btRigidBody*)YYGetPtr(arg, 1);
	btRaycastInfo& raycastInfo = *(btRaycastInfo*)YYGetPtr(arg, 2);
	wheelInfo->updateWheel(chassis, raycastInfo);
}

// Note: Skipped btWheelInfo::m_clippedInvContactDotSuspension
// Note: Skipped btWheelInfo::m_suspensionRelativeVelocity
// Note: Skipped btWheelInfo::m_wheelsSuspensionForce
// Note: Skipped btWheelInfo::m_skidInfo
