#include <GMBullet.hpp>

/// @func btTriangleMesh_create([use32bitIndices[, use4componentVertices]])
///
/// @desc
/// Creates a new instance of a Bullet triangle mesh.
///
/// @param {Bool} [use32bitIndices]
///     Whether to use 32-bit indices for vertices. Default is true.
/// @param {Bool} [use4componentVertices]
///     Whether to use 4-component vertices. Default is true.
///
/// @return {Pointer} A pointer to the created btTriangleMesh object.
YYEXPORT void btTriangleMesh_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	bool use32bitIndices = (argc > 0) ? YYGetBool(arg, 0) : true;
	bool use4componentVertices = (argc > 1) ? YYGetBool(arg, 1) : true;
	result.kind = VALUE_PTR;
	result.ptr = new btTriangleMesh(use32bitIndices, use4componentVertices);
}

/// @func btTriangleMesh_destroy(triangleMesh)
///
/// @desc
/// Destroys an instance of a Bullet triangle mesh.
///
/// @param {Pointer} triangleMesh
///     A pointer to the btTriangleMesh object to destroy.
YYEXPORT void btTriangleMesh_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btTriangleMesh*)YYGetPtr(arg, 0);
}

/// @func btTriangleMesh_getUse32bitIndices(triangleMesh)
///
/// @desc
/// Retrieves whether 32-bit indices are being used for vertices in the Bullet
/// triangle mesh.
///
/// @param {Pointer} triangleMesh
///     A pointer to the btTriangleMesh object.
///
/// @return {Bool} True if 32-bit indices are being used, false otherwise.
YYEXPORT void btTriangleMesh_getUse32bitIndices(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto triangleMesh = (btTriangleMesh*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = triangleMesh->getUse32bitIndices();
}

/// @func btTriangleMesh_getUse4componentVertices(triangleMesh)
///
/// @desc
/// Retrieves whether 4-component vertices are being used in the Bullet triangle
/// mesh.
///
/// @param {Pointer} triangleMesh
///     A pointer to the btTriangleMesh object.
///
/// @return {Bool} True if 4-component vertices are being used, false otherwise.
YYEXPORT void btTriangleMesh_getUse4componentVertices(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto triangleMesh = (btTriangleMesh*)YYGetPtr(arg, 0);
	result.kind = VALUE_BOOL;
	result.val = triangleMesh->getUse4componentVertices();
}

/// @func btTriangleMesh_addTriangle(triangleMesh, vertex0, vertex1, vertex2)
///
/// @desc
/// Adds a triangle specified by its vertices to the Bullet triangle mesh.
///
/// @param {Pointer} triangleMesh
///     A pointer to the btTriangleMesh object.
/// @param {Pointer} vertex0
///     A pointer to the first vertex (btVector3) of the triangle.
/// @param {Pointer} vertex1
///     A pointer to the second vertex (btVector3) of the triangle.
/// @param {Pointer} vertex2
///     A pointer to the third vertex (btVector3) of the triangle.
YYEXPORT void btTriangleMesh_addTriangle(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto triangleMesh = (btTriangleMesh*)YYGetPtr(arg, 0);
	btVector3& vertex0 = *(btVector3*)YYGetPtr(arg, 1);
	btVector3& vertex1 = *(btVector3*)YYGetPtr(arg, 2);
	btVector3& vertex2 = *(btVector3*)YYGetPtr(arg, 3);
	triangleMesh->addTriangle(vertex0, vertex1, vertex2);
}

/// @func btTriangleMesh_addTriangleXYZ(triangleMesh, vertex0x, vertex0y, vertex0z, vertex1x, vertex1y, vertex1z, vertex2x, vertex2y, vertex2z)
///
/// @desc
/// Adds a triangle specified by its vertices' coordinates to the Bullet
/// triangle mesh.
///
/// @param {Pointer} triangleMesh
///     A pointer to the btTriangleMesh object.
/// @param {Real} vertex0x
///     X-coordinate of the first vertex.
/// @param {Real} vertex0y
///     Y-coordinate of the first vertex.
/// @param {Real} vertex0z
///     Z-coordinate of the first vertex.
/// @param {Real} vertex1x
///     X-coordinate of the second vertex.
/// @param {Real} vertex1y
///     Y-coordinate of the second vertex.
/// @param {Real} vertex1z
///     Z-coordinate of the second vertex.
/// @param {Real} vertex2x
///     X-coordinate of the third vertex.
/// @param {Real} vertex2y
///     Y-coordinate of the third vertex.
/// @param {Real} vertex2z
///     Z-coordinate of the third vertex.
YYEXPORT void btTriangleMesh_addTriangleXYZ(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto triangleMesh = (btTriangleMesh*)YYGetPtr(arg, 0);
	double vertex0x = YYGetReal(arg, 1);
	double vertex0y = YYGetReal(arg, 2);
	double vertex0z = YYGetReal(arg, 3);
	double vertex1x = YYGetReal(arg, 4);
	double vertex1y = YYGetReal(arg, 5);
	double vertex1z = YYGetReal(arg, 6);
	double vertex2x = YYGetReal(arg, 7);
	double vertex2y = YYGetReal(arg, 8);
	double vertex2z = YYGetReal(arg, 9);
	triangleMesh->addTriangle(
		btVector3(vertex0x, vertex0y, vertex0z),
		btVector3(vertex1x, vertex1y, vertex1z),
		btVector3(vertex2x, vertex2y, vertex2z));
}

/// @func btTriangleMesh_addTrianglesFromBuffer(triangleMesh, buffer, offset, stride, numVerts)
///
/// @desc
/// Adds triangles to the Bullet triangle mesh from a buffer containing vertex
/// data.
///
/// @param {Pointer} triangleMesh
///     A pointer to the btTriangleMesh object.
/// @param {Pointer} buffer
///     A pointer to the buffer containing vertex data.
/// @param {Real} offset
///     The offset in bytes to the start of vertex data for the first vertex.
/// @param {Real} stride
///     The stride in bytes between consecutive vertices in the buffer.
/// @param {Real} numVerts
///     The number of vertices to add from the buffer.
YYEXPORT void btTriangleMesh_addTrianglesFromBuffer(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto triangleMesh = (btTriangleMesh*)YYGetPtr(arg, 0);
	unsigned char* buffer = (unsigned char*)YYGetPtr(arg, 1);
	int offset = YYGetInt32(arg, 2);
	int stride = YYGetInt32(arg, 3);
	int numVerts = YYGetInt32(arg, 4);
	float* bufferCurrent = (float*)(buffer + offset);

	for (int i = 0; i < numVerts / 3; ++i)
	{
		float x, y, z;

		x = *bufferCurrent;
		y = *(bufferCurrent + 1);
		z = *(bufferCurrent + 2);
		btVector3 vertex0(x, y, z);
		bufferCurrent = (float*)((unsigned char*)bufferCurrent + stride);

		x = *bufferCurrent;
		y = *(bufferCurrent + 1);
		z = *(bufferCurrent + 2);
		btVector3 vertex1(x, y, z);
		bufferCurrent = (float*)((unsigned char*)bufferCurrent + stride);

		x = *bufferCurrent;
		y = *(bufferCurrent + 1);
		z = *(bufferCurrent + 2);
		btVector3 vertex2(x, y, z);
		bufferCurrent = (float*)((unsigned char*)bufferCurrent + stride);

		triangleMesh->addTriangle(vertex0, vertex1, vertex2);
	}
}

/// @func btTriangleMesh_addTriangleIndices(triangleMesh, index1, index2, index3)
///
/// @desc
/// Adds triangle indices to the Bullet triangle mesh.
///
/// @param {Pointer} triangleMesh
///     A pointer to the btTriangleMesh object.
/// @param {Real} index1
///     Index of the first vertex in the triangle.
/// @param {Real} index2
///     Index of the second vertex in the triangle.
/// @param {Real} index3
///     Index of the third vertex in the triangle.
YYEXPORT void btTriangleMesh_addTriangleIndices(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto triangleMesh = (btTriangleMesh*)YYGetPtr(arg, 0);
	int index1 = YYGetInt32(arg, 1);
	int index2 = YYGetInt32(arg, 2);
	int index3 = YYGetInt32(arg, 3);
	triangleMesh->addTriangleIndices(index1, index2, index3);
}

/// @func btTriangleMesh_getNumTriangles(triangleMesh)
///
/// @desc
/// Gets the number of triangles in the Bullet triangle mesh.
///
/// @param {Pointer} triangleMesh
///     A pointer to the btTriangleMesh object.
///
/// @return {Real} The number of triangles in the triangle mesh.
YYEXPORT void btTriangleMesh_getNumTriangles(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto triangleMesh = (btTriangleMesh*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.val = triangleMesh->getNumTriangles();
}

/// @func btTriangleMesh_preallocateVertices(triangleMesh, numVerts)
///
/// @desc
/// Preallocates memory for vertices in the Bullet triangle mesh.
///
/// @param {Pointer} triangleMesh
///     A pointer to the btTriangleMesh object.
/// @param {Real} numVerts
///     The number of vertices to preallocate memory for.
YYEXPORT void btTriangleMesh_preallocateVertices(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto triangleMesh = (btTriangleMesh*)YYGetPtr(arg, 0);
	int numVerts = YYGetInt32(arg, 1);
	triangleMesh->preallocateVertices(numVerts);
}

/// @func btTriangleMesh_preallocateIndices(triangleMesh, numIndices)
///
/// @desc
/// Preallocates memory for indices in the Bullet triangle mesh.
///
/// @param {Pointer} triangleMesh
///     A pointer to the btTriangleMesh object.
/// @param {Real} numIndices
///     The number of indices to preallocate memory for.
YYEXPORT void btTriangleMesh_preallocateIndices(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto triangleMesh = (btTriangleMesh*)YYGetPtr(arg, 0);
	int numIndices = YYGetInt32(arg, 1);
	triangleMesh->preallocateIndices(numIndices);
}

// Note: Skipped btTriangleMesh::findOrAddVertex
// Note: Skipped btTriangleMesh::addIndex
