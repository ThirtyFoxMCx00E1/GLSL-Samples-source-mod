#version 300 es
uniform highp mat4 uVP;     // (world - camera) -> clip
uniform highp vec4 uCam;    // camera world position, time (s)
uniform highp vec4 uWind;   // drift x, y (m/s), fall speed (m/s), streak length (m)
uniform highp vec4 uBox;    // box size xy, box size z, metres per pixel at 1 m, alpha
out mediump float vA; out mediump float vX;
highp vec3 H3(highp float n){ highp vec3 p = fract(vec3(n) * vec3(0.1031, 0.1030, 0.0973)); p += dot(p, p.yxz + 33.33);
  return fract((p.xxy + p.yxx) * p.zyx); }
void main(){
  int id = gl_VertexID / 6, c = gl_VertexID - id * 6;
  highp vec2 q = vec2((c == 1 || c == 3 || c == 4) ? 1.0 : 0.0, (c == 2 || c == 4 || c == 5) ? 1.0 : 0.0);
  highp vec3 s = H3(float(id) + 0.5);
  highp vec3 box = vec3(uBox.xx, uBox.y);
  highp vec3 v = vec3(uWind.xy, -uWind.z) * (0.85 + 0.3 * s.z);              // slightly different speeds
  highp vec3 p = s * box + v * uCam.w - uCam.xyz;                            // world-anchored, falling
  p = mod(p + box * 0.5, box) - box * 0.5;                                    // wrapped into the box round the camera
  highp float d = length(p);
  highp vec3 dir = normalize(v);
  highp vec3 side = cross(dir, p / max(d, 0.01));
  highp float sl = length(side); side = sl > 1e-3 ? side / sl : vec3(1.0, 0.0, 0.0);
  highp float w = max(0.009, d * uBox.z * 1.3);                               // never thinner than ~1.3 px (no shimmer)
  highp vec3 pos = p + dir * uWind.w * (q.y - 0.5) + side * w * (q.x - 0.5);
  gl_Position = uVP * vec4(pos, 1.0);
  vX = q.x * 2.0 - 1.0;
  vA = uBox.w * (0.009 / w) * smoothstep(1.0, 3.0, d) * (1.0 - smoothstep(uBox.x * 0.32, uBox.x * 0.5, d));
}

