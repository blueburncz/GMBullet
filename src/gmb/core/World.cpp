#include <gmb/gmb.h>
#include "World.h"

// World
World::World() {
	/* Setup Components */
	m_pCollisionConfig = new btDefaultCollisionConfiguration();
	m_pDispatcher = new btCollisionDispatcher(m_pCollisionConfig);
	m_pOverlappingPairCache = new btDbvtBroadphase();
	m_pSolver = new btSequentialImpulseConstraintSolver();

	/* Create World */
	m_pWorld = new btDiscreteDynamicsWorld(m_pDispatcher, m_pOverlappingPairCache, m_pSolver, m_pCollisionConfig);
	m_pWorld->setGravity(btVector3(0, 0, -10));
}

// ~World
World::~World() {
	delete m_pWorld;
	delete m_pSolver;
	delete m_pDispatcher;
	delete m_pCollisionConfig;
	delete m_pOverlappingPairCache;
}

// Update
void World::Update() {

}

// Add Body
void World::AddBody(btRigidBody* pBody, uint index, int group, int mask) {
	m_bodies[index] = pBody;
	m_pWorld->addRigidBody(pBody, group, mask);
}

// Remove Body
void World::RemoveBody(uint index) {
	btRigidBody* pBody = m_bodies[index];

	m_bodies.erase(index);
	m_pWorld->removeRigidBody(pBody);
}

// Has Body
bool World::HasBody(uint index) const {
	return m_bodies.find(index) != m_bodies.end();
}
