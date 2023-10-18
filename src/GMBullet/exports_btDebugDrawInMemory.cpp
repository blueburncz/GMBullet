#include <GMBullet.hpp>
#include <vector>

static inline uint32_t ColorToUInt32(const btVector3& color)
{
	return (0xff000000U
		| ((uint32_t)(color.z() * 255.0) << 16)
		| ((uint32_t)(color.y() * 255.0) << 8)
		| ((uint32_t)(color.x() * 255.0) << 0));
}

class btDebugDrawInMemory : public btIDebugDraw
{
public:
	virtual void drawLine(
		const btVector3& from, const btVector3& to, const btVector3& color)
	{
		uint32_t colorGM = ColorToUInt32(color);

		m_positions.push_back(from.x());
		m_positions.push_back(from.y());
		m_positions.push_back(from.z());
		m_colors.push_back(colorGM);

		m_positions.push_back(to.x());
		m_positions.push_back(to.y());
		m_positions.push_back(to.z());
		m_colors.push_back(colorGM);
	}

	virtual void drawContactPoint(
		const btVector3& PointOnB,
		const btVector3& normalOnB,
		btScalar distance,
		int lifeTime,
		const btVector3& color)
	{
		drawLine(PointOnB - btVector3(1.0, 0.0, 0.0), PointOnB + btVector3(1.0, 0.0, 0.0), color);
		drawLine(PointOnB - btVector3(0.0, 1.0, 0.0), PointOnB + btVector3(0.0, 1.0, 0.0), color);
		drawLine(PointOnB - btVector3(0.0, 0.0, 1.0), PointOnB + btVector3(0.0, 0.0, 1.0), color);
	}

	virtual void reportErrorWarning(const char* warningString)
	{
		ShowMessage(warningString);
	}

	virtual void draw3dText(const btVector3& location, const char* textString)
	{
	}

	virtual void setDebugMode(int debugMode)
	{
		m_debugMode = debugMode;
	}

	virtual int getDebugMode() const
	{
		return m_debugMode;
	}

	virtual void clearLines()
	{
		m_positions.clear();
		m_colors.clear();
	}

	virtual void flushLines()
	{
	}

	size_t getSize() const
	{
		return m_positions.size() * 4
			+ m_colors.size() * 4;
	}

	void toBuffer(uint8_t* buffer) const
	{
		size_t size = m_colors.size();
		uint8_t* current = buffer;

		for (size_t i = 0; i < size; ++i)
		{
			float* currentPos = (float*)current;
			currentPos[0] = m_positions[i * 3 + 0];
			currentPos[1] = m_positions[i * 3 + 1];
			currentPos[2] = m_positions[i * 3 + 2];
			current = (uint8_t*)(currentPos + 3);

			uint32_t* currentCol = (uint32_t*)current;
			currentCol[0] = m_colors[i];
			current = (uint8_t*)(currentCol + 1);
		}
	}

private:
	int m_debugMode = (int)DBG_NoDebug;
	std::vector<float> m_positions;
	std::vector<uint32_t> m_colors;
};

/// @func btDebugDrawInMemory_create()
///
/// @desc
/// Creates a new instance of btDebugDrawInMemory.
///
/// @return {Pointer} A pointer to the new instance of btDebugDrawInMemory.
YYEXPORT void btDebugDrawInMemory_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	result.kind = VALUE_PTR;
	result.ptr = new btDebugDrawInMemory();
}

/// @func btDebugDrawInMemory_destroy(debugDrawInMemory)
///
/// @desc
/// Destroys a btDebugDrawInMemory instance.
///
/// @param {Pointer} debugDrawInMemory
///     A pointer to the btDebugDrawInMemory instance to be destroyed.
YYEXPORT void btDebugDrawInMemory_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btDebugDrawInMemory*)YYGetPtr(arg, 0);
}

/// @func btDebugDrawInMemory_getSize(debugDrawInMemory)
///
/// @desc
/// Retrieves total size (in bytes) of debug draw data of btDebugDrawInMemory
/// instance.
///
/// @param {Pointer} debugDrawInMemory
///     A pointer to the btDebugDrawInMemory instance.
///
/// @return {Real} The total size of debug draw data in bytes
YYEXPORT void btDebugDrawInMemory_getSize(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto debugDrawInMemory = (btDebugDrawInMemory*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT64;
	result.v64 = debugDrawInMemory->getSize();
}

/// @func btDebugDrawInMemory_toBuffer(debugDrawInMemory, buffer)
///
/// @desc
/// Copies all debug draw data from an instance of btDebugDrawInMemory into a
/// buffer.
///
/// @param {Pointer} debugDrawInMemory
///     A pointer to the btDebugDrawInMemory instance.
/// @param {Id.Buffer} buffer
///     A buffer to copy the debug draw data to.
YYEXPORT void btDebugDrawInMemory_toBuffer(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto debugDrawInMemory = (btDebugDrawInMemory*)YYGetPtr(arg, 0);
	uint8_t* buffer = BufferGet(BufferGetFromGML(YYGetInt32(arg, 1)));
	debugDrawInMemory->toBuffer(buffer);
}
