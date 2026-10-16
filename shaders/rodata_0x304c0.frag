#version 300 es
precision highp float;
precision highp int;
in highp vec2 vUV;
out vec4 oColor;
uniform highp vec4 uP;   // x seconds, y drop density 0..1
float H(vec2 p){ vec3 q = fract(vec3(p.xyx) * 0.1031); q += dot(q, q.yzx + 33.33); return fract((q.x + q.y) * q.z); }
vec3 Rip(vec2 p, float t, float dens, vec2 seed){   // xy tilt, z splash brightness (0..1.5)
  vec2 c = mod(floor(p), 16.0) + seed; vec2 f = fract(p);
  float hc = H(c + 7.7); float tc = t * (0.9 + 0.4 * fract(hc * 23.3)) + hc; float n = floor(tc); float a = fract(tc);
  if (H(c + vec2(n * 0.37 + 3.1, n)) > dens) return vec3(0.0);
  float h = H(c + vec2(n, 1.3)); float s = mix(0.15, 0.35, fract(h * 13.7));
  vec2 v = (f - 0.5 - (vec2(h, fract(h * 37.1)) - 0.5) * (1.0 - 2.4 * s)) / s; float r = length(v);
  float th = min((s * 0.5 + 0.25) * 0.5, a); float thE = max(max(th, 1.5 / (32.0 * s)), 0.002);
  float ring = 1.0 - smoothstep(0.0, thE * 1.1, abs(r - a));
  float spl = ring * (1.0 - a) * (1.0 - a) * (th / thE) + 1.5 * max(0.0, 1.0 - a * 6.5) * max(0.0, 1.0 - r / 0.3);
  float k = ring * max(0.0, 1.0 - r) * (th / thE);
  if (k < 0.001) return vec3(0.0, 0.0, spl);
  return vec3(-sin(3.14159 * (0.5 - smoothstep(a - thE, a + thE, r)) * k) * v / max(r, 0.0001), spl);
}
void main(){
  vec2 p = vUV * 16.0;
  vec3 A = Rip(p, uP.x, uP.y, vec2(0.0)), B = Rip(p, uP.x + 0.5, uP.y, vec2(37.0, 17.0));
  vec2 t = (A.xy * 0.6 + B.xy * 0.45) / 1.2;             // |t| <= 0.875
  oColor = vec4((t * 127.0 + 128.0) / 255.0, min((A.z * 0.6 + B.z * 0.467) / 2.0, 1.0), 1.0);   // 0 tilt = exactly 128; splash = 1.1.10's weights, /2
}

