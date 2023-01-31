/// @description  bt_world_free();
function bt_world_free() {
	/*
	    DESCRIPTION
	    -----------
	    Frees the physics world and all unmanaged memory.
	*/
	gml_pragma("forceinline");

	external_call(global.__bt_world_free);



}
