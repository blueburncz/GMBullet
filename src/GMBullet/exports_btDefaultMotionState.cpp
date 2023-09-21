#include <GMBullet.hpp>

/// @func btDefaultMotionState_create()
///
/// @desc
///
/// @return {Pointer}
YYEXPORT void btDefaultMotionState_create(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	Result.kind = VALUE_PTR;
	Result.ptr = new btDefaultMotionState();
}

/// @func btDefaultMotionState_destroy(defaultMotionState)
///
/// @desc
///
/// @param {Pointer} defaultMotionState
YYEXPORT void btDefaultMotionState_destroy(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	delete (btDefaultMotionState*)YYGetPtr(arg, 0);
}
