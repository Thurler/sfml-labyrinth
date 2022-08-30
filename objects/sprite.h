#ifndef OBJ_SPRITE_H
#define OBJ_SPRITE_H

#include <SFML/Graphics.hpp>
#include <string>

#include "common.h"
#include "texture.h"

class SpriteObject: public CommonObject {
  protected:
    sf::Sprite sprite;
  private:
    Alignment align;
    sf::Vector2f position;
    TextureObject *texture;
    bool didInstanceTexture = false;
    void updatePosition();

  public:
    SpriteObject(
      GlobalValues *g, const sf::Vector2f &p, Alignment a, const std::string &tf
    );
    SpriteObject(
      GlobalValues *g, const sf::Vector2f &p, Alignment a, TextureObject *t
    );
    virtual ~SpriteObject();

    virtual void update() {}
    virtual void draw(sf::RenderWindow *w);

    void setColor(const sf::Color &color) { sprite.setColor(color); }
    void setTexRect(const sf::IntRect &rect);
};

#endif
