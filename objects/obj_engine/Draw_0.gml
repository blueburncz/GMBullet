shader_set(sh_default);
vertex_submit(vb_floor, pr_trianglelist, background_get_texture(bg_floor));

/* Draw Boxes */
with (obj_box)
{
	var tex = sprite_get_texture(spr_body, !btCollisionObject_isActive(body));
	matrix_set(matrix_world, matrix);
	vertex_submit(other.vb_cube, pr_trianglelist, tex);
}

/* Draw Spheres */
with (obj_sphere)
{
	var tex = sprite_get_texture(spr_body, !btCollisionObject_isActive(body));
	matrix_set(matrix_world, matrix);
	d3d_model_draw(other.mdl_sphere, 0, 0, 0, tex);
}

/* Draw raycast result */
with (obj_camera)
{
	var _rayFromWorld = btVector3_create(x, y, z);
	var _rayToWorld = btVector3_create(x + look_x * 1000, y + look_y * 1000, z + look_z * 1000);
	var _closestHit = btClosestRayResultCallback_create(_rayFromWorld, _rayToWorld);
	var _collisionWorld = btDiscreteDynamicsWorld_getCollisionWorld(other.dynamicsWorld);
	btCollisionWorld_rayTest(_collisionWorld, _rayFromWorld, _rayToWorld, _closestHit);
	if (btRayResultCallback_hasHit(_closestHit))
	{
		var _point = [];
		btClosestRayResultCallback_getHitPointWorldArray(_closestHit, _point);
		var _matrix = matrix_build(_point[0], _point[1], _point[2], 0, 0, 0, 0.5, 0.5, 0.5);
		matrix_set(matrix_world, _matrix);
		d3d_model_draw(other.mdl_sphere, 0, 0, 0, sprite_get_texture(spr_body, 1));
	}
	btVector3_destroy(_rayFromWorld);
	btVector3_destroy(_rayToWorld);
}

d3d_transform_set_identity();
shader_reset();
