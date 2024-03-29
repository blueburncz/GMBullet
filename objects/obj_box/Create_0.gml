z = get_z();

shape = btBoxShape_createXYZ(8, 8, 8);
var _mass = 1.0;
var _localInertia = btVector3_create();
btCollisionShape_calculateLocalInertia(shape, _mass, _localInertia);
body = btRigidBody_create(_mass, btDefaultMotionState_create(), shape, _localInertia);
btVector3_destroy(_localInertia);
btDiscreteDynamicsWorld_addRigidBody(obj_engine.dynamicsWorld, body);

var _transform = btTransform_create();
btTransform_setOriginXYZ(_transform, x, y, z);
btCollisionObject_setWorldTransform(body, _transform);
btTransform_destroy(_transform);

matrix = matrix_build(0, 0, 0, 0, 0, 0, 1, 1, 1);
