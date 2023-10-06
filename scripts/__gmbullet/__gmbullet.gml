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
