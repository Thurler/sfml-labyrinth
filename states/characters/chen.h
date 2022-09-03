#ifndef STATE_CHAR_CHEN_H
#define STATE_CHAR_CHEN_H

#include "common.h"

class ChenCharacter: public CommonCharacter {
  private:
    static const BaseStats bases;
    static const GrowthStats growths;

  public:
    ChenCharacter() : CommonCharacter(L"橙", "./img/Chara_Chen", bases, growths) {}
    ~ChenCharacter() {}
};

#endif
