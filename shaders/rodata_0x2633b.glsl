#version 300 es
layout(location = 0) in vec3 Position;
uniform highp mat4 uMVP;
void main(){ gl_Position = uMVP * vec4(Position, 1.0); }

