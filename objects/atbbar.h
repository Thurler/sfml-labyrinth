#ifndef OBJ_ATBBAR_H
#define OBJ_ATBBAR_H

#include <SFML/Graphics.hpp>

#include "stringbar.h"
#include "bar.h"

class ATBBarObject: public BarObject {
  public:
    static constexpr unsigned int limit = 10000;
  private:
    static const sf::Color colorBackground;
    static const sf::Color colorText;
    static const sf::Color color;
    unsigned int tickRate;
    StringBarObject *text;
    bool activeIncrement = true;

  public:
    ATBBarObject(
      GlobalValues *g, const sf::Vector2f &p, const sf::Vector2f &bo, const sf::Vector2f &to,
      unsigned int sv, unsigned int t, unsigned int w, unsigned int h, Alignment a
    );
    virtual ~ATBBarObject();

    void update();
    void draw(sf::RenderWindow *w);

    bool isFilled() { return curValue >= limit; }
    bool getActiveIncrement() { return activeIncrement; }
    void setActiveIncrement(bool a) { activeIncrement = a; }
    void setValue(unsigned long long c);
};

#endif
