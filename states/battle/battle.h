#ifndef STATE_TEST_H
#define STATE_TEST_H

#include <SFML/Graphics.hpp>
#include "math.h"

#include "character.h"
#include "enemy.h"
#include "unit.h"
#include "../common.h"
#include "../../objects/sprite.h"
#include "../../objects/shadedsprite.h"

enum BattleMode {
  IDLE = 0,
  PLAYER_TURN,
  PLAYER_SPELL,
  ENEMY_SPELL
};

class BattleState: public CommonState {
  private:
    // General members
    static const unsigned int playerSlots = 4;
    static const unsigned int enemySlots = 8;
    CharacterState *characters[playerSlots];
    EnemyState *enemies[enemySlots];
    // Input members
    bool previousConfirm = false;
    // Graohics members
    ShadedSpriteObject *background;
    SpriteObject *panorama;
    // State-related members
    BattleMode state = BattleMode::IDLE;
    UnitState *turnTarget = NULL;

    bool checkActiveATBs();
    bool cmpMaxATB(UnitState *unit, unsigned int maxAtb);
    void setIncrementATBs(bool v);

  public:
    BattleState(GlobalValues *g);
    ~BattleState();

    void update();
    void draw(sf::RenderWindow *w);
};

#endif
