attribute vec4 in_Position;
attribute vec3 in_Normal;
attribute vec4 in_Colour;
attribute vec2 in_TextureCoord;

varying vec3 v_vNormal;
varying vec2 v_vTexcoord;
varying vec4 v_vColour;

void main() {
	gl_Position = gm_Matrices[MATRIX_WORLD_VIEW_PROJECTION] * in_Position;
	v_vNormal = (gm_Matrices[MATRIX_WORLD] * vec4(in_Normal.xyz, 0.0)).xyz;
	v_vColour = in_Colour;
	v_vTexcoord = in_TextureCoord;
}
