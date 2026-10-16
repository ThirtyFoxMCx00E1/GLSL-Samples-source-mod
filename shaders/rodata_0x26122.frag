#version 300 es
precision highp float;
precision highp int;
uniform highp sampler2D uZ; uniform ivec2 uMax; out float oZ;
void main(){ ivec2 p = ivec2(gl_FragCoord.xy);
  oZ = texelFetch(uZ, clamp(p * 2 + ivec2(p.y & 1, p.x & 1), ivec2(0), uMax), 0).r; }

