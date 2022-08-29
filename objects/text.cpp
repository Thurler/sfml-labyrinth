#include "text.h"

float TextObject::getContentWidth() {
  return text.getLocalBounds().width;
}

void TextObject::alignPosition() {
  sf::FloatRect bounds = text.getLocalBounds();
  sf::Vector2f alignedPos = CommonObject::alignPosition(position, bounds, align);
  text.setPosition(sf::Vector2f((int)alignedPos.x, (int)alignedPos.y));
}

void TextObject::setPosition(const sf::Vector2f &p) {
  position = p;
  alignPosition();
}

void TextObject::setContent(const std::wstring &c) {
  content = c;
  text.setString(c);
  alignPosition();
}

void TextObject::draw(sf::RenderWindow *window) {
  if (content == L"") return;
  window->draw(text);
}

TextObject::TextObject(
  GlobalValues *g, const sf::Vector2f &p, sf::Color c, unsigned int s, bool b, Alignment a
) : position(p), align(a), CommonObject(g) {
  sf::Font *font = (g->getFont());
  if (!b) {
    const_cast<sf::Texture &>(font->getTexture(s)).setSmooth(false);
  }
  text.setFont(*font);
  text.setCharacterSize(s);
  text.setFillColor(c);
  text.setOutlineColor(sf::Color(40, 40, 40, 200));
  text.setOutlineThickness(1);
  if (b) {
    text.setStyle(sf::Text::Bold);
  }
}
