#ifndef OBJ_STRINGBAR_H
#define OBJ_STRINGBAR_H

#include <SFML/Graphics.hpp>

#include "bar.h"
#include "text.h"

class StringBarObject: public BarObject {
  private:
    static const sf::Color colorBackground;
    static const sf::Color colorText;
    sf::Vector2f textOffset;
    Alignment textAlign;

  protected:
    TextObject *text;

  public:
    StringBarObject(
      GlobalValues *g, const sf::Vector2f &p, const sf::Vector2f &o,
      unsigned int w, unsigned int h, unsigned int s, bool bold,
      Alignment a, const std::wstring &v
    );
    virtual ~StringBarObject();

    void draw(sf::RenderWindow *w);
    void setContent(const std::wstring &c) { text->setContent(c); }
};

#endif
