#ifndef STATE_CHAR_COMMON_H
#define STATE_CHAR_COMMON_H

#include <string>

struct BaseStats {
  unsigned int lvRate;
  unsigned int tp;
  unsigned int hpRec;
  unsigned int mpRec;
  unsigned int acc;
  unsigned int eva;
  unsigned int fir;
  unsigned int cld;
  unsigned int wnd;
  unsigned int ntr;
  unsigned int drk;
  unsigned int spi;
  unsigned int mys;
  unsigned int phy;
  unsigned int psn;
  unsigned int par;
  unsigned int sil;
  unsigned int dth;
  unsigned int dbf;
};

struct GrowthStats {
  unsigned int hp;
  unsigned int mp;
  unsigned int atk;
  unsigned int def;
  unsigned int mag;
  unsigned int mnd;
  unsigned int spd;
};

struct BonusStats {
  unsigned int hp = 0;
  unsigned int mp = 0;
  unsigned int atk = 0;
  unsigned int def = 0;
  unsigned int mag = 0;
  unsigned int mnd = 0;
  unsigned int spd = 0;
  unsigned int fir = 0;
  unsigned int cld = 0;
  unsigned int wnd = 0;
  unsigned int ntr = 0;
  unsigned int drk = 0;
  unsigned int spi = 0;
  unsigned int mys = 0;
  unsigned int phy = 0;
};

struct LibraryStats {
  unsigned int hp = 0;
  unsigned int mp = 0;
  unsigned int tp = 0;
  unsigned int atk = 0;
  unsigned int def = 0;
  unsigned int mag = 0;
  unsigned int mnd = 0;
  unsigned int spd = 0;
  unsigned int fir = 0;
  unsigned int cld = 0;
  unsigned int wnd = 0;
  unsigned int ntr = 0;
  unsigned int drk = 0;
  unsigned int spi = 0;
  unsigned int mys = 0;
  unsigned int phy = 0;
};

struct CharacterStats {
  unsigned long level = 1;
  unsigned long long exp = 0;
  unsigned long long bp = 0;
  unsigned long long hp;
  unsigned long long mp;
  unsigned int tp;
  unsigned int hpRec;
  unsigned int mpRec;
  unsigned long long atk;
  unsigned long long def;
  unsigned long long mag;
  unsigned long long mnd;
  unsigned long long spd;
  unsigned int acc;
  unsigned int eva;
  unsigned int fir;
  unsigned int cld;
  unsigned int wnd;
  unsigned int ntr;
  unsigned int drk;
  unsigned int spi;
  unsigned int mys;
  unsigned int phy;
  unsigned int psn;
  unsigned int par;
  unsigned int sil;
  unsigned int dth;
  unsigned int dbf;
};

class CommonCharacter {
  protected:
    const std::wstring name;
    const std::string textureName;
    const BaseStats baseStats;
    const GrowthStats growthStats;
    BonusStats bonusStats;
    LibraryStats libraryStats;
    CharacterStats characterStats;

    unsigned long long computeHP();
    unsigned long long computeMP();
    unsigned long long computeATK();
    unsigned long long computeDEF();
    unsigned long long computeMAG();
    unsigned long long computeMND();
    unsigned long long computeSPD();
    unsigned int computeAffinity(unsigned int b, unsigned int bo, unsigned int l);
    unsigned int computeOther(unsigned int b);

    CommonCharacter(
      const std::wstring &n, const std::string &tn, const BaseStats &b, const GrowthStats &g
    );

  public:
    ~CommonCharacter() {}

    void computeStats();
    const std::wstring &getName() { return name; }
    const std::string &getTextureName() { return textureName; }
    const CharacterStats &getStats() { return characterStats; }
};

#endif
