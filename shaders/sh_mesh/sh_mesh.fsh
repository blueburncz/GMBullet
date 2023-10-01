varying vec3 v_vNormal;
varying vec4 v_vColour;

void main() {
	vec3 dir = vec3(0.2, 0.4, 1.0);
	float lighting = dot(normalize(v_vNormal), normalize(dir)) * 0.5 + 0.5;

	gl_FragColor = v_vColour;
	gl_FragColor.rgb *= lighting;
}
