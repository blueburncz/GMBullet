#pragma once

#include <btBulletDynamicsCommon.h>
#include <gmexport.h>
#include <cstdint>

#define DEG2RAD 0.01745329251
#define RAD2DEG 57.2957795131

static inline float ToRadians(float angle) { return DEG2RAD * angle; }
static inline float ToDegrees(float angle) { return RAD2DEG * angle; }

static inline void CopyVector3(const btVector3& src, btVector3* const dest)
{
	dest->setX(src.getX());
	dest->setY(src.getY());
	dest->setZ(src.getZ());
}

static inline void CopyQuaternion(const btQuaternion& src, btQuaternion* const dest)
{
	dest->setX(src.getX());
	dest->setY(src.getY());
	dest->setZ(src.getZ());
	dest->setW(src.getW());
}
