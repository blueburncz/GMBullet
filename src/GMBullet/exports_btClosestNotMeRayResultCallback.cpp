#include <GMBullet.hpp>

// Note: This is a copy of btKinematicClosestNotMeRayResultCallback from btKinematicCharacterController.cpp
class btClosestNotMeRayResultCallback : public btCollisionWorld::ClosestRayResultCallback
{
public:
	btClosestNotMeRayResultCallback(btCollisionObject* me)
		: btCollisionWorld::ClosestRayResultCallback(btVector3(0.0, 0.0, 0.0), btVector3(0.0, 0.0, 0.0))
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

/// @func btClosestNotMeRayResultCallback_create(closestNotMeRayResultCallback, me)
///
/// @desc
/// Creates a new instance of a Bullet closest not-me ray result callback.
///
/// @param {Pointer} closestNotMeRayResultCallback
///     A pointer to the btClosestNotMeRayResultCallback object to create.
/// @param {Pointer} me
///     A pointer to the collision object representing "me" to be excluded from
///     results.
///
/// @return {Pointer} A pointer to the created btClosestNotMeRayResultCallback
/// object.
YYEXPORT void btClosestNotMeRayResultCallback_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto me = (btCollisionObject*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = new btClosestNotMeRayResultCallback(me);
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
