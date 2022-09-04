#ifndef STATE_CHARACTER_H
#define STATE_CHARACTER_H

#include <SFML/Graphics.hpp>

#include "unit.h"
#include "../../objects/character/atbbar.h"
#include "../../objects/character/statbar.h"
#include "../../objects/character/statname.h"
#include "../../objects/character/tpbar.h"
#include "../../objects/character/namebar.h"
#include "../characters/common.h"

class CharacterState: public UnitState {
  private:
    static const sf::Vector2f atbOffset;
    static const sf::Vector2f hpOffset;
    static const sf::Vector2f hpLabelOffset;
    static const sf::Vector2f hpLabelOffsetMain;
    static const sf::Vector2f hpLabelOffsetSub;
    static const sf::Vector2f mpOffset;
    static const sf::Vector2f mpLabelOffset;
    static const sf::Vector2f mpLabelOffsetMain;
    static const sf::Vector2f mpLabelOffsetSub;
    static const sf::Vector2f tpOffset;
    static const sf::Vector2f faceOffset;
    static const sf::Vector2f borderOffset;
    static const sf::Color hpBackgorund;
    static const sf::Color mpBackgorund;
    static const sf::Color hpForegorund;
    static const sf::Color mpForegorund;
    CharStatBarObject *hpBar;
    CharStatNameObject *hpLabel;
    CharStatBarObject *mpBar;
    CharStatNameObject *mpLabel;
    CharNameBarObject *nameBar;
    TPBarObject *tpBar;

  public:
    CharacterState(GlobalValues *g, Slot s, CommonCharacter *c);
    ~CharacterState();

    void draw(sf::RenderWindow *w);
};

#endif
