#include <GMBullet.hpp>
#include <BulletSoftBody/btSparseSDF.h>

/// @func btHsiehHash(data, len)
///
/// @desc
/// Computes the Hsieh hash value for the given data.
///
/// @param {Pointer} data
///     A pointer to the data for which the hash will be computed.
/// @param {Real} len
///     The length of the data in bytes.
///
/// @return {Real} The Hsieh hash value as a Real.
YYEXPORT void btHsiehHash(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	char* data = (char*)YYGetPtr(arg, 0);
	int len = YYGetInt32(arg, 1);
	result.kind = VALUE_INT64;
	result.v64 = HsiehHash(data, len);
}

////////////////////////////////////////////////////////////////////////////////
//
// btSparseSdf<3>
//

/// @func btSparseSdf3_Initialize(sparseSdf3[, hashSize[, clampCells]])
///
/// @desc
/// Initializes the sparse signed distance field (SDF) with the specified
/// parameters.
///
/// @param {Pointer} sparseSdf3
///     A pointer to the sparse SDF to initialize.
/// @param {Real} [hashSize]
///     The hash size for the sparse SDF. Defaults to 2383.
/// @param {Real} [clampCells]
///     The number of cells to clamp. Defaults to 256 * 1024.
YYEXPORT void btSparseSdf3_Initialize(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sparseSdf3 = (btSparseSdf<3>*)YYGetPtr(arg, 0);
	int hashSize = (argc > 1) ? YYGetInt32(arg, 1) : 2383;
	int clampCells = (argc > 2) ? YYGetInt32(arg, 2) : 256 * 1024;
	sparseSdf3->Initialize(hashSize, clampCells);
}

/// @func btSparseSdf3_Reset(sparseSdf3)
///
/// @desc
/// Resets the sparse signed distance field (SDF) to its initial state.
///
/// @param {Pointer} sparseSdf3
///     A pointer to the sparse SDF to reset.
YYEXPORT void btSparseSdf3_Reset(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sparseSdf3 = (btSparseSdf<3>*)YYGetPtr(arg, 0);
	sparseSdf3->Reset();
}

/// @func btSparseSdf3_RemoveReferences(sparseSdf3, collisionShape)
///
/// @desc
/// Removes references to a collision shape from the sparse SDF.
///
/// @param {Pointer} sparseSdf3
///     A pointer to the sparse SDF.
/// @param {Pointer} collisionShape
///     A pointer to the collision shape to remove references to.
YYEXPORT void btSparseSdf3_RemoveReferences(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto sparseSdf3 = (btSparseSdf<3>*)YYGetPtr(arg, 0);
	auto collisionShape = (btCollisionShape*)YYGetPtr(arg, 1);
	sparseSdf3->RemoveReferences(collisionShape);
}
