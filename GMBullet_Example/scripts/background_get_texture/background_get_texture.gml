/// @description Returns the texture id for the given background.
/// @param back The index of the background to use.
/// @returns {pointer} a pointer to the background texture
function background_get_texture(argument0) {

	return sprite_get_texture(argument0, 0);


}
