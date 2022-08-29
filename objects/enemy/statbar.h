#ifndef OBJ_ENEMY_STATBAR_H
#define OBJ_ENEMY_STATBAR_H

#include <SFML/Graphics.hpp>

#include "../bar.h"
#include "../text.h"

class EnemyStatBarObject: public BarObject {
  public:
    static constexpr unsigned int width = 150;
    static constexpr unsigned int height = 12;
  private:
    static constexpr float skewOffset = height / skewTan;
    static const sf::Color colorBackground;
    static const sf::Color color;

  public:
    EnemyStatBarObject(
      GlobalValues *g, const sf::Vector2f &p, unsigned long long sv, unsigned long long mv
    ) : BarObject(g, p, color, colorBackground, width, height, sv, mv) {}
    ~EnemyStatBarObject() {}

    float getSkewOffset() { return skewOffset; }
};

#endif
