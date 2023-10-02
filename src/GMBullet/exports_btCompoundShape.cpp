#include <GMBullet.hpp>
#include <vector>

////////////////////////////////////////////////////////////////////////////////
//
// Note: Skipped btCompoundShapeChild
//

/// @func btCompoundShapeChild_getTransform(compoundShapeChild)
///
/// @desc
/// Retrieves the transform of a child shape within a compound shape.
///
/// @param {Pointer} compoundShapeChild
///     A pointer to a btCompoundShapeChild object whose transform is to be
///     retrieved.
///
/// @return {Pointer} A pointer to the transform of the compound shape child.
YYEXPORT void btCompoundShapeChild_getTransform(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto compoundShapeChild = (btCompoundShapeChild*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = &compoundShapeChild->m_transform;
}

/// @func btCompoundShapeChild_getChildShape(compoundShapeChild)
///
/// @desc
/// Retrieves the child shape associated with a specific child within a compound
/// shape.
///
/// @param {Pointer} compoundShapeChild
///     A pointer to a btCompoundShapeChild object from which the child shape is
///     to be retrieved.
///
/// @return {Pointer} A pointer to the child shape associated with the specified
/// child.
YYEXPORT void btCompoundShapeChild_getChildShape(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto compoundShapeChild = (btCompoundShapeChild*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = &compoundShapeChild->m_childShape;
}

/// @func btCompoundShapeChild_getChildShapeType(compoundShapeChild)
///
/// @desc
/// Retrieves the type of the child shape associated with a specific child
/// within a compound shape.
///
/// @param {Pointer} compoundShapeChild
///     A pointer to a btCompoundShapeChild object from which the child shape
///     type is to be retrieved.
///
/// @return {Real} The type of the child shape.
YYEXPORT void btCompoundShapeChild_getChildShapeType(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto compoundShapeChild = (btCompoundShapeChild*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.val = compoundShapeChild->m_childShapeType;
}

/// @func btCompoundShapeChild_getNode(compoundShapeChild)
///
/// @desc
/// Retrieves a pointer to the internal node of the child shape within a
/// compound shape's bounding volume hierarchy (BVH).
///
/// @param {Pointer} compoundShapeChild
///     A pointer to a btCompoundShapeChild object representing the child shape.
///
/// @return {Pointer} A pointer to the internal node of the child shape within
/// the compound shape's BVH.
YYEXPORT void btCompoundShapeChild_getNode(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto compoundShapeChild = (btCompoundShapeChild*)YYGetPtr(arg, 0);
	result.kind = VALUE_PTR;
	result.ptr = compoundShapeChild->m_node;
}

////////////////////////////////////////////////////////////////////////////////
//
// btCompoundShape
//

/// @func btCompoundShape_create([enableDynamicAabbTree[, initialChildCapacity]])
///
/// @desc
/// Creates a new instance of a compound shape in the Bullet Physics library,
/// which can hold multiple child shapes.
///
/// @param {Bool} [enableDynamicAabbTree]
///     Set to true to enable dynamic AABB (Axis-Aligned Bounding Box) tree
///     updates for the compound shape. Defaults to true.
/// @param {Real} [initialChildCapacity]
///     Specifies the initial capacity for child shapes within the compound
///     shape. Defaults to 0.
///
/// @return {Pointer} A pointer to the created btCompoundShape object, a
/// compound shape that can hold multiple child shapes.
YYEXPORT void btCompoundShape_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	bool enableDynamicAabbTree = (argc > 0) ? YYGetBool(arg, 0) : true;
	int initialChildCapacity = (argc > 1) ? YYGetInt32(arg, 1) : 0;
	result.kind = VALUE_PTR;
	result.ptr = new btCompoundShape(enableDynamicAabbTree, initialChildCapacity);
}

/// @func btCompoundShape_destroy(compoundShape)
///
/// @desc
/// Destroys a previously created btCompoundShape instance, releasing its
/// allocated resources.
///
/// @param {Pointer} compoundShape
///     A pointer to the btCompoundShape object to be destroyed.
YYEXPORT void btCompoundShape_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btCompoundShape*)YYGetPtr(arg, 0);
}

/// @func btCompoundShape_addChildShape(compoundShape, localTransform, shape)
///
/// @desc
/// Adds a child shape to the btCompoundShape with a specified local transform.
///
/// @param {Pointer} compoundShape
///     A pointer to the btCompoundShape object.
/// @param {Pointer} localTransform
///     A pointer to the btTransform object representing the local transform of
///     the child shape.
/// @param {Pointer} shape
///     A pointer to the child shape (btCollisionShape) to be added.
YYEXPORT void btCompoundShape_addChildShape(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto compoundShape = (btCompoundShape*)YYGetPtr(arg, 0);
	btTransform& localTransform = *(btTransform*)YYGetPtr(arg, 1);
	auto shape = (btCompoundShape*)YYGetPtr(arg, 2);
	compoundShape->addChildShape(localTransform, shape);
}

/// @func btCompoundShape_removeChildShape(compoundShape, shape)
///
/// @desc
/// Removes a child shape from the btCompoundShape.
///
/// @param {Pointer} compoundShape
///     A pointer to the btCompoundShape object.
/// @param {Pointer} shape
///     A pointer to the child shape (btCollisionShape) to be removed.
YYEXPORT void btCompoundShape_removeChildShape(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto compoundShape = (btCompoundShape*)YYGetPtr(arg, 0);
	auto shape = (btCompoundShape*)YYGetPtr(arg, 1);
	compoundShape->removeChildShape(shape);
}

/// @func btCompoundShape_removeChildShapeByIndex(compoundShape, index)
///
/// @desc
/// Removes a child shape from the btCompoundShape by its index.
///
/// @param {Pointer} compoundShape
///     A pointer to the btCompoundShape object.
/// @param {Real} index
///     The index of the child shape to be removed.
YYEXPORT void btCompoundShape_removeChildShapeByIndex(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto compoundShape = (btCompoundShape*)YYGetPtr(arg, 0);
	int index = YYGetInt32(arg, 1);
	compoundShape->removeChildShapeByIndex(index);
}

/// @func btCompoundShape_getNumChildShapes(compoundShape)
///
/// @desc
/// Gets the number of child shapes contained within the btCompoundShape.
///
/// @param {Pointer} compoundShape
///     A pointer to the btCompoundShape object.
///
/// @return {Real} The number of child shapes in the compound shape.
YYEXPORT void btCompoundShape_getNumChildShapes(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto compoundShape = (btCompoundShape*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.val = compoundShape->getNumChildShapes();
}

/// @func btCompoundShape_getChildShape(compoundShape, index)
///
/// @desc
/// Gets a specific child shape of the btCompoundShape by its index.
///
/// @param {Pointer} compoundShape
///     A pointer to the btCompoundShape object.
/// @param {Real} index
///     The index of the child shape to retrieve.
///
/// @return {Pointer} A pointer to the child shape (btCollisionShape) at the
/// specified index.
YYEXPORT void btCompoundShape_getChildShape(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto compoundShape = (btCompoundShape*)YYGetPtr(arg, 0);
	int index = YYGetInt32(arg, 1);
	result.kind = VALUE_PTR;
	result.ptr = compoundShape->getChildShape(index);
}

/// @func btCompoundShape_getChildTransform(compoundShape, index)
///
/// @desc
/// Gets the transform of a specific child shape of the btCompoundShape by its
/// index.
///
/// @param {Pointer} compoundShape
///     A pointer to the btCompoundShape object.
/// @param {Real} index
///     The index of the child shape to retrieve the transform for.
///
/// @return {Pointer} A pointer to the transform (btTransform) of the child
/// shape at the specified index.
YYEXPORT void btCompoundShape_getChildTransform(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto compoundShape = (btCompoundShape*)YYGetPtr(arg, 0);
	int index = YYGetInt32(arg, 1);
	result.kind = VALUE_PTR;
	result.ptr = &compoundShape->getChildTransform(index);
}

/// @func btCompoundShape_updateChildTransform(compoundShape, childIndex, newChildTransform[, shouldRecalculateLocalAabb])
///
/// @desc
/// Updates the transform of a specific child shape in the btCompoundShape.
///
/// @param {Pointer} compoundShape
///     A pointer to the btCompoundShape object.
/// @param {Real} childIndex
///     The index of the child shape to update.
/// @param {Pointer} newChildTransform
///     A pointer to the new transform (btTransform) for the child shape.
/// @param {Bool} [shouldRecalculateLocalAabb]
///     If true, recalculate the local AABB (Axis-Aligned Bounding Box) after
///     the transform update. Defaults to true.
YYEXPORT void btCompoundShape_updateChildTransform(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto compoundShape = (btCompoundShape*)YYGetPtr(arg, 0);
	int childIndex = YYGetInt32(arg, 1);
	btTransform& newChildTransform = *(btTransform*)YYGetPtr(arg, 2);
	bool shouldRecalculateLocalAabb = (argc > 3) ? YYGetBool(arg, 3) : true;
	compoundShape->updateChildTransform(childIndex, newChildTransform, shouldRecalculateLocalAabb);
}

/// @func btCompoundShape_getChildList(compoundShape, outArray)
///
/// @desc
/// Retrieves an array of pointers to the child shapes within the
/// btCompoundShape.
///
/// @param {Pointer} compoundShape
///     A pointer to the btCompoundShape object.
/// @param {Array<Pointer>} outArray
///     An array to store the pointers to the child shapes (btCompoundShapeChild).
YYEXPORT void btCompoundShape_getChildList(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto compoundShape = (btCompoundShape*)YYGetPtr(arg, 0);
	btCompoundShapeChild* childList = compoundShape->getChildList();
	RValue* outArray = &arg[1];
	RValue value;
	value.kind = VALUE_PTR;
	for (int i = compoundShape->getNumChildShapes(); i >= 0; --i)
	{
		value.ptr = (btCompoundShapeChild*)&childList[i];
		SET_RValue(outArray, &value, NULL, i);
	}
	FREE_RValue(&value);
}

// Note: Skipped btCompoundShape::getAabb

/// @func btCompoundShape_recalculateLocalAabb(compoundShape)
///
/// @desc
/// Recalculates the local axis-aligned bounding box (AABB) of the
/// btCompoundShape. The local AABB is the minimal AABB enclosing all child
/// shapes' AABBs after a transformation.
///
/// @param {Pointer} compoundShape
///     A pointer to the btCompoundShape object.
YYEXPORT void btCompoundShape_recalculateLocalAabb(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto compoundShape = (btCompoundShape*)YYGetPtr(arg, 0);
	compoundShape->recalculateLocalAabb();
}

// Note: Skipped btCompoundShape::setLocalScaling
// Note: Skipped btCompoundShape::getLocalScaling
// Note: Skipped btCompoundShape::calculateLocalInertia
// Note: Skipped btCompoundShape::setMargin
// Note: Skipped btCompoundShape::getMargin
// Note: Skipped btCompoundShape::getName
// Note: Skipped btCompoundShape::getDynamicAabbTree

/// @func btCompoundShape_createAabbTreeFromChildren(compoundShape)
///
/// @desc
/// Creates an axis-aligned bounding box (AABB) tree based on the children
/// shapes of the btCompoundShape. The AABB tree can be used for efficient
/// collision detection and broad-phase optimization.
///
/// @param {Pointer} compoundShape
///     A pointer to the btCompoundShape object.
YYEXPORT void btCompoundShape_createAabbTreeFromChildren(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto compoundShape = (btCompoundShape*)YYGetPtr(arg, 0);
	compoundShape->createAabbTreeFromChildren();
}

/// @func btCompoundShape_calculatePrincipalAxisTransform(compoundShape, masses, principal, inertia)
///
/// @desc
/// Calculates the principal axis transformation and inertia tensor for the
/// btCompoundShape based on specified masses.
///
/// @param {Pointer} compoundShape
///     A pointer to the btCompoundShape object.
/// @param {Array<Real>} masses
///     An array of masses corresponding to the child shapes of the compound
///     shape. The length of this array should match the number of child shapes.
/// @param {Pointer} principal
///     A pointer to the btTransform where the calculated principal axis
///     transformation will be stored.
/// @param {Pointer} inertia
///     A pointer to the btVector3 where the calculated inertia tensor will be
///     stored.
YYEXPORT void btCompoundShape_calculatePrincipalAxisTransform(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto compoundShape = (btCompoundShape*)YYGetPtr(arg, 0);
	RValue* massesArray = &arg[1];
	btTransform& principal = *(btTransform*)YYGetPtr(arg, 1);
	btVector3& inertia = *(btVector3*)YYGetPtr(arg, 3);
	int numChildShapes = compoundShape->getNumChildShapes();
	std::vector<btScalar> masses;
	RValue value;
	for (int i = 0; i < numChildShapes; ++i)
	{
		GET_RValue(&value, massesArray, NULL, i);
		masses.push_back(value.val);
	}
	compoundShape->calculatePrincipalAxisTransform(masses.data(), principal, inertia);
}

/// @func btCompoundShape_getUpdateRevision(compoundShape)
///
/// @desc
/// Gets the update revision for the btCompoundShape, which can be used to track
/// changes in the shape.
///
/// @param {Pointer} compoundShape
///     A pointer to the btCompoundShape object.
///
/// @return {Real} Returns the update revision of the btCompoundShape.
YYEXPORT void btCompoundShape_getUpdateRevision(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto compoundShape = (btCompoundShape*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.val = compoundShape->getUpdateRevision();
}

// Note: Skipped btCompoundShape::calculateSerializeBufferSize
// Note: Skipped btCompoundShape::serialize

////////////////////////////////////////////////////////////////////////////////
//
// Note: Skipped btCompoundShapeChildData
//

////////////////////////////////////////////////////////////////////////////////
//
// Note: Skipped btCompoundShapeData
//
