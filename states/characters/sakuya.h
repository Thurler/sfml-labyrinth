#ifndef STATE_CHAR_SAKUYA_H
#define STATE_CHAR_SAKUYA_H

#include "common.h"

class SakuyaCharacter: public CommonCharacter {
  private:
    static const BaseStats bases;
    static const GrowthStats growths;

  public:
    SakuyaCharacter() : CommonCharacter(L"咲夜", "./img/Chara_Sakuya", bases, growths) {}
    ~SakuyaCharacter() {}
};

#endif
