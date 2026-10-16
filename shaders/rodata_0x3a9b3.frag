#version 300 es
precision mediump float;
precision highp int;
uniform sampler2D uTex; uniform vec2 uTexel; out vec4 oColor;
void main(){ vec2 uv = gl_FragCoord.xy * uTexel;
  vec3 c = texture(uTex, uv).rgb * 0.4 + (texture(uTex, uv + vec2(uTexel.x * 1.5, 0.0)).rgb + texture(uTex, uv - vec2(uTexel.x * 1.5, 0.0)).rgb
         + texture(uTex, uv + vec2(0.0, uTexel.y * 1.5)).rgb + texture(uTex, uv - vec2(0.0, uTexel.y * 1.5)).rgb) * 0.15;
  oColor = vec4(c, 1.0); }

