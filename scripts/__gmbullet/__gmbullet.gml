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
