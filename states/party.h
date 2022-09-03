#ifndef STATE_PARTY_H
#define STATE_PARTY_H

#include "common.h"
#include "characters/alice.h"

class PartyState: public CommonState {
  private:
    CommonCharacter characters[40] = {
      AliceCharacter(), AliceCharacter(), AliceCharacter(), AliceCharacter(),
      AliceCharacter(), AliceCharacter(), AliceCharacter(), AliceCharacter(),
      AliceCharacter(), AliceCharacter(), AliceCharacter(), AliceCharacter(),
      AliceCharacter(), AliceCharacter(), AliceCharacter(), AliceCharacter(),
      AliceCharacter(), AliceCharacter(), AliceCharacter(), AliceCharacter(),
      AliceCharacter(), AliceCharacter(), AliceCharacter(), AliceCharacter(),
      AliceCharacter(), AliceCharacter(), AliceCharacter(), AliceCharacter(),
      AliceCharacter(), AliceCharacter(), AliceCharacter(), AliceCharacter(),
      AliceCharacter(), AliceCharacter(), AliceCharacter(), AliceCharacter(),
      AliceCharacter(), AliceCharacter(), AliceCharacter(), AliceCharacter()
    };

  public:
    PartyState(GlobalValues *g) : CommonState(g) {}
    ~PartyState() {}

    void update() {}
    void draw(sf::RenderWindow *w) {}
    CommonCharacter *getCharacter() { return characters; }
};

#endif
