#version 300 es
precision highp float;
precision highp int;
in vec2 vUV; uniform highp sampler2D uTex; out vec4 o;
uniform float uMode;   // 0 = a shadow map (depth), 1 = the screen mask (visibility)
void main(){ float d = texture(uTex, vUV).r; o = vec4(uMode > 0.5 ? vec3(d) : vec3(d < 0.99999 ? 1.0 - d : 0.1), 1.0); }

