#include <GMBullet.hpp>

/// @func btSequentialImpulseConstraintSolver_create()
///
/// @desc
///
/// @return {Pointer}
YYEXPORT void btSequentialImpulseConstraintSolver_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	result.kind = VALUE_PTR;
	result.ptr = new btSequentialImpulseConstraintSolver();
}
/// @func btSequentialImpulseConstraintSolver_destroy(sequentialImpulseConstraintSolver)
///
/// @desc
///
/// @param {Pointer} sequentialImpulseConstraintSolver
YYEXPORT void btSequentialImpulseConstraintSolver_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btSequentialImpulseConstraintSolver*)YYGetPtr(arg, 0);
}
