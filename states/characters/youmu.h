#ifndef STATE_CHAR_YOUMU_H
#define STATE_CHAR_YOUMU_H

#include "common.h"

class YoumuCharacter: public CommonCharacter {
  private:
    static const BaseStats bases;
    static const GrowthStats growths;

  public:
    YoumuCharacter() : CommonCharacter(L"妖夢", "./img/Chara_Youmu", bases, growths) {}
    ~YoumuCharacter() {}
};

#endif
