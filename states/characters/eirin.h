#ifndef STATE_CHAR_EIRIN_H
#define STATE_CHAR_EIRIN_H

#include "common.h"

class EirinCharacter: public CommonCharacter {
  private:
    static const BaseStats bases;
    static const GrowthStats growths;

  public:
    EirinCharacter() : CommonCharacter(L"永琳", "./img/Chara_Eirin", bases, growths) {}
    ~EirinCharacter() {}
};

#endif
