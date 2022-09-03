#include "reimu.h"
#include "marisa.h"
#include "remilia.h"
#include "sakuya.h"
#include "patchouli.h"
#include "chen.h"
#include "meiling.h"
#include "cirno.h"
#include "minoriko.h"
#include "youmu.h"
#include "alice.h"
#include "rumia.h"
#include "wriggle.h"
#include "yuugi.h"
#include "aya.h"
#include "iku.h"
#include "komachi.h"
#include "suwako.h"
#include "sanae.h"
#include "nitori.h"
#include "ran.h"
#include "reisen.h"
#include "eirin.h"
#include "tenshi.h"
#include "mokou.h"
#include "flandre.h"
#include "rin.h"
#include "suika.h"
#include "yuyuko.h"
#include "kaguya.h"
#include "yukari.h"
#include "rinnosuke.h"
#include "renko.h"
#include "maribel.h"
#include "utsuho.h"
#include "kanako.h"
#include "yuuka.h"
#include "mystia.h"
#include "keine.h"
#include "shikieiki.h"

const BaseStats ReimuCharacter::bases = {
  106, 13, 9, 18, 100, 6,
  118, 114, 117, 113, 140, 112, 126, 78,
  60, 60, 36, 36, 36
};

const GrowthStats ReimuCharacter::growths = {
  12, 22, 6, 7, 12, 10, 8
};

const BaseStats MarisaCharacter::bases = {
  106, 13, 9, 18, 100, 6,
  118, 114, 117, 113, 140, 112, 126, 78,
  60, 60, 36, 36, 36
};

const GrowthStats MarisaCharacter::growths = {
  12, 22, 6, 7, 12, 10, 8
};

const BaseStats RemiliaCharacter::bases = {
  106, 13, 9, 18, 100, 6,
  118, 114, 117, 113, 140, 112, 126, 78,
  60, 60, 36, 36, 36
};

const GrowthStats RemiliaCharacter::growths = {
  12, 22, 6, 7, 12, 10, 8
};

const BaseStats SakuyaCharacter::bases = {
  106, 13, 9, 18, 100, 6,
  118, 114, 117, 113, 140, 112, 126, 78,
  60, 60, 36, 36, 36
};

const GrowthStats SakuyaCharacter::growths = {
  12, 22, 6, 7, 12, 10, 8
};

const BaseStats PatchouliCharacter::bases = {
  106, 13, 9, 18, 100, 6,
  118, 114, 117, 113, 140, 112, 126, 78,
  60, 60, 36, 36, 36
};

const GrowthStats PatchouliCharacter::growths = {
  12, 22, 6, 7, 12, 10, 8
};

const BaseStats ChenCharacter::bases = {
  106, 13, 9, 18, 100, 6,
  118, 114, 117, 113, 140, 112, 126, 78,
  60, 60, 36, 36, 36
};

const GrowthStats ChenCharacter::growths = {
  12, 22, 6, 7, 12, 10, 8
};

const BaseStats MeilingCharacter::bases = {
  106, 13, 9, 18, 100, 6,
  118, 114, 117, 113, 140, 112, 126, 78,
  60, 60, 36, 36, 36
};

const GrowthStats MeilingCharacter::growths = {
  12, 22, 6, 7, 12, 10, 8
};

const BaseStats CirnoCharacter::bases = {
  106, 13, 9, 18, 100, 6,
  118, 114, 117, 113, 140, 112, 126, 78,
  60, 60, 36, 36, 36
};

const GrowthStats CirnoCharacter::growths = {
  12, 22, 6, 7, 12, 10, 8
};

const BaseStats MinorikoCharacter::bases = {
  106, 13, 9, 18, 100, 6,
  118, 114, 117, 113, 140, 112, 126, 78,
  60, 60, 36, 36, 36
};

const GrowthStats MinorikoCharacter::growths = {
  12, 22, 6, 7, 12, 10, 8
};

const BaseStats YoumuCharacter::bases = {
  106, 13, 9, 18, 100, 6,
  118, 114, 117, 113, 140, 112, 126, 78,
  60, 60, 36, 36, 36
};

const GrowthStats YoumuCharacter::growths = {
  12, 22, 6, 7, 12, 10, 8
};

const BaseStats AliceCharacter::bases = {
  106, 13, 9, 18, 100, 6,
  118, 114, 117, 113, 140, 112, 126, 78,
  60, 60, 36, 36, 36
};

const GrowthStats AliceCharacter::growths = {
  12, 22, 6, 7, 12, 10, 8
};

const BaseStats RumiaCharacter::bases = {
  106, 13, 9, 18, 100, 6,
  118, 114, 117, 113, 140, 112, 126, 78,
  60, 60, 36, 36, 36
};

const GrowthStats RumiaCharacter::growths = {
  12, 22, 6, 7, 12, 10, 8
};

const BaseStats WriggleCharacter::bases = {
  106, 13, 9, 18, 100, 6,
  118, 114, 117, 113, 140, 112, 126, 78,
  60, 60, 36, 36, 36
};

const GrowthStats WriggleCharacter::growths = {
  12, 22, 6, 7, 12, 10, 8
};

const BaseStats YuugiCharacter::bases = {
  106, 13, 9, 18, 100, 6,
  118, 114, 117, 113, 140, 112, 126, 78,
  60, 60, 36, 36, 36
};

const GrowthStats YuugiCharacter::growths = {
  12, 22, 6, 7, 12, 10, 8
};

const BaseStats AyaCharacter::bases = {
  106, 13, 9, 18, 100, 6,
  118, 114, 117, 113, 140, 112, 126, 78,
  60, 60, 36, 36, 36
};

const GrowthStats AyaCharacter::growths = {
  12, 22, 6, 7, 12, 10, 8
};

const BaseStats IkuCharacter::bases = {
  106, 13, 9, 18, 100, 6,
  118, 114, 117, 113, 140, 112, 126, 78,
  60, 60, 36, 36, 36
};

const GrowthStats IkuCharacter::growths = {
  12, 22, 6, 7, 12, 10, 8
};

const BaseStats KomachiCharacter::bases = {
  106, 13, 9, 18, 100, 6,
  118, 114, 117, 113, 140, 112, 126, 78,
  60, 60, 36, 36, 36
};

const GrowthStats KomachiCharacter::growths = {
  12, 22, 6, 7, 12, 10, 8
};

const BaseStats SuwakoCharacter::bases = {
  106, 13, 9, 18, 100, 6,
  118, 114, 117, 113, 140, 112, 126, 78,
  60, 60, 36, 36, 36
};

const GrowthStats SuwakoCharacter::growths = {
  12, 22, 6, 7, 12, 10, 8
};

const BaseStats SanaeCharacter::bases = {
  106, 13, 9, 18, 100, 6,
  118, 114, 117, 113, 140, 112, 126, 78,
  60, 60, 36, 36, 36
};

const GrowthStats SanaeCharacter::growths = {
  12, 22, 6, 7, 12, 10, 8
};

const BaseStats NitoriCharacter::bases = {
  106, 13, 9, 18, 100, 6,
  118, 114, 117, 113, 140, 112, 126, 78,
  60, 60, 36, 36, 36
};

const GrowthStats NitoriCharacter::growths = {
  12, 22, 6, 7, 12, 10, 8
};

const BaseStats RanCharacter::bases = {
  106, 13, 9, 18, 100, 6,
  118, 114, 117, 113, 140, 112, 126, 78,
  60, 60, 36, 36, 36
};

const GrowthStats RanCharacter::growths = {
  12, 22, 6, 7, 12, 10, 8
};

const BaseStats ReisenCharacter::bases = {
  106, 13, 9, 18, 100, 6,
  118, 114, 117, 113, 140, 112, 126, 78,
  60, 60, 36, 36, 36
};

const GrowthStats ReisenCharacter::growths = {
  12, 22, 6, 7, 12, 10, 8
};

const BaseStats EirinCharacter::bases = {
  106, 13, 9, 18, 100, 6,
  118, 114, 117, 113, 140, 112, 126, 78,
  60, 60, 36, 36, 36
};

const GrowthStats EirinCharacter::growths = {
  12, 22, 6, 7, 12, 10, 8
};

const BaseStats TenshiCharacter::bases = {
  106, 13, 9, 18, 100, 6,
  118, 114, 117, 113, 140, 112, 126, 78,
  60, 60, 36, 36, 36
};

const GrowthStats TenshiCharacter::growths = {
  12, 22, 6, 7, 12, 10, 8
};

const BaseStats MokouCharacter::bases = {
  106, 13, 9, 18, 100, 6,
  118, 114, 117, 113, 140, 112, 126, 78,
  60, 60, 36, 36, 36
};

const GrowthStats MokouCharacter::growths = {
  12, 22, 6, 7, 12, 10, 8
};

const BaseStats FlandreCharacter::bases = {
  106, 13, 9, 18, 100, 6,
  118, 114, 117, 113, 140, 112, 126, 78,
  60, 60, 36, 36, 36
};

const GrowthStats FlandreCharacter::growths = {
  12, 22, 6, 7, 12, 10, 8
};

const BaseStats RinCharacter::bases = {
  106, 13, 9, 18, 100, 6,
  118, 114, 117, 113, 140, 112, 126, 78,
  60, 60, 36, 36, 36
};

const GrowthStats RinCharacter::growths = {
  12, 22, 6, 7, 12, 10, 8
};

const BaseStats SuikaCharacter::bases = {
  106, 13, 9, 18, 100, 6,
  118, 114, 117, 113, 140, 112, 126, 78,
  60, 60, 36, 36, 36
};

const GrowthStats SuikaCharacter::growths = {
  12, 22, 6, 7, 12, 10, 8
};

const BaseStats YuyukoCharacter::bases = {
  106, 13, 9, 18, 100, 6,
  118, 114, 117, 113, 140, 112, 126, 78,
  60, 60, 36, 36, 36
};

const GrowthStats YuyukoCharacter::growths = {
  12, 22, 6, 7, 12, 10, 8
};

const BaseStats KaguyaCharacter::bases = {
  106, 13, 9, 18, 100, 6,
  118, 114, 117, 113, 140, 112, 126, 78,
  60, 60, 36, 36, 36
};

const GrowthStats KaguyaCharacter::growths = {
  12, 22, 6, 7, 12, 10, 8
};

const BaseStats YukariCharacter::bases = {
  106, 13, 9, 18, 100, 6,
  118, 114, 117, 113, 140, 112, 126, 78,
  60, 60, 36, 36, 36
};

const GrowthStats YukariCharacter::growths = {
  12, 22, 6, 7, 12, 10, 8
};

const BaseStats RinnosukeCharacter::bases = {
  106, 13, 9, 18, 100, 6,
  118, 114, 117, 113, 140, 112, 126, 78,
  60, 60, 36, 36, 36
};

const GrowthStats RinnosukeCharacter::growths = {
  12, 22, 6, 7, 12, 10, 8
};

const BaseStats RenkoCharacter::bases = {
  106, 13, 9, 18, 100, 6,
  118, 114, 117, 113, 140, 112, 126, 78,
  60, 60, 36, 36, 36
};

const GrowthStats RenkoCharacter::growths = {
  12, 22, 6, 7, 12, 10, 8
};

const BaseStats MaribelCharacter::bases = {
  106, 13, 9, 18, 100, 6,
  118, 114, 117, 113, 140, 112, 126, 78,
  60, 60, 36, 36, 36
};

const GrowthStats MaribelCharacter::growths = {
  12, 22, 6, 7, 12, 10, 8
};

const BaseStats UtsuhoCharacter::bases = {
  106, 13, 9, 18, 100, 6,
  118, 114, 117, 113, 140, 112, 126, 78,
  60, 60, 36, 36, 36
};

const GrowthStats UtsuhoCharacter::growths = {
  12, 22, 6, 7, 12, 10, 8
};

const BaseStats KanakoCharacter::bases = {
  106, 13, 9, 18, 100, 6,
  118, 114, 117, 113, 140, 112, 126, 78,
  60, 60, 36, 36, 36
};

const GrowthStats KanakoCharacter::growths = {
  12, 22, 6, 7, 12, 10, 8
};

const BaseStats YuukaCharacter::bases = {
  106, 13, 9, 18, 100, 6,
  118, 114, 117, 113, 140, 112, 126, 78,
  60, 60, 36, 36, 36
};

const GrowthStats YuukaCharacter::growths = {
  12, 22, 6, 7, 12, 10, 8
};

const BaseStats MystiaCharacter::bases = {
  106, 13, 9, 18, 100, 6,
  118, 114, 117, 113, 140, 112, 126, 78,
  60, 60, 36, 36, 36
};

const GrowthStats MystiaCharacter::growths = {
  12, 22, 6, 7, 12, 10, 8
};

const BaseStats KeineCharacter::bases = {
  106, 13, 9, 18, 100, 6,
  118, 114, 117, 113, 140, 112, 126, 78,
  60, 60, 36, 36, 36
};

const GrowthStats KeineCharacter::growths = {
  12, 22, 6, 7, 12, 10, 8
};

const BaseStats ShikieikiCharacter::bases = {
  106, 13, 9, 18, 100, 6,
  118, 114, 117, 113, 140, 112, 126, 78,
  60, 60, 36, 36, 36
};

const GrowthStats ShikieikiCharacter::growths = {
  12, 22, 6, 7, 12, 10, 8
};
