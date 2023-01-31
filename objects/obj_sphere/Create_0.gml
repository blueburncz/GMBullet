with (other) {
/// Setup Sphere
z = get_z();

shape = btSphereShape_create(8);
body = btRigidBody_create(shape, 1.0);
btDiscreteDynamicsWorld_addRigidBody(body, -1, 1);

btTransform_setOrigin(x, y, z);
btRigidBody_setWorldTransform(body);
btTransform_setIdentity();

matrix = matrix_build(0, 0, 0, 0, 0, 0, 1, 1, 1);

}
