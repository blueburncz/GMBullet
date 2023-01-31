#include <gmb/gmb.h>
#include <gmb/Main.h>
#include <gmexport.h>

// World Init
YYEXPORT void bt_world_init(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	g_pWorld = new World();
}

// World Free
YYEXPORT void bt_world_free(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	delete g_pWorld;
	g_pWorld = nullptr;
}

// World Set Gravity
YYEXPORT void bt_world_set_gravity(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double x = YYGetReal(arg, 0);
	double y = YYGetReal(arg, 1);
	double z = YYGetReal(arg, 2);

	g_pWorld->GetDynamicsWorld()->setGravity(btVector3(x, y, z));
}

// World Simulate
YYEXPORT void bt_world_simulate(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double timeStep    = YYGetReal(arg, 0);
	double maxSubSteps = YYGetReal(arg, 1);

	g_pWorld->GetDynamicsWorld()->stepSimulation(timeStep, (int)maxSubSteps);
}

// World Simulate Ext
YYEXPORT void bt_world_simulate_ext(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double timeStep      = YYGetReal(arg, 0);
	double maxSubSteps   = YYGetReal(arg, 1);
	double fixedTimeStep = YYGetReal(arg, 2);

	g_pWorld->GetDynamicsWorld()->stepSimulation(timeStep, (int)maxSubSteps, fixedTimeStep);
}

// World Add Body
YYEXPORT void bt_world_add_body(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double id    = YYGetReal(arg, 0);
	double group = YYGetReal(arg, 1);
	double mask  = YYGetReal(arg, 2);

	uint _id = (uint)id;
	g_pWorld->AddBody(g_bodyFactory.Get(_id), _id, (int)group, (int)mask);
}

// World Remove Body
YYEXPORT void bt_world_remove_body(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double id = YYGetReal(arg, 0);
	
	Result.kind = VALUE_REAL;

	uint _id = (uint)id;

	if (g_pWorld->HasBody(_id))
	{
		g_pWorld->RemoveBody(_id);
		Result.val = 1.0;
		return;
	}

	Result.val = 0.0;
}

// World Get Count
YYEXPORT void bt_world_get_body_count(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	Result.kind = VALUE_REAL;
	Result.val = (double)g_pWorld->GetDynamicsWorld()->getNumCollisionObjects();
}
