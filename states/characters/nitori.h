#ifndef STATE_CHAR_NITORI_H
#define STATE_CHAR_NITORI_H

#include "common.h"

class NitoriCharacter: public CommonCharacter {
  private:
    static const BaseStats bases;
    static const GrowthStats growths;

  public:
    NitoriCharacter() : CommonCharacter(L"にとり", "./img/Chara_Nitori", bases, growths) {}
    ~NitoriCharacter() {}
};

#endif
