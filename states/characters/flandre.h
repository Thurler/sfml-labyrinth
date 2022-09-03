#ifndef STATE_CHAR_FLANDRE_H
#define STATE_CHAR_FLANDRE_H

#include "common.h"

class FlandreCharacter: public CommonCharacter {
  private:
    static const BaseStats bases;
    static const GrowthStats growths;

  public:
    FlandreCharacter() : CommonCharacter(L"フランドール", "./img/Chara_Flandre", bases, growths) {}
    ~FlandreCharacter() {}
};

#endif
