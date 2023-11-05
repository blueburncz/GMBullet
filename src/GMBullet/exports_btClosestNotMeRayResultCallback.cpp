#include <GMBullet.hpp>

class btClosestNotMeRayResultCallback : public btCollisionWorld::ClosestRayResultCallback
{
public:
	btClosestNotMeRayResultCallback(const btVector3& rayFromWorld, const btVector3& rayToWorld, btCollisionObject* me)
		: btCollisionWorld::ClosestRayResultCallback(rayFromWorld, rayToWorld)
	{
		m_me = me;
	}

	virtual btScalar addSingleResult(btCollisionWorld::LocalRayResult& rayResult, bool normalInWorldSpace)
	{
		if (rayResult.m_collisionObject == m_me)
			return 1.0;

		return ClosestRayResultCallback::addSingleResult(rayResult, normalInWorldSpace);
	}

protected:
	btCollisionObject* m_me;
};

/// @func btClosestNotMeRayResultCallback_create(rayFromWorld, rayToWorld, me)
///
/// @desc
/// Creates a new instance of a Bullet closest not-me ray result callback.
///
/// @param {Pointer} rayFromWorld
///     A pointer to the starting point of the ray in world coordinates.
/// @param {Pointer} rayToWorld
///     A pointer to the end point of the ray in world coordinates.
/// @param {Pointer} me
///     A pointer to the collision object representing "me" to be excluded from
///     results.
///
/// @return {Pointer} A pointer to the created btClosestNotMeRayResultCallback
/// object.
YYEXPORT void btClosestNotMeRayResultCallback_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto& rayFromWorld = *(btVector3*)YYGetPtr(arg, 0);
	auto& rayToWorld = *(btVector3*)YYGetPtr(arg, 1);
	auto me = (btCollisionObject*)YYGetPtr(arg, 2);
	result.kind = VALUE_PTR;
	result.ptr = new btClosestNotMeRayResultCallback(rayFromWorld, rayToWorld, me);
}

/// @func btClosestNotMeRayResultCallback_destroy(closestNotMeRayResultCallback)
///
/// @desc
/// Destroys an instance of a Bullet closest not-me ray result callback.
///
/// @param {Pointer} closestNotMeRayResultCallback
///     A pointer to the btClosestNotMeRayResultCallback object to destroy.
YYEXPORT void btClosestNotMeRayResultCallback_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btClosestNotMeRayResultCallback*)YYGetPtr(arg, 0);
}
