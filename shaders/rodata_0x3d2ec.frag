uniform sampler2D uTex2;   // bloom (half res)
uniform sampler2D uTex3;   // adapted luminance 1x1
vec3 Tent(sampler2D t, vec2 uv){
  vec2 o = 0.5 / vec2(textureSize(t, 0));
  return 0.25 * (texture(t, uv + vec2(-o.x, -o.y)).rgb + texture(t, uv + vec2(o.x, -o.y)).rgb
              + texture(t, uv + vec2(-o.x, o.y)).rgb + texture(t, uv + o).rgb);
}
uniform sampler2D uTex5;   // dynamic lights on surfaces (1/2 res)
uniform sampler2D uTex6;   // ambient occlusion (1/2 res, r = visibility)
uniform highp sampler2D uTex4;   // sun shadow mask (1/2 res: r = sun visibility, g = depth key)
uniform highp sampler2D uTex7;   // scene depth (full res) for the depth-aware upsample
// depth-aware 2x upsample of the half-res shadow mask: of the 4 half-res texels around this pixel,
// weight by bilinear position x depth similarity (key = 1/(1-d) ~ distance) - no bleed across CJ / cars
highp float g_D;                 // 0.27.2: this pixel's scene depth, fetched once (shadow upsample + fog)
// 1.9.0: x = sun visibility, y = the surface normal's z (up = 1, down = -1), both from the same 4 taps
highp vec2 ShadowVis(){
  ivec2 p = ivec2(gl_FragCoord.xy);
  highp float kc = 1.0 / max(1.0 - g_D, 1.0e-5);
  ivec2 hi = textureSize(uTex4, 0) - 1;
  ivec2 h0 = p >> 1; ivec2 o = (p & 1) * 2 - 1;                          // the neighbour side for this sub-pixel
  highp float ws = 0.0, best = 1.0e9; highp vec2 vs = vec2(0.0), bestV = vec2(1.0);
  for (int j = 0; j < 4; ++j) {
    ivec2 q = clamp(h0 + ivec2(j & 1, j >> 1) * o, ivec2(0), hi);
    highp vec3 t = texelFetch(uTex4, q, 0).rgb;
    highp float rel = abs(t.g - kc) / max(kc, 1.0);
    highp float w = ((j & 1) == 1 ? 0.25 : 0.75) * ((j >> 1) == 1 ? 0.25 : 0.75) / (0.002 + rel);
    ws += w; vs += w * t.rb;
    if (rel < best) { best = rel; bestV = t.rb; }
  }
  return best > 0.1 ? bestV : vs / ws;                                   // nothing similar: nearest in depth
}
// 1.9.0 (Roadmap 5 phase 2.1) sky / ground light in the shade: the shade tint depends on where the surface faces -
// up: the sky's colour (uAmb.rgb, the game's sky colour normalised) and a little lighter; down: warmer and darker
// (light bounced off the ground); walls in between. uAmb.w = [Lighting] Ambient (0 = the 1.8 tint everywhere).
uniform vec4 uAmb;
// 1.5.2: depth-aware upsample of the 1/4-res GTAO (b = its depth key): bilinear weights x depth similarity -
// 1.5.1 read it bilinear = dark bands with bright seams at wall bases
float AOVis(vec2 uv){
  if (!kDepth) return texture(uTex6, uv).r;
  highp float kc = 1.0 / max(1.0 - g_D, 1.0e-5);
  highp vec2 asz = vec2(textureSize(uTex6, 0));
  highp vec2 u = gl_FragCoord.xy * (asz / vec2(textureSize(uTex7, 0))) - 0.5;
  highp vec2 f0 = floor(u), fr = u - f0;
  ivec2 b = ivec2(f0), hi = ivec2(asz) - 1;
  highp float ws = 0.0, vs = 0.0, best = 1.0e9, bestV = 1.0;
  for (int j = 0; j < 4; ++j) {
    ivec2 o = ivec2(j & 1, j >> 1);
    highp vec2 t = texelFetch(uTex6, clamp(b + o, ivec2(0), hi), 0).rb;
    highp float rel = abs(t.y - kc) / max(kc, 1.0);
    highp float bw = (o.x == 1 ? fr.x : 1.0 - fr.x) * (o.y == 1 ? fr.y : 1.0 - fr.y) + 0.001;
    highp float w = bw / (0.002 + rel);
    ws += w; vs += w * t.x;
    if (rel < best) { best = rel; bestV = t.x; }
  }
  return best > 0.1 ? bestV : vs / ws;                                   // nothing similar: nearest in depth
}
uniform float uShadowK;
uniform float uLightK; uniform float uAOK; uniform float uAODbg;
uniform highp mat4 uFogIVP;   // ndc -> world - camera (fog)
// 0.27.0 fog: height fog (optical depth integrated along the view ray through an exponential height
// profile) + distance haze, towards the game's fog colour. Sky pixels are left to the game.
uniform highp vec4 uFogA;     // x height-fog density at the base, y falloff (1/m), z camera height above the base (m), w haze density
uniform highp vec4 uFogB;     // x haze start (m), y max opacity, z on, w camera height above sea level (world z 0)
uniform vec3 uFogCol;         // fog colour, linear
float FogAmount(){
  ivec2 p = ivec2(gl_FragCoord.xy);
  highp float d = g_D;
  if (d >= 0.99999) return 0.0;
  highp vec4 w = uFogIVP * vec4((vec2(p) + 0.5) / vec2(textureSize(uTex7, 0)) * 2.0 - 1.0, d * 2.0 - 1.0, 1.0);
  highp vec3 D = w.xyz / w.w;
  // 0.27.6: water writes no depth - under it the depth is the sea floor (30-100 m down), where the
  // height fog is exponentially thick: the sea turned into a flat fog-coloured sheet up to the edge
  // of the sea-floor mesh. Camera above the sea: the ray ends at the surface (z 0).
  if (uFogB.w > 0.0 && D.z < -uFogB.w) D *= uFogB.w / -D.z;
  highp float t = length(D), k = uFogA.y, kd = k * D.z;
  highp float e0 = exp(-k * uFogA.z);
  highp float hf = abs(kd) > 1.0e-3 ? e0 * (1.0 - exp(-kd)) / kd : e0;
  highp float od = uFogA.x * hf * t + uFogA.w * max(t - uFogB.x, 0.0);
  return min(1.0 - exp(-od), uFogB.y);
}
// [Debug] AOView, raw (no grading / exposure): 1 = AO (white open, black occluded),
// 2 = distance the AO pass reconstructs (black 0 m .. white 50 m, red = sky / depth 1.0)
vec3 AODebug(vec2 uv){ vec2 t = texture(uTex6, uv).rg;
  if (uAODbg < 1.5) return vec3(t.r);
  return t.g > 59000.0 ? vec3(1.0, 0.0, 0.0) : vec3(clamp(t.g / 50.0, 0.0, 1.0)); }
uniform float uHdrS;       // 1.6.0: HDR shoulder start (linear); 0 = LDR scene, no shoulder
// 1.6.0 HDR tonemap shoulder: identity below uHdrS (the game's look untouched), then a C1 rational roll-off towards
// 1.0, so white sits a little below the top and real highlights (sun, glints, clearcoat, stacked coronas) fill the
// rest instead of clipping. Grade's filmic curve runs after it, on a display value that never exceeds 1.
vec3 Shoulder(vec3 x){
  if (uHdrS <= 0.0) return x;
  vec3 y = max(x - uHdrS, vec3(0.0)) / (1.0 - uHdrS);
  return min(x, vec3(uHdrS)) + (1.0 - uHdrS) * y / (y + 1.0);
}
vec3 Scene(vec3 c, vec2 uv){
  g_D = kDepth ? texelFetch(uTex7, ivec2(gl_FragCoord.xy), 0).r : 1.0;
  c = (any(isnan(c)) || any(isinf(c))) ? vec3(0.0) : clamp(c, 0.0, 64.0);   // float scene: a NaN / negative the 8-bit target used to swallow
  vec3 lin = c * c;
  bool gnd = !kDepth || g_D < 0.99999;                                    // 1.2.6: sky pixels skip the shadow (4 reads) + AO (1 read); no depth in this variant = no test
  if (uShadowK > 0.0 && gnd) {                                            // sun shadows: display space, sky-tinted
    highp vec2 sv = ShadowVis();
    float sh = (1.0 - float(sv.x)) * uShadowK;
    float up = clamp(float(sv.y) * 0.5 + 0.5, 0.0, 1.0);
    // 1.9.2: the sky light = the game's sky TOP colour (uAmb.rgb, normalised) - blue shade under a blue sky, also at
    // sunrise / sunset against the orange sun (1.9.0 / 1.9.1 took the horizon fog colour: orange shade = no visible change)
    vec3 tSky = vec3(1.0, 0.95, 0.82) - uAmb.w * (0.35 * (uAmb.rgb - 1.0) + 0.2);  // lighter, sky-coloured
    vec3 tGnd = vec3(1.0, 0.95, 0.82) + uAmb.w * vec3(0.12, 0.2, 0.3);              // darker, warmer
    vec3 f = vec3(1.0) - sh * clamp(mix(tGnd, tSky, up), 0.3, 1.4); lin *= f * f;
    // sky / ground fill on the lit part too: up-facing a little brighter, down-facing darker (brightness only - the sun
    // colours the lit part; 1.9.1 tinted it with the sky colour too)
    float lit = 1.0 - sh / max(uShadowK, 0.01);
    vec3 hemi = mix(vec3(0.85, 0.83, 0.80), mix(vec3(1.0), uAmb.rgb, 0.08) * 1.06, up);
    lin *= mix(vec3(1.0), hemi, 0.6 * uAmb.w * lit); }
  if (uAOK > 0.0 && gnd) { float t = AOVis(uv); if (!(t >= 0.0 && t <= 1.0)) t = 1.0;   // NaN guard
    float a = mix(1.0, t, uAOK); lin *= a * a; }                        // AO in display space (c * ao), before the lights
  if (uLightK > 0.0) {                     // 0.15.0: ~linear albedo + soft cap (0.14 used c: dark roads blew out white)
    vec3 li = texture(uTex5, uv).rgb * uLightK; li = max(li, vec3(0.0)); li = li / (1.0 + 0.2 * li);
    lin += c * (c * 0.7 + 0.15) * li;
  }
  if (uFogB.z > 0.0) lin = mix(lin, uFogCol, FogAmount());           // fog over the lit scene, before bloom / exposure
  if (kGlow && uP1.y > 0.0) lin += Tent(uTex2, uv) * uP1.y;          // bloom + sun rays: 1.7.2 bloom level 0 (1/4 res) through a
                                                                     // 4-tap tent here (was a separate 1/2-res upsample pass)
  if (kAE && uP1.z > 0.0) {
    float avg = texture(uTex3, vec2(0.5)).r;
    float e = clamp(uP1.w / max(avg, 1e-3), uP2.x, uP2.y);
    lin *= mix(1.0, e, uP1.z);
  }
  return sqrt(Shoulder(lin));
}

