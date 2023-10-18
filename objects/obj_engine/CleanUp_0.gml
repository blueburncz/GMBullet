var _collisionObjects = [];
btCollisionWorld_getCollisionObjectArray(dynamicsWorld, _collisionObjects);

for (var i = array_length(_collisionObjects) - 1; i >= 0; --i)
{
	var _collisionObject = _collisionObjects[i];
	var _rigidBody = btRigidBody_upcast(_collisionObject);
	if (_rigidBody && btRigidBody_getMotionState(_rigidBody))
	{
		btDefaultMotionState_destroy(btRigidBody_getMotionState(_rigidBody));
	}
	btCollisionWorld_removeCollisionObject(dynamicsWorld, _collisionObject);
	btCollisionObject_destroy(_collisionObject);
}

btDiscreteDynamicsWorld_destroy(dynamicsWorld);
btSequentialImpulseConstraintSolver_destroy(solver);
btDbvtBroadphase_destroy(overlappingPairCache);
btCollisionDispatcher_destroy(dispatcher);
btDefaultCollisionConfiguration_destroy(collisionConfiguration);
btDebugDrawInMemory_destroy(debugDraw);
buffer_delete(debugDrawBuffer);
