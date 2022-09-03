#ifndef STATE_CHAR_REIMU_H
#define STATE_CHAR_REIMU_H

#include "common.h"

class ReimuCharacter: public CommonCharacter {
  private:
    static const BaseStats bases;
    static const GrowthStats growths;

  public:
    ReimuCharacter() : CommonCharacter(L"霊夢", "./img/Chara_Reimu", bases, growths) {}
    ~ReimuCharacter() {}
};

#endif
