#ifndef STATE_CHAR_MYSTIA_H
#define STATE_CHAR_MYSTIA_H

#include "common.h"

class MystiaCharacter: public CommonCharacter {
  private:
    static const BaseStats bases;
    static const GrowthStats growths;

  public:
    MystiaCharacter() : CommonCharacter(L"ミスティア", "./img/Chara_Mystia", bases, growths) {}
    ~MystiaCharacter() {}
};

#endif
