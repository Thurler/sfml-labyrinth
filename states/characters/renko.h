#ifndef STATE_CHAR_RENKO_H
#define STATE_CHAR_RENKO_H

#include "common.h"

class RenkoCharacter: public CommonCharacter {
  private:
    static const BaseStats bases;
    static const GrowthStats growths;

  public:
    RenkoCharacter() : CommonCharacter(L"蓮子", "./img/Chara_Renko", bases, growths) {}
    ~RenkoCharacter() {}
};

#endif
