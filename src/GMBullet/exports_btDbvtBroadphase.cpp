#include <GMBullet.hpp>

/// @func btDbvtBroadphase_create()
///
/// @desc
///
/// @return {Pointer}
YYEXPORT void btDbvtBroadphase_create(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	Result.kind = VALUE_PTR;
	Result.ptr = new btDbvtBroadphase();
}

/// @func btDbvtBroadphase_destroy(dbvtBroadphase)
///
/// @desc
///
/// @param {Pointer} dbvtBroadphase
YYEXPORT void btDbvtBroadphase_destroy(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	delete (btDbvtBroadphase*)YYGetPtr(arg, 0);
}
