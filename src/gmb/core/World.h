#pragma once

#include <gmb/gmb.h>
#include <btBulletDynamicsCommon.h>

class World {
private:
	/* Private Fields */
	btDefaultCollisionConfiguration* m_pCollisionConfig;
	btCollisionDispatcher* m_pDispatcher;
	btBroadphaseInterface* m_pOverlappingPairCache;
	btSequentialImpulseConstraintSolver* m_pSolver;
	btDiscreteDynamicsWorld* m_pWorld;

	// std::vector<btRigidBody*> m_bodies;
	std::unordered_map<uint, btRigidBody*> m_bodies;

public:
	/* Public Methods */
	World();
	~World();

	void Update();

	/* Body Control */
	void AddBody(btRigidBody* pBody, uint index, int group, int mask);
	void RemoveBody(uint index);
	bool HasBody(uint index) const;

	inline btDiscreteDynamicsWorld* GetDynamicsWorld() const { return m_pWorld; }
};
