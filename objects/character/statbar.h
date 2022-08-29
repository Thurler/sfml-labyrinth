#ifndef OBJ_CHAR_STATBAR_H
#define OBJ_CHAR_STATBAR_H

#include <SFML/Graphics.hpp>

#include "../bar.h"
#include "../text.h"

class CharStatBarObject: public BarObject {
  public:
    static constexpr unsigned int width = 260;
    static constexpr unsigned int height = 20;
  private:
    static constexpr Alignment textAlign = Alignment::CenterRight;
    static constexpr float skewOffset = height / skewTan;
    static const sf::Vector2f textOffset;
    static const sf::Color colorText;
    TextObject *text;

  public:
    CharStatBarObject(
      GlobalValues *g, const sf::Vector2f &p, const sf::Color &c, const sf::Color &cb,
      unsigned long long sv, unsigned long long mv
    );
    ~CharStatBarObject();

    void draw(sf::RenderWindow *w);
    float getSkewOffset() { return skewOffset; }
};

#endif
