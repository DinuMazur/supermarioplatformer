#version 330

in vec3 world_position;
in vec3 world_normal;

// Uniforms for light properties
uniform vec3 light_position;
uniform vec3 eye_position;

uniform float material_kd;
uniform float material_ks;
uniform int material_shininess;
uniform int objectid;

uniform sampler2D texture_1;
uniform sampler2D texture_2;
uniform sampler2D texture_3;

uniform float time;

in vec2 texcoord;

layout(location = 0) out vec4 out_color;

void main()
{
	vec3 L = normalize( light_position - world_position);
	vec3 V = normalize( eye_position - world_position );
	vec3 H = normalize( L + V );

	float intensitateAmbientalaGlobala = 1;
	float intensitateLumina = 2;

	float ambient_light = material_kd * intensitateAmbientalaGlobala;
	float diffuse_light = material_kd * intensitateLumina * max(dot(world_normal, L), 0);
	float specular_light = 0;
	if (diffuse_light > 0) {
		specular_light = material_ks * intensitateLumina * pow(max(dot(world_normal, H), 0), material_shininess);
	}
	float intensity = diffuse_light + specular_light + ambient_light;

	// TODO : calculate the out_color using the texture2D() function
	vec2 coord = texcoord;
	if (objectid == 1) {
		coord.x = texcoord.x - time * 0.1;
	}
	vec4 color1 = texture2D(texture_1, coord);
	vec4 color2 = texture2D(texture_2, coord);
	vec4 color = color1;
	if (objectid == 2) {
		color = mix(color1, color2, 0.6f);
	}
	if (color1.a < 0.5) discard;
	color = vec4(vec3(color) * intensity, color.a);
	out_color = color;
}