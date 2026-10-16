layout(location = 0) inout highp vec4 oColor;
void main(){ if (uAODbg > 0.5) { oColor = vec4(AODebug(vUV), 1.0); return; }
  oColor = vec4(Finish(Grade(Scene(oColor.rgb, vUV), gl_FragCoord.xy), gl_FragCoord.xy), 1.0); }

