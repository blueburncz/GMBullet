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
//vb_floor = model_build_plane(-768, -768, 0, 768, 768, 0, 32, 32);
vb_cube = model_build_cube(-8, -8, -8, 8, 8, 8, 1, 1);

mdl_sphere = d3d_model_create();
d3d_model_ellipsoid(mdl_sphere, -8, -8, -8, 8, 8, 8, 1, 1, 24);

/* Create Floor */
//shape_floor = btBoxShape_createXYZ(768, 768, 1);
//body_floor = btRigidBody_create(0.0, btDefaultMotionState_create(), shape_floor);
//btDiscreteDynamicsWorld_addRigidBody(dynamicsWorld, body_floor, -1, 1);

/* Create Terrain */
terrain = new CTerrain(spr_heightmap);
terrain.Scale = [64, 64, 2];
terrain.Position = [
	-(terrain.Size[0] - 1) * terrain.Scale[0] * 0.5,
	-(terrain.Size[1] - 1) * terrain.Scale[1] * 0.5,
	-255 * terrain.Scale[2] * 0.5,
];

terrain_width = terrain.Size[0];
terrain_height = terrain.Size[1];
var _sizeofU8 = buffer_sizeof(buffer_u8);
terrain_bytesize = terrain_width * terrain_height * _sizeofU8;
heightfield = buffer_create(terrain_bytesize, buffer_fast, _sizeofU8);

for (var j = 0; j < terrain_height; ++j)
	for (var i = 0; i < terrain_width; ++i)
		buffer_write(heightfield, buffer_u8, terrain.get_height_index(i, j));

terrain_shape = btHeightfieldTerrainShape_createU8(terrain_height, terrain_width, buffer_get_address(heightfield), 1.0, 0, 255, 2, true);
btHeightfieldTerrainShape_setFlipTriangleWinding(terrain_shape, true);
btCollisionShape_setLocalScalingXYZ(terrain_shape, terrain.Scale[0], terrain.Scale[1], terrain.Scale[2]);
btHeightfieldTerrainShape_buildAccelerator(terrain_shape);
terrain_body = btRigidBody_create(0.0, btDefaultMotionState_create(), terrain_shape);
btDiscreteDynamicsWorld_addRigidBody(dynamicsWorld, terrain_body, -1, 1);

/* Create Cubes */
for (var i = 0; i < 25; ++i)
    for (var j = 0; j < 25; ++j)
        instance_create_3d(j * 16, 0, (i + 1) * 16, obj_box);

/* Initialize D3D */
d3d_start();
d3d_set_culling(true);

texture_set_repeat(true);

/* Delay Display Reset (Because GM) */
alarm[0] = 1;
