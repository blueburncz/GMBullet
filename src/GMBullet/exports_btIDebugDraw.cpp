#include <GMBullet.hpp>

using btDefaultColors = btIDebugDraw::DefaultColors;

////////////////////////////////////////////////////////////////////////////////
//
// Note: Skipped btDefaultColors
//

////////////////////////////////////////////////////////////////////////////////
//
// btIDebugDraw
//

/// @func btIDebugDraw_destroy(iDebugDraw)
///
/// @desc
/// Destroys a btIDebugDraw instance.
///
/// @param {Pointer} iDebugDraw
///     A pointer to the btIDebugDraw instance to be destroyed.
YYEXPORT void btIDebugDraw_destroy(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	delete (btIDebugDraw*)YYGetPtr(arg, 0);
}

// Note: Skipped btIDebugDraw::getDefaultColors
// Note: Skipped btIDebugDraw::setDefaultColors
// Note: Skipped btIDebugDraw::drawLine
// Note: Skipped btIDebugDraw::drawSphere
// Note: Skipped btIDebugDraw::drawTriangle
// Note: Skipped btIDebugDraw::drawContactPoint
// Note: Skipped btIDebugDraw::reportErrorWarning
// Note: Skipped btIDebugDraw::draw3dText

/// @func btIDebugDraw_setDebugMode(iDebugDraw, debugMode)
///
/// @desc
/// Sets the debug mode for an instance of btIDebugDraw. The debug mode
/// determines what type of debug information will be displayed (e.g., wireframe,
/// AABB, contact points).
///
/// @param {Pointer} iDebugDraw
///     A pointer to an instance of btIDebugDraw.
/// @param {Real} debugMode
///     An integer representing the debug mode to set.
YYEXPORT void btIDebugDraw_setDebugMode(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto iDebugDraw = (btIDebugDraw*)YYGetPtr(arg, 0);
	int debugMode = YYGetInt32(arg, 1);
	iDebugDraw->setDebugMode(debugMode);
}

/// @func btIDebugDraw_getDebugMode(iDebugDraw)
///
/// @desc
/// Retrieves the debug mode currently set for an instance of btIDebugDraw. The
/// debug mode determines what type of debug information is being displayed.
///
/// @param {Pointer} iDebugDraw
///     A pointer to an instance of btIDebugDraw.
///
/// @return {Real} An integer representing the current debug mode.
YYEXPORT void btIDebugDraw_getDebugMode(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto iDebugDraw = (btIDebugDraw*)YYGetPtr(arg, 0);
	result.kind = VALUE_INT32;
	result.val = iDebugDraw->getDebugMode();
}

// Note: Skipped btIDebugDraw::drawAabb
// Note: Skipped btIDebugDraw::drawTransform
// Note: Skipped btIDebugDraw::drawArc
// Note: Skipped btIDebugDraw::drawSpherePatch
// Note: Skipped btIDebugDraw::drawBox
// Note: Skipped btIDebugDraw::drawCapsule
// Note: Skipped btIDebugDraw::drawCylinder
// Note: Skipped btIDebugDraw::drawCone
// Note: Skipped btIDebugDraw::drawPlane

/// @func btIDebugDraw_clearLines(iDebugDraw)
///
/// @desc
/// Clears the existing lines drawn by the debug drawer.
///
/// @param {Pointer} iDebugDraw
///     A pointer to the btIDebugDraw instance.
YYEXPORT void btIDebugDraw_clearLines(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto iDebugDraw = (btIDebugDraw*)YYGetPtr(arg, 0);
	iDebugDraw->clearLines();
}

/// @func btIDebugDraw_flushLines(iDebugDraw)
///
/// @desc
/// Flushes the lines drawn by the debug drawer.
///
/// @param {Pointer} iDebugDraw
///     A pointer to the btIDebugDraw instance.
YYEXPORT void btIDebugDraw_flushLines(
	RValue& result, CInstance* self, CInstance* other, int argc, RValue* arg)
{
	auto iDebugDraw = (btIDebugDraw*)YYGetPtr(arg, 0);
	iDebugDraw->flushLines();
}
