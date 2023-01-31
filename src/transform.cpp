#include <GMBullet/Main.h>
#include <GMBullet/Math.h>
#include <gmexport.h>

YYEXPORT void bt_transform_identity(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	g_Transform.setIdentity();
}

YYEXPORT void bt_transform_translation(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double x = YYGetReal(arg, 0);
	double y = YYGetReal(arg, 1);
	double z = YYGetReal(arg, 2);

	g_Transform.setOrigin(btVector3(x, y, z));
}

YYEXPORT void bt_transform_rotation(RValue& Result, CInstance* selfinst, CInstance* otherinst, int argc, RValue* arg)
{
	double x = YYGetReal(arg, 0);
	double y = YYGetReal(arg, 1);
	double z = YYGetReal(arg, 2);

	g_Transform.setRotation(btQuaternion(math::ToRadians(y), math::ToRadians(x), math::ToRadians(z)));
}
