/// @description  Render Scene
shader_set(sh_default);
vertex_submit(vb_floor, pr_trianglelist, background_get_texture(bg_floor));

/* Draw Boxes */
with (obj_box) {
    var tex = sprite_get_texture(spr_body, !btRigidBody_isActive(body));
    
    matrix_set(matrix_world, matrix);
    vertex_submit(other.vb_cube, pr_trianglelist, tex);
}

/* Draw Spheres */
with (obj_sphere) {
    var tex = sprite_get_texture(spr_body, !btRigidBody_isActive(body));
    
    matrix_set(matrix_world, matrix);
    d3d_model_draw(other.mdl_sphere, 0, 0, 0, tex);
}

d3d_transform_set_identity();
shader_reset();

/* */
/*  */
