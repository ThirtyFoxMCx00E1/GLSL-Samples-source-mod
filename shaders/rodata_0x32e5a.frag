#version 300 es
precision highp float;
precision highp int;
uniform highp sampler2D uZ;
uniform mat4 uIVP;   // inverse(P x V), then minus the camera position: output = world - camera
uniform vec4 uS;     // AO width, height, pixels per metre at 1 m (measured from P x V), per-frame angle
uniform vec4 uP;     // radius (m), power, -, max distance (m)
out vec4 oAO;
const float PI = 3.14159265, HPI = 1.57079633;
vec3 WP(vec2 px, float d){ vec4 p = uIVP * vec4(px / uS.xy * 2.0 - 1.0, d * 2.0 - 1.0, 1.0); return p.xyz / p.w; }
vec3 At(ivec2 q){ return WP(vec2(q) + 0.5, texelFetch(uZ, q, 0).r); }
float FAcos(float x){ float r = -0.156583 * abs(x) + HPI; r *= sqrt(max(1.0 - abs(x), 0.0)); return x >= 0.0 ? r : PI - r; }
// a position rr AO pixels away: coarser pyramid levels further out, rebuilt at the level-0 texel it came from
vec3 Tap(vec2 sp, float rr, ivec2 mx){
  int lod = clamp(int(log2(max(rr, 1.0)) - 3.0), 0, 3);
  ivec2 q = min(ivec2(sp) >> lod, ((mx + 1) >> lod) - 1);
  ivec2 src = q;
  for (int k = 3; k >= 1; --k) if (k <= lod) src = min(src * 2 + ivec2(src.y & 1, src.x & 1), ((mx + 1) >> (k - 1)) - 1);
  return WP(vec2(src) + 0.5, texelFetch(uZ, q, lod).r);
}
void main(){
  ivec2 ip = ivec2(gl_FragCoord.xy);
  ivec2 mx = ivec2(uS.xy) - 1;
  float d0 = texelFetch(uZ, ip, 0).r;
  float key = min(1.0 / max(1.0 - d0, 1.0e-5), 60000.0);
  if (d0 >= 0.99999) { oAO = vec4(1.0, 60000.0, key, 1.0); return; }  // sky / cleared depth
  vec3 C = At(ip);
  float dist = length(C);
  if (dist > uP.w) { oAO = vec4(1.0, min(dist, 50000.0), key, 1.0); return; }
  // normal: per axis the neighbour with the smaller distance step; at the screen edge the inner one
  vec3 Rr = At(min(ip + ivec2(1, 0), mx)), Ll = At(max(ip - ivec2(1, 0), ivec2(0)));
  vec3 Uu = At(min(ip + ivec2(0, 1), mx)), Dd = At(max(ip - ivec2(0, 1), ivec2(0)));
  bool useR = ip.x < mx.x && (ip.x == 0 || abs(length(Rr) - dist) < abs(dist - length(Ll)));
  bool useU = ip.y < mx.y && (ip.y == 0 || abs(length(Uu) - dist) < abs(dist - length(Dd)));
  vec3 Nn = normalize(cross(useR ? Rr - C : C - Ll, useU ? Uu - C : C - Dd));
  if (!(dot(Nn, Nn) > 0.5)) { oAO = vec4(1.0, dist, key, 1.0); return; } // degenerate normal
  if (dot(Nn, -C) < 0.0) Nn = -Nn;                                        // face the camera (at the origin)
  vec3 V = -C / dist;
  float ssR = min(uP.x * uS.z / dist, 96.0);                              // radius in AO pixels
  if (ssR < 1.0) { oAO = vec4(1.0, dist, key, 1.0); return; }
  float noise = fract(52.9829189 * fract(dot(gl_FragCoord.xy, vec2(0.06711056, 0.00583715))));
  float fr = 0.615 * uP.x, fMul = -1.0 / fr, fAdd = uP.x * (1.0 - 0.615) / fr + 1.0;   // falloff over the outer 61.5 %
  vec2 px = vec2(ip) + 0.5;
  float vis = 0.0;
  for (int s = 0; s < 2; ++s) {
    float phi = (float(s) + noise) * (PI * 0.5) + uS.w;
    vec2 om = vec2(cos(phi), sin(phi));
    vec3 dirW = WP(px + om, d0) - C;                                        // the slice direction in 3D at this point
    vec3 ortho = dirW - dot(dirW, V) * V;
    vec3 axis = cross(ortho, V);
    float al = length(axis);
    if (al < 1.0e-6) { vis += 1.0; continue; }
    axis /= al;
    vec3 pn = Nn - axis * dot(Nn, axis);                                    // the normal projected into the slice
    float pnl = length(pn);
    float cosN = clamp(dot(pn, V) / max(pnl, 1.0e-4), 0.0, 1.0);
    float n = (dot(ortho, pn) >= 0.0 ? 1.0 : -1.0) * FAcos(cosN);
    float lo0 = cos(n + HPI), lo1 = cos(n - HPI);                           // the tangent plane: no occlusion
    float hc0 = lo0, hc1 = lo1;
    for (int j = 0; j < 4; ++j) {
      float sj = (float(j) + fract(noise * 1.618034 + float(s) * 0.5 + uS.w * 0.159)) * 0.25;
      float rr = sj * sj * ssR + 1.3;                                      // denser near the pixel, >= 1.3 px out
      vec2 sp0 = px + om * rr, sp1 = px - om * rr;
      if (sp0.x >= 0.0 && sp0.y >= 0.0 && sp0.x < uS.x && sp0.y < uS.y) {  // off screen: no data, no occlusion
        vec3 v = Tap(sp0, rr, mx) - C; float l = length(v);
        float c = mix(lo0, dot(v, V) / max(l, 1.0e-4), clamp(l * fMul + fAdd, 0.0, 1.0));
        hc0 = max(hc0, c); }
      if (sp1.x >= 0.0 && sp1.y >= 0.0 && sp1.x < uS.x && sp1.y < uS.y) {
        vec3 v = Tap(sp1, rr, mx) - C; float l = length(v);
        float c = mix(lo1, dot(v, V) / max(l, 1.0e-4), clamp(l * fMul + fAdd, 0.0, 1.0));
        hc1 = max(hc1, c); }
    }
    float h0 = -FAcos(hc1), h1 = FAcos(hc0);
    h0 = n + clamp(h0 - n, -HPI, HPI); h1 = n + clamp(h1 - n, -HPI, HPI);
    float sn = sin(n);
    vis += pnl * ((cosN + 2.0 * h0 * sn - cos(2.0 * h0 - n)) + (cosN + 2.0 * h1 * sn - cos(2.0 * h1 - n))) * 0.25;
  }
  vis = clamp(vis * 0.5, 0.0, 1.0);
  float ao = pow(max(vis, 0.03), uP.y);
  if (!(ao >= 0.0 && ao <= 1.0)) ao = 1.0;                                 // NaN guard
  ao = mix(ao, 1.0, smoothstep(uP.w * 0.6, uP.w, dist));                 // fade out with distance
  oAO = vec4(ao, dist, key, 1.0);
}

