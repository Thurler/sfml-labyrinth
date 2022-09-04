#ifndef OBJ_SHADER_H
#define OBJ_SHADER_H

#include <SFML/Graphics.hpp>
#include <string>

class ShaderObject {
  private:
    sf::Shader shader;

  public:
    ShaderObject(const std::string &filename) {
      shader.loadFromFile(filename, sf::Shader::Fragment);
      shader.setUniform("texture", sf::Shader::CurrentTexture);
    }
    ~ShaderObject() {}

    sf::Shader *getShader() { return &shader; }
    void setShaderArg(const std::string &a, float v) { shader.setUniform(a, v); }
    void setShaderArg(const std::string &a, const sf::Color &c) { shader.setUniform(a, sf::Glsl::Vec4(c)); }
};

#endif
