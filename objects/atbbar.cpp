#include "atbbar.h"

const sf::Color ATBBarObject::color = sf::Color::White;
const sf::Color ATBBarObject::colorText = sf::Color::White;
const sf::Color ATBBarObject::colorBackground = sf::Color(120, 120, 120);


void ATBBarObject::setValue(unsigned long long c) {
  BarObject::setValue(c);
  text->setContent(std::to_wstring(curValue));
}

void ATBBarObject::update() {
  if (!activeIncrement) return;
  curValue += tickRate;
  setValue(curValue);
  if (curValue >= limit) {
    activeIncrement = false;
  }
}

void ATBBarObject::draw(sf::RenderWindow *window) {
  BarObject::draw(window);
  text->draw(window);
}

ATBBarObject::ATBBarObject(
  GlobalValues *global, const sf::Vector2f &position,
  const sf::Vector2f &barOffset, const sf::Vector2f &textOffset,
  unsigned int startingValue, unsigned int a_tickRate,
  unsigned int width, unsigned int height, Alignment textAlign
) : BarObject(
  global, position, color, colorBackground, width, height, startingValue, limit
) {
  tickRate = a_tickRate;
  text = new StringBarObject(
    global, position + barOffset, textOffset, 50, 14, 12, true, textAlign, L""
  );
  global->logMalloc("atb|text");
}

ATBBarObject::~ATBBarObject() {
  if (text) {
    delete text;
    global->logFree("atb|text");
  }
}
