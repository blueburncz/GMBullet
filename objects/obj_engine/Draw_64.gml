/// @description  Debug GUI
draw_set_font(fnt_debug);
draw_set_color(c_white);

draw_text(4, 4, string_hash_to_newline("FPS: " + string(fps) + " | " + string(fps_real)));
draw_text(4, 16, string_hash_to_newline("Bodies: " + string(btDiscreteDynamicsWorld_getNumCollisionObjects())));

