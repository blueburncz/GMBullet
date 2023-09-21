z = get_z();

shape = btSphereShape_create(8);
var _mass = 1.0;
var _localInertia = btVector3_create();
btCollisionShape_calculateLocalInertia(shape, _mass, _localInertia);
body = btRigidBody_create(1.0, btDefaultMotionState_create(), shape, _localInertia);
btVector3_destroy(_localInertia);
btDiscreteDynamicsWorld_addRigidBody(obj_engine.dynamicsWorld, body, -1, 1);

var _transform = btTransform_create();
btTransform_setOriginXYZ(_transform, x, y, z);
btRigidBody_setWorldTransform(body, _transform);
btTransform_destroy(_transform);

matrix = matrix_build(0, 0, 0, 0, 0, 0, 1, 1, 1);
