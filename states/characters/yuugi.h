#ifndef STATE_CHAR_YUUGI_H
#define STATE_CHAR_YUUGI_H

#include "common.h"

class YuugiCharacter: public CommonCharacter {
  private:
    static const BaseStats bases;
    static const GrowthStats growths;

  public:
    YuugiCharacter() : CommonCharacter(L"勇儀", "./img/Chara_Yuugi", bases, growths) {}
    ~YuugiCharacter() {}
};

#endif
