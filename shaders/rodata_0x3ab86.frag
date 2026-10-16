#version 300 es
precision highp float;
precision highp int;
uniform highp sampler2D uDepth;          // unit 0: scene depth (full res)
uniform highp sampler2DShadow uMap;      // unit 1: near cascade, compare sampler
uniform highp sampler2DShadow uMap1;     // unit 2: far cascade
uniform mat4 uIVP;                       // ndc -> world - camera
uniform mat4 uL;                         // (world - camera) -> near light clip
uniform mat4 uL1;                        // (world - camera) -> far light clip
uniform vec4 uP;                         // 1/w, 1/h (full res), 1/map size, camera height above sea level (world z)
uniform vec4 uSun;                       // direction to the sun, light depth units per metre
uniform vec4 uOff;                       // normal offset near, far (m), texel near, far (m)
uniform vec2 uFog;                       // 1.7.4: the game's distance fog - start (m), 1 / (end - start); 0,0 = unknown
uniform mat4 uVP;                        // 1.9.1: (world - camera) -> this frame's clip (contact shadows)
uniform vec4 uCt;                        // 1.9.1: x contact-shadow strength (0 = off), y ray length (m); 1.9.3: zw = P[10], P[14]
out vec4 o;
const vec2 K[8] = vec2[8](vec2(-0.613, 0.617), vec2(0.170, -0.040), vec2(-0.299, 0.791), vec2(0.645, 0.493),
                          vec2(-0.651, -0.717), vec2(0.421, 0.027), vec2(-0.817, -0.271), vec2(0.977, -0.108));
// exact full-res texel: position rebuilt at THAT texel's centre (0.22-0.23.1 sampled at a half-res
// uv = on the border between two depth texels -> row-by-row mismatch -> horizontal stripes)
ivec2 g_Hi;
vec3 WPi(ivec2 q){ q = clamp(q, ivec2(0), g_Hi); float d = texelFetch(uDepth, q, 0).r;
  vec4 p = uIVP * vec4((vec2(q) + 0.5) * uP.xy * 2.0 - 1.0, d * 2.0 - 1.0, 1.0); return p.xyz / p.w; }
float Cascade(highp sampler2DShadow m, mat4 Lm, vec3 C, vec3 N, float off, float texel, float ndl, float inv, float dist, out float edge){
  vec3 P = C + N * off + uSun.xyz * 0.02;                                // normal + light offset (camera-independent)
  float tanA = sqrt(max(1.0 - ndl * ndl, 0.0)) / max(ndl, 0.1);        // slope-scaled bias: low sun = big (0.23.0 acne stripes)
  float bias = (0.03 + texel * 1.5 * min(tanA, 10.0)) * uSun.w;         // metres -> light depth units
  vec4 lp = Lm * vec4(P, 1.0);
  vec3 sc = lp.xyz / lp.w * 0.5 + 0.5;
  edge = max(abs(sc.x - 0.5), abs(sc.y - 0.5)) * 2.0;
  if (edge >= 1.0 || sc.z >= 1.0) { edge = 2.0; return 1.0; }
  // 3x3 grid of hardware 2x2 PCF taps, 1.25 texels apart = smooth ~4-texel filter, identical every
  // frame (0.22-0.23.2 rotated random taps per frame and relied on TAA: noise + shimmer)
  float r = 1.75 * inv, v = 0.0;                                       // ~5-texel soft edge
  for (int y = -1; y <= 1; ++y) for (int x = -1; x <= 1; ++x)
    v += texture(m, vec3(sc.xy + vec2(float(x), float(y)) * r, sc.z - bias)) * ((x == 0 ? 2.0 : 1.0) * (y == 0 ? 2.0 : 1.0));
  return v * (1.0 / 16.0);
}
// 1.9.1 (Roadmap 5 phase 2.3) contact shadows: 8 steps from the surface towards the sun through the depth buffer. A
// step behind something that sits 4 cm .. ~0.5 m in front of it = in shadow - the small shadows the 2048^2 map (2 cm
// texels at best, blurred by PCF) loses: feet, wheels, kerbs, window frames, props on the ground. Within 40 m.
// 1.9.3: cheaper march - the ray is a straight line in clip space too (c = c0 + cs t: two matrix products up front, none
// per step), the surface it passes is compared by VIEW depth (w = P14 / (ndc z + P10) from the depth texel - no
// inverse-matrix rebuild per step), 5 steps past 12 m, and no march at all when the whole ray covers < 1.5 px.
float Contact(vec3 C, vec3 N, float dist){
  vec3 P = C + N * (0.03 + dist * 0.003);
  float len = uCt.y * (1.0 + dist * 0.03);
  vec4 c0 = uVP * vec4(P, 1.0), cs = uVP * vec4(uSun.xyz, 0.0);
  vec4 c1 = c0 + cs * len;
  if (c0.w < 0.1 || c1.w < 0.1) return 1.0;
  vec2 sz = vec2(g_Hi + 1);
  vec2 u0 = c0.xy / c0.w, u1 = c1.xy / c1.w;
  if (dot((u1 - u0) * sz, (u1 - u0) * sz) < 9.0) return 1.0;           // 1.5 px in ndc (x2) units: nothing to find
  float j = fract(52.9829189 * fract(dot(gl_FragCoord.xy, vec2(0.06711056, 0.00583715))));
  int n = dist < 12.0 ? 8 : 5;
  float dt = len / float(n);
  for (int i = 0; i < 8; ++i) {
    if (i >= n) break;
    float t = (float(i) + 0.5 + 0.5 * j) * dt;
    vec4 c = c0 + cs * t;
    vec2 uv = c.xy / c.w * 0.5 + 0.5;
    if (uv.x < 0.0 || uv.y < 0.0 || uv.x > 1.0 || uv.y > 1.0) return 1.0;
    float d = texelFetch(uDepth, ivec2(uv * sz), 0).r;
    float gap = c.w - uCt.w / (d * 2.0 - 1.0 + uCt.z);                  // > 0: the surface seen there is in front of the step
    // 1.9.2: fades along the ray (hit at the start = dark, at the end = none) + thin occluders only (1.9.1: a hard
    // dark stub ~1 m long beside CJ, whose own shadow - skinned, not in our map - is the game's faint one)
    if (gap > 0.03 + 0.03 * t && gap < 0.25 + 0.5 * t) { float r = t / len; return r * r; }
  }
  return 1.0;
}
void main(){
  ivec2 ip = ivec2(gl_FragCoord.xy) * 2;                                // the exact full-res texel this half-res pixel stands for
  g_Hi = textureSize(uDepth, 0) - 1;
  float d = texelFetch(uDepth, ip, 0).r;
  vec3 C = WPi(ip);
  float key = 1.0 / max(1.0 - d, 1.0e-5);                              // monotonic in distance, fits fp16
  o = vec4(1.0, min(key, 60000.0), 1.0, 1.0);                          // b: 1.9.0 world normal z (sky / degenerate: up)
  if (d >= 0.99999) return;                                            // sky
  // normal: 2-px baseline, per axis the side with the smaller depth step (0.23.3 used 1-px derivatives:
  // on grazing ground two rows often share one 24-bit depth value -> the normal flipped on those rows
  // -> 'back face' -> lit = the thin bright lines; at silhouettes the rim on CJ)
  // 0.28.0: water writes no depth - under the sea the depth is the SEA FLOOR, so palms / the pier cast
  // their shadows on the floor and they showed through the water, shifted and cut at the floor mesh
  // (Mali screenshot). Camera above the sea: the point moves up the view ray to the surface (z 0),
  // normal up, and the shadow on the water is half strength (it only darkens the diffuse part).
  bool water = uP.w > 0.0 && C.z < -uP.w;
  vec3 N = vec3(0.0, 0.0, 1.0);
  if (water) C *= uP.w / -C.z;
  else {
  vec3 Rr = WPi(ip + ivec2(2, 0)), Ll = WPi(ip - ivec2(2, 0)), Uu = WPi(ip + ivec2(0, 2)), Dd = WPi(ip - ivec2(0, 2));
  float cl = length(C);
  vec3 ex = abs(length(Rr) - cl) < abs(cl - length(Ll)) ? Rr - C : C - Ll;
  vec3 ey = abs(length(Uu) - cl) < abs(cl - length(Dd)) ? Uu - C : C - Dd;
  N = normalize(cross(ex, ey));
  if (!(dot(N, N) > 0.5)) return;                                      // degenerate
  if (dot(N, -C) < 0.0) N = -N;
  }
  float ndl = dot(N, uSun.xyz);
  // (0.23.4 skipped back faces: inside a building's shadow CJ's back stayed lit while his front went
  //  dark = harsh, inverted patches. Now every face takes the map; back faces at half strength,
  //  since the game's lighting already darkened them - a smooth ramp, no switch)
  float dist = length(C);
  float e0 = 0.0, e1 = 0.0;
  float v = Cascade(uMap, uL, C, N, uOff.x, uOff.z, ndl, uP.z, dist, e0);
  if (e0 > 0.8) {                                                      // near border: blend into the far cascade
    float v1 = Cascade(uMap1, uL1, C, N, uOff.y, uOff.w, ndl, uP.z, dist, e1);
    v1 = mix(v1, 1.0, smoothstep(0.6, 1.0, e1));                      // far border: fade out slowly
    v = e0 >= 1.0 ? v1 : mix(v, v1, smoothstep(0.8, 1.0, e0));
  }
  if (uCt.x > 0.0 && !water && ndl > 0.05 && v > 0.02 && dist < 40.0)
    v *= 1.0 - uCt.x * (1.0 - smoothstep(25.0, 40.0, dist)) * (1.0 - Contact(C, N, dist));
  // 1.5.7: a surface facing away from the sun IS in shadow: uniformly, not with the map's caster pattern. SA facades
  // are often single planes (no back side in the map), so a palm behind the wall showed its trunk as a stripe on
  // the camera-facing wall with the sun in front (owner's screenshot). Closed buildings already got this uniform
  // shadow from their own back side.
  // 1.7.4: only where the cascades reach (fades out with the far one). 1.5.7-1.7.3 did it at ANY distance: LOD hills
  // and trees 400-800 m out, already flat fog colour from the game, came out as white / grey facets.
  float cov = e0 < 1.0 ? 1.0 : (e1 >= 1.0 ? 0.0 : 1.0 - smoothstep(0.6, 1.0, e1));
  v = mix(v, 0.0, (1.0 - smoothstep(-0.25, 0.05, ndl)) * cov);
  v = mix(1.0, v, mix(0.5, 1.0, smoothstep(-0.25, 0.25, ndl)));        // back faces: half strength, smooth ramp
  if (water) v = mix(1.0, v, 0.5);
  // 1.7.4: the game already blended this pixel towards its fog colour - a shadow only darkens the surface part
  if (uFog.y > 0.0) v = mix(v, 1.0, clamp((dist - uFog.x) * uFog.y, 0.0, 1.0));
  o = vec4(v, min(key, 60000.0), N.z, 1.0);                            // 1.9.0: b = N.z for the composite's sky / ground light
}

