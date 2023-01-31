#include <GMBullet/Main.h>
#include <gmexport.h>

CWorld* g_World = nullptr;
btTransform g_Transform;
CObjectManager<btCollisionShape> g_Shapes;
CObjectManager<btRigidBody> g_Bodies;

YYEXPORT void bt_init(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
}

YYEXPORT void bt_free(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	if (g_World)
	{
		delete g_World;
		g_World = nullptr;
	}
}
