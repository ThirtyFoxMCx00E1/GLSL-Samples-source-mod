#version 300 es
precision mediump float;
precision highp int;
uniform lowp sampler2D uTex;
uniform float uRef;
in highp vec2 vUV;
void main(){ if (textureLod(uTex, vUV, 0.0).a < uRef) discard; }

