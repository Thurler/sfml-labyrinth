#ifndef STATE_CHAR_RUMIA_H
#define STATE_CHAR_RUMIA_H

#include "common.h"

class RumiaCharacter: public CommonCharacter {
  private:
    static const BaseStats bases;
    static const GrowthStats growths;

  public:
    RumiaCharacter() : CommonCharacter(L"ルーミア", "./img/Chara_Rumia", bases, growths) {}
    ~RumiaCharacter() {}
};

#endif
