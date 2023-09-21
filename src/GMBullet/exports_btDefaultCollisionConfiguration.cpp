#include <GMBullet.hpp>

/// @func btDefaultCollisionConfiguration_create()
///
/// @desc
///
/// @return {Pointer}
YYEXPORT void btDefaultCollisionConfiguration_create(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	Result.kind = VALUE_PTR;
	Result.ptr = new btDefaultCollisionConfiguration();
}

/// @func btDefaultCollisionConfiguration_destroy(defaultCollisionConfiguration)
///
/// @desc
///
/// @param {Pointer} defaultCollisionConfiguration
YYEXPORT void btDefaultCollisionConfiguration_destroy(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	delete (btDefaultCollisionConfiguration*)YYGetPtr(arg, 0);
}
