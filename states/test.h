#ifndef STATE_TEST_H
#define STATE_TEST_H

#include <SFML/Graphics.hpp>
#include "math.h"

#include "common.h"
#include "character.h"
#include "enemy.h"
#include "../objects/sprite.h"
#include "../objects/shadedsprite.h"

class TestState: public CommonState {
  private:
    static const unsigned int playerSlots = 4;
    static const unsigned int enemySlots = 8;
    CharacterState *characters[playerSlots];
    EnemyState *enemies[enemySlots];
    bool previousConfirm = false;
    ShadedSpriteObject *background;
    SpriteObject *panorama;

  public:
    TestState(GlobalValues *g);
    ~TestState();

    void update();
    void draw(sf::RenderWindow *w);
};

#endif
