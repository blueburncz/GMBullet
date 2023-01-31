/// @description  Update Engine
btDiscreteDynamicsWorld_stepSimulation(delta_time / 1_000_000);

/* End Game */
if (keyboard_check_pressed(vk_escape))
    game_end();

/* */
/*  */
