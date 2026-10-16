#version 300 es
precision mediump float;
precision highp int;
uniform highp sampler2D uSsr;     // unit 0: this frame's SSR image (a = distance, sky = 60000)
uniform mediump sampler2D uHist;  // unit 1: last probe
uniform highp mat4 uIVP;          // ndc -> world - camera
uniform vec4 uP;                  // x blend rate, y 1 = no history yet, z rain 0..1
uniform vec3 uInit;               // the game's fog colour: bands never seen yet
out vec4 oColor;
void main(){
  float e0 = gl_FragCoord.x * (1.1 / 16.0) - 0.1;                       // this band's sin(elevation)
  vec3 acc = vec3(0.0); float w = 0.0; vec3 accA = vec3(0.0); float wA = 0.0;
  for (int j = 0; j < 12; j++) for (int i = 0; i < 16; i++) {
    highp vec2 uv = (vec2(float(i), float(j)) + 0.5) * vec2(1.0 / 16.0, 1.0 / 12.0);
    highp vec4 s = textureLod(uSsr, uv, 0.0);
    if (s.a > 50000.0) {
      highp vec4 p = uIVP * vec4(uv * 2.0 - 1.0, 0.0, 1.0);
      float el = float(normalize(p.xyz / p.w).z);
      float k = max(0.0, 1.0 - abs(el - e0) * 6.0);
      acc += s.rgb * k; w += k;
      if (el > -0.05) { accA += s.rgb; wA += 1.0; }
    }
  }
  vec3 h = uP.y > 0.5 ? uInit : texelFetch(uHist, ivec2(gl_FragCoord.xy), 0).rgb;
  vec3 r = h;
  if (w > 0.05) r = mix(h, acc / w, uP.y > 0.5 ? 1.0 : uP.x);
  // 1.5.1: a band the camera doesn't see (the zenith, from a normal / downward camera) drifts towards the
  // average of the sky that IS on screen - 1.1.3-1.5.0 kept its start value (the fog colour x 0.8 at the top)
  // for good = the steep reflections right round the player were dark (SSRView: teal = probe, the dark blob)
  else if (wA > 0.5) r = mix(h, accA / wA, uP.y > 0.5 ? 1.0 : uP.x * 0.5);
  r = max(r, uInit * (0.9 * uP.z));                                   // rain: an overcast sky is never darker than its fog
  oColor = vec4(r, 1.0);
}

