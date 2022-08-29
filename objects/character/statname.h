#ifndef OBJ_CHAR_STATNAME_H
#define OBJ_CHAR_STATNAME_H

#include <SFML/Graphics.hpp>

#include "../bar.h"
#include "../text.h"

class CharStatNameObject: public BarObject {
  public:
    static constexpr unsigned int width = 25;
    static constexpr unsigned int height = 20;
  private:
    static constexpr Alignment textAlign = Alignment::TopLeft;
    static constexpr float skewOffset = height / skewTan;
    static const sf::Color colorText;
    TextObject *textMain;
    TextObject *textSub;

  public:
    CharStatNameObject(
      GlobalValues *g, const sf::Vector2f &p, const sf::Color &c,
      const sf::Vector2f &mo, const sf::Vector2f &so,
      const std::wstring &main, const std::wstring &sub
    );
    ~CharStatNameObject();

    void draw(sf::RenderWindow *w);
    float getSkewOffset() { return skewOffset; }
};

#endif
