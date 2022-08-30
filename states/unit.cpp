#include "unit.h"

void UnitState::update() {
  atbBar->update();
  // If highlighted, update highlight values
  if (highlighted) {
    if (highlightCycle) {
      highlightValue += highlightIncrement;
      if (highlightValue > highlightLimit) {
        highlightValue = highlightLimit;
        highlightCycle = false;
      }
    } else {
      highlightValue -= highlightIncrement;
      if (highlightValue < 0) {
        highlightValue = 0;
        highlightCycle = true;
      }
    }
    sf::Color color = sf::Color(255, 255, 255, highlightValue);
    faceHL->setColor(color);
  }
}

void UnitState::setHighlight(bool hl) {
  highlighted = hl;
  if (!highlighted) {
    highlightValue = 0;
    highlightCycle = true;
    faceHL->setColor(sf::Color::Transparent);
  }
}
