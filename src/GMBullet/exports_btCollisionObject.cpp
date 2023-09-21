#include <GMBullet.hpp>

/// @func btCollisionObject_destroy(collisionObject)
///
/// @desc
///
/// @param {Pointer} collisionObject
YYEXPORT void btCollisionObject_destroy(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	delete (btCollisionObject*)YYGetPtr(arg, 0);
}
