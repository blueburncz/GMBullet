#pragma once

#include <cstdint>
#include <vector>
#include <queue>
#include <algorithm>

/// Minimum number of free IDs required to start reusing them.
#define __ID_REUSE_THRESHOLD 1000

template <typename T>
class CObjectManager
{
public:
	/// @brief Adds an object to the manager.
	/// @param object The object to add.
	/// @return The ID assigned to the object.
	uint32_t Add(T* object)
	{
		if (FreeIDs.size() >= __ID_REUSE_THRESHOLD)
		{
			uint32_t id = FreeIDs.front();
			FreeIDs.pop();
			Objects[id] = object;
			return id;
		}

		Objects.push_back(object);
		return Objects.size() - 1;
	}

	/// @brief Checks whether there is an object with given ID.
	/// @param id The ID of the object.
	/// @return True if there is an object with given ID.
	bool Has(uint32_t id) const
	{
		if (id < 0 || id >= Objects.size())
		{
			return false;
		}
		return (Objects[id] != nullptr);
	}

	/// @brief Finds an ID of an object added to the manager.
	/// @param object The object to find an ID of.
	/// @param outId Output destination for the ID.
	/// @return True if the ID was found.
	bool FindID(T* object, uint32_t& outId) const
	{
		auto it = std::find(Objects.begin(), Objects.end(), object);
		if (it != Objects.end())
		{
			outId = std::distance(Objects.begin(), it);
			return true;
		}
		return false;
	}

	/// @brief Retrieves an object with given ID.
	/// @param id The ID of the object.
	/// @return The object with given ID or nullptr.
	T* Get(uint32_t id) const
	{
		return Objects[id];
	}
	
	/// @brief Removes an object with given ID from the manager.
	/// @param id The ID of the object to be removed.
	/// @return True if the object was removed or false if it did not exist.
	bool Remove(uint32_t id)
	{
		if (Objects[id])
		{
			Objects[id] = nullptr;
			FreeIDs.push(id);
			return true;
		}
		return false;
	}

private:
	/// @brief List of managed objects.
	std::vector<T*> Objects;

	/// @brief IDs available for reuse.
	std::queue<uint32_t> FreeIDs;
};
