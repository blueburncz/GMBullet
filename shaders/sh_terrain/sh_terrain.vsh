attribute vec4 in_Position;
attribute vec3 in_Normal;
attribute vec2 in_TextureCoord;

varying vec3 v_vNormal;
varying vec2 v_vTexcoord;

uniform mat4 u_mNormalMatrix;

void main() {
	gl_Position = gm_Matrices[MATRIX_WORLD_VIEW_PROJECTION] * in_Position;
	v_vNormal = (u_mNormalMatrix * vec4(in_Normal.xyz, 0.0)).xyz;
	v_vTexcoord = in_TextureCoord;
}
