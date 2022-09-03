#ifndef STATE_CHAR_SHIKIEIKI_H
#define STATE_CHAR_SHIKIEIKI_H

#include "common.h"

class ShikieikiCharacter: public CommonCharacter {
  private:
    static const BaseStats bases;
    static const GrowthStats growths;

  public:
    ShikieikiCharacter() : CommonCharacter(L"映姫", "./img/Chara_Eiki", bases, growths) {}
    ~ShikieikiCharacter() {}
};

#endif
