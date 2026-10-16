uniform highp sampler2D uTex; uniform vec4 uP0;  // x threshold, y knee, z night emissive gain (1 = day), w depth bound
uniform highp sampler2D uTex2;                    // scene depth (unit 1): the sky is no light source
uniform highp vec2 uTexel;                        // 1 / scene size
uniform highp sampler2D uTex3;                    // 2.0.1 unit 2: this frame's half-res SSR image (texel = the 2x2 average)
uniform vec4 uP1;                                 // 2.0.1 x 1 = by day read the 2x2 averages from uTex3 (4x less data)
vec3 Clean(vec3 c){ return (any(isnan(c)) || any(isinf(c))) ? vec3(0.0) : clamp(c, 0.0, 8.0); }   // float scene: no NaN / negatives
vec3 Thr(vec3 c){ float br = max(c.r, max(c.g, c.b));
  float soft = clamp(br - uP0.x + uP0.y, 0.0, 2.0 * uP0.y); soft = soft * soft / (4.0 * uP0.y + 1e-4);
  return c * (max(soft, br - uP0.x) / max(br, 1e-4)); }
// night: per texel (a 2 px far lamp keeps its energy) + the emissive boost for light-source cores (1.7.0);
// the depth is read only for near-white texels (the sky is excluded)
vec3 S(ivec2 p, ivec2 hi){ vec3 c = Clean(texelFetch(uTex, min(p, hi), 0).rgb);
  float e = smoothstep(0.8, 0.95, max(c.r, max(c.g, c.b)));
  if (e > 0.0 && uP0.w > 0.5 && texelFetch(uTex2, min(p, hi), 0).r >= 0.99999) e = 0.0;   // bright sunset sky: not boosted
  c *= c; c *= 1.0 + (uP0.z - 1.0) * e;
  return Thr(c); }
void main(){
  ivec2 b = ivec2(gl_FragCoord.xy) * 4, hi = textureSize(uTex, 0) - 1;
  float g_Cut = min(sqrt(max(uP0.x - uP0.y, 0.0)), 0.8);                // display level below which a texel adds nothing
  vec3 sum = vec3(0.0); float ws = 0.0;
  for (int g = 0; g < 4; ++g) {
    ivec2 o = b + ivec2((g & 1) * 2, (g >> 1) * 2);
    vec3 a;
    // 1.7.1: by day one bilinear tap per 2x2 group (4 fetches, not 16 + 16 depth: 1.7.0 bloom cost 0.57-0.82 ms)
    // 2.0.1: the SSR prep stored exactly this bilinear tap (the 2x2 block centre) at half res this frame: read that
    // texel instead - the same value from a texture a quarter the size (the prefilter read the whole float scene)
    if (uP0.z <= 1.001) { vec3 c = uP1.x > 0.5 ? Clean(texelFetch(uTex3, min(o / 2, textureSize(uTex3, 0) - 1), 0).rgb)
                                              : Clean(texture(uTex, (vec2(o) + 1.0) * uTexel).rgb); a = Thr(c * c); }
    else {
      // 1.9.3 night: one bilinear tap first = the exact 2x2 average; no channel of any texel can be above 4x it. Below
      // a quarter of the level where a texel starts to count (threshold - knee after squaring, or 0.8 for the
      // emissive boost) the whole group is 0 - skip its 4 fetches + 4 thresholds (most of a night frame is that dark)
      vec3 m = texture(uTex, (vec2(o) + 1.0) * uTexel).rgb;
      if (max(m.r, max(m.g, m.b)) * 4.0 <= g_Cut) a = vec3(0.0);
      else a = 0.25 * (S(o, hi) + S(o + ivec2(1, 0), hi) + S(o + ivec2(0, 1), hi) + S(o + ivec2(1, 1), hi)); }
    float w = 1.0 / (1.0 + dot(a, vec3(0.2126, 0.7152, 0.0722)));
    sum += a * w; ws += w; }
  oColor = vec4(sum / ws, 1.0);
}

