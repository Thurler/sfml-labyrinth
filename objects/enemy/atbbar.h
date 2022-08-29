#ifndef OBJ_ENEMY_ATBBAR_H
#define OBJ_ENEMY_ATBBAR_H

#include <SFML/Graphics.hpp>

#include "../atbbar.h"
#include "../text.h"

class EnemyATBBarObject: public ATBBarObject {
  public:
    static constexpr unsigned int width = 80;
    static constexpr unsigned int height = 14;
  private:
    static constexpr float skewOffset = height / skewTan;
    static constexpr Alignment textAlign = Alignment::TopLeft;
    static const sf::Vector2f barOffset;
    static const sf::Vector2f textOffset;

  public:
    EnemyATBBarObject(
      GlobalValues *g, const sf::Vector2f &p, unsigned int sv, unsigned int t
    ) : ATBBarObject(g, p, barOffset, textOffset, sv, t, width, height, textAlign) {}

    float getSkewOffset() { return skewOffset; }
};

#endif
