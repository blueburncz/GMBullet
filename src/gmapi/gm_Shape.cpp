#include <gmb/gmb.h>
#include <gmb/Main.h>
#include <gmb/core/ObjectFactory.h>
#include <btBulletDynamicsCommon.h>
#include <gmexport.h>

// Shape Create Box
YYEXPORT void bt_shape_create_box(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double size_x = YYGetReal(arg, 0);
	double size_y = YYGetReal(arg, 1);
	double size_z = YYGetReal(arg, 2);

	btCollisionShape* pShape = new btBoxShape(btVector3(size_x, size_y, size_z));

	Result.kind = VALUE_REAL;
	Result.val = (double)g_shapeFactory.Add(pShape);
}

// Shape Create Sphere
YYEXPORT void bt_shape_create_sphere(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double radius = YYGetReal(arg, 0);

	btCollisionShape* pShape = new btSphereShape(radius);

	Result.kind = VALUE_REAL;
	Result.val = (double)g_shapeFactory.Add(pShape);
}
