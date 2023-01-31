#pragma once

#include <btBulletDynamicsCommon.h>
#include <cstdint>
#include <unordered_map>

class CWorld
{
public:
	CWorld();
	~CWorld();

	void Update();

	/* Body Control */
	void AddBody(btRigidBody* pBody, uint32_t index, int group, int mask);
	void RemoveBody(uint32_t index);
	bool HasBody(uint32_t index) const;

	inline btDiscreteDynamicsWorld* GetDynamicsWorld() const { return m_pWorld; }

private:
	btDefaultCollisionConfiguration* m_pCollisionConfig;
	btCollisionDispatcher* m_pDispatcher;
	btBroadphaseInterface* m_pOverlappingPairCache;
	btSequentialImpulseConstraintSolver* m_pSolver;
	btDiscreteDynamicsWorld* m_pWorld;

	std::unordered_map<uint32_t, btRigidBody*> m_bodies;
};
