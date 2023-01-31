#include <gmb/gmb.h>
#include <gmb/Main.h>

// World Init
GMEXPORT double bt_world_init() {
	g_pWorld = new World();

	return 1.0;
}

// World Free
GMEXPORT double bt_world_free() {
	delete g_pWorld;
	g_pWorld = nullptr;

	return 1.0;
}

// World Set Gravity
GMEXPORT double bt_world_set_gravity(double x, double y, double z) {
	g_pWorld->GetDynamicsWorld()->setGravity(btVector3(x, y, z));

	return 1.0;
}

// World Simulate
GMEXPORT double bt_world_simulate(double timeStep, double maxSubSteps) {
	g_pWorld->GetDynamicsWorld()->stepSimulation(timeStep, (int)maxSubSteps);

	return 1.0;
}

// World Simulate Ext
GMEXPORT double bt_world_simulate_ext(double timeStep, double maxSubSteps, double fixedTimeStep) {
	g_pWorld->GetDynamicsWorld()->stepSimulation(timeStep, (int)maxSubSteps, fixedTimeStep);

	return 1.0;
}

// World Add Body
GMEXPORT double bt_world_add_body(double id, double group, double mask) {
	uint _id = (uint)id;
	g_pWorld->AddBody(g_bodyFactory.Get(_id), _id, (int)group, (int)mask);

	return 1.0;
}

// World Remove Body
GMEXPORT double bt_world_remove_body(double id) {
	uint _id = (uint)id;

	if (g_pWorld->HasBody(_id)) {
		g_pWorld->RemoveBody(_id);
		return 1.0;
	}

	return 0.0;
}

// World Get Count
GMEXPORT double bt_world_get_body_count() {
	return g_pWorld->GetDynamicsWorld()->getNumCollisionObjects();
}
