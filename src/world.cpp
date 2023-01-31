#include <GMBullet/Main.h>
#include <gmexport.h>

YYEXPORT void bt_world_init(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	g_World = new CWorld();
}

YYEXPORT void bt_world_free(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	delete g_World;
	g_World = nullptr;
}

YYEXPORT void bt_world_set_gravity(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double x = YYGetReal(arg, 0);
	double y = YYGetReal(arg, 1);
	double z = YYGetReal(arg, 2);

	g_World->GetDynamicsWorld()->setGravity(btVector3(x, y, z));
}

YYEXPORT void bt_world_simulate(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double timeStep    = YYGetReal(arg, 0);
	double maxSubSteps = YYGetReal(arg, 1);

	g_World->GetDynamicsWorld()->stepSimulation(timeStep, (int)maxSubSteps);
}

YYEXPORT void bt_world_simulate_ext(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double timeStep      = YYGetReal(arg, 0);
	double maxSubSteps   = YYGetReal(arg, 1);
	double fixedTimeStep = YYGetReal(arg, 2);

	g_World->GetDynamicsWorld()->stepSimulation(timeStep, (int)maxSubSteps, fixedTimeStep);
}

YYEXPORT void bt_world_add_body(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double id    = YYGetReal(arg, 0);
	double group = YYGetReal(arg, 1);
	double mask  = YYGetReal(arg, 2);

	uint32_t _id = (uint32_t)id;
	g_World->AddBody(g_Bodies.Get(_id), _id, (int)group, (int)mask);
}

YYEXPORT void bt_world_remove_body(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double id = YYGetReal(arg, 0);
	
	Result.kind = VALUE_REAL;

	uint32_t _id = (uint32_t)id;

	if (g_World->HasBody(_id))
	{
		g_World->RemoveBody(_id);
		Result.val = 1.0;
		return;
	}

	Result.val = 0.0;
}

YYEXPORT void bt_world_get_body_count(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	Result.kind = VALUE_REAL;
	Result.val = (double)g_World->GetDynamicsWorld()->getNumCollisionObjects();
}
