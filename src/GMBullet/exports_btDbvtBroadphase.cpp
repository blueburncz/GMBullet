#include <GMBullet.hpp>

/// @func btDbvtBroadphase_create()
///
/// @desc
///
/// @return {Pointer}
YYEXPORT void btDbvtBroadphase_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	result.kind = VALUE_PTR;
	result.ptr = new btDbvtBroadphase();
}

/// @func btDbvtBroadphase_destroy(dbvtBroadphase)
///
/// @desc
///
/// @param {Pointer} dbvtBroadphase
YYEXPORT void btDbvtBroadphase_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btDbvtBroadphase*)YYGetPtr(arg, 0);
}
