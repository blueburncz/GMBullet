#pragma once

#define BT_USE_DOUBLE_PRECISION

#include <btBulletDynamicsCommon.h>
#include <gmexport.h>
#include <cstdint>

#define DEG2RAD 0.01745329251
#define RAD2DEG 57.2957795131

static inline float ToRadians(float angle) { return DEG2RAD * angle; }
static inline float ToDegrees(float angle) { return RAD2DEG * angle; }

static inline void CopyVector3(const btVector3& src, btVector3* const dest)
{
	*dest = src;
}

static inline void CopyQuaternion(const btQuaternion& src, btQuaternion* const dest)
{
	*dest = src;
}

static inline void CopyTransform(const btTransform& src, btTransform* const dest)
{
	*dest = src;
}
