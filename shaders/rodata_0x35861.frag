#version 300 es
precision highp float;
precision highp int;
uniform highp sampler2D uCur;    // unit 0: blurred AO (ao, distance)
uniform highp sampler2D uHist;   // unit 1: last frame's result (bilinear)
uniform highp sampler2D uZ;      // unit 2: depth pyramid, level 0
uniform mat4 uIVP;               // ndc -> world - camera (this frame)
uniform mat4 uPrev;              // previous P x V applied to (world - this camera)
uniform vec4 uT;                 // AO width, height, history weight (0 = reset)
uniform vec3 uCamD;              // this camera - previous camera
out vec4 oAO;
void main(){
  ivec2 ip = ivec2(gl_FragCoord.xy);
  float key = texelFetch(uCur, ip, 0).b;                                   // 1.5.2: the depth key rides along
  // 0.28.0: the spatial filter lives here (was a separate 2x7-tap blur = 2 more passes): depth-aware
  // 3x3 over the raw AO; the per-frame tap rotation + this history do the rest
  ivec2 hi = ivec2(uT.xy) - 1;
  vec2 c0 = texelFetch(uCur, ip, 0).rg;
  float tol = c0.g * 0.04 + 0.1, sum = 0.0, ws = 0.0, s2 = 0.0;
  for (int j = 0; j < 9; ++j) {
    vec2 a = j == 4 ? c0 : texelFetch(uCur, clamp(ip + ivec2(j % 3 - 1, j / 3 - 1), ivec2(0), hi), 0).rg;
    float w = (j == 4 ? 4.0 : ((j & 1) == 1 ? 2.0 : 1.0)) * max(0.0, 1.0 - abs(a.g - c0.g) / tol);
    sum += a.r * w; s2 += a.r * a.r * w; ws += w;
  }
  vec2 c = vec2(sum / max(ws, 1e-4), c0.g);
  float sg = sqrt(max(s2 / max(ws, 1e-4) - c.r * c.r, 0.0));              // 1.5.4: spread of this frame's 3x3
  oAO = vec4(c, key, 1.0);
  if (uT.z <= 0.0 || c.g > 59000.0) return;
  float d = texelFetch(uZ, ip, 0).r;
  vec4 p = uIVP * vec4((vec2(ip) + 0.5) / uT.xy * 2.0 - 1.0, d * 2.0 - 1.0, 1.0);
  vec3 C = p.xyz / p.w;
  vec4 q = uPrev * vec4(C, 1.0);
  if (q.w <= 1e-4) return;
  vec2 puv = q.xy / q.w * 0.5 + 0.5;
  if (puv.x < 0.0 || puv.y < 0.0 || puv.x > 1.0 || puv.y > 1.0) return;   // was off screen
  vec2 h = texture(uHist, puv).rg;
  float e = length(C + uCamD);                                             // expected distance from the old camera
  if (!(abs(h.g - e) <= 0.04 * e + 0.1) || !(h.r >= 0.0 && h.r <= 1.0)) return;   // disocclusion / NaN
  // clamp the history to this frame's 3x3 AO (same surface only): a car's contact darkness can't linger
  // where the car has left (0.19.0: black trails behind moving cars). 1.5.4: mean +- 1 sigma (was the
  // min / max of 9 noisy GTAO values = a box wide enough to let the trail through: 1.5.3 trails behind
  // cars / CJ), a history far outside it is dropped, and less history where the view moves fast
  float hr = clamp(h.r, c.r - sg - 0.03, c.r + sg + 0.03);
  float mv = length(puv * uT.xy - (vec2(ip) + 0.5));                       // screen motion, AO pixels
  float k = uT.z * (1.0 - 0.4 * clamp(mv / 6.0, 0.0, 1.0));
  k *= 1.0 - smoothstep(1.5 * sg + 0.06, 3.0 * sg + 0.18, abs(h.r - c.r));
  oAO = vec4(mix(c.r, hr, k), c.g, key, 1.0);
}

