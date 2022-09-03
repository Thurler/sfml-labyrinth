#ifndef STATE_CHAR_YUYUKO_H
#define STATE_CHAR_YUYUKO_H

#include "common.h"

class YuyukoCharacter: public CommonCharacter {
  private:
    static const BaseStats bases;
    static const GrowthStats growths;

  public:
    YuyukoCharacter() : CommonCharacter(L"幽々子", "./img/Chara_Yuyuko", bases, growths) {}
    ~YuyukoCharacter() {}
};

#endif
