#ifndef STATE_CHAR_REMILIA_H
#define STATE_CHAR_REMILIA_H

#include "common.h"

class RemiliaCharacter: public CommonCharacter {
  private:
    static const BaseStats bases;
    static const GrowthStats growths;

  public:
    RemiliaCharacter() : CommonCharacter(L"レミリア", "./img/Chara_Remilia", bases, growths) {}
    ~RemiliaCharacter() {}
};

#endif
