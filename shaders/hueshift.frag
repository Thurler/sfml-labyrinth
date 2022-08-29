uniform sampler2D texture;
uniform float shift;

vec3 hueShift(vec3 color, float hue) {
  const vec3 k = vec3(0.57735, 0.57735, 0.57735);
  float cosAngle = cos(hue);
  return vec3(color * cosAngle + cross(k, color) * sin(hue) + k * dot(k, color) * (1.0 - cosAngle));
}

void main() {
  vec4 pixel = texture2D(texture, gl_TexCoord[0].xy);
  if (pixel.a > 0) {
    gl_FragColor = vec4(hueShift(pixel, shift), pixel.a);
  } else {
    gl_FragColor = pixel;
  }
}
