#ifndef STATE_CHAR_MARIBEL_H
#define STATE_CHAR_MARIBEL_H

#include "common.h"

class MaribelCharacter: public CommonCharacter {
  private:
    static const BaseStats bases;
    static const GrowthStats growths;

  public:
    MaribelCharacter() : CommonCharacter(L"メリー", "./img/Chara_MaribelB", bases, growths) {}
    ~MaribelCharacter() {}
};

#endif
