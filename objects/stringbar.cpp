#include "stringbar.h"

const sf::Color StringBarObject::colorBackground = sf::Color(0, 0, 0, 110);
const sf::Color StringBarObject::colorText = sf::Color::White;

void StringBarObject::draw(sf::RenderWindow *window) {
  BarObject::draw(window);
  text->draw(window);
}

StringBarObject::StringBarObject(
  GlobalValues *global, const sf::Vector2f &pos, const sf::Vector2f &textOffset,
  unsigned int width, unsigned int height, unsigned int size, bool bold,
  Alignment textAlign, const std::wstring &value
) : BarObject(global, pos, colorBackground, colorBackground, width, height, 1, 1) {
  sf::Vector2f textPosition = position + textOffset;
  text = new TextObject(global, textPosition, colorText, size, bold, textAlign);
  global->logMalloc("stringbar|text");
  text->setContent(value);
}

StringBarObject::~StringBarObject() {
  if (text) {
    delete text;
    global->logFree("stringbar|text");
  }
}
