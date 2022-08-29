#ifndef OBJ_TEXTURE_H
#define OBJ_TEXTURE_H

#include <SFML/Graphics.hpp>
#include <string>

class TextureObject {
  private:
    sf::Texture texture;

  public:
    TextureObject(const std::string &filename) {
      texture.loadFromFile(filename);
    }
    ~TextureObject() {}

    sf::Texture *getTexture() { return &texture; }
};

#endif
