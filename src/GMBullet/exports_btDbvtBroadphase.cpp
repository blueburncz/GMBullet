#include <GMBullet.hpp>

/// @func btDbvtBroadphase_create()
///
/// @desc
/// Creates a broadphase collision detection algorithm based on dynamic AABB
/// trees (Dbvt). This broadphase algorithm is suitable for dynamic worlds where
/// objects move frequently.
///
/// @return {Pointer} A pointer to the newly created btDbvtBroadphase instance.
YYEXPORT void btDbvtBroadphase_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	result.kind = VALUE_PTR;
	result.ptr = new btDbvtBroadphase();
}

/// @func btDbvtBroadphase_destroy(dbvtBroadphase)
///
/// @desc
/// Destroys a btDbvtBroadphase instance, releasing associated memory and
/// resources.
///
/// @param {Pointer} dbvtBroadphase
///     A pointer to the btDbvtBroadphase instance to be destroyed.
YYEXPORT void btDbvtBroadphase_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btDbvtBroadphase*)YYGetPtr(arg, 0);
}
