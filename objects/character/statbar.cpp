#include "statbar.h"

const sf::Color CharStatBarObject::colorText = sf::Color::White;
const sf::Vector2f CharStatBarObject::textOffset = sf::Vector2f(width, height/2);

void CharStatBarObject::draw(sf::RenderWindow *window) {
  BarObject::draw(window);
  text->draw(window);
}

CharStatBarObject::CharStatBarObject(
  GlobalValues *global, const sf::Vector2f &position,
  const sf::Color &color, const sf::Color &colorBackground,
  unsigned long long startingValue, unsigned long long capValue
) : BarObject(
  global, position, color, colorBackground, width, height, startingValue, capValue
) {
  sf::Vector2f textPosition = position + textOffset;
  text = new TextObject(global, textPosition, colorText, 12, true, textAlign);
  global->logMalloc("statbar|text");
  text->setContent(convertIntToDotString(curValue) + L" / " + convertIntToDotString(maxValue));
}

CharStatBarObject::~CharStatBarObject() {
  if (text) {
    delete text;
    global->logFree("statbar|text");
  }
}
