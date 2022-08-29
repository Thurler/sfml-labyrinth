#include "namebar.h"

const sf::Vector2f EnemyNameBarObject::textOffset = sf::Vector2f(81, 1);

EnemyNameBarObject::EnemyNameBarObject(
  GlobalValues *global, const sf::Vector2f &pos, const std::wstring &value
) : StringBarObject(global, pos, textOffset, 150, height, 18, false, textAlign, value) {
  float textWidth = text->getContentWidth() + 30;
  if (textWidth > width) {
    float extraWidth = textWidth - width;
    width = textWidth;
    position = position - sf::Vector2f(extraWidth/2, 0);
    text->setPosition(position + textOffset + sf::Vector2f(extraWidth/2, 0));
  }
}
