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
) : CommonObject(g), align(a), position(p) {
  didInstanceTexture = true;
  texture = new TextureObject(textureFilename);
  global->logMalloc("sprite|texture");
  sprite.setTexture(*(texture->getTexture()));
  updatePosition();
}

SpriteObject::SpriteObject(
  GlobalValues *g, const sf::Vector2f &p, Alignment a, TextureObject *t
) : CommonObject(g), align(a), position(p), texture(t) {
  sprite.setTexture(*(texture->getTexture()));
  updatePosition();
}

SpriteObject::~SpriteObject() {
  if (didInstanceTexture && texture) {
    delete texture;
    global->logFree("sprite|texture");
  }
}
