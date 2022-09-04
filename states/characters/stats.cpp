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
  90, 16, 9, 18, 100, 2,
  110, 106, 114, 105, 148, 148, 77, 95,
  48, 48, 48, 60, 48
};

const GrowthStats ReimuCharacter::growths = {
  12, 20, 8, 6, 9, 9, 8
};

const BaseStats MarisaCharacter::bases = {
  110, 18, 10, 20, 100, 9,
  89, 95, 96, 93, 144, 144, 167, 90,
  36, 60, 60, 72, 30
};

const GrowthStats MarisaCharacter::growths = {
  9, 26, 3, 5, 13, 12, 11
};

const BaseStats RemiliaCharacter::bases = {
  132, 20, 14, 28, 100, 7,
  121, 122, 128, 125, 160, 77, 96, 120,
  24, 24, 90, 90, 24
};

const GrowthStats RemiliaCharacter::growths = {
  19, 8, 16, 10, 4, 9, 12
};

const BaseStats SakuyaCharacter::bases = {
  104, 13, 7, 14, 100, 6,
  110, 110, 110, 110, 110, 110, 110, 110,
  36, 36, 60, 60, 60
};

const GrowthStats SakuyaCharacter::growths = {
  15, 14, 11, 8, 5, 7, 10
};

const BaseStats PatchouliCharacter::bases = {
  128, 8, 4, 8, 100, 0,
  132, 136, 138, 134, 102, 102, 173, 60,
  0, 0, 0, 30, 90
};

const GrowthStats PatchouliCharacter::growths = {
  6, 30, 2, 2, 16, 17, 5
};

const BaseStats ChenCharacter::bases = {
  70, 16, 15, 30, 100, 10,
  98, 51, 96, 97, 95, 103, 105, 100,
  12, 12, 12, 12, 12
};

const GrowthStats ChenCharacter::growths = {
  8, 5, 8, 4, 4, 4, 13
};

const BaseStats MeilingCharacter::bases = {
  94, 20, 12, 24, 100, 5,
  136, 144, 138, 140, 88, 103, 105, 130,
  54, 54, 36, 36, 0
};

const GrowthStats MeilingCharacter::growths = {
  17, 6, 7, 9, 4, 6, 7
};

const BaseStats CirnoCharacter::bases = {
  84, 16, 10, 20, 100, 9,
  35, 176, 114, 105, 86, 91, 95, 85,
  24, 24, 24, 24, 24
};

const GrowthStats CirnoCharacter::growths = {
  11, 15, 8, 5, 8, 4, 9
};

const BaseStats MinorikoCharacter::bases = {
  88, 14, 9, 18, 100, 3,
  50, 56, 163, 196, 90, 104, 100, 100,
  54, 54, 30, 30, 30
};

const GrowthStats MinorikoCharacter::growths = {
  10, 16, 3, 3, 8, 9, 7
};

const BaseStats YoumuCharacter::bases = {
  105, 12, 10, 20, 100, 4,
  110, 106, 114, 105, 132, 132, 84, 132,
  0, 60, 0, 72, 0
};

const GrowthStats YoumuCharacter::growths = {
  16, 5, 12, 9, 2, 2, 7
};

const BaseStats AliceCharacter::bases = {
  106, 13, 9, 18, 100, 6,
  118, 114, 117, 113, 112, 112, 126, 84,
  60, 60, 36, 36, 36
};

const GrowthStats AliceCharacter::growths = {
  12, 22, 6, 7, 12, 10, 8
};

const BaseStats RumiaCharacter::bases = {
  86, 13, 12, 24, 100, 9,
  96, 102, 103, 99, 192, 67, 192, 70,
  30, 30, 30, 48, 48
};

const GrowthStats RumiaCharacter::growths = {
  9, 16, 4, 5, 9, 7, 6
};

const BaseStats WriggleCharacter::bases = {
  94, 15, 11, 22, 100, 5,
  61, 73, 145, 157, 109, 109, 110, 90,
  72, 72, 72, 72, 72
};

const GrowthStats WriggleCharacter::growths = {
  14, 16, 10, 7, 6, 7, 8
};

const BaseStats YuugiCharacter::bases = {
  115, 25, 8, 15, 100, 0,
  138, 72, 136, 75, 73, 73, 137, 160,
  60, 60, 24, 60, 24
};

const GrowthStats YuugiCharacter::growths = {
  16, 7, 17, 12, 1, 3, 7
};

const BaseStats AyaCharacter::bases = {
  108, 14, 8, 16, 100, 7,
  102, 104, 201, 106, 90, 80, 77, 105,
  48, 24, 48, 24, 48
};

const GrowthStats AyaCharacter::growths = {
  12, 16, 13, 7, 6, 6, 14
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
