#include <GMBullet.hpp>
#include <BulletSoftBody/btDefaultSoftBodySolver.h>

/// @func btDefaultSoftBodySolver_create()
///
/// @desc
/// Creates a new instance of the default soft body solver.
///
/// @return {Pointer} A pointer to the created btDefaultSoftBodySolver instance.
YYEXPORT void btDefaultSoftBodySolver_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	result.kind = VALUE_PTR;
	result.ptr = new btDefaultSoftBodySolver();
}

/// @func btDefaultSoftBodySolver_destroy(defaultSoftBodySolver)
///
/// @desc
/// Destroys a btDefaultSoftBodySolver instance.
///
/// @param {Pointer} defaultSoftBodySolver
///     A pointer to the btDefaultSoftBodySolver instance to destroy.
YYEXPORT void btDefaultSoftBodySolver_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btDefaultSoftBodySolver*)YYGetPtr(arg, 0);
}
