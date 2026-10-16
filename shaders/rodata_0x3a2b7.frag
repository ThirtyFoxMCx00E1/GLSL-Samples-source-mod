#version 300 es
precision mediump float;
precision highp int;
uniform mediump sampler2D uTex;   // EASU output (screen size)
uniform ivec2 uMax;
uniform vec4 uP;                  // x sharpness 0..1, y dither 0/1
out vec4 oColor;
vec3 T(ivec2 p){ return texelFetch(uTex, clamp(p, ivec2(0), uMax), 0).rgb; }
float Lu(vec3 c){ return c.b * 0.5 + (c.r * 0.5 + c.g); }
highp float IGN(highp vec2 p){ return fract(52.9829189 * fract(dot(p, vec2(0.06711056, 0.00583715)))); }
void main(){
  ivec2 p = ivec2(gl_FragCoord.xy);
  vec3 b = T(p + ivec2(0, 1)), d = T(p + ivec2(-1, 0)), e = T(p), f = T(p + ivec2(1, 0)), h = T(p + ivec2(0, -1));
  vec3 c = e;
  if (uP.x > 0.0) {
    vec3 mn4 = min(min(b, d), min(f, h)), mx4 = max(max(b, d), max(f, h));
    vec3 hitMin = min(mn4, e) / max(4.0 * mx4, vec3(1.0 / 1024.0));
    vec3 hitMax = (1.0 - max(mx4, e)) / min(4.0 * mn4 - 4.0, vec3(-1.0 / 1024.0));
    vec3 lb = max(-hitMin, hitMax);
    float lobe = max(-0.1875, min(max(lb.r, max(lb.g, lb.b)), 0.0)) * uP.x;
    float bL = Lu(b), dL = Lu(d), eL = Lu(e), fL = Lu(f), hL = Lu(h);
    float nz = 0.25 * (bL + dL + fL + hL) - eL;
    float rg = max(max(max(bL, dL), max(eL, fL)), hL) - min(min(min(bL, dL), min(eL, fL)), hL);
    nz = clamp(abs(nz) / max(rg, 1.0 / 1024.0), 0.0, 1.0);
    lobe *= 1.0 - 0.5 * nz;
    c = (lobe * (b + d + f + h) + e) / (4.0 * lobe + 1.0);
  }
  if (uP.y > 0.0) { float n = float(IGN(gl_FragCoord.xy)) - 0.5; c += vec3(n / 31.0, n / 63.0, n / 31.0); }
  oColor = vec4(clamp(c, 0.0, 1.0), 1.0);
}

