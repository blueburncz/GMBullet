////////////////////////////////////////////////////////////////////////////////
//
// btIDebugDraw
//

/// @enum Enum representing debug draw modes for rendering debug information.
enum btDebugDrawModes
{
	/// @member No debug drawing.
	DBG_NoDebug = 0,
	/// @member Debug drawing of wireframe.
	DBG_DrawWireframe = 1,
	/// @member Debug drawing of axis-aligned bounding boxes (AABBs).
	DBG_DrawAabb = 2,
	/// @member Debug drawing of features as text.
	DBG_DrawFeaturesText = 4,
	/// @member Debug drawing of contact points.
	DBG_DrawContactPoints = 8,
	/// @member Debug drawing with no deactivation.
	DBG_NoDeactivation = 16,
	/// @member Debug drawing with no help text.
	DBG_NoHelpText = 32,
	/// @member Debug drawing of text.
	DBG_DrawText = 64,
	/// @member Debug drawing of profile timings.
	DBG_ProfileTimings = 128,
	/// @member Debug enabling of Separating Axis Theorem (SAT) comparison.
	DBG_EnableSatComparison = 256,
	/// @member Debug disabling of Bullet's Linear Complementarity Problem (LCP).
	DBG_DisableBulletLCP = 512,
	/// @member Debug enabling of Continuous Collision Detection (CCD).
	DBG_EnableCCD = 1024,
	/// @member Debug drawing of constraints.
	DBG_DrawConstraints = 0b100000000000,
	/// @member Debug drawing of constraint limits.
	DBG_DrawConstraintLimits = 0b1000000000000,
	/// @member Debug drawing of wireframe in a fast manner.
	DBG_FastWireframe = 0b10000000000000,
	/// @member Debug drawing of normals.
	DBG_DrawNormals = 0b100000000000000,
	/// @member Debug drawing of frames.
	DBG_DrawFrames = 0b1000000000000000,
	/// @member Maximum debug draw mode.
	DBG_MAX_DEBUG_DRAW_MODE
};

/// @func btGetDebugDrawVertexFormat()
///
/// @desc Retrieves a vertex format which can be used for rendering debug draw
/// data. This format includes 3D position and vertex colors. Do not destroy!
///
/// @return {Id.VertexFormat} The vertex format for rendering debug draw data.
function btGetDebugDrawVertexFormat()
{
	static _vformat = undefined;
	if (_vformat == undefined)
	{
		vertex_format_begin();
		vertex_format_add_position_3d();
		vertex_format_add_color();
		_vformat = vertex_format_end();
	}
	return _vformat;
}

////////////////////////////////////////////////////////////////////////////////
//
// btDispatcher
//

/// @enum Enum representing dispatch functions for collision detection.
enum btDispatchFunc
{
	/// @member Discrete collision detection.
	DISPATCH_DISCRETE = 1,
	/// @member Continuous collision detection.
	DISPATCH_CONTINUOUS
};


////////////////////////////////////////////////////////////////////////////////
//
// btBroadphaseProxy
//

/// @enum Enum representing collision filter groups.
enum btCollisionFilterGroups
{
	/// @member Default collision filter group.
	DefaultFilter = 1,
	/// @member Static collision filter group.
	StaticFilter = 2,
	/// @member Kinematic collision filter group.
	KinematicFilter = 4,
	/// @member Debris collision filter group.
	DebrisFilter = 8,
	/// @member Sensor trigger collision filter group.
	SensorTrigger = 16,
	/// @member Character collision filter group.
	CharacterFilter = 32,
	/// @member All collision filter group.
	AllFilter = -1
};

////////////////////////////////////////////////////////////////////////////////
//
// btTypedConstraint
//

/// @enum Enum defining different types of Bullet physics constraints.
enum btTypedConstraintType
{
	/// @member Point-to-point constraint type.
	POINT2POINT_CONSTRAINT_TYPE = 3,
	/// @member Hinge constraint type.
	HINGE_CONSTRAINT_TYPE,
	/// @memeber Cone twist constraint type.
	CONETWIST_CONSTRAINT_TYPE,
	/// @member D6 constraint type.
	D6_CONSTRAINT_TYPE,
	/// @member Slider constraint type.
	SLIDER_CONSTRAINT_TYPE,
	/// @member Contact constraint type.
	CONTACT_CONSTRAINT_TYPE,
	/// @member D6 spring constraint type.
	D6_SPRING_CONSTRAINT_TYPE,
	/// @member Gear constraint type.
	GEAR_CONSTRAINT_TYPE,
	/// @member Fixed constraint type.
	FIXED_CONSTRAINT_TYPE,
	/// @member D6 spring 2 constraint type.
	D6_SPRING_2_CONSTRAINT_TYPE,
	/// @member Maximum constraint type.
	MAX_CONSTRAINT_TYPE
};

/// @enum Enum defining constraint parameters for Bullet physics constraints.
enum btConstraintParams
{
	/// @member Error Reduction Parameter (ERP) for the constraint.
	BT_CONSTRAINT_ERP = 1,
	/// @member Stop ERP for the constraint.
	BT_CONSTRAINT_STOP_ERP,
	/// @member Constraint Force Mixing (CFM) for the constraint.
	BT_CONSTRAINT_CFM,
	/// @member Stop CFM for the constraint.
	BT_CONSTRAINT_STOP_CFM
};

////////////////////////////////////////////////////////////////////////////////
//
// btPoint2PointConstraint
//

/// @enum Enum representing flags for the point-to-point constraint.
enum btPoint2PointFlags
{
	/// @member Flag indicating the Error Reduction Parameter (ERP) for the
	/// point-to-point constraint.
	BT_P2P_FLAGS_ERP = 1,
	/// @member Flag indicating the Constraint Force Mixing (CFM) for the
	/// point-to-point constraint.
	BT_P2P_FLAGS_CFM = 2
};

////////////////////////////////////////////////////////////////////////////////
//
// btHingeConstraint
//

/// @enum Enum representing flags for the hinge constraint.
enum btHingeFlags
{
	/// @member Flag indicating Constraint Force Mixing (CFM) for the stopping
	/// constraint in the hinge.
	BT_HINGE_FLAGS_CFM_STOP = 1,
	/// @member Flag indicating Error Reduction Parameter (ERP) for the stopping
	/// constraint in the hinge.
	BT_HINGE_FLAGS_ERP_STOP = 2,
	/// @member Flag indicating Constraint Force Mixing (CFM) for the normal
	/// constraint in the hinge.
	BT_HINGE_FLAGS_CFM_NORM = 4,
	/// @member Flag indicating Error Reduction Parameter (ERP) for the normal
	/// constraint in the hinge.
	BT_HINGE_FLAGS_ERP_NORM = 8
};

////////////////////////////////////////////////////////////////////////////////
//
// btConeTwistConstraint
//

/// @enum Enum representing flags for the cone twist constraint.
enum btConeTwistFlags
{
	/// @member Flag indicating Constraint Force Mixing (CFM) for linear
	/// constraint in the cone twist.
	BT_CONETWIST_FLAGS_LIN_CFM = 1,
	/// @member Flag indicating Error Reduction Parameter (ERP) for linear
	/// constraint in the cone twist.
	BT_CONETWIST_FLAGS_LIN_ERP = 2,
	/// @member Flag indicating Constraint Force Mixing (CFM) for angular
	/// constraint in the cone twist.
	BT_CONETWIST_FLAGS_ANG_CFM = 4
};

////////////////////////////////////////////////////////////////////////////////
//
// btGeneric6DofConstraint
//

/// @enum Enum representing flags for the 6 degrees of freedom constraint.
enum bt6DofFlags
{
	/// @member Flag indicating Constraint Force Mixing (CFM) for the normal
	/// constraint in the 6 degrees of freedom constraint.
	BT_6DOF_FLAGS_CFM_NORM = 1,
	/// @member Flag indicating Constraint Force Mixing (CFM) for the stopping
	/// constraint in the 6 degrees of freedom constraint.
	BT_6DOF_FLAGS_CFM_STOP = 2,
	/// @member Flag indicating Error Reduction Parameter (ERP) for the stopping
	/// constraint in the 6 degrees of freedom constraint.
	BT_6DOF_FLAGS_ERP_STOP = 4
};

////////////////////////////////////////////////////////////////////////////////
//
// btSliderConstraint
//

/// @macro {Real} Default softness value for the slider constraint.
#macro SLIDER_CONSTRAINT_DEF_SOFTNESS 1.0

/// @macro {Real} Default damping value for the slider constraint.
#macro SLIDER_CONSTRAINT_DEF_DAMPING 1.0

/// @macro {Real} Default restitution value for the slider constraint.
#macro SLIDER_CONSTRAINT_DEF_RESTITUTION 0.7

/// @macro {Real} Default constraint force mixing value for the slider
/// constraint.
#macro SLIDER_CONSTRAINT_DEF_CFM 0.0

/// @enum Enum representing flags for the slider constraint.
enum btSliderFlags
{
	/// @member Flag indicating Constraint Force Mixing (CFM) for linear
	/// direction in the slider.
	BT_SLIDER_FLAGS_CFM_DIRLIN = 0b1,
	/// @member Flag indicating Error Reduction Parameter (ERP) for linear
	/// direction in the slider.
	BT_SLIDER_FLAGS_ERP_DIRLIN = 0b10,
	/// @member Flag indicating Constraint Force Mixing (CFM) for angular
	/// direction in the slider.
	BT_SLIDER_FLAGS_CFM_DIRANG = 0b100,
	/// @member Flag indicating Error Reduction Parameter (ERP) for angular
	/// direction in the slider.
	BT_SLIDER_FLAGS_ERP_DIRANG = 0b1000,
	/// @member Flag indicating Constraint Force Mixing (CFM) for orthogonal
	/// linear direction in the slider.
	BT_SLIDER_FLAGS_CFM_ORTLIN = 0b10000,
	/// @member Flag indicating Error Reduction Parameter (ERP) for orthogonal
	/// linear direction in the slider.
	BT_SLIDER_FLAGS_ERP_ORTLIN = 0b10000,
	/// @member Flag indicating Constraint Force Mixing (CFM) for orthogonal
	/// angular direction in the slider.
	BT_SLIDER_FLAGS_CFM_ORTANG = 0b100000,
	/// @member Flag indicating Error Reduction Parameter (ERP) for orthogonal
	/// angular direction in the slider.
	BT_SLIDER_FLAGS_ERP_ORTANG = 0b1000000,
	/// @member Flag indicating Constraint Force Mixing (CFM) for linear limit
	/// in the slider.
	BT_SLIDER_FLAGS_CFM_LIMLIN = 0b10000000,
	/// @member Flag indicating Error Reduction Parameter (ERP) for linear limit
	/// in the slider.
	BT_SLIDER_FLAGS_ERP_LIMLIN = 0b100000000,
	/// @member Flag indicating Constraint Force Mixing (CFM) for angular limit
	/// in the slider.
	BT_SLIDER_FLAGS_CFM_LIMANG = 0b1000000000,
	/// @member Flag indicating Error Reduction Parameter (ERP) for angular
	/// limit in the slider.
	BT_SLIDER_FLAGS_ERP_LIMANG = 0b10000000000
};

////////////////////////////////////////////////////////////////////////////////
//
// btGeneric6DofSpring2Constraint
//

/// @enum Enum representing different rotation orders.
enum btRotateOrder
{
	/// @member Rotation order: X, Y, Z.
	RO_XYZ = 0,
	/// @member Rotation order: X, Z, Y.
	RO_XZY,
	/// @member Rotation order: Y, X, Z.
	RO_YXZ,
	/// @member Rotation order: Y, Z, X.
	RO_YZX,
	/// @member Rotation order: Z, X, Y.
	RO_ZXY,
	/// @member Rotation order: Z, Y, X.
	RO_ZYX
};

/// @enum Enum representing flags for the 6 degrees of freedom constraint
/// (version 2).
enum bt6DofFlags2
{
	/// @member Flag indicating Constraint Force Mixing (CFM) for stopping
	/// constraint (version 2).
	BT_6DOF_FLAGS_CFM_STOP2 = 1,
	/// @member Flag indicating Error Reduction Parameter (ERP) for stopping
	/// constraint (version 2).
	BT_6DOF_FLAGS_ERP_STOP2 = 2,
	/// @member Flag indicating Constraint Force Mixing (CFM) for motor
	/// constraint (version 2).
	BT_6DOF_FLAGS_CFM_MOTO2 = 4,
	/// @member Flag indicating Error Reduction Parameter (ERP) for motor
	/// constraint (version 2).
	BT_6DOF_FLAGS_ERP_MOTO2 = 8,
	/// @member Flag indicating the use of infinite error in the constraint
	/// (version 2).
	BT_6DOF_FLAGS_USE_INFINITE_ERROR = 0b10000000000000000
};
