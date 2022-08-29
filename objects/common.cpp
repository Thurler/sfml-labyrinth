#include "common.h"
#include "math.h"

std::wstring CommonObject::convertIntToDotString(unsigned long long value) {
  std::wstring raw = std::to_wstring(value);
  unsigned int dots = raw.length() / 3;
  unsigned int index = raw.length() % 3;
  if (index == 0) {
    index = 3;
    dots -= 1;
  }
  for (unsigned int i = 0; i < dots; i++) {
    raw.insert(index, L",");
    index += 4;
  }
  return raw;
}

sf::Vector2f CommonObject::alignPosition(
  const sf::Vector2f &position, const sf::FloatRect &bounds, Alignment align
) {
  switch(align) {
    case Alignment::TopLeft:
      return position;
    case Alignment::TopCenter:
      return sf::Vector2f(position.x - (bounds.width/2), position.y);
    case Alignment::TopRight:
      return sf::Vector2f(position.x - bounds.width, position.y);
    case Alignment::CenterLeft:
      return sf::Vector2f(position.x, position.y - (bounds.height/2));
    case Alignment::CenterCenter:
      return sf::Vector2f(position.x - (bounds.width/2), position.y - (bounds.height/2));
    case Alignment::CenterRight:
      return sf::Vector2f(position.x - bounds.width, position.y - (bounds.height/2));
    case Alignment::BottomLeft:
      return sf::Vector2f(position.x, position.y - bounds.height);
    case Alignment::BottomCenter:
      return sf::Vector2f(position.x - (bounds.width/2), position.y - bounds.height);
    case Alignment::BottomRight:
      return sf::Vector2f(position.x - bounds.width, position.y - bounds.height);
  }
  return position;
}
