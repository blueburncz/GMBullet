#include <GMBullet.hpp>
#include <BulletCollision/CollisionShapes/btHeightfieldTerrainShape.h>

/// @func btHeightfieldTerrainShape_createF32(heightStickWidth, heightStickLength, heightfieldData, minHeight, maxHeight, upAxis, flipQuadEdges)
///
/// @desc
/// Creates a heightfield terrain shape using floating-point height data.
///
/// @param {Real} heightStickWidth
///     The width of each height stick in the heightfield.
/// @param {Real} heightStickLength
///     The length of each height stick in the heightfield.
/// @param {Id.Buffer} heightfieldData
///     A buffer with floating-point height data.
/// @param {Real} minHeight
///     The minimum height value in the heightfield.
/// @param {Real} maxHeight
///     The maximum height value in the heightfield.
/// @param {Real} upAxis
///     The axis indicating the "up" direction (0 for X, 1 for Y, 2 for Z).
/// @param {Bool} flipQuadEdges
///     Set to true to flip quad edges.
///
/// @return {Pointer} A pointer to the created btHeightfieldTerrainShape.
YYEXPORT void btHeightfieldTerrainShape_createF32(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	int heightStickWidth = YYGetInt32(arg, 0);
	int heightStickLength = YYGetInt32(arg, 1);
	float* heightfieldData = (float*)BufferGet(BufferGetFromGML(YYGetInt32(arg, 2)));
	double minHeight = YYGetReal(arg, 3);
	double maxHeight = YYGetReal(arg, 4);
	int upAxis = YYGetInt32(arg, 5);
	bool flipQuadEdges = YYGetBool(arg, 6);
	result.kind = VALUE_PTR;
	result.ptr = new btHeightfieldTerrainShape(heightStickWidth, heightStickLength,
		heightfieldData, minHeight, maxHeight, upAxis, flipQuadEdges);
}

/// @func btHeightfieldTerrainShape_createF64(heightStickWidth, heightStickLength, heightfieldData, minHeight, maxHeight, upAxis, flipQuadEdges)
///
/// @desc
/// Creates a heightfield terrain shape using double-precision height data.
///
/// @param {Real} heightStickWidth
///     The width of each height stick in the heightfield.
/// @param {Real} heightStickLength
///     The length of each height stick in the heightfield.
/// @param {Id.Buffer} heightfieldData
///     A buffer with double-precision height data.
/// @param {Real} minHeight
///     The minimum height value in the heightfield.
/// @param {Real} maxHeight
///     The maximum height value in the heightfield.
/// @param {Real} upAxis
///     The axis indicating the "up" direction (0 for X, 1 for Y, 2 for Z).
/// @param {Bool} flipQuadEdges
///     Set to true to flip quad edges.
///
/// @return {Pointer} A pointer to the created btHeightfieldTerrainShape.
YYEXPORT void btHeightfieldTerrainShape_createF64(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	int heightStickWidth = YYGetInt32(arg, 0);
	int heightStickLength = YYGetInt32(arg, 1);
	double* heightfieldData = (double*)BufferGet(BufferGetFromGML(YYGetInt32(arg, 2)));
	double minHeight = YYGetReal(arg, 3);
	double maxHeight = YYGetReal(arg, 4);
	int upAxis = YYGetInt32(arg, 5);
	bool flipQuadEdges = YYGetBool(arg, 6);
	result.kind = VALUE_PTR;
	result.ptr = new btHeightfieldTerrainShape(heightStickWidth, heightStickLength,
		heightfieldData, minHeight, maxHeight, upAxis, flipQuadEdges);
}

/// @func btHeightfieldTerrainShape_createS16(heightStickWidth, heightStickLength, heightfieldData, heightScale, minHeight, maxHeight, upAxis, flipQuadEdges)
///
/// @desc
/// Creates a heightfield terrain shape using 16-bit integer height data.
///
/// @param {Real} heightStickWidth
///     The width of each height stick in the heightfield.
/// @param {Real} heightStickLength
///     The length of each height stick in the heightfield.
/// @param {Id.Buffer} heightfieldData
///     A buffer with 16-bit integer height data.
/// @param {Real} heightScale
///     The scale factor to apply to the height values.
/// @param {Real} minHeight
///     The minimum height value in the heightfield.
/// @param {Real} maxHeight
///     The maximum height value in the heightfield.
/// @param {Real} upAxis
///     The axis indicating the "up" direction (0 for X, 1 for Y, 2 for Z).
/// @param {Bool} flipQuadEdges
///     Set to true to flip quad edges.
///
/// @return {Pointer} A pointer to the created btHeightfieldTerrainShape.
YYEXPORT void btHeightfieldTerrainShape_createS16(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	int heightStickWidth = YYGetInt32(arg, 0);
	int heightStickLength = YYGetInt32(arg, 1);
	short* heightfieldData = (short*)BufferGet(BufferGetFromGML(YYGetInt32(arg, 2)));
	double heightScale = YYGetReal(arg, 3);
	double minHeight = YYGetReal(arg, 4);
	double maxHeight = YYGetReal(arg, 5);
	int upAxis = YYGetInt32(arg, 6);
	bool flipQuadEdges = YYGetBool(arg, 7);
	result.kind = VALUE_PTR;
	result.ptr = new btHeightfieldTerrainShape(heightStickWidth, heightStickLength,
		heightfieldData, heightScale, minHeight, maxHeight, upAxis, flipQuadEdges);
}

/// @func btHeightfieldTerrainShape_createU8(heightStickWidth, heightStickLength, heightfieldData, heightScale, minHeight, maxHeight, upAxis, flipQuadEdges)
///
/// @desc
/// Creates a heightfield terrain shape using 8-bit unsigned integer height data.
///
/// @param {Real} heightStickWidth
///     The width of each height stick in the heightfield.
/// @param {Real} heightStickLength
///     The length of each height stick in the heightfield.
/// @param {Id.Buffer} heightfieldData
///     A buffer with 8-bit unsigned integer height data.
/// @param {Real} heightScale
///     The scale factor to apply to the height values.
/// @param {Real} minHeight
///     The minimum height value in the heightfield.
/// @param {Real} maxHeight
///     The maximum height value in the heightfield.
/// @param {Real} upAxis
///     The axis indicating the "up" direction (0 for X, 1 for Y, 2 for Z).
/// @param {Bool} flipQuadEdges
///     Set to true to flip quad edges.
///
/// @return {Pointer} A pointer to the created btHeightfieldTerrainShape.
YYEXPORT void btHeightfieldTerrainShape_createU8(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	int heightStickWidth = YYGetInt32(arg, 0);
	int heightStickLength = YYGetInt32(arg, 1);
	unsigned char* heightfieldData = BufferGet(BufferGetFromGML(YYGetInt32(arg, 2)));
	double heightScale = YYGetReal(arg, 3);
	double minHeight = YYGetReal(arg, 4);
	double maxHeight = YYGetReal(arg, 5);
	int upAxis = YYGetInt32(arg, 6);
	bool flipQuadEdges = YYGetBool(arg, 7);
	result.kind = VALUE_PTR;
	result.ptr = new btHeightfieldTerrainShape(heightStickWidth, heightStickLength,
		heightfieldData, heightScale, minHeight, maxHeight, upAxis, flipQuadEdges);
}

/// @func btHeightfieldTerrainShape_destroy(heightfieldTerrainShape)
///
/// @desc
/// Destroys a btHeightfieldTerrainShape object, releasing its allocated
/// resources.
///
/// @param {Pointer} heightfieldTerrainShape
///     A pointer to the btHeightfieldTerrainShape object to be destroyed.
YYEXPORT void btHeightfieldTerrainShape_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btHeightfieldTerrainShape*)YYGetPtr(arg, 0);
}

/// @func btHeightfieldTerrainShape_setUseDiamondSubdivision(heightfieldTerrainShape[, useDiamondSubdivision])
///
/// @desc
/// Sets whether to use diamond subdivision for the btHeightfieldTerrainShape
/// object.
///
/// @param {Pointer} heightfieldTerrainShape
///     A pointer to the btHeightfieldTerrainShape object.
/// @param {Bool} [useDiamondSubdivision]
///     A boolean indicating whether to use diamond subdivision. Defaults to
///    true if not specified.
YYEXPORT void btHeightfieldTerrainShape_setUseDiamondSubdivision(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto heightfieldTerrainShape = (btHeightfieldTerrainShape*)YYGetPtr(arg, 0);
	bool useDiamondSubdivision = (argc > 1) ? YYGetBool(arg, 1) : true;
	heightfieldTerrainShape->setUseDiamondSubdivision(useDiamondSubdivision);
}

/// @func btHeightfieldTerrainShape_setUseZigzagSubdivision(heightfieldTerrainShape[, useZigzagSubdivision])
///
/// @desc
/// Sets whether to use zigzag subdivision for the btHeightfieldTerrainShape
/// object.
///
/// @param {Pointer} heightfieldTerrainShape
///     A pointer to the btHeightfieldTerrainShape object.
/// @param {Bool} [useZigzagSubdivision=true]
///     A boolean indicating whether to use zigzag subdivision. Defaults to true
///     if not specified.
YYEXPORT void btHeightfieldTerrainShape_setUseZigzagSubdivision(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto heightfieldTerrainShape = (btHeightfieldTerrainShape*)YYGetPtr(arg, 0);
	bool useZigzagSubdivision = (argc > 1) ? YYGetBool(arg, 1) : true;
	heightfieldTerrainShape->setUseZigzagSubdivision(useZigzagSubdivision);
}

/// @func btHeightfieldTerrainShape_setFlipTriangleWinding(heightfieldTerrainShape, flipTriangleWinding)
///
/// @desc
/// Sets whether to flip the triangle winding for the btHeightfieldTerrainShape
/// object.
///
/// @param {Pointer} heightfieldTerrainShape
///     A pointer to the btHeightfieldTerrainShape object.
/// @param {Bool} flipTriangleWinding
///     A boolean indicating whether to flip the triangle winding.
YYEXPORT void btHeightfieldTerrainShape_setFlipTriangleWinding(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto heightfieldTerrainShape = (btHeightfieldTerrainShape*)YYGetPtr(arg, 0);
	bool flipTriangleWinding = YYGetBool(arg, 1);
	heightfieldTerrainShape->setFlipTriangleWinding(flipTriangleWinding);
}

// Note: Skipped btHeightfieldTerrainShape::getAabb
// Note: Skipped btHeightfieldTerrainShape::processAllTriangles
// Note: Skipped btHeightfieldTerrainShape::calculateLocalInertia
// Note: Skipped btHeightfieldTerrainShape::setLocalScaling
// Note: Skipped btHeightfieldTerrainShape::getLocalScaling

/// @func btHeightfieldTerrainShape_getVertex(heightfieldTerrainShape, x, y, vertex)
///
/// @desc
/// Gets the vertex at the specified indices (x, y) in the heightfield.
///
/// @param {Pointer} heightfieldTerrainShape
///     A pointer to the btHeightfieldTerrainShape object.
/// @param {Real} x
///     The x-coordinate index of the desired vertex.
/// @param {Real} y
///     The y-coordinate index of the desired vertex.
/// @param {Pointer} vertex
///     A pointer to a btVector3 where the vertex data will be stored.
YYEXPORT void btHeightfieldTerrainShape_getVertex(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto heightfieldTerrainShape = (btHeightfieldTerrainShape*)YYGetPtr(arg, 0);
	int x = YYGetReal(arg, 1);
	int y = YYGetReal(arg, 2);
	auto& vertex =  *(btVector3*)YYGetPtr(arg, 3);
	heightfieldTerrainShape->getVertex(x, y, vertex);
}

/// @func btHeightfieldTerrainShape_performRaycast(heightfieldTerrainShape, callback, raySource, rayTarget)
///
/// @desc
/// Performs a raycast on the heightfield terrain shape and invokes the
/// specified callback for each triangle hit by the ray.
///
/// @param {Pointer} heightfieldTerrainShape
///     A pointer to the btHeightfieldTerrainShape object.
/// @param {Pointer} callback
///     A pointer to the callback object that will be invoked for each hit
///     triangle.
/// @param {Pointer} raySource
///     A pointer to a btVector3 representing the ray's source position.
/// @param {Pointer} rayTarget
///     A pointer to a btVector3 representing the ray's target position.
YYEXPORT void btHeightfieldTerrainShape_performRaycast(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto heightfieldTerrainShape = (btHeightfieldTerrainShape*)YYGetPtr(arg, 0);
	auto callback = (btTriangleCallback*)YYGetPtr(arg, 1);
	auto& raySource =  *(btVector3*)YYGetPtr(arg, 2);
	auto& rayTarget =  *(btVector3*)YYGetPtr(arg, 3);
	heightfieldTerrainShape->performRaycast(callback, raySource, rayTarget);
}

/// @func btHeightfieldTerrainShape_buildAccelerator(heightfieldTerrainShape[, chunkSize])
///
/// @desc
/// Builds an accelerator for the heightfield terrain shape, improving
/// performance for ray casts and other collision queries.
///
/// @param {Pointer} heightfieldTerrainShape
///     A pointer to the btHeightfieldTerrainShape object.
/// @param {Real} [chunkSize]
///     The chunk size to use for the accelerator. Defaults to 16 if not
///     specified.
YYEXPORT void btHeightfieldTerrainShape_buildAccelerator(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto heightfieldTerrainShape = (btHeightfieldTerrainShape*)YYGetPtr(arg, 0);
	int chunkSize = (argc > 1) ? YYGetInt32(arg, 1) : 16;
	heightfieldTerrainShape->buildAccelerator(chunkSize);
}

/// @func btHeightfieldTerrainShape_clearAccelerator(heightfieldTerrainShape)
///
/// @desc
///
/// @param {Pointer} heightfieldTerrainShape
YYEXPORT void btHeightfieldTerrainShape_clearAccelerator(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto heightfieldTerrainShape = (btHeightfieldTerrainShape*)YYGetPtr(arg, 0);
	heightfieldTerrainShape->clearAccelerator();
}

/// @func btHeightfieldTerrainShape_getUpAxis(heightfieldTerrainShape)
///
/// @desc
/// Clears the accelerator built for the heightfield terrain shape. This can be
/// useful if the terrain shape has been modified and needs the accelerator to
/// be rebuilt for accurate collision queries.
///
/// @param {Pointer} heightfieldTerrainShape
///     A pointer to the btHeightfieldTerrainShape object.
YYEXPORT void btHeightfieldTerrainShape_getUpAxis(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto heightfieldTerrainShape = (btHeightfieldTerrainShape*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.val = heightfieldTerrainShape->getUpAxis();
}

// Note: Skip btHeightfieldTerrainShape::getName
// Note: Skip btHeightfieldTerrainShape::setUserValue3
// Note: Skip btHeightfieldTerrainShape::getUserValue3
// Note: Skip btHeightfieldTerrainShape::getTriangleInfoMap

/// @func btHeightfieldTerrainShape_getHeightfieldRawData(heightfieldTerrainShape)
///
/// @desc
/// Gets a pointer to the raw heightfield data associated with the
/// btHeightfieldTerrainShape. This data can be used for various purposes, such
/// as updating the heightfield or analyzing its contents.
///
/// @param {Pointer} heightfieldTerrainShape
///     A pointer to the btHeightfieldTerrainShape object.
/// @return {Pointer}
///     A pointer to the raw heightfield data.
YYEXPORT void btHeightfieldTerrainShape_getHeightfieldRawData(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto heightfieldTerrainShape = (btHeightfieldTerrainShape*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = const_cast<unsigned char*>(heightfieldTerrainShape->getHeightfieldRawData());
}
