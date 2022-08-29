#include "unit.h"

void UnitState::setAtbValue(unsigned int value) {
  atbBar->setValue(value);
}

void UnitState::update() {
  atbBar->update();
}
