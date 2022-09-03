#ifndef STATE_CHAR_KEINE_H
#define STATE_CHAR_KEINE_H

#include "common.h"

class KeineCharacter: public CommonCharacter {
  private:
    static const BaseStats bases;
    static const GrowthStats growths;

  public:
    KeineCharacter() : CommonCharacter(L"慧音", "./img/Chara_Keine", bases, growths) {}
    ~KeineCharacter() {}
};

#endif
