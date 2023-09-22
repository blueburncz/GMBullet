collisionConfiguration = btDefaultCollisionConfiguration_create();
dispatcher = btCollisionDispatcher_create(collisionConfiguration);
overlappingPairCache = btDbvtBroadphase_create();
solver = btSequentialImpulseConstraintSolver_create();
dynamicsWorld = btDiscreteDynamicsWorld_create(dispatcher, overlappingPairCache, solver, collisionConfiguration);
btDiscreteDynamicsWorld_setGravityXYZ(dynamicsWorld, 0, 0, -160);

pause = false;

vertex_formats_init();

gpu_set_tex_mip_enable(true);
gpu_set_tex_mip_filter(tf_anisotropic);
//window_set_fullscreen(true);

/* Setup Models */
vb_floor = model_build_plane(-768, -768, 0, 768, 768, 0, 32, 32);
vb_cube = model_build_cube(-8, -8, -8, 8, 8, 8, 1, 1);

mdl_sphere = d3d_model_create();
d3d_model_ellipsoid(mdl_sphere, -8, -8, -8, 8, 8, 8, 1, 1, 24);

/* Create Floor */
shape_floor = btBoxShape_createXYZ(768, 768, 1);
body_floor = btRigidBody_create(0.0, btDefaultMotionState_create(), shape_floor);
btDiscreteDynamicsWorld_addRigidBody(dynamicsWorld, body_floor, -1, 1);

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
