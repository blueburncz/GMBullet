#include <GMBullet.hpp>

/// @func btCollisionDispatcher_create(collisionConfiguration)
///
/// @desc
/// Creates a collision dispatcher using the specified collision configuration.
///
/// @param {Pointer} collisionConfiguration
///     The collision configuration to use for the collision dispatcher.
///
/// @return {Pointer}
///     A pointer to the created collision dispatcher.
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
/// This function is used to release the memory associated with a
/// btCollisionDispatcher object.
///
/// @param {Pointer} collisionDispatcher
///     A pointer to a btCollisionDispatcher instance that needs to be destroyed.
///     This should be a valid pointer to an existing btCollisionDispatcher
///     object.
YYEXPORT void btCollisionDispatcher_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btCollisionDispatcher*)YYGetPtr(arg, 0);
}
