#ifndef STATE_CHAR_PATCHOULI_H
#define STATE_CHAR_PATCHOULI_H

#include "common.h"

class PatchouliCharacter: public CommonCharacter {
  private:
    static const BaseStats bases;
    static const GrowthStats growths;

  public:
    PatchouliCharacter() : CommonCharacter(L"パチュリー", "./img/Chara_Patchouli", bases, growths) {}
    ~PatchouliCharacter() {}
};

#endif
