#include <GMBullet.hpp>

/// @func btSequentialImpulseConstraintSolver_create()
///
/// @desc
/// Creates a new instance of a Bullet Physics sequential impulse constraint
/// solver.
///
/// @return {Pointer} A pointer to the newly created instance of
/// btSequentialImpulseConstraintSolver.
YYEXPORT void btSequentialImpulseConstraintSolver_create(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	result.kind = VALUE_PTR;
	result.ptr = new btSequentialImpulseConstraintSolver();
}

/// @func btSequentialImpulseConstraintSolver_destroy(sequentialImpulseConstraintSolver)
///
/// @desc
/// Destroys an instance of a Bullet Physics sequential impulse constraint
/// solver.
///
/// @param {Pointer} sequentialImpulseConstraintSolver
///     A pointer to the btSequentialImpulseConstraintSolver object to be
///     destroyed.
YYEXPORT void btSequentialImpulseConstraintSolver_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btSequentialImpulseConstraintSolver*)YYGetPtr(arg, 0);
}
