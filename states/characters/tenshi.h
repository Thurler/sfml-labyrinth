#ifndef STATE_CHAR_TENSHI_H
#define STATE_CHAR_TENSHI_H

#include "common.h"

class TenshiCharacter: public CommonCharacter {
  private:
    static const BaseStats bases;
    static const GrowthStats growths;

  public:
    TenshiCharacter() : CommonCharacter(L"天子", "./img/Chara_Tenko", bases, growths) {}
    ~TenshiCharacter() {}
};

#endif
