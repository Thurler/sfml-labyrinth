uniform sampler2D texture;
uniform vec4 blendColor;
uniform float opacity;

float blendSoftLight(float base, float blend) {
  if (blend < 0.5) {
    return (2.0 * base * blend + base * base * (1.0 - 2.0 * blend));
  } else {
    return (sqrt(base) * (2.0 * blend - 1.0) + 2.0 * base * (1.0 - blend));
  }
}

vec3 blendSoftLight(vec3 base, vec3 blend) {
  return vec3(
    blendSoftLight(base.r, blend.r),
    blendSoftLight(base.g, blend.g),
    blendSoftLight(base.b, blend.b)
  );
}

vec3 blendSoftLight(vec3 base, vec3 blend, float opacity) {
  return (blendSoftLight(base, blend) * opacity + base * (1.0 - opacity));
}

void main() {
  vec4 pixel = texture2D(texture, gl_TexCoord[0].xy);
  if (pixel.a > 0.f) {
    gl_FragColor = vec4(blendSoftLight(pixel.rgb, blendColor.rgb, opacity), pixel.a);
  } else {
    gl_FragColor = pixel;
  }
}
