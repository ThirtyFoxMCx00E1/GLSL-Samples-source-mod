#version 300 es
precision mediump float;
precision highp int;
uniform mediump sampler2D uCur;   // unit 0: this frame, composited (no dither)
uniform mediump sampler2D uHist;  // unit 1: last frame's TAA output
uniform highp sampler2D uDepth;   // unit 2: scene depth
uniform highp sampler2D uPrevD;   // unit 3: last frame's distance from its camera (R16F)
uniform highp mat4 uIVP;          // ndc -> world - camera
uniform highp mat4 uPrev;         // (world - camera) -> previous clip
uniform highp vec4 uT;            // 1/w, 1/h, history weight (0 = none), dither (0/1)
uniform highp vec3 uCamD;         // this camera - previous camera
uniform float uSh;                // 1.5.6: RCAS strength for the scene output (FSR fast sharpen), 0 = none
layout(location = 0) out vec4 oHist;
layout(location = 1) out vec4 oScene;
layout(location = 2) out highp vec4 oDist;
vec3 YC(vec3 c){ return vec3(0.25 * c.r + 0.5 * c.g + 0.25 * c.b, 0.5 * c.r - 0.5 * c.b, -0.25 * c.r + 0.5 * c.g - 0.25 * c.b); }
vec3 RGB(vec3 y){ return vec3(y.x + y.y - y.z, y.x + y.z, y.x - y.y - y.z); }
// clip the history towards the centre of the neighbourhood box (less ghosting than a plain clamp)
vec3 Clip(vec3 mn, vec3 mx, vec3 h){ vec3 c = 0.5 * (mx + mn), e = 0.5 * (mx - mn) + 0.002; vec3 v = h - c;
  vec3 a = abs(v / e); float m = max(a.x, max(a.y, a.z)); return m > 1.0 ? c + v / m : h; }
highp float IGN(highp vec2 p){ return fract(52.9829189 * fract(dot(p, vec2(0.06711056, 0.00583715)))); }
void main(){
  ivec2 ip = ivec2(gl_FragCoord.xy);
  vec3 c = texelFetch(uCur, ip, 0).rgb;
  vec3 o = c;
  highp vec2 uv = gl_FragCoord.xy * uT.xy;                             // highp: vec2(ip) is mediump = fp16 -> 1-px steps past x 1024 (0.23.2 split screen)
  highp float d = texelFetch(uDepth, ip, 0).r;
  // 1.13.5: depth 1 is not only sky - water writes no depth, so open water (no sea floor drawn behind it) is depth 1
  // too. 0.27.2 skipped history there (the frame as is): the SSR hit / miss dots on the sea never got averaged. Now
  // those pixels are reprojected at the far plane (camera rotation; translation is nothing at ~800 m) like the rest.
  bool sky = d >= 0.99999;
  highp vec4 p = uIVP * vec4(uv * 2.0 - 1.0, min(d, 0.99999) * 2.0 - 1.0, 1.0);
  highp vec3 C = p.xyz / p.w;
  oDist = vec4(sky ? 60000.0 : min(length(C), 60000.0));
  if (uT.z > 0.0) {
    highp vec4 q = uPrev * vec4(C, 1.0);
    highp vec2 puv = q.xy / max(q.w, 1e-4) * 0.5 + 0.5;
    if (q.w > 1e-4 && puv.x >= 0.0 && puv.y >= 0.0 && puv.x <= 1.0 && puv.y <= 1.0) {
      // same surface as last frame? (moving cars / the car you drive fail this: no smear, no trail)
      highp float e = length(C + uCamD), pd = texture(uPrevD, puv).r;
      if (sky ? pd > 50000.0 : abs(pd - e) < 0.02 * e + 0.05) {
        ivec2 hi = textureSize(uCur, 0) - 1;
        vec3 yc = YC(c);
        vec3 a = YC(texelFetch(uCur, min(ip + ivec2(1, 0), hi), 0).rgb), b = YC(texelFetch(uCur, max(ip - ivec2(1, 0), ivec2(0)), 0).rgb);
        vec3 u = YC(texelFetch(uCur, min(ip + ivec2(0, 1), hi), 0).rgb), w4 = YC(texelFetch(uCur, max(ip - ivec2(0, 1), ivec2(0)), 0).rgb);
        vec3 mn = min(yc, min(min(a, b), min(u, w4))), mx = max(yc, max(max(a, b), max(u, w4)));
        vec3 hr = YC(texture(uHist, puv).rgb);
        vec3 h = Clip(mn, mx, hr);
        float px = length((puv - uv) / uT.xy);                             // motion in pixels
        float w = uT.z * clamp(1.0 - px * 0.04, 0.4, 1.0);                 // less history when moving fast
        float dl = abs(yc.x - h.x) / max(max(yc.x, h.x), 0.1);             // big brightness change = new content
        // 1.13.5: both penalties only while the view moves (> ~1.5 px): with a still camera they read per-pixel noise
        // (SSR hit / miss on water: dark pier next to bright sky) as 'new content' and cut the history to ~35 pct -
        // the dots stayed. Moving objects are still caught by the distance test above.
        float mv = clamp(px / 1.5, 0.0, 1.0);
        w *= 1.0 - 0.6 * clamp(dl * 2.0, 0.0, 1.0) * mv;
        w *= 1.0 - 0.5 * clamp(length(hr - h) * 8.0, 0.0, 1.0) * mv;        // history had to be clipped a lot = stale
        o = clamp(RGB(mix(yc, h, w)), 0.0, 1.0);
      }
    }
  }
  oHist = vec4(o, 1.0);
  // 1.5.6: FSR's RCAS (with its denoise) here, at scene size, on the resolved centre with this frame's cross - the
  // scene output only (the history stays unsharpened). Saves FSR's separate full-screen RCAS pass (0.4-0.5 ms).
  if (uSh > 0.0) {
    ivec2 hs = textureSize(uCur, 0) - 1;
    vec3 nb = texelFetch(uCur, min(ip + ivec2(0, 1), hs), 0).rgb, nd = texelFetch(uCur, max(ip - ivec2(1, 0), ivec2(0)), 0).rgb;
    vec3 nf = texelFetch(uCur, min(ip + ivec2(1, 0), hs), 0).rgb, nh = texelFetch(uCur, max(ip - ivec2(0, 1), ivec2(0)), 0).rgb;
    vec3 mn4 = min(min(nb, nd), min(nf, nh)), mx4 = max(max(nb, nd), max(nf, nh));
    vec3 hitMin = min(mn4, o) / max(4.0 * mx4, vec3(1.0 / 1024.0));
    vec3 hitMax = (1.0 - max(mx4, o)) / min(4.0 * mn4 - 4.0, vec3(-1.0 / 1024.0));
    vec3 lb = max(-hitMin, hitMax);
    float lobe = max(-0.1875, min(max(lb.r, max(lb.g, lb.b)), 0.0)) * uSh;
    float bL = nb.b * 0.5 + (nb.r * 0.5 + nb.g), dL = nd.b * 0.5 + (nd.r * 0.5 + nd.g), eL = o.b * 0.5 + (o.r * 0.5 + o.g);
    float fL = nf.b * 0.5 + (nf.r * 0.5 + nf.g), hL = nh.b * 0.5 + (nh.r * 0.5 + nh.g);
    float nz = 0.25 * (bL + dL + fL + hL) - eL;
    float rg = max(max(max(bL, dL), max(eL, fL)), hL) - min(min(min(bL, dL), min(eL, fL)), hL);
    lobe *= 1.0 - 0.5 * clamp(abs(nz) / max(rg, 1.0 / 1024.0), 0.0, 1.0);
    o = clamp((lobe * (nb + nd + nf + nh) + o) / (4.0 * lobe + 1.0), 0.0, 1.0);
  }
  if (uT.w > 0.0) { float n = IGN(gl_FragCoord.xy) - 0.5; o += vec3(n / 31.0, n / 63.0, n / 31.0); }   // 565 dither
  oScene = vec4(o, 1.0);
}

