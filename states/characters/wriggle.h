#ifndef STATE_CHAR_WRIGGLE_H
#define STATE_CHAR_WRIGGLE_H

#include "common.h"

class WriggleCharacter: public CommonCharacter {
  private:
    static const BaseStats bases;
    static const GrowthStats growths;

  public:
    WriggleCharacter() : CommonCharacter(L"リグル", "./img/Chara_Wriggle", bases, growths) {}
    ~WriggleCharacter() {}
};

#endif
