#ifndef STATE_CHAR_KAGUYA_H
#define STATE_CHAR_KAGUYA_H

#include "common.h"

class KaguyaCharacter: public CommonCharacter {
  private:
    static const BaseStats bases;
    static const GrowthStats growths;

  public:
    KaguyaCharacter() : CommonCharacter(L"輝夜", "./img/Chara_Kaguya", bases, growths) {}
    ~KaguyaCharacter() {}
};

#endif
