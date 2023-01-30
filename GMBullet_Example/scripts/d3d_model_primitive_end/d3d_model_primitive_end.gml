/// @description  Ends the process of adding primitives to a model in 3D.
/// @param ind The index of the model to end the addition of primitives to.
function d3d_model_primitive_end(argument0) {

	var m = argument0;
	m[@ e__YYM.PrimKind] = 0;
	m[@ e__YYM.NumVerts] = 0;




}
