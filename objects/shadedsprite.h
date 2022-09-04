#ifndef OBJ_SHADEDSPRITE_H
#define OBJ_SHADEDSPRITE_H

#include <SFML/Graphics.hpp>
#include <string>

#include "shader.h"
#include "sprite.h"

class ShadedSpriteObject: public SpriteObject {
  private:
    bool shaderActive = false;
    bool didInstanceShader = false;
    ShaderObject *shader;

  public:
    ShadedSpriteObject(
      GlobalValues *g, const sf::Vector2f &p, Alignment a,
      const std::string &tf, const std::string &sf
    );
    ShadedSpriteObject(
      GlobalValues *g, const sf::Vector2f &p, Alignment a,
      TextureObject *t, const std::string &sf
    );
    ShadedSpriteObject(
      GlobalValues *g, const sf::Vector2f &p, Alignment a,
      const std::string &tf, ShaderObject *s
    ) : shader(s), SpriteObject(g, p, a, tf) {}
    ShadedSpriteObject(
      GlobalValues *g, const sf::Vector2f &p, Alignment a,
      TextureObject *t, ShaderObject *s
    ) : shader(s), SpriteObject(g, p, a, t) {}
    ~ShadedSpriteObject();

    void draw(sf::RenderWindow *w);
    void setShaderActive(bool a) { shaderActive = a; }

    void setShaderArg(const std::string &a, float v) { shader->setShaderArg(a, v); }
};

#endif
