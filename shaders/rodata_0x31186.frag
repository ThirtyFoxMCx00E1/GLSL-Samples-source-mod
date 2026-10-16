#version 300 es
precision highp float;
precision highp int;
uniform highp sampler2D uDepth; uniform mat4 uInvVP; uniform mat4 uVP; uniform vec3 uCam;
uniform vec4 uSize;   // xy 1/light-buffer size, zw 1/depth size
uniform vec4 uL0;     // lamp 1 pos, radius
uniform vec4 uL4;     // lamp 2 pos (headlight pair, same draw), w = 1 if present
uniform vec4 uL1;     // colour * intensity, type (1 = headlight)
uniform vec4 uL2;     // spot dir, tan(horizontal half angle)
uniform vec4 uL3;     // x tan(vertical half angle), w shadows (0/1)
uniform vec3 uLR; uniform vec3 uLU;   // spot basis: right, up
uniform vec4 uOcc;    // x shadow strength, y range (m)
out vec4 oColor;   // light on surfaces (x albedo in the composite)
vec3 Pos(vec2 uv, float d){ vec4 p = uInvVP * vec4(uv * 2.0 - 1.0, d * 2.0 - 1.0, 1.0); return p.xyz / p.w; }
float Cone(vec3 v, float e0, float sc){  // v = lamp -> point (normalised); 1 inside the headlight ellipse (x sc)
  if (uL1.w < 0.5) return 1.0;
  float z = dot(v, uL2.xyz); if (z <= 0.0) return 0.0;
  vec2 e = vec2(dot(v, uLR) / (z * uL2.w * sc), dot(v, uLU) / (z * uL3.x * sc));
  return 1.0 - smoothstep(e0, 1.0, length(e));
}
float Att(float dist){ float q = dist / uL0.w; float a = clamp(1.0 - q * q, 0.0, 1.0); return a * a; }
float SurfAtt(vec3 Lp, vec3 P, out vec3 Ld){
  vec3 Lv = Lp - P; float dist = length(Lv);
  Ld = Lv / max(dist, 1e-3);
  if (dist >= uL0.w) return 0.0;
  return Att(dist) * Cone(-Ld, 0.6, 1.0);
}
float NL(vec3 N, vec3 Ld){ float ndl = max(dot(N, Ld), 0.0); return uL1.w > 0.5 ? mix(1.0, ndl, 0.35) : ndl * 0.9 + 0.1; }
void main(){
  oColor = vec4(0.0, 0.0, 0.0, 1.0);
  vec2 uv = gl_FragCoord.xy * uSize.xy;
  float d = texture(uDepth, uv).r;
  if (d >= 0.99999) return;                                             // sky
  vec3 P = Pos(uv, d);
  bool two = uL4.w > 0.5;
  // ---- surface (both lamps share the depth + normal work)
  vec3 Ld1, Ld2 = vec3(0.0);
  float a1 = SurfAtt(uL0.xyz, P, Ld1), a2 = two ? SurfAtt(uL4.xyz, P, Ld2) : 0.0;
  if (a1 + a2 < 0.002) return;                                           // before the normal taps
  vec2 ox = vec2(uSize.z * 2.0, 0.0), oy = vec2(0.0, uSize.w * 2.0);   // normal from 3 full-res depth taps
  vec3 Px = Pos(uv + ox, texture(uDepth, uv + ox).r), Py = Pos(uv + oy, texture(uDepth, uv + oy).r);
  vec3 N = normalize(cross(Px - P, Py - P));
  if (dot(N, uCam - P) < 0.0) N = -N;
  float att = a1 * NL(N, Ld1) + (two ? a2 * NL(N, Ld2) : 0.0);
  if (att < 0.002) return;
  // ---- soft screen-space shadow (point lights only): occluders within uOcc.y metres of the surface
  if (uOcc.x * uL3.w > 0.0) {
    float dist = length(uL0.xyz - P);
    float jit = fract(52.9829189 * fract(dot(gl_FragCoord.xy, vec2(0.06711056, 0.00583715))));
    float t0 = clamp(0.3 / max(dist, 0.3), 0.0, 1.0), t1 = clamp(1.0 - 1.5 / max(dist, 1.5), 0.0, 1.0);
    t1 = min(t1, uOcc.y / max(dist, 0.1));
    float hits = 0.0;
    for (int i = 0; i < 6 && t1 > t0; ++i) {
      vec3 Q = mix(P, uL0.xyz, mix(t0, t1, (float(i) + jit) / 6.0));
      vec4 c = uVP * vec4(Q, 1.0);
      if (c.w <= 0.01) break;
      vec3 n = c.xyz / c.w; vec2 suv = n.xy * 0.5 + 0.5;
      if (suv.x < 0.0 || suv.x > 1.0 || suv.y < 0.0 || suv.y > 1.0) break;
      float sd = texture(uDepth, suv).r, qd = n.z * 0.5 + 0.5;
      if (sd < qd - 0.00005 && sd < 0.99999) {
        vec3 S = Pos(suv, sd); float g = distance(S, Q);
        if (g > 0.3 && g < 4.0) hits += 1.0;
      }
    }
    att *= 1.0 - uOcc.x * min(hits * 0.5, 1.0);                     // soft: 2 hits = full strength
  }
  oColor = vec4(uL1.rgb * att, 1.0);
}

