#pragma once

#define DEG2RAD 0.01745329251
#define RAD2DEG 57.2957795131

namespace math
{
	inline float ToRadians(float angle) { return DEG2RAD * angle; }
	inline float ToDegrees(float angle) { return RAD2DEG * angle; }
};
