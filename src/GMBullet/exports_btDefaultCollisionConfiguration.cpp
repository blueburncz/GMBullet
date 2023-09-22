#include <GMBullet.hpp>

/// @func btDefaultCollisionConfiguration_create()
///
/// @desc
///
/// @return {Pointer}
YYEXPORT void btDefaultCollisionConfiguration_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	result.kind = VALUE_PTR;
	result.ptr = new btDefaultCollisionConfiguration();
}

/// @func btDefaultCollisionConfiguration_destroy(defaultCollisionConfiguration)
///
/// @desc
///
/// @param {Pointer} defaultCollisionConfiguration
YYEXPORT void btDefaultCollisionConfiguration_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btDefaultCollisionConfiguration*)YYGetPtr(arg, 0);
}
