#version 300 es
precision highp float;
precision highp int;
in highp vec2 vUV;
out vec4 oColor;
float H(vec2 p){ vec3 q = fract(vec3(p.xyx) * 0.1031); q += dot(q, q.yzx + 33.33); return fract((q.x + q.y) * q.z); }
float N(vec2 p, float per){ vec2 i = floor(p); vec2 u = fract(p); u = u * u * (3.0 - 2.0 * u);
  vec2 a = mod(i, per), b = mod(i + 1.0, per);
  return mix(mix(H(a), H(vec2(b.x, a.y)), u.x), mix(H(vec2(a.x, b.y)), H(b), u.x), u.y); }
void main(){ vec2 w = vUV * 128.0;
  oColor = vec4(N(w * 0.1875, 24.0) * 0.7 + N(w * 0.5625 + 17.0, 72.0) * 0.3, 0.0, 0.0, 1.0); }

