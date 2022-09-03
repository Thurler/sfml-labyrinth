#ifndef STATE_CHAR_RAN_H
#define STATE_CHAR_RAN_H

#include "common.h"

class RanCharacter: public CommonCharacter {
  private:
    static const BaseStats bases;
    static const GrowthStats growths;

  public:
    RanCharacter() : CommonCharacter(L"藍", "./img/Chara_Ran", bases, growths) {}
    ~RanCharacter() {}
};

#endif
