#ifndef OBJ_COMMON_H
#define OBJ_COMMON_H

#include <SFML/Graphics.hpp>
#include "../global.h"

enum Slot {
  PLAYER_1 = 0,
  PLAYER_2,
  PLAYER_3,
  PLAYER_4,
  PLAYER_5,
  PLAYER_6,
  PLAYER_7,
  PLAYER_8,
  PLAYER_9,
  PLAYER_10,
  PLAYER_11,
  PLAYER_12,
  ENEMY_1,
  ENEMY_2,
  ENEMY_3,
  ENEMY_4,
  ENEMY_5,
  ENEMY_6,
  ENEMY_7,
  ENEMY_8,
};

enum Alignment {
  TopLeft = 0,
  TopCenter,
  TopRight,
  CenterLeft,
  CenterCenter,
  CenterRight,
  BottomLeft,
  BottomCenter,
  BottomRight
};

class CommonObject {
  protected:
    GlobalValues *global = NULL;

    CommonObject(GlobalValues *g) : global(g) {}
    ~CommonObject() {}

    std::wstring convertIntToDotString(unsigned long long v);
    sf::Vector2f alignPosition(const sf::Vector2f &p, const sf::FloatRect &b, Alignment a);

  public:
    virtual void update() = 0;
    virtual void draw(sf::RenderWindow *w) = 0;
};

#endif
