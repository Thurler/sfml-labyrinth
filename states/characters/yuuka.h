#ifndef STATE_CHAR_YUUKA_H
#define STATE_CHAR_YUUKA_H

#include "common.h"

class YuukaCharacter: public CommonCharacter {
  private:
    static const BaseStats bases;
    static const GrowthStats growths;

  public:
    YuukaCharacter() : CommonCharacter(L"幽香", "./img/Chara_Yuuka", bases, growths) {}
    ~YuukaCharacter() {}
};

#endif
