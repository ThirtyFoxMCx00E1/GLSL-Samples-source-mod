out vec4 oColor;
void main(){ if (uAODbg > 0.5) { oColor = vec4(AODebug(vUV), 1.0); return; }
  vec3 c = CasAt(ivec2(gl_FragCoord.xy));
  oColor = vec4(Finish(Grade(Scene(c, vUV), gl_FragCoord.xy), gl_FragCoord.xy), 1.0); }

