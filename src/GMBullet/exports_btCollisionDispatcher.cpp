#include <GMBullet.hpp>

/// @func btCollisionDispatcher_create(collisionConfiguration)
///
/// @desc
///
/// @param {Pointer} collisionConfiguration
///
/// @return {Pointer}
YYEXPORT void btCollisionDispatcher_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto collisionConfiguration = (btCollisionConfiguration*)(YYGetPtr(arg, 0));
	result.kind = VALUE_PTR;
	result.ptr = new btCollisionDispatcher(collisionConfiguration);
}

/// @func btCollisionDispatcher_destroy(collisionDispatcher)
///
/// @desc
///
/// @param {Pointer} collisionDispatcher
YYEXPORT void btCollisionDispatcher_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btCollisionDispatcher*)YYGetPtr(arg, 0);
}