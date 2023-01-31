/// @description  Movement
var input_x = keyboard_check(ord("D")) - keyboard_check(ord("A")),
    input_y = keyboard_check(ord("W")) - keyboard_check(ord("S")),
    input_z = keyboard_check(vk_space) - keyboard_check(vk_lshift);



/* Acceleration */
speed_x += (lengthdir_x(input_y * move_accel, yaw) + lengthdir_x(input_x * move_accel, yaw - 90));
speed_y += (lengthdir_y(input_y * move_accel, yaw) + lengthdir_y(input_x * move_accel, yaw - 90));
speed_z += input_z * move_accel;

/* Clamp Speed */
var length = sqrt(speed_x * speed_x + speed_y * speed_y);

if (length > move_speed) {
    speed_x = (speed_x / length) * move_speed;
    speed_y = (speed_y / length) * move_speed;
}

/* Friction */
speed_x *= move_friction;
speed_y *= move_friction;
speed_z *= move_friction;

/* Update Position */
x += speed_x;
y += speed_y;
z += speed_z;

/* */
/// Mouse Look
var center_x = window_get_width() / 2,
    center_y = window_get_height() / 2;

/* Look Acceleration */
yaw_to += (center_x - window_mouse_get_x()) * look_speed;
pitch_to += (center_y - window_mouse_get_y()) * look_speed;
pitch_to = clamp(pitch_to, -89, 89);

window_mouse_set(center_x, center_y);

/* Look Smoothing */
yaw = lerp(yaw, yaw_to, look_smooth);
pitch = lerp(pitch, pitch_to, look_smooth);

/* Update Look Vector */
look_x = dcos(yaw);
look_y = -dsin(yaw);
look_z = dtan(pitch);

/* */
/// Shoot Bodies
if (mouse_check_button_pressed(mb_left)) {
    with (instance_create_3d(x, y, z, obj_sphere)) {
        var force = 250;
        btRigidBody_applyCentralImpulse(body, other.look_x * force, other.look_y * force, other.look_z * force);
    }
}

/* */
/*  */
