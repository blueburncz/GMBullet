#include <GMBullet.hpp>

/// @func btDefaultMotionState_create()
///
/// @desc
/// Creates a new instance of btDefaultMotionState, which represents the default
/// implementation of a motion state for rigid bodies in a physics simulation.
///
/// @return {Pointer} A pointer to the newly created btDefaultMotionState
/// instance.
YYEXPORT void btDefaultMotionState_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	result.kind = VALUE_PTR;
	result.ptr = new btDefaultMotionState();
}

/// @func btDefaultMotionState_destroy(defaultMotionState)
///
/// @desc
/// Destroys a btDefaultMotionState instance, releasing the associated resources.
///
/// @param {Pointer} defaultMotionState
///     A pointer to the btDefaultMotionState instance to be destroyed.
YYEXPORT void btDefaultMotionState_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btDefaultMotionState*)YYGetPtr(arg, 0);
}
