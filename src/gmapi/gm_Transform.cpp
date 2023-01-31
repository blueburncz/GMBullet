#include <gmb/gmb.h>
#include <gmb/Main.h>
#include <gmb/utilities/Math.h>
#include <gmexport.h>

// Identity
YYEXPORT void bt_transform_identity(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	g_globalTransform.setIdentity();
}

// Translation
YYEXPORT void bt_transform_translation(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double x = YYGetReal(arg, 0);
	double y = YYGetReal(arg, 1);
	double z = YYGetReal(arg, 2);

	g_globalTransform.setOrigin(btVector3(x, y, z));
}

// Rotation
YYEXPORT void bt_transform_rotation(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double x = YYGetReal(arg, 0);
	double y = YYGetReal(arg, 1);
	double z = YYGetReal(arg, 2);

	g_globalTransform.setRotation(btQuaternion(math::ToRadians(y), math::ToRadians(x), math::ToRadians(z)));
}
