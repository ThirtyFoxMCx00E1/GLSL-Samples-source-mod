#version 300 es
precision highp float;
precision highp int;
uniform highp sampler2D uTex; uniform vec4 uD;   // mode, 1/sw, 1/sh
out vec4 oC;
void main(){ vec2 t = texture(uTex, gl_FragCoord.xy * uD.yz).rg; vec3 c;
  if (uD.x < 1.5) c = vec3(t.r);                                          // 1: AO, white = open
  else if (t.g > 59000.0) c = vec3(1.0, 0.0, 0.0);                        // 2: red = sky / depth 1.0
  else if (uD.x < 2.5) c = vec3(clamp(t.g / 50.0, 0.0, 1.0));             // 2: distance, black 0 m .. white 50 m
  else c = vec3(fract(t.g), fract(t.g * 0.1), clamp(t.g / 150.0, 0.0, 1.0));   // 3: distance bands (1 m / 10 m / 150 m)
  oC = vec4(c, 1.0); }

