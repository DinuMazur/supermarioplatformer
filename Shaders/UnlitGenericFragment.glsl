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
	vec4 color1 = texture2D(texture_1, texcoord);
	if (color1.a < 0.5) discard;
	out_color = color1;
}