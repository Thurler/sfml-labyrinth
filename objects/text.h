#ifndef OBJ_TEXT_H
#define OBJ_TEXT_H

#include <SFML/Graphics.hpp>
#include <string>

#include "common.h"

class TextObject: public CommonObject {
  protected:
    Alignment align;
    std::wstring content = L"";
    sf::Vector2f position;
    sf::Text text;

    void alignPosition();

  public:
    TextObject(
      GlobalValues *g, const sf::Vector2f &p, sf::Color c, unsigned int s, bool b, Alignment a
    );
    ~TextObject() {}

    virtual void update() {}
    virtual void draw(sf::RenderWindow *w);
    void setPosition(const sf::Vector2f &p);
    void setContent(const std::wstring &c);
    float getContentWidth();
};

#endif
