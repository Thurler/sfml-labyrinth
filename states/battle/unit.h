#ifndef STATE_UNIT_H
#define STATE_UNIT_H

#include <SFML/Graphics.hpp>

#include "../common.h"
#include "../../objects/atbbar.h"
#include "../../objects/sprite.h"

struct UnitStats {
  unsigned int level;
  unsigned long long hp;
  unsigned long long maxHP;
  unsigned int hpRec;
  unsigned long long mp;
  unsigned long long maxMP;
  unsigned int mpRec;
  unsigned int tp;
  unsigned long long atk;
  unsigned long long def;
  unsigned long long mag;
  unsigned long long mnd;
  unsigned long long spd;
  unsigned int acc;
  unsigned int eva;
  unsigned int fir;
  unsigned int cld;
  unsigned int wnd;
  unsigned int ntr;
  unsigned int drk;
  unsigned int spi;
  unsigned int mys;
  unsigned int phy;
  unsigned int psn;
  unsigned int par;
  unsigned int sil;
  unsigned int dth;
  unsigned int dbf;
};

class UnitState: public CommonState {
  protected:
    static constexpr unsigned int highlightDuration = 30;
    static constexpr unsigned int highlightLimit = 255;
    static constexpr float highlightIncrement = (float)highlightLimit / highlightDuration;
    sf::Vector2f position;
    ATBBarObject *atbBar;
    SpriteObject *faceHL;
    SpriteObject *face;
    UnitStats stats;
    Slot slot;
    bool highlighted = false;
    bool highlightCycle = true;
    float highlightValue = 0;

  public:
    UnitState(GlobalValues *global, Slot s) : slot(s), CommonState(global) {}
    virtual ~UnitState() {}

    void update();

    bool isEnemy() { return slot > Slot::PLAYER_12; }
    bool isAtbFilled() { return atbBar->isFilled(); }
    unsigned int getAtbValue() { return atbBar->getValue(); }
    void setAtbActive(bool a) { atbBar->setActiveIncrement(a); }
    void setAtbValue(unsigned int v) { atbBar->setValue(v); }
    void setHighlight(bool hl);
};

#endif
