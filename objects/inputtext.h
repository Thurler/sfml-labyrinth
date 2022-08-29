#ifndef OBJ_INPUTTEXT_H
#define OBJ_INPUTTEXT_H

#include <SFML/Graphics.hpp>

#include "text.h"

class InputTextObject: public TextObject {
  public:
    InputTextObject(GlobalValues *g) :
      TextObject(g, sf::Vector2f(2, 718), sf::Color::White, 10, true, Alignment::BottomLeft) {}
    ~InputTextObject() {}

    void update();
};

#endif
