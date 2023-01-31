#include <gmb/gmb.h>
#include <gmb/Main.h>
#include <gmexport.h>

World* g_pWorld = nullptr;
btTransform g_globalTransform;
ObjectFactory<btCollisionShape> g_shapeFactory;
ObjectFactory<btRigidBody> g_bodyFactory;

// Initialize
YYEXPORT void bt_init(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
}

// Free
YYEXPORT void bt_free(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	if (g_pWorld)
	{
		delete g_pWorld;
		g_pWorld = nullptr;
	}
}
