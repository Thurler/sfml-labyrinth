#ifndef STATE_ENEMY_H
#define STATE_ENEMY_H

#include <SFML/Graphics.hpp>

#include "common.h"
#include "../objects/enemy/atbbar.h"
#include "../objects/enemy/statbar.h"
#include "../objects/enemy/namebar.h"
#include "../objects/text.h"
#include "../objects/sprite.h"

class EnemyState: public CommonState {
  private:
    static const sf::Vector2f nameOffset;
    static const sf::Vector2f atbOffset;
    static const sf::Vector2f hpOffset;
    sf::Vector2f position;
    EnemyATBBarObject *atbBar;
    EnemyStatBarObject *hpBar;
    EnemyNameBarObject *nameBar;
    SpriteObject *face;
    Slot slot;

  public:
    EnemyState(GlobalValues *g, Slot s);
    ~EnemyState();

    void update();
    void draw(sf::RenderWindow *w);

    bool isAtbFilled() { return !atbBar->getActiveIncrement(); }
    unsigned int getAtbValue() { return atbBar->getValue(); }
    void setAtbActive(bool a) { atbBar->setActiveIncrement(a); }
    void setAtbValue(unsigned int v);
};

#endif
