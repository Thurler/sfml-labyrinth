#ifndef STATE_CHAR_IKU_H
#define STATE_CHAR_IKU_H

#include "common.h"

class IkuCharacter: public CommonCharacter {
  private:
    static const BaseStats bases;
    static const GrowthStats growths;

  public:
    IkuCharacter() : CommonCharacter(L"衣玖", "./img/Chara_Iku", bases, growths) {}
    ~IkuCharacter() {}
};

#endif
