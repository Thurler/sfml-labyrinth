#ifndef STATE_CHAR_RIN_H
#define STATE_CHAR_RIN_H

#include "common.h"

class RinCharacter: public CommonCharacter {
  private:
    static const BaseStats bases;
    static const GrowthStats growths;

  public:
    RinCharacter() : CommonCharacter(L"燐", "./img/Chara_Rin", bases, growths) {}
    ~RinCharacter() {}
};

#endif
