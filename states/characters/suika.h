#ifndef STATE_CHAR_SUIKA_H
#define STATE_CHAR_SUIKA_H

#include "common.h"

class SuikaCharacter: public CommonCharacter {
  private:
    static const BaseStats bases;
    static const GrowthStats growths;

  public:
    SuikaCharacter() : CommonCharacter(L"萃香", "./img/Chara_Suika", bases, growths) {}
    ~SuikaCharacter() {}
};

#endif
