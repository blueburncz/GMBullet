#include <gmb/gmb.h>
#include <gmb/Main.h>
#include <gmb/utilities/Math.h>

// Identity
GMEXPORT double bt_transform_identity() {
	g_globalTransform.setIdentity();

	return 1.0;
}

// Translation
GMEXPORT double bt_transform_translation(double x, double y, double z) {
	g_globalTransform.setOrigin(btVector3(x, y, z));

	return 1.0;
}

// Rotation
GMEXPORT double bt_transform_rotation(double x, double y, double z) {
	g_globalTransform.setRotation(btQuaternion(math::ToRadians(y), math::ToRadians(x), math::ToRadians(z)));

	return 1.0;
}
