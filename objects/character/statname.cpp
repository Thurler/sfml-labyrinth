#include "statname.h"

const sf::Color CharStatNameObject::colorText = sf::Color::White;

void CharStatNameObject::draw(sf::RenderWindow *window) {
  BarObject::draw(window);
  textSub->draw(window);
  textMain->draw(window);
}

CharStatNameObject::CharStatNameObject(
  GlobalValues *global, const sf::Vector2f &p, const sf::Color &color,
  const sf::Vector2f &textOffsetMain, const sf::Vector2f &textOffsetSub,
  const std::wstring &main, const std::wstring &sub
) : BarObject(global, p, color, color, width, height, 1, 1) {
  sf::Vector2f textPositionMain = position + textOffsetMain;
  sf::Vector2f textPositionSub = position + textOffsetSub;
  textMain = new TextObject(global, textPositionMain, colorText, 14, true, textAlign);
  textSub = new TextObject(global, textPositionSub, colorText, 12, true, textAlign);
  global->logMalloc("statbar|textMain");
  global->logMalloc("statbar|textSub");
  textMain->setContent(main);
  textSub->setContent(sub);
}

CharStatNameObject::~CharStatNameObject() {
  if (textMain) {
    delete textMain;
    global->logFree("statbar|textMain");
  }
  if (textSub) {
    delete textSub;
    global->logFree("statbar|textSub");
  }
}
