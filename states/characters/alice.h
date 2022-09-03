#ifndef STATE_CHAR_ALICE_H
#define STATE_CHAR_ALICE_H

#include "common.h"

class AliceCharacter: public CommonCharacter {
  private:
    static const BaseStats bases;
    static const GrowthStats growths;

  public:
    AliceCharacter() : CommonCharacter(L"アリス", "./img/Chara_Alice", bases, growths) {}
    ~AliceCharacter() {}
};

#endif
