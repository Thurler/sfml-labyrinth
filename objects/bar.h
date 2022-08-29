#ifndef OBJ_BAR_H
#define OBJ_BAR_H

#include <SFML/Graphics.hpp>

#include "texture.h"
#include "common.h"
#include "math.h"

class BarObject: public CommonObject {
  protected:
    static constexpr float skewAngle = M_PI * 1 / 3;
    sf::Vector2f position;
    sf::Color color;
    sf::Color colorBackground;
    unsigned int width;
    unsigned int height;
    unsigned long long curValue;
    unsigned long long maxValue;

    void drawAtPosition(sf::ConvexShape *fb, sf::ConvexShape *b);

  public:
    static constexpr float skewSin = 0.86602f; // sin(skewAngle)
    static constexpr float skewTan = 1.73205f; // tan(skewAngle)

    BarObject(
      GlobalValues *g, const sf::Vector2f &p, const sf::Color &c, const sf::Color cb,
      unsigned int w, unsigned int h, unsigned long long s, unsigned long long m
    ) :
      position(p), color(c), colorBackground(cb), width(w), height(h),
      curValue(s), maxValue(m), CommonObject(g) {}
    ~BarObject() {}

    virtual void update() {}
    virtual void draw(sf::RenderWindow *w);

    virtual float getSkewOffset() { return height / skewTan; }
    unsigned int getWidth() { return width; }
    unsigned int getHeight() { return height; }
    unsigned long long getValue() { return curValue; }
    void setValue(unsigned long long c) { curValue = c; }
};

#endif
