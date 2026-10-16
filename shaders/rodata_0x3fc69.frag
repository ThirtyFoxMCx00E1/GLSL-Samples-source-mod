#version 300 es
precision highp float;
precision highp int;
uniform highp sampler2D uDepth; uniform int uDiv;
out float oZ;
void main(){ oZ = texelFetch(uDepth, ivec2(gl_FragCoord.xy) * uDiv, 0).r; }

