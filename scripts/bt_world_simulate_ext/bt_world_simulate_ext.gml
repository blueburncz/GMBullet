/// @description  bt_world_simulate_ext(timestep, max_substeps, fixed_timestep);
/// @param timestep
/// @param  max_substeps
/// @param  fixed_timestep
function bt_world_simulate_ext(argument0, argument1, argument2) {
	/*
	    DESCRIPTION
	    -----------
	    Simulates (updates) the physics world.
    
	    ARGUMENTS
	    ---------
	    timestep:       The amount of time to step the simulation by. Typically set to
	                    the time since you last called the function.
    
	    max_substeps:   The maximum number of steps that Bullet is allowed to take each
	                    time you call the function. If you pass a very large timestep,
	                    then you must increase max_substeps to compensate for this,
	                    otherwise your simulation is "losing" time.
    
	    fixed_timestep: By decreasing the size of fixed_timestep, you are increasing
	                    the “resolution” of the simulation. If you are finding that
	                    your objects are moving very fast and escaping from your walls
	                    instead of colliding with them, then one way to help fix this
	                    problem is by decreasing fixed_timestep.
	*/
	gml_pragma("forceinline");

	external_call(global.__bt_world_simulate_ext, argument0, argument1, argument2);



}
