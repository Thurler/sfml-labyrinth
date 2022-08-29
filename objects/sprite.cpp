#include "sprite.h"

void SpriteObject::updatePosition() {
  sf::FloatRect bounds = sprite.getLocalBounds();
  sprite.setPosition(alignPosition(position, bounds, align));
}

void SpriteObject::setTexRect(const sf::IntRect &rect) {
  sprite.setTextureRect(rect);
  updatePosition();
}

void SpriteObject::draw(sf::RenderWindow *window) {
  window->draw(sprite);
}

SpriteObject::SpriteObject(
  GlobalValues *g, const sf::Vector2f &p, Alignment a, const std::string &textureFilename
) : position(p), align(a), CommonObject(g) {
  didInstanceTexture = true;
  texture = new TextureObject(textureFilename);
  global->logMalloc("sprite|texture");
  sprite.setTexture(*(texture->getTexture()));
  updatePosition();
}

SpriteObject::SpriteObject(
  GlobalValues *g, const sf::Vector2f &p, Alignment a, TextureObject *t
) : position(p), align(a), texture(t), CommonObject(g) {
  sprite.setTexture(*(texture->getTexture()));
  updatePosition();
}

SpriteObject::~SpriteObject() {
  if (didInstanceTexture && texture) {
    delete texture;
    global->logFree("sprite|texture");
  }
}
