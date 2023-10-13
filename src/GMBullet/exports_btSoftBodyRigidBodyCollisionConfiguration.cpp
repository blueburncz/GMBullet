#include <GMBullet.hpp>
#include <BulletSoftBody/btSoftBodyRigidBodyCollisionConfiguration.h>

/// @func btSoftBodyRigidBodyCollisionConfiguration_create()
///
/// @desc
/// Creates a new soft body rigid body collision configuration.
///
/// @return {Pointer} A pointer to the created
/// btSoftBodyRigidBodyCollisionConfiguration.
YYEXPORT void btSoftBodyRigidBodyCollisionConfiguration_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	result.kind = VALUE_PTR;
	result.ptr = new btSoftBodyRigidBodyCollisionConfiguration();
}

/// @func btSoftBodyRigidBodyCollisionConfiguration_destroy(softBodyRigidBodyCollisionConfiguration)
///
/// @desc
/// Destroys a btSoftBodyRigidBodyCollisionConfiguration.
///
/// @param {Pointer} softBodyRigidBodyCollisionConfiguration
///     A pointer to the btSoftBodyRigidBodyCollisionConfiguration to be
///     destroyed.
YYEXPORT void btSoftBodyRigidBodyCollisionConfiguration_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btSoftBodyRigidBodyCollisionConfiguration*)YYGetPtr(arg, 0);
}
