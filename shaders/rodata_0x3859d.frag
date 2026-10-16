#version 300 es
precision highp float;
precision highp int;
uniform highp sampler2D uT; out vec4 oAO;
void main(){
  ivec2 ip = ivec2(gl_FragCoord.xy), hi = textureSize(uT, 0) - 1;
  vec4 c0 = texelFetch(uT, ip, 0);
  if (c0.g > 59000.0) { oAO = c0; return; }
  float tol = c0.g * 0.03 + 0.08, sum = 0.0, ws = 0.0;
  for (int y = -2; y <= 2; ++y) for (int x = -2; x <= 2; ++x) {
    vec2 a = texelFetch(uT, clamp(ip + ivec2(x, y), ivec2(0), hi), 0).rg;
    float w = exp2(-0.35 * float(x * x + y * y)) * max(0.0, 1.0 - abs(a.g - c0.g) / tol);
    sum += a.r * w; ws += w; }
  oAO = vec4(sum / max(ws, 1e-4), c0.g, c0.b, 1.0);
}

