#include "tpbar.h"

const sf::Vector2f TPBarObject::barOffset = sf::Vector2f(-57, -88);
const sf::Vector2f TPBarObject::textOffset = sf::Vector2f(10, 0);
const sf::Color TPBarObject::color = sf::Color::White;
const sf::Color TPBarObject::colorBackground = sf::Color(120, 120, 120);
const sf::Color TPBarObject::colorText = sf::Color::White;

void TPBarObject::rotateToPosition(sf::ConvexShape *shape) {
  shape->scale(-1/skewSin, 1);
  shape->rotate(60);
  shape->move(getSkewOffset(), height);
}

void TPBarObject::draw(sf::RenderWindow *window) {
  sf::ConvexShape fullBar;
  sf::ConvexShape bar;
  drawAtPosition(&fullBar, &bar);
  rotateToPosition(&fullBar);
  rotateToPosition(&bar);
  window->draw(fullBar);
  window->draw(bar);
  text->draw(window);
}

TPBarObject::TPBarObject(
  GlobalValues *global, const sf::Vector2f &position,
  unsigned long long startingValue, unsigned long long capValue
) : BarObject(
  global, position, color, colorBackground, width, height, startingValue, capValue
) {
  std::wstring value = std::to_wstring(curValue) + L" TP";
  text = new StringBarObject(
    global, position + barOffset, textOffset, 50, 14, 12, true, textAlign, value
  );
  global->logMalloc("tpbar|text");
}

TPBarObject::~TPBarObject() {
  if (text) {
    delete text;
    global->logFree("tpbar|text");
  }
}
