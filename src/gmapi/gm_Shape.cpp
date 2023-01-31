#include <gmb/gmb.h>
#include <gmb/Main.h>
#include <gmb/core/ObjectFactory.h>
#include <btBulletDynamicsCommon.h>

// Shape Create Box
GMEXPORT double bt_shape_create_box(double size_x, double size_y, double size_z) {
	btCollisionShape* pShape = new btBoxShape(btVector3(size_x, size_y, size_z));

	return g_shapeFactory.Add(pShape);
}

// Shape Create Sphere
GMEXPORT double bt_shape_create_sphere(double radius) {
	btCollisionShape* pShape = new btSphereShape(radius);

	return g_shapeFactory.Add(pShape);
}
