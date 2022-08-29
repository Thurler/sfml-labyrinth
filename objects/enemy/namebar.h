#ifndef OBJ_ENEMY_NAMEBAR_H
#define OBJ_ENEMY_NAMEBAR_H

#include <SFML/Graphics.hpp>

#include "../stringbar.h"
#include "../text.h"

class EnemyNameBarObject: public StringBarObject {
  public:
    static constexpr unsigned int height = 25;
  private:
    static constexpr Alignment textAlign = Alignment::TopCenter;
    static constexpr float skewOffset = height / skewTan;
    static const sf::Vector2f textOffset;

  public:
    EnemyNameBarObject(
      GlobalValues *g, const sf::Vector2f &p, const std::wstring &v
    );
    ~EnemyNameBarObject() {}

    float getSkewOffset() { return skewOffset; }
};

#endif
