#ifndef STATE_CHAR_REISEN_H
#define STATE_CHAR_REISEN_H

#include "common.h"

class ReisenCharacter: public CommonCharacter {
  private:
    static const BaseStats bases;
    static const GrowthStats growths;

  public:
    ReisenCharacter() : CommonCharacter(L"鈴仙", "./img/Chara_Udonge", bases, growths) {}
    ~ReisenCharacter() {}
};

#endif
