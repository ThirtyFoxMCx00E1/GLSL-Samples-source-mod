#version 300 es
precision mediump float;
precision highp int;
uniform mediump sampler2D uTex;   // the scene (render size)
uniform highp vec4 uCon;          // xy = scene size / screen size, z = dither (EASU is the last pass when RCAS is off)
uniform ivec2 uMax;               // scene size - 1
out vec4 oColor;
vec3 T(ivec2 p){ return texelFetch(uTex, clamp(p, ivec2(0), uMax), 0).rgb; }
float Lu(vec3 c){ return c.b * 0.5 + (c.r * 0.5 + c.g); }
void Set(inout vec2 dir, inout float len, float w, float lA, float lB, float lC, float lD, float lE){
  float dc = lD - lC, cb = lC - lB;
  float lenX = 1.0 / max(max(abs(dc), abs(cb)), 1.0 / 1024.0);
  float dirX = lD - lB;
  dir.x += dirX * w;
  lenX = clamp(abs(dirX) * lenX, 0.0, 1.0); lenX *= lenX;
  len += lenX * w;
  float ec = lE - lC, ca = lC - lA;
  float lenY = 1.0 / max(max(abs(ec), abs(ca)), 1.0 / 1024.0);
  float dirY = lE - lA;
  dir.y += dirY * w;
  lenY = clamp(abs(dirY) * lenY, 0.0, 1.0); lenY *= lenY;
  len += lenY * w;
}
void Tap(inout vec3 aC, inout float aW, vec2 off, vec2 dir, vec2 len, float lob, float clp, vec3 c){
  vec2 v = vec2(dot(off, dir), dot(off, vec2(-dir.y, dir.x))) * len;
  float d2 = min(dot(v, v), clp);
  float wB = 0.4 * d2 - 1.0, wA = lob * d2 - 1.0;
  wB *= wB; wA *= wA;
  wB = 1.5625 * wB - 0.5625;
  float w = wB * wA;
  aC += c * w; aW += w;
}
highp float IGN(highp vec2 p){ return fract(52.9829189 * fract(dot(p, vec2(0.06711056, 0.00583715)))); }
void main(){
  highp vec2 hp = gl_FragCoord.xy * uCon.xy - 0.5;
  highp vec2 fp = floor(hp);
  vec2 pp = vec2(hp - fp);
  ivec2 q = ivec2(fp);
  vec3 f = T(q), g = T(q + ivec2(1, 0)), j = T(q + ivec2(0, 1)), k = T(q + ivec2(1, 1));
  vec3 mn = min(min(f, g), min(j, k)), mx = max(max(f, g), max(j, k));
  // 1.5.4 flat fast path: EASU's result is clamped to the 2x2 range [mn, mx] anyway, so where that range is
  // under 3/255 plain bilinear differs from it by less than that - skip the other 8 taps (sky, flat walls, shade)
  vec3 rg = mx - mn;
  if (max(max(rg.r, rg.g), rg.b) < 3.0 / 255.0) {
    vec3 r = mix(mix(f, g, pp.x), mix(j, k, pp.x), pp.y);
    if (uCon.z > 0.0) { float d = float(IGN(gl_FragCoord.xy)) - 0.5; r += vec3(d / 31.0, d / 63.0, d / 31.0); }
    oColor = vec4(r, 1.0); return; }
  vec3 b = T(q + ivec2(0, -1)), c = T(q + ivec2(1, -1));
  vec3 e = T(q + ivec2(-1, 0)), h = T(q + ivec2(2, 0));
  vec3 i = T(q + ivec2(-1, 1)), l = T(q + ivec2(2, 1));
  vec3 n = T(q + ivec2(0, 2)), o = T(q + ivec2(1, 2));
  float bL = Lu(b), cL = Lu(c), eL = Lu(e), fL = Lu(f), gL = Lu(g), hL = Lu(h);
  float iL = Lu(i), jL = Lu(j), kL = Lu(k), lL = Lu(l), nL = Lu(n), oL = Lu(o);
  vec2 dir = vec2(0.0); float len = 0.0;
  Set(dir, len, (1.0 - pp.x) * (1.0 - pp.y), bL, eL, fL, gL, jL);
  Set(dir, len, pp.x * (1.0 - pp.y),         cL, fL, gL, hL, kL);
  Set(dir, len, (1.0 - pp.x) * pp.y,         fL, iL, jL, kL, nL);
  Set(dir, len, pp.x * pp.y,                 gL, jL, kL, lL, oL);
  float dirR = dot(dir, dir);
  bool zro = dirR < 1.0 / 8192.0;                                     // fp16: 1/32768 is below the smallest normal
  dirR = zro ? 1.0 : inversesqrt(dirR);
  dir.x = zro ? 1.0 : dir.x;
  dir *= dirR;
  len = len * 0.5; len *= len;
  float stretch = dot(dir, dir) / max(abs(dir.x), abs(dir.y));
  vec2 len2 = vec2(1.0 + (stretch - 1.0) * len, 1.0 - 0.5 * len);
  float lob = 0.5 + (0.25 - 0.04 - 0.5) * len;
  float clp = 1.0 / lob;
  vec3 aC = vec3(0.0); float aW = 0.0;
  Tap(aC, aW, vec2( 0.0, -1.0) - pp, dir, len2, lob, clp, b);
  Tap(aC, aW, vec2( 1.0, -1.0) - pp, dir, len2, lob, clp, c);
  Tap(aC, aW, vec2(-1.0,  1.0) - pp, dir, len2, lob, clp, i);
  Tap(aC, aW, vec2( 0.0,  1.0) - pp, dir, len2, lob, clp, j);
  Tap(aC, aW, vec2( 0.0,  0.0) - pp, dir, len2, lob, clp, f);
  Tap(aC, aW, vec2(-1.0,  0.0) - pp, dir, len2, lob, clp, e);
  Tap(aC, aW, vec2( 1.0,  1.0) - pp, dir, len2, lob, clp, k);
  Tap(aC, aW, vec2( 2.0,  1.0) - pp, dir, len2, lob, clp, l);
  Tap(aC, aW, vec2( 2.0,  0.0) - pp, dir, len2, lob, clp, h);
  Tap(aC, aW, vec2( 1.0,  0.0) - pp, dir, len2, lob, clp, g);
  Tap(aC, aW, vec2( 1.0,  2.0) - pp, dir, len2, lob, clp, o);
  Tap(aC, aW, vec2( 0.0,  2.0) - pp, dir, len2, lob, clp, n);
  vec3 r = aW > 1.0 / 1024.0 ? aC / aW : f;
  r = min(mx, max(mn, r));
  if (uCon.z > 0.0) { float d = float(IGN(gl_FragCoord.xy)) - 0.5; r += vec3(d / 31.0, d / 63.0, d / 31.0); }
  oColor = vec4(r, 1.0);
}

