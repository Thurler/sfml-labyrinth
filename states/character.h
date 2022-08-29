#ifndef STATE_CHARACTER_H
#define STATE_CHARACTER_H

#include <SFML/Graphics.hpp>

#include "common.h"
#include "../objects/character/atbbar.h"
#include "../objects/character/statbar.h"
#include "../objects/character/tpbar.h"
#include "../objects/character/namebar.h"
#include "../objects/sprite.h"

class CharacterState: public CommonState {
  private:
    static const sf::Vector2f atbOffset;
    static const sf::Vector2f hpOffset;
    static const sf::Vector2f mpOffset;
    static const sf::Vector2f tpOffset;
    static const sf::Vector2f faceOffset;
    static const sf::Vector2f borderOffset;
    sf::Vector2f position;
    CharATBBarObject *atbBar;
    CharStatBarObject *hpBar;
    CharStatBarObject *mpBar;
    CharNameBarObject *nameBar;
    TPBarObject *tpBar;
    SpriteObject *face;
    Slot slot;

  public:
    CharacterState(GlobalValues *g, Slot s);
    ~CharacterState();

    void update();
    void draw(sf::RenderWindow *w);
    void setAtbValue(unsigned int v);
};

#endif
