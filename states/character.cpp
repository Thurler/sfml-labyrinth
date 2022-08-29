#include "character.h"

const float nameHeight = CharNameBarObject::height + 1;
const float nameSkew = nameHeight/BarObject::skewTan;

const float atbHeight = CharATBBarObject::height + 1;
const float atbSkew = atbHeight/BarObject::skewTan;

const float statHeight = CharStatBarObject::height + 1;
const float statSkew = statHeight/BarObject::skewTan;

const float tpWidth = TPBarObject::height + 1; // will be rotated
const float tpBaseSkew = tpWidth/BarObject::skewTan;

const sf::Vector2f CharacterState::faceOffset = sf::Vector2f(
  50, nameHeight + atbHeight
);
const sf::Vector2f CharacterState::atbOffset = sf::Vector2f(
  nameSkew, nameHeight
);
const sf::Vector2f CharacterState::hpOffset = sf::Vector2f(
  nameSkew + atbSkew, nameHeight + atbHeight
);
const sf::Vector2f CharacterState::mpOffset = sf::Vector2f(
  nameSkew + atbSkew + statSkew, nameHeight + atbHeight + statHeight
);
const sf::Vector2f CharacterState::tpOffset = sf::Vector2f(
  nameSkew + atbSkew + 2*statSkew - tpBaseSkew - 1,
  nameHeight + atbHeight + 2*statHeight - tpWidth
);

sf::Vector2f slotPositions(Slot slot) {
  switch(slot) {
    case PLAYER_1:
      return sf::Vector2f(19, 635);
    case PLAYER_2:
      return sf::Vector2f(327, 635);
    case PLAYER_3:
      return sf::Vector2f(636, 635);
    case PLAYER_4:
      return sf::Vector2f(945, 635);
    case PLAYER_5:
      return sf::Vector2f(19, 415);
    case PLAYER_6:
      return sf::Vector2f(327, 415);
    case PLAYER_7:
      return sf::Vector2f(636, 415);
    case PLAYER_8:
      return sf::Vector2f(945, 415);
    case PLAYER_9:
      return sf::Vector2f(19, 195);
    case PLAYER_10:
      return sf::Vector2f(327, 195);
    case PLAYER_11:
      return sf::Vector2f(636, 195);
    case PLAYER_12:
      return sf::Vector2f(945, 195);
  }
}

void CharacterState::setAtbValue(unsigned int value) {
  atbBar->setValue(value);
  atbBar->setActiveIncrement(value < CharATBBarObject::limit);
}

void CharacterState::update() {
  atbBar->update();
}

void CharacterState::draw(sf::RenderWindow *window) {
  face->draw(window);
  tpBar->draw(window);
  mpBar->draw(window);
  hpBar->draw(window);
  atbBar->draw(window);
  nameBar->draw(window);
}

CharacterState::CharacterState(GlobalValues *global, Slot slot) : CommonState(global) {
  position = slotPositions(slot);
  atbBar = new CharATBBarObject(global, position + atbOffset, 2000, 99);
  global->logMalloc("character|atbbar");
  hpBar = new CharStatBarObject(
    global, position + hpOffset, sf::Color(255, 64, 64), sf::Color(100, 16, 16), 10000, 12345
  );
  global->logMalloc("character|hpbar");
  mpBar = new CharStatBarObject(
    global, position + mpOffset, sf::Color(64, 160, 255), sf::Color(16, 40, 100), 100, 123
  );
  global->logMalloc("character|mpbar");
  tpBar = new TPBarObject(global, position + tpOffset, 13, 20);
  global->logMalloc("character|tpbar");
  std::wstring name = L"アリス";
  if (slot == Slot::PLAYER_2) name = L"文";
  if (slot == Slot::PLAYER_3) name = L"橙";
  if (slot == Slot::PLAYER_4) name = L"チルノ";
  nameBar = new CharNameBarObject(global, position, name);
  global->logMalloc("character|namebar");
  std::string fname = "./img/Chara_Alice_LFace.png";
  if (slot == Slot::PLAYER_2) fname = "./img/Chara_Aya_LFace.png";
  if (slot == Slot::PLAYER_3) fname = "./img/Chara_Chen_LFace.png";
  if (slot == Slot::PLAYER_4) fname = "./img/Chara_Cirno_LFace.png";
  face = new SpriteObject(global, position + faceOffset, Alignment::BottomLeft, fname);
  global->logMalloc("character|face");
}

CharacterState::~CharacterState() {
  if (atbBar) {
    delete atbBar;
    global->logFree("character|atbbar");
  }
  if (hpBar) {
    delete hpBar;
    global->logFree("character|hpbar");
  }
  if (mpBar) {
    delete mpBar;
    global->logFree("character|mpbar");
  }
  if (tpBar) {
    delete tpBar;
    global->logFree("character|tpbar");
  }
  if (nameBar) {
    delete nameBar;
    global->logFree("character|namebar");
  }
  if (face) {
    delete face;
    global->logFree("character|face");
  }
}
