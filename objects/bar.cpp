#include "bar.h"

void BarObject::drawAtPosition(sf::ConvexShape *fullBar, sf::ConvexShape *bar) {
  float fill = 1.0 * curValue / maxValue;
  if (fill > 1) {
    fill = 1;
  }
  float fillWidth = fill * width;
  if (fillWidth < 1 && curValue > 0) {
    fillWidth = 1; // Make sure 1 pixel is visible for non-zero values
  }
  float skewShift = getSkewOffset();

  fullBar->setPointCount(4);
  fullBar->setPoint(0, sf::Vector2f(0, 0));
  fullBar->setPoint(1, sf::Vector2f(width, 0));
  fullBar->setPoint(2, sf::Vector2f(width + skewShift, height));
  fullBar->setPoint(3, sf::Vector2f(skewShift, height));
  fullBar->setPosition(position);
  fullBar->setTexture(global->shadeTexture->getTexture());
  fullBar->setOutlineColor(sf::Color(0, 0, 0, 200));
  fullBar->setOutlineThickness(1);
  fullBar->setFillColor(colorBackground);

  bar->setPointCount(4);
  bar->setPoint(0, sf::Vector2f(0, 0));
  bar->setPoint(1, sf::Vector2f(fillWidth, 0));
  bar->setPoint(2, sf::Vector2f(fillWidth + skewShift, height));
  bar->setPoint(3, sf::Vector2f(skewShift, height));
  bar->setPosition(position);
  bar->setTexture(global->shadeTexture->getTexture());
  bar->setOutlineColor(sf::Color(0, 0, 0, 200));
  bar->setOutlineThickness(1);
  bar->setFillColor(color);
}

void BarObject::draw(sf::RenderWindow *window) {
  sf::ConvexShape fullBar;
  sf::ConvexShape bar;
  drawAtPosition(&fullBar, &bar);
  window->draw(fullBar);
  window->draw(bar);
}
