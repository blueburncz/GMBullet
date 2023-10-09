#include <GMBullet.hpp>

/// @func btBvhTriangleMeshShape_create(meshInterface, useQuantizedAabbCompression[, buildBvh])
///
/// @desc
/// Creates a new instance of a Bullet BvhTriangleMeshShape.
///
/// @param {Pointer} meshInterface
///     A pointer to the btStridingMeshInterface object representing the mesh.
/// @param {Bool} useQuantizedAabbCompression
///     A boolean indicating whether to use quantized AABB compression.
/// @param {Bool} [buildBvh]
///     A boolean indicating whether to build the BVH structure. Default is true.
///
/// @return {Pointer} A pointer to the created btBvhTriangleMeshShape object.
YYEXPORT void btBvhTriangleMeshShape_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	btStridingMeshInterface* meshInterface = (btStridingMeshInterface*)YYGetPtr(arg, 0);
	bool useQuantizedAabbCompression = YYGetBool(arg, 1);
	bool buildBvh = (argc > 2) ? YYGetBool(arg, 2) : true;
	result.kind = VALUE_PTR;
	result.ptr = new btBvhTriangleMeshShape(
		meshInterface, useQuantizedAabbCompression, buildBvh);
}

/// @func btBvhTriangleMeshShape_createAabb(meshInterface, useQuantizedAabbCompression, bvhAabbMin, bvhAabbMax[, buildBvh])
///
/// @desc
/// Creates a new instance of a Bullet BvhTriangleMeshShape with specified AABB.
///
/// @param {Pointer} meshInterface
///     A pointer to the btStridingMeshInterface object representing the mesh.
/// @param {Bool} useQuantizedAabbCompression
///     A boolean indicating whether to use quantized AABB compression.
/// @param {Pointer} bvhAabbMin
///     A pointer to the minimum AABB (Axis-Aligned Bounding Box) coordinates as
///     a btVector3.
/// @param {Pointer} bvhAabbMax
///     A pointer to the maximum AABB (Axis-Aligned Bounding Box) coordinates as
///     a btVector3.
/// @param {Bool} [buildBvh]
///     A boolean indicating whether to build the BVH structure. Default is true.
///
/// @return {Pointer} A pointer to the created btBvhTriangleMeshShape object.
YYEXPORT void btBvhTriangleMeshShape_createAabb(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	btStridingMeshInterface* meshInterface = (btStridingMeshInterface*)YYGetPtr(arg, 0);
	bool useQuantizedAabbCompression = YYGetBool(arg, 1);
	auto& bvhAabbMin = *(btVector3*)YYGetPtr(arg, 2);
	auto& bvhAabbMax = *(btVector3*)YYGetPtr(arg, 3);
	bool buildBvh = (argc > 4) ? YYGetBool(arg, 4) : true;
	result.kind = VALUE_PTR;
	result.ptr = new btBvhTriangleMeshShape(
		meshInterface, useQuantizedAabbCompression, bvhAabbMin, bvhAabbMax, buildBvh);
}

/// @func btBvhTriangleMeshShape_createAabbXYZ(meshInterface, useQuantizedAabbCompression, bvhAabbMinX, bvhAabbMinY, bvhAabbMinZ, bvhAabbMaxX, bvhAabbMaxY, bvhAabbMaxZ[, buildBvh])
///
/// @desc
/// Creates a new instance of a Bullet BvhTriangleMeshShape with specified AABB
/// using individual coordinates.
///
/// @param {Pointer} meshInterface
///     A pointer to the btStridingMeshInterface object representing the mesh.
/// @param {Bool} useQuantizedAabbCompression
///     A boolean indicating whether to use quantized AABB compression.
/// @param {Real} bvhAabbMinX
///     The minimum x-coordinate of the AABB.
/// @param {Real} bvhAabbMinY
///     The minimum y-coordinate of the AABB.
/// @param {Real} bvhAabbMinZ
///     The minimum z-coordinate of the AABB.
/// @param {Real} bvhAabbMaxX
///     The maximum x-coordinate of the AABB.
/// @param {Real} bvhAabbMaxY
///     The maximum y-coordinate of the AABB.
/// @param {Real} bvhAabbMaxZ
///     The maximum z-coordinate of the AABB.
/// @param {Bool} [buildBvh]
///     A boolean indicating whether to build the BVH structure. Default is true.
///
/// @return {Pointer} A pointer to the created btBvhTriangleMeshShape object.
YYEXPORT void btBvhTriangleMeshShape_createAabbXYZ(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	btStridingMeshInterface* meshInterface = (btStridingMeshInterface*)YYGetPtr(arg, 0);
	bool useQuantizedAabbCompression = YYGetBool(arg, 1);
	double bvhAabbMinX = YYGetReal(arg, 2);
	double bvhAabbMinY = YYGetReal(arg, 3);
	double bvhAabbMinZ = YYGetReal(arg, 4);
	double bvhAabbMaxX = YYGetReal(arg, 5);
	double bvhAabbMaxY = YYGetReal(arg, 6);
	double bvhAabbMaxZ = YYGetReal(arg, 7);
	bool buildBvh = (argc > 8) ? YYGetBool(arg, 8) : true;
	result.kind = VALUE_PTR;
	result.ptr = new btBvhTriangleMeshShape(
		meshInterface, useQuantizedAabbCompression,
		btVector3(bvhAabbMinX, bvhAabbMinY, bvhAabbMinZ),
		btVector3(bvhAabbMaxX, bvhAabbMaxY, bvhAabbMaxZ),
		buildBvh);
}

/// @func btBvhTriangleMeshShape_destroy(bvhTriangleMeshShape)
///
/// @desc
/// Destroys an instance of a Bullet BvhTriangleMeshShape.
///
/// @param {Pointer} bvhTriangleMeshShape
///     A pointer to the btBvhTriangleMeshShape object to be destroyed.
YYEXPORT void btBvhTriangleMeshShape_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btBvhTriangleMeshShape*)YYGetPtr(arg, 0);
}

/// @func btBvhTriangleMeshShape_getOwnsBvh(bvhTriangleMeshShape)
///
/// @desc
/// Gets a boolean indicating whether the BvhTriangleMeshShape owns a BVH
/// (Bounding Volume Hierarchy).
///
/// @param {Pointer} bvhTriangleMeshShape
///     A pointer to the btBvhTriangleMeshShape object.
///
/// @return {Bool} A boolean indicating whether the BvhTriangleMeshShape owns
/// a BVH.
YYEXPORT void btBvhTriangleMeshShape_getOwnsBvh(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto bvhTriangleMeshShape = (btBvhTriangleMeshShape*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = bvhTriangleMeshShape->getOwnsBvh();
}

/// @func btBvhTriangleMeshShape_performRaycast(bvhTriangleMeshShape, callback, raySource, rayTarget)
///
/// @desc
/// Performs a raycast on the triangle mesh shape and invokes the specified
/// callback for each triangle hit by the ray.
///
/// @param {Pointer} bvhTriangleMeshShape
///     A pointer to the btBvhTriangleMeshShape object.
/// @param {Pointer} callback
///     A pointer to the callback object that will be invoked for each hit
///     triangle.
/// @param {Pointer} raySource
///     A pointer to a btVector3 representing the ray's source position.
/// @param {Pointer} rayTarget
///     A pointer to a btVector3 representing the ray's target position.
YYEXPORT void btBvhTriangleMeshShape_performRaycast(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto bvhTriangleMeshShape = (btBvhTriangleMeshShape*)YYGetPtr(arg, 0);
	auto callback = (btTriangleCallback*)YYGetPtr(arg, 1);
	auto& raySource = *(btVector3*)YYGetPtr(arg, 2);
	auto& rayTarget = *(btVector3*)YYGetPtr(arg, 3);
	bvhTriangleMeshShape->performRaycast(callback, raySource, rayTarget);
}

/// @func btBvhTriangleMeshShape_performConvexcast(bvhTriangleMeshShape, callback, boxSource, boxTarget, boxMin, boxMax)
///
/// @desc
/// Performs a convex cast against the BvhTriangleMeshShape, calling a callback
/// for each triangle hit.
///
/// @param {Pointer} bvhTriangleMeshShape
///     A pointer to the btBvhTriangleMeshShape object.
/// @param {Pointer} callback
///     A pointer to the callback function to be invoked for each triangle hit.
/// @param {Pointer} boxSource
///     A pointer to the source box.
/// @param {Pointer} boxTarget
///     A pointer to the target box.
/// @param {Pointer} boxMin
///     A pointer to the minimum box coordinates.
/// @param {Pointer} boxMax
///     A pointer to the maximum box coordinates.
YYEXPORT void btBvhTriangleMeshShape_performConvexcast(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto bvhTriangleMeshShape = (btBvhTriangleMeshShape*)YYGetPtr(arg, 0);
	auto callback = (btTriangleCallback*)YYGetPtr(arg, 1);
	auto& boxSource = *(btVector3*)YYGetPtr(arg, 2);
	auto& boxTarget = *(btVector3*)YYGetPtr(arg, 3);
	auto& boxMin = *(btVector3*)YYGetPtr(arg, 4);
	auto& boxMax = *(btVector3*)YYGetPtr(arg, 5);
	bvhTriangleMeshShape->performConvexcast(callback, boxSource, boxTarget, boxMin, boxMax);
}

/// @func btBvhTriangleMeshShape_processAllTriangles(bvhTriangleMeshShape, callback, boxMin, boxMax)
///
/// @desc
/// Processes all triangles in the BvhTriangleMeshShape that intersect with a
/// given bounding box, calling a callback for each triangle.
///
/// @param {Pointer} bvhTriangleMeshShape
///     A pointer to the btBvhTriangleMeshShape object.
/// @param {Pointer} callback
///     A pointer to the callback function to be invoked for each triangle
///     within the bounding box.
/// @param {Pointer} boxMin
///     A pointer to the minimum box coordinates.
/// @param {Pointer} boxMax
///     A pointer to the maximum box coordinates.
YYEXPORT void btBvhTriangleMeshShape_processAllTriangles(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto bvhTriangleMeshShape = (btBvhTriangleMeshShape*)YYGetPtr(arg, 0);
	auto callback = (btTriangleCallback*)YYGetPtr(arg, 1);
	auto& boxMin = *(btVector3*)YYGetPtr(arg, 2);
	auto& boxMax = *(btVector3*)YYGetPtr(arg, 3);
	bvhTriangleMeshShape->processAllTriangles(callback, boxMin, boxMax);
}

/// @func btBvhTriangleMeshShape_refitTree(bvhTriangleMeshShape, boxMin, boxMax)
///
/// @desc
/// Refits the BvhTriangleMeshShape's bounding box hierarchy using the specified
/// minimum and maximum bounding box coordinates.
///
/// @param {Pointer} bvhTriangleMeshShape
///     A pointer to the btBvhTriangleMeshShape object.
/// @param {Pointer} boxMin
///     A pointer to the minimum bounding box coordinates.
/// @param {Pointer} boxMax
///     A pointer to the maximum bounding box coordinates.
YYEXPORT void btBvhTriangleMeshShape_refitTree(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto bvhTriangleMeshShape = (btBvhTriangleMeshShape*)YYGetPtr(arg, 0);
	auto& boxMin = *(btVector3*)YYGetPtr(arg, 1);
	auto& boxMax = *(btVector3*)YYGetPtr(arg, 2);
	bvhTriangleMeshShape->refitTree(boxMin, boxMax);
}

/// @func btBvhTriangleMeshShape_partialRefitTree(bvhTriangleMeshShape, boxMin, boxMax)
///
/// @desc
/// Partially refits the BvhTriangleMeshShape's bounding box hierarchy using the
/// specified minimum and maximum bounding box coordinates.
///
/// @param {Pointer} bvhTriangleMeshShape
///     A pointer to the btBvhTriangleMeshShape object.
/// @param {Pointer} boxMin
///     A pointer to the minimum bounding box coordinates.
/// @param {Pointer} boxMax
///     A pointer to the maximum bounding box coordinates.
YYEXPORT void btBvhTriangleMeshShape_partialRefitTree(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto bvhTriangleMeshShape = (btBvhTriangleMeshShape*)YYGetPtr(arg, 0);
	auto& boxMin = *(btVector3*)YYGetPtr(arg, 1);
	auto& boxMax = *(btVector3*)YYGetPtr(arg, 2);
	bvhTriangleMeshShape->partialRefitTree(boxMin, boxMax);
}

// Note: Skipped btBvhTriangleMeshShape::getName
// Note: Skipped btBvhTriangleMeshShape::setLocalScaling

/// @func btBvhTriangleMeshShape_getOptimizedBvh(bvhTriangleMeshShape)
///
/// @desc
/// Gets the optimized bounding volume hierarchy (BVH) used by the
/// BvhTriangleMeshShape.
///
/// @param {Pointer} bvhTriangleMeshShape
///     A pointer to the btBvhTriangleMeshShape object.
///
/// @return {Pointer} A pointer to the optimized BVH used by the
/// BvhTriangleMeshShape.
YYEXPORT void btBvhTriangleMeshShape_getOptimizedBvh(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto bvhTriangleMeshShape = (btBvhTriangleMeshShape*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = bvhTriangleMeshShape->getOptimizedBvh();
}

/// @func btBvhTriangleMeshShape_setOptimizedBvh(bvhTriangleMeshShape, bvh[, localScaling])
///
/// @desc
/// Sets the optimized bounding volume hierarchy (BVH) for the
/// BvhTriangleMeshShape, optionally with local scaling.
///
/// @param {Pointer} bvhTriangleMeshShape
///     A pointer to the btBvhTriangleMeshShape object.
/// @param {Pointer} bvh
///     A pointer to the optimized BVH to set.
/// @param {Pointer} [localScaling]
///     A pointer to the local scaling vector to apply to the BVH. Defaults to
///     (1, 1, 1) if not provided.
YYEXPORT void btBvhTriangleMeshShape_setOptimizedBvh(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto bvhTriangleMeshShape = (btBvhTriangleMeshShape*)YYGetPtr(arg, 0);
	auto bvh = (btOptimizedBvh*)YYGetPtr(arg, 1);
	if (argc > 2)
	{
		auto& localScaling = *(btVector3*)YYGetPtr(arg, 2);
		bvhTriangleMeshShape->setOptimizedBvh(bvh, localScaling);
	}
	else
	{
		bvhTriangleMeshShape->setOptimizedBvh(bvh);
	}
}

/// @func btBvhTriangleMeshShape_buildOptimizedBvh(bvhTriangleMeshShape)
///
/// @desc
/// Builds the optimized bounding volume hierarchy (BVH) for the
/// BvhTriangleMeshShape.
///
/// @param {Pointer} bvhTriangleMeshShape
///     A pointer to the btBvhTriangleMeshShape object.
YYEXPORT void btBvhTriangleMeshShape_buildOptimizedBvh(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto bvhTriangleMeshShape = (btBvhTriangleMeshShape*)YYGetPtr(arg, 0);
	bvhTriangleMeshShape->buildOptimizedBvh();
}

/// @func btBvhTriangleMeshShape_usesQuantizedAabbCompression(bvhTriangleMeshShape)
///
/// @desc
/// Checks if the BvhTriangleMeshShape uses quantized AABB (Axis-Aligned
/// Bounding Box) compression.
///
/// @param {Pointer} bvhTriangleMeshShape
///     A pointer to the btBvhTriangleMeshShape object.
///
/// @return {Bool} Returns true if quantized AABB compression is used, false
/// otherwise.
YYEXPORT void btBvhTriangleMeshShape_usesQuantizedAabbCompression(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto bvhTriangleMeshShape = (btBvhTriangleMeshShape*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = bvhTriangleMeshShape->usesQuantizedAabbCompression();
}

// Note: Skipped btBvhTriangleMeshShape::setTriangleInfoMap
// Note: Skipped btBvhTriangleMeshShape::getTriangleInfoMap
// Note: Skipped btBvhTriangleMeshShape::calculateSerializeBufferSize
// Note: Skipped btBvhTriangleMeshShape::serialize
// Note: Skipped btBvhTriangleMeshShape::serializeSingleBvh
// Note: Skipped btBvhTriangleMeshShape::serializeSingleTriangleInfoMap

////////////////////////////////////////////////////////////////////////////////
//
// Note: Skipped btTriangleMeshShapeData
//
