#pragma once

#include <gmb/gmb.h>
#include <gmb/core/World.h>
#include <gmb/core/ObjectFactory.h>

extern World* g_pWorld;
extern float* g_matrixBuffer;
extern btTransform g_globalTransform;
extern ObjectFactory<btCollisionShape> g_shapeFactory;
extern ObjectFactory<btRigidBody> g_bodyFactory;
