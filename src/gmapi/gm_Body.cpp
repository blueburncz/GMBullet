#include <gmb/gmb.h>
#include <gmb/Main.h>
#include <gmb/core/ObjectFactory.h>
#include <btBulletDynamicsCommon.h>
#include <gmexport.h>

// Body Create
YYEXPORT void bt_body_create(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double shapeID = YYGetReal(arg, 0);
	double mass    = YYGetReal(arg, 1);

	btCollisionShape* pShape = g_shapeFactory.Get((uint)shapeID);
	btDefaultMotionState* pMotionState = new btDefaultMotionState();

	btVector3 localInertia(0, 0, 0);
	if (mass > 0.0)
		pShape->calculateLocalInertia(mass, localInertia);

	btRigidBody* pBody = new btRigidBody(btRigidBody::btRigidBodyConstructionInfo(mass, pMotionState, pShape, localInertia));

	Result.kind = VALUE_REAL;
	Result.val = (double)g_bodyFactory.Add(pBody);
}

// Body Destroy
YYEXPORT void bt_body_destroy(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double id = YYGetReal(arg, 0);

	uint _id = (uint)id;
	btRigidBody* pBody = g_bodyFactory.Get(_id);

	if (g_pWorld->HasBody(_id))
		g_pWorld->RemoveBody(_id);

	delete pBody->getMotionState();
	delete pBody;
}

// Body Apply Impulse
YYEXPORT void bt_body_apply_impulse(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double id    = YYGetReal(arg, 0);
	double x     = YYGetReal(arg, 1);
	double y     = YYGetReal(arg, 2);
	double z     = YYGetReal(arg, 3);
	double rel_x = YYGetReal(arg, 4);
	double rel_y = YYGetReal(arg, 5);
	double rel_z = YYGetReal(arg, 6);

	g_bodyFactory.Get((uint)id)->applyImpulse(btVector3(x, y, z), btVector3(rel_x, rel_y, rel_z));
}

// Body Apply Central Impulse
YYEXPORT void bt_body_apply_central_impulse(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double id = YYGetReal(arg, 0);
	double x  = YYGetReal(arg, 1);
	double y  = YYGetReal(arg, 2);
	double z  = YYGetReal(arg, 3);

	g_bodyFactory.Get((uint)id)->applyCentralImpulse(btVector3(x, y, z));
}

// Body Apply Force
YYEXPORT void bt_body_apply_force(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double id    = YYGetReal(arg, 0);
	double x     = YYGetReal(arg, 1);
	double y     = YYGetReal(arg, 2);
	double z     = YYGetReal(arg, 3);
	double rel_x = YYGetReal(arg, 4);
	double rel_y = YYGetReal(arg, 5);
	double rel_z = YYGetReal(arg, 6);

	g_bodyFactory.Get((uint)id)->applyForce(btVector3(x, y, z), btVector3(rel_x, rel_y, rel_z));
}

// Body Apply Central Force
YYEXPORT void bt_body_apply_central_force(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double id = YYGetReal(arg, 0);
	double x  = YYGetReal(arg, 1);
	double y  = YYGetReal(arg, 2);
	double z  = YYGetReal(arg, 3);

	g_bodyFactory.Get((uint)id)->applyCentralForce(btVector3(x, y, z));
}

// Body Apply Transform
YYEXPORT void bt_body_apply_transform(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double id = YYGetReal(arg, 0);

	g_bodyFactory.Get((uint)id)->setWorldTransform(g_globalTransform);
}

// Body Transform to Buffer
YYEXPORT void bt_body_get_matrix(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double id = YYGetReal(arg, 0);

	static btScalar dest[16];
	static double matrix[16];

	g_bodyFactory.Get((uint)id)->getWorldTransform().getOpenGLMatrix(dest);

	for (int i = 0; i < 16; ++i)
		matrix[i] = dest[i];

	YYCreateArray(&Result, 16, matrix);
}

// Body Is Active
YYEXPORT void bt_body_is_active(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double id = YYGetReal(arg, 0);

	Result.kind = VALUE_REAL;
	Result.val = (double)g_bodyFactory.Get((uint)id)->isActive();
}
