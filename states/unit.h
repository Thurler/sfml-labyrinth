#ifndef STATE_UNIT_H
#define STATE_UNIT_H

#include <SFML/Graphics.hpp>

#include "common.h"
#include "../objects/atbbar.h"
#include "../objects/sprite.h"

class UnitState: public CommonState {
  protected:
    sf::Vector2f position;
    ATBBarObject *atbBar;
    SpriteObject *face;
    Slot slot;

  public:
    UnitState(GlobalValues *global) : CommonState(global) {}
    virtual ~UnitState() {}

    void update();

    bool isEnemy() { return slot > Slot::PLAYER_12; }
    bool isAtbFilled() { return atbBar->isFilled(); }
    unsigned int getAtbValue() { return atbBar->getValue(); }
    void setAtbActive(bool a) { atbBar->setActiveIncrement(a); }
    void setAtbValue(unsigned int v);
};

#endif
