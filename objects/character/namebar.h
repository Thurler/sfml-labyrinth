#ifndef OBJ_CHAR_NAMEBAR_H
#define OBJ_CHAR_NAMEBAR_H

#include <SFML/Graphics.hpp>

#include "../stringbar.h"
#include "../text.h"

class CharNameBarObject: public StringBarObject {
  public:
    static constexpr unsigned int width = 150;
    static constexpr unsigned int height = 30;
  private:
    static constexpr Alignment textAlign = Alignment::TopCenter;
    static constexpr float skewOffset = height / skewTan;
    static const sf::Vector2f textOffset;

  public:
    CharNameBarObject(
      GlobalValues *g, const sf::Vector2f &pos, const std::wstring &value
    ) : StringBarObject(g, pos, textOffset, width, height, 24, false, textAlign, value) {}
    ~CharNameBarObject() {}

    float getSkewOffset() { return skewOffset; }
};

#endif
