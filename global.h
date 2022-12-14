#ifndef GLOBAL_H
#define GLOBAL_H

#include <fstream>
#include <iostream>

#include <SFML/Graphics.hpp>
#include "objects/texture.h"
#include "objects/shader.h"

class GlobalValues {
  private:
    static const sf::Color highlightColor;
    sf::Clock clock;
    sf::Font font;
    bool focus = true;
    bool isKeyUp = false;
    bool isKeyLeft = false;
    bool isKeyDown = false;
    bool isKeyRight = false;
    bool isKeyConfirm = false;
    bool isKeyCancel = false;
    double elapsedTime = 0;
    unsigned long long allocs = 0;
    unsigned long long frees = 0;
    std::ofstream mallocLog;

  public:
    TextureObject *shadeTexture;
    ShaderObject *highlightShader;

    sf::Time restartTime() { return clock.restart(); } // only main should call this
    sf::Font *getFont() { return &font; }

    void logMalloc(const std::string &v) { mallocLog << "ALLOC: " << v << std::endl; allocs++; }
    void logFree(const std::string &v) { mallocLog << "FREE: " << v << std::endl; frees++; }

    bool hasFocus() { return focus; }
    bool getKeyUp() { return isKeyUp; }
    bool getKeyDown() { return isKeyDown; }
    bool getKeyLeft() { return isKeyLeft; }
    bool getKeyRight() { return isKeyRight; }
    bool getKeyConfirm() { return isKeyConfirm; }
    bool getKeyCancel() { return isKeyCancel; }
    double getElapsedTime() { return elapsedTime; }

    void setFocus(bool f) { focus = f; }
    void setKeyUp(bool u) { isKeyUp = u; }
    void setKeyDown(bool d) { isKeyDown = d; }
    void setKeyLeft(bool l) { isKeyLeft = l; }
    void setKeyRight(bool r) { isKeyRight = r; }
    void setKeyConfirm(bool c) { isKeyConfirm = c; }
    void setKeyCancel(bool c) { isKeyCancel = c; }
    void setElapsedTime(double t) { elapsedTime = t; }

    GlobalValues();
    ~GlobalValues();
};

#endif
