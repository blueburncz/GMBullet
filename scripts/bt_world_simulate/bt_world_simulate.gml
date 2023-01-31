/// @description  bt_world_simulate(timestep, max_substeps);
/// @param timestep
/// @param  max_substeps
function bt_world_simulate(argument0, argument1) {
	/*
	    DESCRIPTION
	    -----------
	    Simulates (updates) the physics world.
    
	    ARGUMENTS
	    ---------
	    timestep:     The amount of time to step the simulation by. Typically set to
	                  the time since you last called the function.
    
	    max_substeps: The maximum number of steps that Bullet is allowed to take each
	                  time you call the function. If you pass a very large timestep,
	                  then you must increase max_substeps to compensate for this,
	                  otherwise your simulation is "losing" time.
	*/
	gml_pragma("forceinline");

	external_call(global.__bt_world_simulate, argument0, argument1);



}
