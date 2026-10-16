#version 300 es
precision mediump float;
precision highp int;
uniform mediump sampler2D uTex;   // the scene (render size), LINEAR sampler
uniform highp vec4 uCon;          // xy = scene size / screen size, z = dither
uniform ivec2 uMax;               // scene size - 1
uniform highp vec2 uInv;          // 1 / scene size
out vec4 oColor;
vec3 T(ivec2 p){ return texelFetch(uTex, clamp(p, ivec2(0), uMax), 0).rgb; }
highp float IGN(highp vec2 p){ return fract(52.9829189 * fract(dot(p, vec2(0.06711056, 0.00583715)))); }
void main(){
  highp vec2 hp = gl_FragCoord.xy * uCon.xy - 0.5;
  highp vec2 fp = floor(hp);
  vec2 t = vec2(hp - fp);
  ivec2 q = ivec2(fp);
  vec3 f = T(q), g = T(q + ivec2(1, 0)), j = T(q + ivec2(0, 1)), k = T(q + ivec2(1, 1));
  vec3 mn = min(min(f, g), min(j, k)), mx = max(max(f, g), max(j, k));
  vec3 rg = mx - mn, r;
  if (max(max(rg.r, rg.g), rg.b) < 3.0 / 255.0) r = mix(mix(f, g, t.x), mix(j, k, t.x), t.y);
  else {
    vec2 w0 = t * (-0.5 + t * (1.0 - 0.5 * t)), w1 = 1.0 + t * t * (-2.5 + 1.5 * t);
    vec2 w2 = t * (0.5 + t * (2.0 - 1.5 * t)), w3 = t * t * (-0.5 + 0.5 * t);
    vec2 w12 = w1 + w2;
    highp vec2 c1 = fp + 0.5;                                           // f's centre, in texels
    highp vec2 p0 = (c1 - 1.0) * uInv, p3 = (c1 + 2.0) * uInv, p12 = (c1 + vec2(w2 / w12)) * uInv;
    vec3 s = texture(uTex, vec2(p12.x, p0.y)).rgb * (w12.x * w0.y) + texture(uTex, vec2(p0.x, p12.y)).rgb * (w0.x * w12.y)
           + texture(uTex, p12).rgb * (w12.x * w12.y)
           + texture(uTex, vec2(p3.x, p12.y)).rgb * (w3.x * w12.y) + texture(uTex, vec2(p12.x, p3.y)).rgb * (w12.x * w3.y);
    float ws = w12.x * w0.y + w0.x * w12.y + w12.x * w12.y + w3.x * w12.y + w12.x * w3.y;
    r = clamp(s / ws, mn, mx);
  }
  if (uCon.z > 0.0) { float d = float(IGN(gl_FragCoord.xy)) - 0.5; r += vec3(d / 31.0, d / 63.0, d / 31.0); }
  oColor = vec4(r, 1.0);
}

