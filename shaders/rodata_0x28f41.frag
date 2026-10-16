#version 300 es
precision mediump float;
uniform highp sampler2D u;
out vec4 o;
void main(){ o = vec4(texelFetch(u, ivec2(0), 0).r); }

