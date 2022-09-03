#ifndef STATE_CHAR_KANAKO_H
#define STATE_CHAR_KANAKO_H

#include "common.h"

class KanakoCharacter: public CommonCharacter {
  private:
    static const BaseStats bases;
    static const GrowthStats growths;

  public:
    KanakoCharacter() : CommonCharacter(L"神奈子", "./img/Chara_Kanako", bases, growths) {}
    ~KanakoCharacter() {}
};

#endif
