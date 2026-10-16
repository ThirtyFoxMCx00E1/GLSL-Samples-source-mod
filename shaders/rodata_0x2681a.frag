#version 300 es
precision mediump float;
precision highp int;
uniform mediump sampler2D uTex;   // unit 0: scene colour (full res)
uniform highp sampler2D uDepth;   // unit 1: scene depth
uniform highp mat4 uIVP;          // ndc -> world - camera
uniform highp vec4 uP;            // xy = 1 / full-res size
uniform highp vec2 uL;            // 1.1.6: view depth = uL.y / (ndc z + uL.x) (the captured projection)
uniform int uS;                   // 1.1.1: texel scale (2 = half res, 4 = quarter)
in highp vec2 vUV;
out highp vec4 oColor;
void main(){
  ivec2 p = ivec2(gl_FragCoord.xy) * uS, hi = textureSize(uDepth, 0) - 1; int e = uS - 1;
  highp float d = max(max(texelFetch(uDepth, min(p, hi), 0).r, texelFetch(uDepth, min(p + ivec2(e, 0), hi), 0).r),
                      max(texelFetch(uDepth, min(p + ivec2(0, e), hi), 0).r, texelFetch(uDepth, min(p + ivec2(e), hi), 0).r));
  highp vec2 uv = gl_FragCoord.xy * float(uS) * uP.xy;               // the block centre: bilinear = the middle 2x2 average
  vec3 c = texture(uTex, uv).rgb; c = (any(isnan(c)) || any(isinf(c))) ? vec3(0.0) : clamp(c, 0.0, 16.0);   // 1.6.0 float scene
  highp float dist = 60000.0;
  if (d < 0.99999) dist = clamp(uL.y / (d * 2.0 - 1.0 + uL.x), 0.0, 60000.0);   // 1.1.6: VIEW depth through the SAME formula the world shaders use
  oColor = vec4(c, dist);
}

