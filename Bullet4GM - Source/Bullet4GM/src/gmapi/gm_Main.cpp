#include <gmb/gmb.h>
#include <gmb/Main.h>

World* g_pWorld = nullptr;
float* g_matrixBuffer = nullptr;
btTransform g_globalTransform;
ObjectFactory<btCollisionShape> g_shapeFactory;
ObjectFactory<btRigidBody> g_bodyFactory;

// Initialize
GMEXPORT double bt_init(float* bufferAddress) {
	g_matrixBuffer = bufferAddress;

	return 1.0;
}

// Free
GMEXPORT double bt_free() {
	if (g_pWorld) {
		delete g_pWorld;
		g_pWorld = nullptr;
	}

	return 1.0;
}
