#ifndef STATE_CHAR_SANAE_H
#define STATE_CHAR_SANAE_H

#include "common.h"

class SanaeCharacter: public CommonCharacter {
  private:
    static const BaseStats bases;
    static const GrowthStats growths;

  public:
    SanaeCharacter() : CommonCharacter(L"早苗", "./img/Chara_Sanae", bases, growths) {}
    ~SanaeCharacter() {}
};

#endif
