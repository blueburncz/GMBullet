with (other) {
/// Setup Box
z = get_z();

shape = bt_shape_create_box(8, 8, 8);
body = bt_body_create(shape, 1.0);
bt_world_add_body(body, -1, 1);

bt_transform_translation(x, y, z);
bt_body_apply_transform(body);
bt_transform_identity();

matrix = matrix_build(0, 0, 0, 0, 0, 0, 1, 1, 1);

}
