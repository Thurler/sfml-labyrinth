#ifndef STATE_PARTY_H
#define STATE_PARTY_H

#include "common.h"
#include "characters/reimu.h"
#include "characters/marisa.h"
#include "characters/remilia.h"
#include "characters/sakuya.h"
#include "characters/patchouli.h"
#include "characters/chen.h"
#include "characters/meiling.h"
#include "characters/cirno.h"
#include "characters/minoriko.h"
#include "characters/youmu.h"
#include "characters/alice.h"
#include "characters/rumia.h"
#include "characters/wriggle.h"
#include "characters/yuugi.h"
#include "characters/aya.h"
#include "characters/iku.h"
#include "characters/komachi.h"
#include "characters/suwako.h"
#include "characters/sanae.h"
#include "characters/nitori.h"
#include "characters/ran.h"
#include "characters/reisen.h"
#include "characters/eirin.h"
#include "characters/tenshi.h"
#include "characters/mokou.h"
#include "characters/flandre.h"
#include "characters/rin.h"
#include "characters/suika.h"
#include "characters/yuyuko.h"
#include "characters/kaguya.h"
#include "characters/yukari.h"
#include "characters/rinnosuke.h"
#include "characters/renko.h"
#include "characters/maribel.h"
#include "characters/utsuho.h"
#include "characters/kanako.h"
#include "characters/yuuka.h"
#include "characters/mystia.h"
#include "characters/keine.h"
#include "characters/shikieiki.h"

class PartyState: public CommonState {
  private:
    CommonCharacter characters[40] = {
      ReimuCharacter(), MarisaCharacter(), RemiliaCharacter(), SakuyaCharacter(),
      PatchouliCharacter(), ChenCharacter(), MeilingCharacter(), CirnoCharacter(),
      MinorikoCharacter(), YoumuCharacter(), AliceCharacter(), RumiaCharacter(),
      WriggleCharacter(), YuugiCharacter(), AyaCharacter(), IkuCharacter(),
      KomachiCharacter(), SuwakoCharacter(), SanaeCharacter(), NitoriCharacter(),
      RanCharacter(), ReisenCharacter(), EirinCharacter(), TenshiCharacter(),
      MokouCharacter(), FlandreCharacter(), RinCharacter(), SuikaCharacter(),
      YuyukoCharacter(), KaguyaCharacter(), YukariCharacter(), RinnosukeCharacter(),
      RenkoCharacter(), MaribelCharacter(), UtsuhoCharacter(), KanakoCharacter(),
      YuukaCharacter(), MystiaCharacter(), KeineCharacter(), ShikieikiCharacter()
    };

  public:
    PartyState(GlobalValues *g) : CommonState(g) {}
    ~PartyState() {}

    void update() {}
    void draw(sf::RenderWindow *w) {}
    CommonCharacter *getCharacter() { return &(characters[5]); }
};

#endif
