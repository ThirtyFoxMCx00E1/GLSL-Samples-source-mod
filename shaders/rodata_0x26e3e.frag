highp float zWD = -1.0, zWP = 0.0;
#ifdef GL_ARM_shader_framebuffer_fetch_depth_stencil
{ highp float zfd = gl_LastFragDepthARM;  if (zfd < 0.99999) {   highp float zPA = ProjMatrix[2][2], zPB = ProjMatrix[3][2];   highp float zs = zPB / (gl_FragCoord.z * 2.0 - 1.0 + zPA), zf = zPB / (zfd * 2.0 - 1.0 + zPA);   zWP = max(zf - zs, 0.0) * zd / max(zs, 0.01);   zWD = zWP * clamp(-zV.z, 0.0, 1.0); }  else { zWD = 50.0; zWP = 200.0; } }
#endif
if (zWD >= 0.0) { float zSh = exp(-float(zWD) * 0.45); vec3 zDeep = fcolor.xyz * vec3(0.55, 0.75, 0.9), zShal = fcolor.xyz * vec3(0.95, 1.25, 1.15) + vec3(0.0, 0.025, 0.025); vec3 zCol = mix(fcolor.xyz, mix(zDeep, zShal, zSh), %.3f); float zAb = 1.0 - exp(-float(zWP) * 0.28); float zAl = mix(fcolor.a, max(zAb, min(Out_WaterAlphaBlend, 1.0)), %.3f);
#ifdef GL_EXT_shader_framebuffer_fetch
 if (%.3f > 0.0) {  mediump vec3 zFl = gl_LastFragData[0].rgb;%s  vec3 zT = exp(-vec3(0.42, 0.10, 0.07) * (min(float(zWP), 60.0) * %.3f));  zCol = zFl * zT + zDeep * (1.0 - zT); zAl = 1.0; }
#endif
 fcolor.xyz = zCol; fcolor.a = zAl; }
