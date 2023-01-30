#include <gmb/gmb.h>
#include <gmb/Main.h>
#include <gmb/core/ObjectFactory.h>
#include <btBulletDynamicsCommon.h>

// Body Create
GMEXPORT double bt_body_create(double shapeID, double mass) {
	btCollisionShape* pShape = g_shapeFactory.Get((uint)shapeID);
	btDefaultMotionState* pMotionState = new btDefaultMotionState();

	btVector3 localInertia(0, 0, 0);
	if (mass > 0.0)
		pShape->calculateLocalInertia(mass, localInertia);

	btRigidBody* pBody = new btRigidBody(btRigidBody::btRigidBodyConstructionInfo(mass, pMotionState, pShape, localInertia));

	return g_bodyFactory.Add(pBody);
}

// Body Destroy
GMEXPORT double bt_body_destroy(double id) {
	uint _id = (uint)id;
	btRigidBody* pBody = g_bodyFactory.Get(_id);

	if (g_pWorld->HasBody(_id))
		g_pWorld->RemoveBody(_id);

	delete pBody->getMotionState();
	delete pBody;

	return 1.0;
}

// Body Apply Impulse
GMEXPORT double bt_body_apply_impulse(double id, double x, double y, double z, double rel_x, double rel_y, double rel_z) {
	g_bodyFactory.Get((uint)id)->applyImpulse(btVector3(x, y, z), btVector3(rel_x, rel_y, rel_z));

	return 1.0;
}

// Body Apply Central Impulse
GMEXPORT double bt_body_apply_central_impulse(double id, double x, double y, double z) {
	g_bodyFactory.Get((uint)id)->applyCentralImpulse(btVector3(x, y, z));

	return 1.0;
}

// Body Apply Force
GMEXPORT double bt_body_apply_force(double id, double x, double y, double z, double rel_x, double rel_y, double rel_z) {
	g_bodyFactory.Get((uint)id)->applyForce(btVector3(x, y, z), btVector3(rel_x, rel_y, rel_z));

	return 1.0;
}

// Body Apply Central Force
GMEXPORT double bt_body_apply_central_force(double id, double x, double y, double z) {
	g_bodyFactory.Get((uint)id)->applyCentralForce(btVector3(x, y, z));

	return 1.0;
}

// Body Apply Transform
GMEXPORT double bt_body_apply_transform(double id) {
	g_bodyFactory.Get((uint)id)->setWorldTransform(g_globalTransform);

	return 1.0;
}

// Body Transform to Buffer
GMEXPORT double bt_body_transform_to_buffer(double id) {
	g_bodyFactory.Get((uint)id)->getWorldTransform().getOpenGLMatrix(g_matrixBuffer);

	return 1.0;
}

// Body Is Active
GMEXPORT double bt_body_is_active(double id) {
	return g_bodyFactory.Get((uint)id)->isActive();
}
