#version 300 es
layout(location = 0) in vec3 Position;
layout(location = 1) in vec2 TexCoord0;
uniform highp mat4 uMVP;
uniform highp float uUVS;
out highp vec2 vUV;
void main(){ vUV = TexCoord0 * uUVS; gl_Position = uMVP * vec4(Position, 1.0); }

