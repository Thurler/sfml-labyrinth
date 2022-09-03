#ifndef STATE_CHAR_RINNOSUKE_H
#define STATE_CHAR_RINNOSUKE_H

#include "common.h"

class RinnosukeCharacter: public CommonCharacter {
  private:
    static const BaseStats bases;
    static const GrowthStats growths;

  public:
    RinnosukeCharacter() : CommonCharacter(L"霖之助", "./img/Chara_KourinB", bases, growths) {}
    ~RinnosukeCharacter() {}
};

#endif
