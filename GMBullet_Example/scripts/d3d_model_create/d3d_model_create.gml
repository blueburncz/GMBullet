/// @description Creates a new model and returns its index.
/// @returns {number} returns the new model
function d3d_model_create() {

	var pointcols;
	var linecols;
	var tricols;
	pointcols[0] = -1;
	linecols[0] = -1;
	tricols[0] = -1;

	var model = [ undefined,				// point buffer
				  undefined,				// line buffer
				  undefined,				// tri list buffer
				  undefined,				// point uv buffer
				  undefined,				// line uv buffer
				  undefined,				// tri uv buffer
				  undefined,				// point vertex buffer
				  undefined,				// line vertex buffer
				  undefined,				// tri list buffer			  
				  $00010000,/*draw_get_colour(),*/		// colour used when creating
				  -1,						// last texture used for drawing
				  0,						// num vertices
				  0,						// prim kind
				  0,						// number of non-colour point vertices
				  0,						// number of non-colour line vertices
				  0,						// number of non-colour tri vertices
				  pointcols,				// offsets to point colours
				  linecols,					// offsets to line colours
				  tricols,					// offsets to tri colours
			  
				  0, 0, 0, 0, 0, 0, 0, 0, 0,	// vertex 1
				  0, 0, 0, 0, 0, 0, 0, 0, 0,	// vertex 2
			  
				];
			  
	return model;





}
