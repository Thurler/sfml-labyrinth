#ifndef STATE_CHAR_MINORIKO_H
#define STATE_CHAR_MINORIKO_H

#include "common.h"

class MinorikoCharacter: public CommonCharacter {
  private:
    static const BaseStats bases;
    static const GrowthStats growths;

  public:
    MinorikoCharacter() : CommonCharacter(L"穣子", "./img/Chara_Minoriko", bases, growths) {}
    ~MinorikoCharacter() {}
};

#endif
