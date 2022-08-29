#ifndef STATE_ENEMY_H
#define STATE_ENEMY_H

#include <SFML/Graphics.hpp>

#include "unit.h"
#include "../objects/enemy/atbbar.h"
#include "../objects/enemy/statbar.h"
#include "../objects/enemy/namebar.h"

class EnemyState: public UnitState {
  private:
    static const sf::Vector2f nameOffset;
    static const sf::Vector2f atbOffset;
    static const sf::Vector2f hpOffset;
    EnemyStatBarObject *hpBar;
    EnemyNameBarObject *nameBar;

  public:
    EnemyState(GlobalValues *g, Slot s);
    ~EnemyState();

    void draw(sf::RenderWindow *w);
};

#endif
