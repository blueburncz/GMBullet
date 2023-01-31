#include <GMBullet/World.h>

CWorld::CWorld()
{
	/* Setup Components */
	m_pCollisionConfig = new btDefaultCollisionConfiguration();
	m_pDispatcher = new btCollisionDispatcher(m_pCollisionConfig);
	m_pOverlappingPairCache = new btDbvtBroadphase();
	m_pSolver = new btSequentialImpulseConstraintSolver();

	/* Create World */
	m_pWorld = new btDiscreteDynamicsWorld(m_pDispatcher, m_pOverlappingPairCache, m_pSolver, m_pCollisionConfig);
	m_pWorld->setGravity(btVector3(0, 0, -10));
}

CWorld::~CWorld()
{
	delete m_pWorld;
	delete m_pSolver;
	delete m_pDispatcher;
	delete m_pCollisionConfig;
	delete m_pOverlappingPairCache;
}

void CWorld::Update()
{
}

void CWorld::AddBody(btRigidBody* pBody, uint32_t index, int group, int mask)
{
	m_bodies[index] = pBody;
	m_pWorld->addRigidBody(pBody, group, mask);
}

void CWorld::RemoveBody(uint32_t index)
{
	btRigidBody* pBody = m_bodies[index];

	m_bodies.erase(index);
	m_pWorld->removeRigidBody(pBody);
}

bool CWorld::HasBody(uint32_t index) const
{
	return m_bodies.find(index) != m_bodies.end();
}
