#ifndef STATE_CHAR_UTSUHO_H
#define STATE_CHAR_UTSUHO_H

#include "common.h"

class UtsuhoCharacter: public CommonCharacter {
  private:
    static const BaseStats bases;
    static const GrowthStats growths;

  public:
    UtsuhoCharacter() : CommonCharacter(L"空", "./img/Chara_Utsuho", bases, growths) {}
    ~UtsuhoCharacter() {}
};

#endif
