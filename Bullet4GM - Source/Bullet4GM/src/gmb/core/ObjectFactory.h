#pragma once

#include <gmb/gmb.h>

template <typename T>
class ObjectFactory {
private:
	/* Private Fields */
	std::map<uint, T*> m_objects;
	uint m_objectIndex{ 0 };

public:
	/* Public Methods */
	uint Add(T* object) {
		m_objects[m_objectIndex] = object;
		return m_objectIndex++;
	}

	void Remove(uint index) {
		m_objects.erase(index);
	}

	T* Get(uint index) {
		return m_objects[index];
	}
};
