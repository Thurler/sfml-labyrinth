#ifndef STATE_CHAR_MOKOU_H
#define STATE_CHAR_MOKOU_H

#include "common.h"

class MokouCharacter: public CommonCharacter {
  private:
    static const BaseStats bases;
    static const GrowthStats growths;

  public:
    MokouCharacter() : CommonCharacter(L"妹紅", "./img/Chara_Mokou", bases, growths) {}
    ~MokouCharacter() {}
};

#endif
