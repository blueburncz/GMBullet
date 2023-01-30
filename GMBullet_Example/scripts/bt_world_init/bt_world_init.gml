/// @description  bt_world_init();
function bt_world_init() {
	/*
	    DESCRIPTION
	    -----------
	    Initializes the physics world.
    
	    NOTE: The default gravity for all worlds is set to (0, 0, -10) unless
	          otherwise specified.
	*/
	gml_pragma("forceinline");

	external_call(global.__bt_world_init);



}
