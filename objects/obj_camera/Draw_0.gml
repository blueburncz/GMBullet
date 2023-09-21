d3d_set_projection_ext(
    x, y, z, x + look_x, y + look_y, z + look_z,
    0, 0, 1, fov, __view_get( e__VW.WView, 0 ) / __view_get( e__VW.HView, 0 ), znear, zfar
);

