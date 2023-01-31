#pragma once

#include <GMBullet/World.h>
#include <GMBullet/ObjectManager.h>

extern CWorld* g_World;
extern btTransform g_Transform;
extern CObjectManager<btCollisionShape> g_Shapes;
extern CObjectManager<btRigidBody> g_Bodies;
