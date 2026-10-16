#version 300 es
precision mediump float;
precision highp int;
uniform vec4 uCol;
in mediump float vA; in mediump float vX;
out vec4 o;
void main(){ o = vec4(uCol.rgb, uCol.a * vA * (1.0 - vX * vX)); }

