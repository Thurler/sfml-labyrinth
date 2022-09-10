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
    ) : SpriteObject(g, p, a, tf), shader(s) {}
    ShadedSpriteObject(
      GlobalValues *g, const sf::Vector2f &p, Alignment a,
      TextureObject *t, ShaderObject *s
    ) : SpriteObject(g, p, a, t), shader(s) {}
    ~ShadedSpriteObject();

    void draw(sf::RenderWindow *w);
    void setShaderActive(bool a) { shaderActive = a; }

    void setShaderArg(const std::string &a, float v) { shader->setShaderArg(a, v); }
};

#endif
