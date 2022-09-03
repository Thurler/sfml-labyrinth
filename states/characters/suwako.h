#ifndef STATE_CHAR_SUWAKO_H
#define STATE_CHAR_SUWAKO_H

#include "common.h"

class SuwakoCharacter: public CommonCharacter {
  private:
    static const BaseStats bases;
    static const GrowthStats growths;

  public:
    SuwakoCharacter() : CommonCharacter(L"諏訪子", "./img/Chara_Suwako", bases, growths) {}
    ~SuwakoCharacter() {}
};

#endif
