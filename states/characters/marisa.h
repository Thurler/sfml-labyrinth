#ifndef STATE_CHAR_MARISA_H
#define STATE_CHAR_MARISA_H

#include "common.h"

class MarisaCharacter: public CommonCharacter {
  private:
    static const BaseStats bases;
    static const GrowthStats growths;

  public:
    MarisaCharacter() : CommonCharacter(L"魔理沙", "./img/Chara_Marisa", bases, growths) {}
    ~MarisaCharacter() {}
};

#endif
