#ifndef OBJ_FPSTEXT_H
#define OBJ_FPSTEXT_H

#include <SFML/Graphics.hpp>

#include "text.h"

class FPSTextObject: public TextObject {
  private:
    static constexpr unsigned int limit = 60;
    unsigned int lastValues[limit] = {0};
    unsigned int index = 0;
    bool display = false;
  public:
    FPSTextObject(GlobalValues *g) :
      TextObject(g, sf::Vector2f(1278, 718), sf::Color::White, 10, true, Alignment::BottomRight) {}
    ~FPSTextObject() {}

    void update();
};

#endif
