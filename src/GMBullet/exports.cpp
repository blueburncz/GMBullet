#include <GMBullet/World.h>
#include <GMBullet/ObjectManager.h>
#include <GMBullet/math.h>
#include <gmexport.h>

CWorld* g_World = nullptr;
btTransform g_Transform;
CObjectManager<btCollisionShape> g_Shapes;
CObjectManager<btRigidBody> g_Bodies;

////////////////////////////////////////////////////////////////////////////////
//
// Main
//

YYEXPORT void btInit(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
}

YYEXPORT void btFree(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	if (g_World)
	{
		delete g_World;
		g_World = nullptr;
	}
}

////////////////////////////////////////////////////////////////////////////////
//
// Transform
//

YYEXPORT void btTransform_setIdentity(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	g_Transform.setIdentity();
}

YYEXPORT void btTransform_setOrigin(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double x = YYGetReal(arg, 0);
	double y = YYGetReal(arg, 1);
	double z = YYGetReal(arg, 2);

	g_Transform.setOrigin(btVector3(x, y, z));
}

YYEXPORT void btTransform_setRotation(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double x = YYGetReal(arg, 0);
	double y = YYGetReal(arg, 1);
	double z = YYGetReal(arg, 2);

	g_Transform.setRotation(btQuaternion(math::ToRadians(y), math::ToRadians(x), math::ToRadians(z)));
}

////////////////////////////////////////////////////////////////////////////////
//
// Shape
//

YYEXPORT void btBoxShape_create(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double size_x = YYGetReal(arg, 0);
	double size_y = YYGetReal(arg, 1);
	double size_z = YYGetReal(arg, 2);

	btCollisionShape* pShape = new btBoxShape(btVector3(size_x, size_y, size_z));

	Result.kind = VALUE_REAL;
	Result.val = (double)g_Shapes.Add(pShape);
}

YYEXPORT void btSphereShape_create(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double radius = YYGetReal(arg, 0);

	btCollisionShape* pShape = new btSphereShape(radius);

	Result.kind = VALUE_REAL;
	Result.val = (double)g_Shapes.Add(pShape);
}

////////////////////////////////////////////////////////////////////////////////
//
// Body
//

YYEXPORT void btRigidBody_create(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
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

YYEXPORT void btRigidBody_destroy(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double id = YYGetReal(arg, 0);

	uint32_t _id = (uint32_t)id;
	btRigidBody* pBody = g_Bodies.Get(_id);

	if (g_World->HasBody(_id))
		g_World->RemoveBody(_id);

	delete pBody->getMotionState();
	delete pBody;
}

YYEXPORT void btRigidBody_applyImpulse(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
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

YYEXPORT void btRigidBody_applyCentralImpulse(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double id = YYGetReal(arg, 0);
	double x  = YYGetReal(arg, 1);
	double y  = YYGetReal(arg, 2);
	double z  = YYGetReal(arg, 3);

	g_Bodies.Get((uint32_t)id)->applyCentralImpulse(btVector3(x, y, z));
}

YYEXPORT void btRigidBody_applyForce(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
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

YYEXPORT void btRigidBody_applyCentralForce(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double id = YYGetReal(arg, 0);
	double x  = YYGetReal(arg, 1);
	double y  = YYGetReal(arg, 2);
	double z  = YYGetReal(arg, 3);

	g_Bodies.Get((uint32_t)id)->applyCentralForce(btVector3(x, y, z));
}

YYEXPORT void btRigidBody_setWorldTransform(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double id = YYGetReal(arg, 0);

	g_Bodies.Get((uint32_t)id)->setWorldTransform(g_Transform);
}

YYEXPORT void btRigidBody_getWorldTransform(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double id = YYGetReal(arg, 0);

	static btScalar dest[16];
	static double matrix[16];

	g_Bodies.Get((uint32_t)id)->getWorldTransform().getOpenGLMatrix(dest);

	for (int i = 0; i < 16; ++i)
		matrix[i] = dest[i];

	YYCreateArray(&Result, 16, matrix);
}

YYEXPORT void btRigidBody_isActive(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double id = YYGetReal(arg, 0);

	Result.kind = VALUE_REAL;
	Result.val = (double)g_Bodies.Get((uint32_t)id)->isActive();
}

////////////////////////////////////////////////////////////////////////////////
//
// World
//

YYEXPORT void btDiscreteDynamicsWorld_init(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	g_World = new CWorld();
}

YYEXPORT void btDiscreteDynamicsWorld_free(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	delete g_World;
	g_World = nullptr;
}

YYEXPORT void btDiscreteDynamicsWorld_setGravity(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double x = YYGetReal(arg, 0);
	double y = YYGetReal(arg, 1);
	double z = YYGetReal(arg, 2);

	g_World->GetDynamicsWorld()->setGravity(btVector3(x, y, z));
}

YYEXPORT void btDiscreteDynamicsWorld_stepSimulation(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double timeStep      = YYGetReal(arg, 0);
	double maxSubSteps   = (argc > 1) ? YYGetReal(arg, 1) : 1;
	double fixedTimeStep = (argc > 2 ) ? YYGetReal(arg, 2) : (1.0 / 60.0);

	g_World->GetDynamicsWorld()->stepSimulation(timeStep, (int)maxSubSteps, fixedTimeStep);
}

YYEXPORT void btDiscreteDynamicsWorld_addRigidBody(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double id    = YYGetReal(arg, 0);
	double group = YYGetReal(arg, 1);
	double mask  = YYGetReal(arg, 2);

	uint32_t _id = (uint32_t)id;
	g_World->AddBody(g_Bodies.Get(_id), _id, (int)group, (int)mask);
}

YYEXPORT void btDiscreteDynamicsWorld_removeRigidBody(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
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

YYEXPORT void btDiscreteDynamicsWorld_getNumCollisionObjects(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	Result.kind = VALUE_REAL;
	Result.val = (double)g_World->GetDynamicsWorld()->getNumCollisionObjects();
}
