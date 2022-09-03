#ifndef STATE_CHAR_KOMACHI_H
#define STATE_CHAR_KOMACHI_H

#include "common.h"

class KomachiCharacter: public CommonCharacter {
  private:
    static const BaseStats bases;
    static const GrowthStats growths;

  public:
    KomachiCharacter() : CommonCharacter(L"小町", "./img/Chara_Komachi", bases, growths) {}
    ~KomachiCharacter() {}
};

#endif
