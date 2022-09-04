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
  }
}

void UnitState::draw(sf::RenderWindow *w) {
  face->setShaderArg("opacity", highlightValue);
}

void UnitState::setHighlight(bool hl) {
  face->setShaderActive(hl);
  highlighted = hl;
  if (!highlighted) {
    highlightValue = 0;
    highlightCycle = true;
  }
}
