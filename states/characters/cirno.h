#ifndef STATE_CHAR_CIRNO_H
#define STATE_CHAR_CIRNO_H

#include "common.h"

class CirnoCharacter: public CommonCharacter {
  private:
    static const BaseStats bases;
    static const GrowthStats growths;

  public:
    CirnoCharacter() : CommonCharacter(L"チルノ", "./img/Chara_Cirno", bases, growths) {}
    ~CirnoCharacter() {}
};

#endif
