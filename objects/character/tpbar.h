#ifndef OBJ_TPBAR_H
#define OBJ_TPBAR_H

#include <SFML/Graphics.hpp>
#include "math.h"

#include "../stringbar.h"
#include "../bar.h"

class TPBarObject: public BarObject {
  public:
    static constexpr unsigned int width = 78;
    static constexpr unsigned int height = 5;
  private:
    static constexpr Alignment textAlign = Alignment::TopLeft;
    static constexpr float skewOffset = height / skewTan;
    static const sf::Color colorBackground;
    static const sf::Color colorText;
    static const sf::Color color;
    static const sf::Vector2f textOffset;
    static const sf::Vector2f barOffset;
    sf::Vector2f textPosition;
    StringBarObject *text;

    void rotateToPosition(sf::ConvexShape *s);

  public:
    TPBarObject(
      GlobalValues *g, const sf::Vector2f &p,
      unsigned long long sv, unsigned long long mv
    );
    ~TPBarObject();

    void draw(sf::RenderWindow *w);
    float getSkewOffset() { return skewOffset; }
};

#endif
