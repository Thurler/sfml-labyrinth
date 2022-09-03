#include "common.h"

unsigned long long CommonCharacter::computeHP() {
  unsigned long long lvFactor = characterStats.level + 6;
  unsigned long long base = lvFactor * growthStats.hp + 12;
  unsigned long long multiplier = 100;
  multiplier += (characterStats.level - 1) * 3;
  multiplier += (bonusStats.hp) * 2;
  multiplier += (libraryStats.hp) * 4;
  return base * multiplier / 100;
}

unsigned long long CommonCharacter::computeMP() {
  float lvFactor = characterStats.level * growthStats.mp;
  float base = (lvFactor / 8) + 100;
  unsigned long long multiplier = 100;
  multiplier += bonusStats.mp;
  multiplier += libraryStats.mp;
  return base * multiplier / 100;
}

unsigned long long CommonCharacter::computeATK() {
  unsigned long long lvFactor = characterStats.level + 4;
  unsigned long long base = lvFactor * growthStats.atk + 3;
  unsigned long long multiplier = 100;
  multiplier += (characterStats.level - 1) * 2;
  multiplier += (bonusStats.atk) * 2;
  multiplier += (libraryStats.atk) * 4;
  return base * multiplier / 100;
}

unsigned long long CommonCharacter::computeDEF() {
  unsigned long long lvFactor = characterStats.level + 4;
  unsigned long long base = lvFactor * growthStats.def + 1;
  unsigned long long multiplier = 100;
  multiplier += (characterStats.level - 1) * 2;
  multiplier += (bonusStats.def) * 2;
  multiplier += (libraryStats.def) * 4;
  return base * multiplier / 100;
}

unsigned long long CommonCharacter::computeMAG() {
  unsigned long long lvFactor = characterStats.level + 4;
  unsigned long long base = lvFactor * growthStats.mag + 2;
  unsigned long long multiplier = 100;
  multiplier += (characterStats.level - 1) * 2;
  multiplier += (bonusStats.mag) * 2;
  multiplier += (libraryStats.mag) * 4;
  return base * multiplier / 100;
}

unsigned long long CommonCharacter::computeMND() {
  unsigned long long lvFactor = characterStats.level + 4;
  unsigned long long base = lvFactor * growthStats.mnd + 1;
  unsigned long long multiplier = 100;
  multiplier += (characterStats.level - 1) * 2;
  multiplier += (bonusStats.mnd) * 2;
  multiplier += (libraryStats.mnd) * 4;
  return base * multiplier / 100;
}

unsigned long long CommonCharacter::computeSPD() {
  float base = characterStats.level * growthStats.spd / 32;
  unsigned long long multiplier = 100;
  multiplier += (characterStats.level - 1) * 2;
  multiplier += (bonusStats.spd) * 2;
  multiplier += (libraryStats.spd) * 4;
  return (base * multiplier / 100) + 100;
}

unsigned int CommonCharacter::computeAffinity(
  unsigned int base, unsigned int bonus, unsigned int library
) {
  return base + (2 * bonus) + (3 * library);
}

unsigned int CommonCharacter::computeOther(unsigned int base) {
  return base;
}

void CommonCharacter::computeStats() {
  characterStats.hp = computeHP();
  characterStats.mp = computeMP();
  characterStats.atk = computeATK();
  characterStats.def = computeDEF();
  characterStats.mag = computeMAG();
  characterStats.mnd = computeMND();
  characterStats.spd = computeSPD();
  characterStats.acc = computeOther(baseStats.acc);
  characterStats.eva = computeOther(baseStats.eva);
  characterStats.fir = computeAffinity(baseStats.fir, bonusStats.fir, libraryStats.fir);
  characterStats.cld = computeAffinity(baseStats.cld, bonusStats.cld, libraryStats.cld);
  characterStats.wnd = computeAffinity(baseStats.wnd, bonusStats.wnd, libraryStats.wnd);
  characterStats.ntr = computeAffinity(baseStats.ntr, bonusStats.ntr, libraryStats.ntr);
  characterStats.drk = computeAffinity(baseStats.drk, bonusStats.drk, libraryStats.drk);
  characterStats.spi = computeAffinity(baseStats.spi, bonusStats.spi, libraryStats.spi);
  characterStats.mys = computeAffinity(baseStats.mys, bonusStats.mys, libraryStats.mys);
  characterStats.phy = computeAffinity(baseStats.phy, bonusStats.phy, libraryStats.phy);
  characterStats.psn = computeOther(baseStats.psn);
  characterStats.par = computeOther(baseStats.par);
  characterStats.sil = computeOther(baseStats.sil);
  characterStats.dth = computeOther(baseStats.dth);
  characterStats.dbf = computeOther(baseStats.dbf);
  characterStats.tp = computeOther(baseStats.tp);
  characterStats.hpRec = computeOther(baseStats.hpRec);
  characterStats.mpRec = computeOther(baseStats.mpRec);
}

CommonCharacter::CommonCharacter(
  const std::wstring &n, const std::string &tn, const BaseStats &b, const GrowthStats &g
) : name(n), textureName(tn), baseStats(b), growthStats(g) {
  computeStats();
}
