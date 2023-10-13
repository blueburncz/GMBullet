#include <GMBullet.hpp>

/// @func btDefaultCollisionConfiguration_create()
///
/// @desc
/// Creates a new instance of the Bullet Physics default collision configuration.
///
/// @return {Pointer} A pointer to the newly created
/// btDefaultCollisionConfiguration instance.
YYEXPORT void btDefaultCollisionConfiguration_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	result.kind = VALUE_PTR;
	result.ptr = new btDefaultCollisionConfiguration();
}

/// @func btDefaultCollisionConfiguration_destroy(defaultCollisionConfiguration)
///
/// @desc
/// Destroys a previously created btDefaultCollisionConfiguration instance,
/// releasing its allocated resources.
///
/// @param {Pointer} defaultCollisionConfiguration
///     A pointer to the btDefaultCollisionConfiguration instance to be
///     destroyed.
YYEXPORT void btDefaultCollisionConfiguration_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btDefaultCollisionConfiguration*)YYGetPtr(arg, 0);
}
