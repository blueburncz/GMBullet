if (keyboard_check_pressed(vk_space))
{
	pause = !pause;
}

if (!pause)
{
	btDiscreteDynamicsWorld_stepSimulation(dynamicsWorld, delta_time / 1_000_000.0);
}

if (keyboard_check_pressed(vk_escape))
{
	game_end();
}
