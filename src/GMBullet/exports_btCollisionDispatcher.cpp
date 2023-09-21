#include <GMBullet.hpp>

/// @func btCollisionDispatcher_create(collisionConfiguration)
///
/// @desc
///
/// @param {Pointer} collisionConfiguration
///
/// @return {Pointer}
YYEXPORT void btCollisionDispatcher_create(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	btCollisionConfiguration* collisionConfiguration = (btCollisionConfiguration*)(YYGetPtr(arg, 0));
	Result.kind = VALUE_PTR;
	Result.ptr = new btCollisionDispatcher(collisionConfiguration);
}

/// @func btCollisionDispatcher_destroy(collisionDispatcher)
///
/// @desc
///
/// @param {Pointer} collisionDispatcher
YYEXPORT void btCollisionDispatcher_destroy(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	delete (btCollisionDispatcher*)YYGetPtr(arg, 0);
}
