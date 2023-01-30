/// @description  Update Engine
bt_world_simulate(delta_time / 1_000_000, 1);

/* End Game */
if (keyboard_check_pressed(vk_escape))
    game_end();

/* */
/*  */
