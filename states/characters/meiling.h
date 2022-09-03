#ifndef STATE_CHAR_MEILING_H
#define STATE_CHAR_MEILING_H

#include "common.h"

class MeilingCharacter: public CommonCharacter {
  private:
    static const BaseStats bases;
    static const GrowthStats growths;

  public:
    MeilingCharacter() : CommonCharacter(L"美鈴", "./img/Chara_Meirin", bases, growths) {}
    ~MeilingCharacter() {}
};

#endif
