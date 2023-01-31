/// @description  Initialize Engine
bt_init();
bt_world_init();
bt_world_set_gravity(0, 0, -160);
vertex_formats_init();

gpu_set_tex_mip_enable(true);
gpu_set_tex_mip_filter(tf_anisotropic);
// window_set_fullscreen(true);

/* Setup Models */
vb_floor = model_build_plane(-768, -768, 0, 768, 768, 0, 32, 32);
vb_cube = model_build_cube(-8, -8, -8, 8, 8, 8, 1, 1);

mdl_sphere = d3d_model_create();
d3d_model_ellipsoid(mdl_sphere, -8, -8, -8, 8, 8, 8, 1, 1, 24);

/* Create Floor */
shape_floor = bt_shape_create_box(768, 768, 1);
body_floor = bt_body_create(shape_floor, 0.0);
bt_world_add_body(body_floor, -1, 1);

/* Create Cubes */
for (var i = 0; i < 25; ++i)
    for (var j = 0; j < 25; ++j)
        instance_create_3d(j * 16, 0, i * 16, obj_box);

/* Initialize D3D */
d3d_start();
d3d_set_culling(true);

texture_set_repeat(true);

/* Delay Display Reset (Because GM) */
alarm[0] = 1;

/* */
/*  */
