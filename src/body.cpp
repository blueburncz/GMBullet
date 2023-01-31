#include <GMBullet/Main.h>
#include <GMBullet/ObjectManager.h>
#include <btBulletDynamicsCommon.h>
#include <gmexport.h>

YYEXPORT void bt_body_create(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double shapeID = YYGetReal(arg, 0);
	double mass    = YYGetReal(arg, 1);

	btCollisionShape* pShape = g_Shapes.Get((uint32_t)shapeID);
	btDefaultMotionState* pMotionState = new btDefaultMotionState();

	btVector3 localInertia(0, 0, 0);
	if (mass > 0.0)
		pShape->calculateLocalInertia(mass, localInertia);

	btRigidBody* pBody = new btRigidBody(btRigidBody::btRigidBodyConstructionInfo(mass, pMotionState, pShape, localInertia));

	Result.kind = VALUE_REAL;
	Result.val = (double)g_Bodies.Add(pBody);
}

YYEXPORT void bt_body_destroy(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double id = YYGetReal(arg, 0);

	uint32_t _id = (uint32_t)id;
	btRigidBody* pBody = g_Bodies.Get(_id);

	if (g_World->HasBody(_id))
		g_World->RemoveBody(_id);

	delete pBody->getMotionState();
	delete pBody;
}

YYEXPORT void bt_body_apply_impulse(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double id    = YYGetReal(arg, 0);
	double x     = YYGetReal(arg, 1);
	double y     = YYGetReal(arg, 2);
	double z     = YYGetReal(arg, 3);
	double rel_x = YYGetReal(arg, 4);
	double rel_y = YYGetReal(arg, 5);
	double rel_z = YYGetReal(arg, 6);

	g_Bodies.Get((uint32_t)id)->applyImpulse(btVector3(x, y, z), btVector3(rel_x, rel_y, rel_z));
}

YYEXPORT void bt_body_apply_central_impulse(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double id = YYGetReal(arg, 0);
	double x  = YYGetReal(arg, 1);
	double y  = YYGetReal(arg, 2);
	double z  = YYGetReal(arg, 3);

	g_Bodies.Get((uint32_t)id)->applyCentralImpulse(btVector3(x, y, z));
}

YYEXPORT void bt_body_apply_force(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double id    = YYGetReal(arg, 0);
	double x     = YYGetReal(arg, 1);
	double y     = YYGetReal(arg, 2);
	double z     = YYGetReal(arg, 3);
	double rel_x = YYGetReal(arg, 4);
	double rel_y = YYGetReal(arg, 5);
	double rel_z = YYGetReal(arg, 6);

	g_Bodies.Get((uint32_t)id)->applyForce(btVector3(x, y, z), btVector3(rel_x, rel_y, rel_z));
}

YYEXPORT void bt_body_apply_central_force(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double id = YYGetReal(arg, 0);
	double x  = YYGetReal(arg, 1);
	double y  = YYGetReal(arg, 2);
	double z  = YYGetReal(arg, 3);

	g_Bodies.Get((uint32_t)id)->applyCentralForce(btVector3(x, y, z));
}

YYEXPORT void bt_body_apply_transform(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double id = YYGetReal(arg, 0);

	g_Bodies.Get((uint32_t)id)->setWorldTransform(g_Transform);
}

YYEXPORT void bt_body_get_matrix(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double id = YYGetReal(arg, 0);

	static btScalar dest[16];
	static double matrix[16];

	g_Bodies.Get((uint32_t)id)->getWorldTransform().getOpenGLMatrix(dest);

	for (int i = 0; i < 16; ++i)
		matrix[i] = dest[i];

	YYCreateArray(&Result, 16, matrix);
}

YYEXPORT void bt_body_is_active(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double id = YYGetReal(arg, 0);

	Result.kind = VALUE_REAL;
	Result.val = (double)g_Bodies.Get((uint32_t)id)->isActive();
}
