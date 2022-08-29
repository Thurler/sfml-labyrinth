#include "shadedsprite.h"

void ShadedSpriteObject::draw(sf::RenderWindow *window) {
  if (shaderActive) {
    window->draw(sprite, shader->getShader());
  } else {
    window->draw(sprite);
  }
}

ShadedSpriteObject::ShadedSpriteObject(
  GlobalValues *g, const sf::Vector2f &p, Alignment a,
  const std::string &tf, const std::string &shaderFilename
) : SpriteObject(g, p, a, tf) {
  didInstanceShader = true;
  shader = new ShaderObject(shaderFilename);
  global->logMalloc("shadedsprite|shader");
}

ShadedSpriteObject::ShadedSpriteObject(
  GlobalValues *g, const sf::Vector2f &p, Alignment a,
  TextureObject *t, const std::string &shaderFilename
) : SpriteObject(g, p, a, t) {
  didInstanceShader = true;
  shader = new ShaderObject(shaderFilename);
  global->logMalloc("shadedsprite|shader");
}

ShadedSpriteObject::~ShadedSpriteObject() {
  if (didInstanceShader && shader) {
    delete shader;
    global->logFree("shadedsprite|shader");
  }
}
