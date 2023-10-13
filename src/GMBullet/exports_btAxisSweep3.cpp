#include <GMBullet.hpp>

////////////////////////////////////////////////////////////////////////////////
//
// btAxisSweep3
//

/// @func btAxisSweep3_create(worldAabbMin, worldAabbMax[, maxHandles[, pairCache[, disableRaycastAccelerator]]])
///
/// @desc
/// Creates a new btAxisSweep3 instance.
///
/// @param {Pointer} worldAabbMin
///     A pointer to the minimum corner of the world's AABB (Axis-Aligned
///     Bounding Box).
/// @param {Pointer} worldAabbMax
///     A pointer to the maximum corner of the world's AABB.
/// @param {Real} [maxHandles]
///     The maximum number of handles the axis sweep can handle. Defaults to
///    16384 if not provided.
/// @param {Pointer} [pairCache]
///     A pointer to an optional btOverlappingPairCache to use. Defaults to
///     nullptr.
/// @param {Bool} [disableRaycastAccelerator]
///     A boolean indicating whether to disable the raycast accelerator.
///     Defaults to false if not provided.
///
/// @return {Pointer} A pointer to the created btAxisSweep3 instance.
YYEXPORT void btAxisSweep3_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto& worldAabbMin = *(btVector3*)YYGetPtr(arg, 0);
	auto& worldAabbMax = *(btVector3*)YYGetPtr(arg, 1);
	uint16_t maxHandles = (argc > 2) ? YYGetUint32(arg, 2) : 16384;
	auto pairCache = (argc > 3) ?(btOverlappingPairCache*)YYGetPtr(arg, 3) : nullptr;
	bool disableRaycastAccelerator = (argc > 4) ? YYGetBool(arg, 4) : false;
	result.kind = VALUE_PTR;
	result.ptr = new btAxisSweep3(
		worldAabbMin, worldAabbMax, maxHandles, pairCache, disableRaycastAccelerator);
}

/// @func btAxisSweep3_destroy(axisSweep3)
///
/// @desc
/// Destroys the specified btAxisSweep3 instance.
///
/// @param {Pointer} axisSweep3
///     A pointer to the btAxisSweep3 instance to destroy.
YYEXPORT void btAxisSweep3_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btAxisSweep3*)YYGetPtr(arg, 0);
}

////////////////////////////////////////////////////////////////////////////////
//
// bt32BitAxisSweep3
//

/// @func bt32BitAxisSweep3_create(worldAabbMin, worldAabbMax[, maxHandles[, pairCache[, disableRaycastAccelerator]]])
///
/// @desc
/// Creates a new bt32BitAxisSweep3 instance.
///
/// @param {Pointer} worldAabbMin
///     A pointer to the minimum corner of the world's AABB (Axis-Aligned
///     Bounding Box).
/// @param {Pointer} worldAabbMax
///     A pointer to the maximum corner of the world's AABB.
/// @param {Real} [maxHandles]
///     The maximum number of handles the axis sweep can handle. Defaults to
///     1500000 if not provided.
/// @param {Pointer} [pairCache]
///     A pointer to an optional btOverlappingPairCache to use. Defaults to
///     nullptr.
/// @param {Bool} [disableRaycastAccelerator]
///     A boolean indicating whether to disable the raycast accelerator.
///     Defaults to false if not provided.
///
/// @return {Pointer} A pointer to the created bt32BitAxisSweep3 instance.
YYEXPORT void bt32BitAxisSweep3_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto& worldAabbMin = *(btVector3*)YYGetPtr(arg, 0);
	auto& worldAabbMax = *(btVector3*)YYGetPtr(arg, 1);
	uint32_t maxHandles = (argc > 2) ? YYGetUint32(arg, 2) : 1500000;
	auto pairCache = (argc > 3) ?(btOverlappingPairCache*)YYGetPtr(arg, 3) : nullptr;
	bool disableRaycastAccelerator = (argc > 4) ? YYGetBool(arg, 4) : false;
	result.kind = VALUE_PTR;
	result.ptr = new bt32BitAxisSweep3(
		worldAabbMin, worldAabbMax, maxHandles, pairCache, disableRaycastAccelerator);
}

/// @func bt32BitAxisSweep3_destroy(_32BitAxisSweep3)
///
/// @desc
/// Destroys the specified bt32BitAxisSweep3 instance.
///
/// @param {Pointer} _32BitAxisSweep3
///     A pointer to the bt32BitAxisSweep3 instance to destroy.
YYEXPORT void bt32BitAxisSweep3_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (bt32BitAxisSweep3*)YYGetPtr(arg, 0);
}
