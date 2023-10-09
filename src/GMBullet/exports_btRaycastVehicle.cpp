#include <GMBullet.hpp>
#include <BulletDynamics/Vehicle/btVehicleRaycaster.h>

using btVehicleTuning = btRaycastVehicle::btVehicleTuning;
using btVehicleRaycasterResult = btVehicleRaycaster::btVehicleRaycasterResult;

////////////////////////////////////////////////////////////////////////////////
//
// btVehicleTuning
//

/// @func btVehicleTuning_create()
///
/// @desc
/// Creates a new instance of btVehicleTuning, which contains tuning parameters
/// for a vehicle.
///
/// @return {Pointer} A pointer to the newly created btVehicleTuning object.
YYEXPORT void btVehicleTuning_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	result.kind = VALUE_PTR;
	result.ptr = new btVehicleTuning();
}

/// @func btVehicleTuning_destroy(vehicleTuning)
///
/// @desc
/// Destroys a btVehicleTuning object and frees the associated memory.
///
/// @param {Pointer} vehicleTuning A pointer to the btVehicleTuning object to be
/// destroyed.
YYEXPORT void btVehicleTuning_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btVehicleTuning*)YYGetPtr(arg, 0);
}

/// @func btVehicleTuning_getSuspensionStiffness(vehicleTuning)
///
/// @desc
/// Gets the suspension stiffness for a vehicle tuning configuration.
///
/// @param {Pointer} vehicleTuning
///     A pointer to the btVehicleTuning object.
///
/// @return {Real} The suspension stiffness for the vehicle tuning configuration.
YYEXPORT void btVehicleTuning_getSuspensionStiffness(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto vehicleTuning = (btVehicleTuning*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = vehicleTuning->m_suspensionStiffness;
}

/// @func btVehicleTuning_setSuspensionStiffness(vehicleTuning, suspensionStiffness)
///
/// @desc
/// Sets the suspension stiffness for a vehicle tuning configuration.
///
/// @param {Pointer} vehicleTuning
///     A pointer to the btVehicleTuning object.
/// @param {Real} suspensionStiffness
///     The suspension stiffness to set for the vehicle tuning configuration.
YYEXPORT void btVehicleTuning_setSuspensionStiffness(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto vehicleTuning = (btVehicleTuning*)YYGetPtr(arg, 0);
	double suspensionStiffness = YYGetReal(arg, 1);
	vehicleTuning->m_suspensionStiffness = suspensionStiffness;
}

/// @func btVehicleTuning_getSuspensionCompression(vehicleTuning)
///
/// @desc
/// Gets the suspension compression for a vehicle tuning configuration.
///
/// @param {Pointer} vehicleTuning
///     A pointer to the btVehicleTuning object.
///
/// @return {Real} The suspension compression for the vehicle tuning
/// configuration.
YYEXPORT void btVehicleTuning_getSuspensionCompression(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto vehicleTuning = (btVehicleTuning*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = vehicleTuning->m_suspensionCompression;
}

/// @func btVehicleTuning_setSuspensionCompression(vehicleTuning, suspensionCompression)
///
/// @desc
/// Sets the suspension compression for a vehicle tuning configuration.
///
/// @param {Pointer} vehicleTuning
///     A pointer to the btVehicleTuning object.
/// @param {Real} suspensionCompression
///     The suspension compression to set for the vehicle tuning configuration.
YYEXPORT void btVehicleTuning_setSuspensionCompression(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto vehicleTuning = (btVehicleTuning*)YYGetPtr(arg, 0);
	double suspensionCompression = YYGetReal(arg, 1);
	vehicleTuning->m_suspensionCompression = suspensionCompression;
}

/// @func btVehicleTuning_getSuspensionDamping(vehicleTuning)
///
/// @desc
/// Gets the suspension damping for a vehicle tuning configuration.
///
/// @param {Pointer} vehicleTuning
///     A pointer to the btVehicleTuning object.
///
/// @return {Real} The suspension damping for the vehicle tuning configuration.
YYEXPORT void btVehicleTuning_getSuspensionDamping(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto vehicleTuning = (btVehicleTuning*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = vehicleTuning->m_suspensionDamping;
}

/// @func btVehicleTuning_setSuspensionDamping(vehicleTuning, suspensionDamping)
///
/// @desc
/// Sets the suspension damping for a vehicle tuning configuration.
///
/// @param {Pointer} vehicleTuning
///     A pointer to the btVehicleTuning object.
/// @param {Real} suspensionDamping
///     The suspension damping to set for the vehicle tuning configuration.
YYEXPORT void btVehicleTuning_setSuspensionDamping(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto vehicleTuning = (btVehicleTuning*)YYGetPtr(arg, 0);
	double suspensionDamping = YYGetReal(arg, 1);
	vehicleTuning->m_suspensionDamping = suspensionDamping;
}

/// @func btVehicleTuning_getSuspensionTravelCm(vehicleTuning)
///
/// @desc
/// Gets the maximum suspension travel in centimeters for a vehicle tuning
/// configuration.
///
/// @param {Pointer} vehicleTuning
///     A pointer to the btVehicleTuning object.
///
/// @return {Real} The maximum suspension travel in centimeters for the vehicle
/// tuning configuration.
YYEXPORT void btVehicleTuning_getSuspensionTravelCm(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto vehicleTuning = (btVehicleTuning*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = vehicleTuning->m_maxSuspensionTravelCm;
}

/// @func btVehicleTuning_setSuspensionTravelCm(vehicleTuning, suspensionTravelCm)
///
/// @desc
/// Sets the maximum suspension travel in centimeters for a vehicle tuning
/// configuration.
///
/// @param {Pointer} vehicleTuning
///     A pointer to the btVehicleTuning object.
/// @param {Real} suspensionTravelCm
///     The maximum suspension travel in centimeters to set for the vehicle
///     tuning configuration.
YYEXPORT void btVehicleTuning_setSuspensionTravelCm(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto vehicleTuning = (btVehicleTuning*)YYGetPtr(arg, 0);
	double suspensionTravelCm = YYGetReal(arg, 1);
	vehicleTuning->m_maxSuspensionTravelCm = suspensionTravelCm;
}

/// @func btVehicleTuning_getFrictionSlip(vehicleTuning)
///
/// @desc
/// Gets the friction slip value for a vehicle tuning configuration.
///
/// @param {Pointer} vehicleTuning
///     A pointer to the btVehicleTuning object.
///
/// @return {Real} The friction slip value for the vehicle tuning configuration.
YYEXPORT void btVehicleTuning_getFrictionSlip(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto vehicleTuning = (btVehicleTuning*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = vehicleTuning->m_frictionSlip;
}

/// @func btVehicleTuning_setFrictionSlip(vehicleTuning, frictionSlip)
///
/// @desc
/// Sets the friction slip value for a vehicle tuning configuration.
///
/// @param {Pointer} vehicleTuning
///     A pointer to the btVehicleTuning object.
/// @param {Real} frictionSlip
///     The friction slip value to set for the vehicle tuning configuration.
YYEXPORT void btVehicleTuning_setFrictionSlip(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto vehicleTuning = (btVehicleTuning*)YYGetPtr(arg, 0);
	double frictionSlip = YYGetReal(arg, 1);
	vehicleTuning->m_frictionSlip = frictionSlip;
}

/// @func btVehicleTuning_getMaxSuspensionForce(vehicleTuning)
///
/// @desc
/// Gets the maximum suspension force value for a vehicle tuning configuration.
///
/// @param {Pointer} vehicleTuning
///     A pointer to the btVehicleTuning object.
///
/// @return {Real} The maximum suspension force value for the vehicle tuning
/// configuration.
YYEXPORT void btVehicleTuning_getMaxSuspensionForce(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto vehicleTuning = (btVehicleTuning*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = vehicleTuning->m_maxSuspensionForce;
}

/// @func btVehicleTuning_setMaxSuspensionForce(vehicleTuning, maxSuspensionForce)
///
/// @desc
/// Sets the maximum suspension force value for a vehicle tuning configuration.
///
/// @param {Pointer} vehicleTuning
///     A pointer to the btVehicleTuning object.
/// @param {Real} maxSuspensionForce
///     The maximum suspension force value to set for the vehicle tuning
///     configuration.
YYEXPORT void btVehicleTuning_setMaxSuspensionForce(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto vehicleTuning = (btVehicleTuning*)YYGetPtr(arg, 0);
	double maxSuspensionForce = YYGetReal(arg, 1);
	vehicleTuning->m_maxSuspensionForce = maxSuspensionForce;
}

////////////////////////////////////////////////////////////////////////////////
//
// btRaycastVehicle
//

/// @func btRaycastVehicle_create(tuning, chassis, raycaster)
///
/// @desc
/// Creates a btRaycastVehicle using the provided tuning, chassis rigid body,
/// and raycaster.
///
/// @param {Pointer} tuning
///     A pointer to the btVehicleTuning object.
/// @param {Pointer} chassis
///     A pointer to the btRigidBody that represents the chassis of the vehicle.
/// @param {Pointer} raycaster
///     A pointer to the btVehicleRaycaster to be used for raycasting in the
///     vehicle.
///
/// @return {Pointer} A pointer to the newly created btRaycastVehicle.
YYEXPORT void btRaycastVehicle_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto& tuning = *(btVehicleTuning*)YYGetPtr(arg, 0);
	auto chassis = (btRigidBody*)YYGetPtr(arg, 1);
	auto raycaster = (btVehicleRaycaster*)YYGetPtr(arg, 2);
	result.kind = VALUE_PTR;
	result.ptr = new btRaycastVehicle(tuning, chassis, raycaster);
}

/// @func btRaycastVehicle_destroy(raycastVehicle)
///
/// @desc
/// Destroys a btRaycastVehicle instance, releasing associated resources.
///
/// @param {Pointer} raycastVehicle
///     A pointer to the btRaycastVehicle object to be destroyed.
YYEXPORT void btRaycastVehicle_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btRaycastVehicle*)YYGetPtr(arg, 0);
}

/// @func btRaycastVehicle_updateAction(raycastVehicle, collisionWorld, step)
///
/// @desc
/// Updates the action of a btRaycastVehicle for the specified time step using
/// the provided collision world.
///
/// @param {Pointer} raycastVehicle
///     A pointer to the btRaycastVehicle object to update.
/// @param {Pointer} collisionWorld
///     A pointer to the btCollisionWorld in which the vehicle operates.
/// @param {Real} step
///     The time step for the update.
YYEXPORT void btRaycastVehicle_updateAction(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto raycastVehicle = (btRaycastVehicle*)YYGetPtr(arg, 0);
	auto collisionWorld = (btCollisionWorld*)YYGetPtr(arg, 1);
	double step = YYGetReal(arg, 2);
	raycastVehicle->updateAction(collisionWorld, step);
}

// Note: Skip btRaycastVehicle::debugDraw

/// @func btRaycastVehicle_getChassisWorldTransform(raycastVehicle)
///
/// @desc
/// Gets the world transform of the chassis of the btRaycastVehicle.
///
/// @param {Pointer} raycastVehicle
///     A pointer to the btRaycastVehicle object.
///
/// @return {Pointer} A pointer to the btTransform representing the world
/// transform of the chassis.
YYEXPORT void btRaycastVehicle_getChassisWorldTransform(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto raycastVehicle = (btRaycastVehicle*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = const_cast<btTransform*>(&raycastVehicle->getChassisWorldTransform());
}

/// @func btRaycastVehicle_rayCast(raycastVehicle, wheel)
///
/// @desc
/// Cast a ray for a wheel of the btRaycastVehicle to find collision information.
///
/// @param {Pointer} raycastVehicle
///     A pointer to the btRaycastVehicle object.
/// @param {Pointer} wheel
///     A pointer to the btWheelInfo object representing the wheel for which the
///     ray is cast.
YYEXPORT void btRaycastVehicle_rayCast(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto raycastVehicle = (btRaycastVehicle*)YYGetPtr(arg, 0);
	auto& wheel = *(btWheelInfo*)YYGetPtr(arg, 1);
	raycastVehicle->rayCast(wheel);
}

// Note: Skipped btRaycastVehicle::updateVehicle

/// @func btRaycastVehicle_resetSuspension(raycastVehicle)
///
/// @desc
/// Reset the suspension of the btRaycastVehicle, bringing it to its rest
/// position.
///
/// @param {Pointer} raycastVehicle
///     A pointer to the btRaycastVehicle object whose suspension needs to be
///     reset.
YYEXPORT void btRaycastVehicle_resetSuspension(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto raycastVehicle = (btRaycastVehicle*)YYGetPtr(arg, 0);
	raycastVehicle->resetSuspension();
}

/// @func btRaycastVehicle_getSteeringValue(raycastVehicle, wheel)
///
/// @desc
/// Get the steering value for a specific wheel of the btRaycastVehicle.
///
/// @param {Pointer} raycastVehicle
///     A pointer to the btRaycastVehicle object.
/// @param {Real} wheel
///     The index of the wheel for which the steering value is requested.
///
/// @return {Real} The steering value for the specified wheel.
YYEXPORT void btRaycastVehicle_getSteeringValue(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto raycastVehicle = (btRaycastVehicle*)YYGetPtr(arg, 0);
	int wheel = YYGetInt32(arg, 1);
	result.kind = VALUE_INT32;
	result.val = raycastVehicle->getSteeringValue(wheel);
}

/// @func btRaycastVehicle_setSteeringValue(raycastVehicle, steering, wheel)
///
/// @desc
/// Set the steering value for a specific wheel of the btRaycastVehicle.
///
/// @param {Pointer} raycastVehicle
///     A pointer to the btRaycastVehicle object.
/// @param {Real} steering
///     The steering value to set for the specified wheel. Should be in the
///     range -1..1.
/// @param {Real} wheel
///     The index of the wheel for which the steering value should be set.
YYEXPORT void btRaycastVehicle_setSteeringValue(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto raycastVehicle = (btRaycastVehicle*)YYGetPtr(arg, 0);
	double steering = YYGetReal(arg, 1);
	int wheel = YYGetInt32(arg, 2);
	raycastVehicle->setSteeringValue(steering, wheel);
}

/// @func btRaycastVehicle_applyEngineForce(raycastVehicle, force, wheel)
///
/// @desc
/// Apply engine force to a specific wheel of the btRaycastVehicle.
///
/// @param {Pointer} raycastVehicle
///     A pointer to the btRaycastVehicle object.
/// @param {Real} force
///     The engine force to apply to the specified wheel.
/// @param {Real} wheel
///     The index of the wheel to which the engine force should be applied.
YYEXPORT void btRaycastVehicle_applyEngineForce(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto raycastVehicle = (btRaycastVehicle*)YYGetPtr(arg, 0);
	double force = YYGetReal(arg, 1);
	int wheel = YYGetInt32(arg, 2);
	raycastVehicle->applyEngineForce(force, wheel);
}

/// @func btRaycastVehicle_getWheelTransformWS(raycastVehicle, wheelIndex)
///
/// @desc
/// Get the world transform of a specific wheel on the btRaycastVehicle.
///
/// @param {Pointer} raycastVehicle
///     A pointer to the btRaycastVehicle object.
/// @param {Real} wheelIndex
///     The index of the wheel for which to retrieve the world transform.
///
/// @return {Pointer} A pointer to the btTransform object representing the world
/// transform of the specified wheel.
YYEXPORT void btRaycastVehicle_getWheelTransformWS(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto raycastVehicle = (btRaycastVehicle*)YYGetPtr(arg, 0);
	int wheelIndex = YYGetInt32(arg, 1);
	result.kind = VALUE_PTR;
	result.ptr = const_cast<btTransform*>(&raycastVehicle->getWheelTransformWS(wheelIndex));
}

/// @func btRaycastVehicle_updateWheelTransform(raycastVehicle, wheelIndex[, interpolatedTransform])
///
/// @desc
/// Update the wheel transform for a specific wheel on the btRaycastVehicle.
///
/// @param {Pointer} raycastVehicle
///     A pointer to the btRaycastVehicle object.
/// @param {Real} wheelIndex
///     The index of the wheel for which to update the transform.
/// @param {Bool} [interpolatedTransform]
///     A boolean indicating whether to use interpolated transform for the wheel.
///     Defaults to true.
YYEXPORT void btRaycastVehicle_updateWheelTransform(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto raycastVehicle = (btRaycastVehicle*)YYGetPtr(arg, 0);
	int wheel = YYGetInt32(arg, 1);
	bool interpolatedTransform = (argc > 2) ? YYGetBool(arg, 2) : true;
	raycastVehicle->updateWheelTransform(wheel, interpolatedTransform);
}

/// @func btRaycastVehicle_addWheel(raycastVehicle, connectionPointCS0, wheelDirectionCS0, wheelAxleCS, suspensionRestLength, wheelRadius, tuning, isFrontWheel)
///
/// @desc
/// Add a wheel to the btRaycastVehicle with specified parameters.
///
/// @param {Pointer} raycastVehicle
///     A pointer to the btRaycastVehicle object.
/// @param {Pointer} connectionPointCS0
///     The connection point of the wheel in chassis space.
/// @param {Pointer} wheelDirectionCS0
///     The direction of the wheel in chassis space.
/// @param {Pointer} wheelAxleCS
///     The axle direction of the wheel in chassis space.
/// @param {Real} suspensionRestLength
///     The rest length of the suspension in the uncompressed state.
/// @param {Real} wheelRadius
///     The radius of the wheel.
/// @param {Pointer} tuning
///     A pointer to the btVehicleTuning object specifying tuning parameters for
///     the wheel.
/// @param {Bool} isFrontWheel
///     A boolean indicating whether the wheel is a front wheel.
YYEXPORT void btRaycastVehicle_addWheel(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto raycastVehicle = (btRaycastVehicle*)YYGetPtr(arg, 0);
	auto& connectionPointCS0 = *(btVector3*)YYGetPtr(arg, 1);
	auto& wheelDirectionCS0 = *(btVector3*)YYGetPtr(arg, 2);
	auto& wheelAxleCS = *(btVector3*)YYGetPtr(arg, 3);
	double suspensionRestLength = YYGetReal(arg, 4);
	double wheelRadius = YYGetReal(arg, 5);
	auto& tuning = *(btVehicleTuning*)YYGetPtr(arg, 6);
	bool isFrontWheel = YYGetBool(arg, 7);
	raycastVehicle->addWheel(
		connectionPointCS0,
		wheelDirectionCS0,
		wheelAxleCS,
		suspensionRestLength,
		wheelRadius,
		tuning,
		isFrontWheel);
}

/// @func btRaycastVehicle_getNumWheels(raycastVehicle)
///
/// @desc
/// Get the number of wheels in the btRaycastVehicle.
///
/// @param {Pointer} raycastVehicle
///     A pointer to the btRaycastVehicle object.
///
/// @return {Real} The number of wheels in the btRaycastVehicle.
YYEXPORT void btRaycastVehicle_getNumWheels(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto raycastVehicle = (btRaycastVehicle*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.val = raycastVehicle->getNumWheels();
}

/// @func btRaycastVehicle_getWheelInfo(raycastVehicle, index)
///
/// @desc
/// Get information about a wheel at a specific index in the btRaycastVehicle.
///
/// @param {Pointer} raycastVehicle
///     A pointer to the btRaycastVehicle object.
/// @param {Real} index
///     The index of the wheel for which information is required.
///
/// @return {Pointer} A pointer to the btWheelInfo object containing information
/// about the specified wheel.
YYEXPORT void btRaycastVehicle_getWheelInfo(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto raycastVehicle = (btRaycastVehicle*)YYGetPtr(arg, 0);
	int index = YYGetInt32(arg, 1);
	result.kind = VALUE_PTR;
	result.ptr = const_cast<btWheelInfo*>(&raycastVehicle->getWheelInfo(index));
}

/// @func btRaycastVehicle_updateWheelTransformsWS(raycastVehicle, wheel[, interpolatedTransform])
///
/// @desc
/// Update the wheel transforms in world space for a specified wheel.
///
/// @param {Pointer} raycastVehicle
///     A pointer to the btRaycastVehicle object.
/// @param {Real} wheel
///     The index of the wheel for which to update the transform.
/// @param {Bool} [interpolatedTransform]
///     If true, the transform will be interpolated. Default is true.
YYEXPORT void btRaycastVehicle_updateWheelTransformsWS(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto raycastVehicle = (btRaycastVehicle*)YYGetPtr(arg, 0);
	auto& wheel = *(btWheelInfo*)YYGetPtr(arg, 1);
	bool interpolatedTransform = (argc > 2) ? YYGetBool(arg, 2) : true;
	raycastVehicle->updateWheelTransformsWS(wheel, interpolatedTransform);
}

/// @func btRaycastVehicle_setBrake(raycastVehicle, brake, wheelIndex)
///
/// @desc
/// Set the braking force for a specific wheel of the raycast vehicle.
///
/// @param {Pointer} raycastVehicle
///     A pointer to the btRaycastVehicle object.
/// @param {Real} brake
///     The braking force to apply to the wheel.
/// @param {Real} wheelIndex
///     The index of the wheel for which to set the brake.
YYEXPORT void btRaycastVehicle_setBrake(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto raycastVehicle = (btRaycastVehicle*)YYGetPtr(arg, 0);
	double brake = YYGetReal(arg, 1);
	int wheelIndex = YYGetInt32(arg, 2);
	raycastVehicle->setBrake(brake, wheelIndex);
}

/// @func btRaycastVehicle_setPitchControl(raycastVehicle, pitch)
///
/// @desc
/// Set the pitch control factor for the raycast vehicle.
///
/// @param {Pointer} raycastVehicle
///     A pointer to the btRaycastVehicle object.
/// @param {Real} pitch
///     The pitch control factor to set for the vehicle.
YYEXPORT void btRaycastVehicle_setPitchControl(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto raycastVehicle = (btRaycastVehicle*)YYGetPtr(arg, 0);
	double pitch = YYGetReal(arg, 1);
	raycastVehicle->setPitchControl(pitch);
}

/// @func btRaycastVehicle_updateSuspension(raycastVehicle, deltaTime)
///
/// @desc
/// Update the suspension for the raycast vehicle based on the elapsed time.
///
/// @param {Pointer} raycastVehicle
///     A pointer to the btRaycastVehicle object.
/// @param {Real} deltaTime
///     The elapsed time since the last suspension update.
YYEXPORT void btRaycastVehicle_updateSuspension(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto raycastVehicle = (btRaycastVehicle*)YYGetPtr(arg, 0);
	double deltaTime = YYGetReal(arg, 1);
	raycastVehicle->updateSuspension(deltaTime);
}

/// @func btRaycastVehicle_updateFriction(raycastVehicle, timeStep)
///
/// @desc
/// Update the friction for the raycast vehicle based on the time step.
///
/// @param {Pointer} raycastVehicle
///     A pointer to the btRaycastVehicle object.
/// @param {Real} timeStep
///     The time step for the friction update.
YYEXPORT void btRaycastVehicle_updateFriction(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto raycastVehicle = (btRaycastVehicle*)YYGetPtr(arg, 0);
	double timeStep = YYGetReal(arg, 1);
	raycastVehicle->updateFriction(timeStep);
}

/// @func btRaycastVehicle_getRigidBody(raycastVehicle)
///
/// @desc
/// Get the rigid body associated with the raycast vehicle.
///
/// @param {Pointer} raycastVehicle
///     A pointer to the btRaycastVehicle object.
///
/// @return {Pointer} A pointer to the associated rigid body.
YYEXPORT void btRaycastVehicle_getRigidBody(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto raycastVehicle = (btRaycastVehicle*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = raycastVehicle->getRigidBody();
}

/// @func btRaycastVehicle_getRightAxis(raycastVehicle)
///
/// @desc
/// Get the right axis index for the raycast vehicle.
///
/// @param {Pointer} raycastVehicle
///     A pointer to the btRaycastVehicle object.
///
/// @return {Real} The index representing the right axis.
YYEXPORT void btRaycastVehicle_getRightAxis(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto raycastVehicle = (btRaycastVehicle*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.val = raycastVehicle->getRightAxis();
}

/// @func btRaycastVehicle_getUpAxis(raycastVehicle)
///
/// @desc
/// Get the up axis index for the raycast vehicle.
///
/// @param {Pointer} raycastVehicle
///     A pointer to the btRaycastVehicle object.
///
/// @return {Real} The index representing the up axis.
YYEXPORT void btRaycastVehicle_getUpAxis(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto raycastVehicle = (btRaycastVehicle*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.val = raycastVehicle->getUpAxis();
}

/// @func btRaycastVehicle_getForwardAxis(raycastVehicle)
///
/// @desc
/// Get the forward axis index for the raycast vehicle.
///
/// @param {Pointer} raycastVehicle
///     A pointer to the btRaycastVehicle object.
///
/// @return {Real} The index representing the forward axis.
YYEXPORT void btRaycastVehicle_getForwardAxis(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto raycastVehicle = (btRaycastVehicle*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.val = raycastVehicle->getForwardAxis();
}

/// @func btRaycastVehicle_getForwardVector(raycastVehicle, outVector3)
///
/// @desc
/// Get the forward vector of the raycast vehicle.
///
/// @param {Pointer} raycastVehicle
///     A pointer to the btRaycastVehicle object.
/// @param {Pointer} outVector3
///     A pointer to a btVector3 where the forward vector will be copied.
YYEXPORT void btRaycastVehicle_getForwardVector(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto raycastVehicle = (btRaycastVehicle*)YYGetPtr(arg, 0);
	auto outVector3 = (btVector3*)YYGetPtr(arg, 1);
	CopyVector3(raycastVehicle->getForwardVector(), outVector3);
}

/// @func btRaycastVehicle_getCurrentSpeedKmHour(raycastVehicle)
///
/// @desc
/// Get the current speed of the raycast vehicle in kilometers per hour (km/h).
///
/// @param {Pointer} raycastVehicle
///     A pointer to the btRaycastVehicle object.
///
/// @return {Real} The current speed of the vehicle in kilometers per hour.
YYEXPORT void btRaycastVehicle_getCurrentSpeedKmHour(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto raycastVehicle = (btRaycastVehicle*)YYGetPtr(arg, 0);
	result.kind = VALUE_REAL;
	result.val = raycastVehicle->getCurrentSpeedKmHour();
}

/// @func btRaycastVehicle_setCoordinateSystem(raycastVehicle, rightIndex, upIndex, forwardIndex)
///
/// @desc
/// Set the coordinate system for the raycast vehicle. This specifies the
/// mapping of axes.
///
/// @param {Pointer} raycastVehicle
///     A pointer to the btRaycastVehicle object.
/// @param {Real} rightIndex
///     The index specifying the right axis in the vehicle's local coordinate
///     system.
/// @param {Real} upIndex
///     The index specifying the up axis in the vehicle's local coordinate
///     system.
/// @param {Real} forwardIndex
///     The index specifying the forward axis in the vehicle's local coordinate
///     system.
YYEXPORT void btRaycastVehicle_setCoordinateSystem(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto raycastVehicle = (btRaycastVehicle*)YYGetPtr(arg, 0);
	int rightIndex = YYGetInt32(arg, 1);
	int upIndex = YYGetInt32(arg, 2);
	int forwardIndex = YYGetInt32(arg, 3);
	raycastVehicle->setCoordinateSystem(rightIndex, upIndex, forwardIndex);
}

// Note: Skipped btRaycastVehicle::getUserConstraintType
// Note: Skipped btRaycastVehicle::setUserConstraintType
// Note: Skipped btRaycastVehicle::setUserConstraintId
// Note: Skipped btRaycastVehicle::getUserConstraintId

////////////////////////////////////////////////////////////////////////////////
//
// btDefaultVehicleRaycaster
//

/// @func btDefaultVehicleRaycaster_create(world)
///
/// @desc
/// Create a new instance of the btDefaultVehicleRaycaster.
///
/// @param {Pointer} world
///     A pointer to the btDynamicsWorld object.
///
/// @return {Pointer} A pointer to the newly created btDefaultVehicleRaycaster
/// object.
YYEXPORT void btDefaultVehicleRaycaster_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto world = (btDynamicsWorld*)YYGetPtr(arg, 1);
	result.kind = VALUE_PTR;
	result.ptr = new btDefaultVehicleRaycaster(world);
}

/// @func btDefaultVehicleRaycaster_destroy(defaultVehicleRaycaster)
///
/// @desc
/// Destroy the btDefaultVehicleRaycaster instance.
///
/// @param {Pointer} defaultVehicleRaycaster
///     A pointer to the btDefaultVehicleRaycaster object.
YYEXPORT void btDefaultVehicleRaycaster_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btDefaultVehicleRaycaster*)YYGetPtr(arg, 0);
}

/// @func btDefaultVehicleRaycaster_castRay(defaultVehicleRaycaster, from, to, result)
///
/// @desc
/// Cast a ray using the btDefaultVehicleRaycaster.
///
/// @param {Pointer} defaultVehicleRaycaster
///     A pointer to the btDefaultVehicleRaycaster object.
/// @param {Pointer} from
///     A pointer to a btVector3 representing the starting point of the ray.
/// @param {Pointer} to
///     A pointer to a btVector3 representing the end point of the ray.
/// @param {Pointer} result
///     A pointer to a btVehicleRaycasterResult object where the result of the
///     raycast will be stored.
YYEXPORT void btDefaultVehicleRaycaster_castRay(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto defaultVehicleRaycaster = (btDefaultVehicleRaycaster*)YYGetPtr(arg, 0);
	auto& from = *(btVector3*)YYGetPtr(arg, 1);
	auto& to = *(btVector3*)YYGetPtr(arg, 2);
	auto& raycastResult = *(btVehicleRaycasterResult*)YYGetPtr(arg, 3);
	defaultVehicleRaycaster->castRay(from, to, raycastResult);
}
