#ifndef STATE_CHAR_AYA_H
#define STATE_CHAR_AYA_H

#include "common.h"

class AyaCharacter: public CommonCharacter {
  private:
    static const BaseStats bases;
    static const GrowthStats growths;

  public:
    AyaCharacter() : CommonCharacter(L"文", "./img/Chara_Aya", bases, growths) {}
    ~AyaCharacter() {}
};

#endif
