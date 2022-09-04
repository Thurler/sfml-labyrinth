#include "global.h"

const sf::Color GlobalValues::highlightColor = sf::Color::White;

GlobalValues::GlobalValues() {
  mallocLog.open("malloc.log");
  font.loadFromFile("C:/Windows/Fonts/meiryo.ttc");
  shadeTexture = new TextureObject("./img/Gradient.png");
  logMalloc("global|shadeTexture");
  highlightShader = new ShaderObject("./shaders/highlight.frag");
  highlightShader->setShaderArg("blendColor", highlightColor);
  logMalloc("global|highlightShader");
}

GlobalValues::~GlobalValues() {
  if (shadeTexture) {
    delete shadeTexture;
    logFree("global|shadeTexture");
  }
  if (highlightShader) {
    delete highlightShader;
    logFree("global|highlightShader");
  }
  mallocLog.close();
  std::cout << "ALLOCS: " << allocs << std::endl;
  std::cout << "FREES: " << frees << std::endl;
}
