#include <GMBullet.hpp>

/// @func btDefaultMotionState_create()
///
/// @desc
///
/// @return {Pointer}
YYEXPORT void btDefaultMotionState_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	result.kind = VALUE_PTR;
	result.ptr = new btDefaultMotionState();
}

/// @func btDefaultMotionState_destroy(defaultMotionState)
///
/// @desc
///
/// @param {Pointer} defaultMotionState
YYEXPORT void btDefaultMotionState_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btDefaultMotionState*)YYGetPtr(arg, 0);
}
