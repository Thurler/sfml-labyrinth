#ifndef STATE_CHAR_YUKARI_H
#define STATE_CHAR_YUKARI_H

#include "common.h"

class YukariCharacter: public CommonCharacter {
  private:
    static const BaseStats bases;
    static const GrowthStats growths;

  public:
    YukariCharacter() : CommonCharacter(L"紫", "./img/Chara_Yukari", bases, growths) {}
    ~YukariCharacter() {}
};

#endif
