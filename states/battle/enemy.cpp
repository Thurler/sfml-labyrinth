#include "enemy.h"

const float nameHeight = EnemyNameBarObject::height + 1;
const float nameSkew = nameHeight/BarObject::skewTan;

const float statHeight = EnemyStatBarObject::height + 1;
const float statSkew = statHeight/BarObject::skewTan;

const sf::Vector2f EnemyState::nameOffset = sf::Vector2f(
  -(int)EnemyStatBarObject::width/2 - nameSkew, 0
);
const sf::Vector2f EnemyState::hpOffset = sf::Vector2f(
  -(int)EnemyStatBarObject::width/2, nameHeight
);
const sf::Vector2f EnemyState::atbOffset = sf::Vector2f(
  statSkew + EnemyStatBarObject::width/2 - EnemyATBBarObject::width,
  EnemyState::hpOffset.y + statHeight
);

sf::Vector2f enemySlotPositions(Slot slot) {
  switch(slot) {
    case ENEMY_1:
      return sf::Vector2f(240, 460);
    case ENEMY_2:
      return sf::Vector2f(640, 460);
    case ENEMY_3:
      return sf::Vector2f(1040, 460);
    case ENEMY_4:
      return sf::Vector2f(440, 340);
    case ENEMY_5:
      return sf::Vector2f(840, 340);
    case ENEMY_6:
      return sf::Vector2f(240, 220);
    case ENEMY_7:
      return sf::Vector2f(640, 220);
    case ENEMY_8:
      return sf::Vector2f(1040, 220);
  }
}

void EnemyState::draw(sf::RenderWindow *window) {
  face->draw(window);
  if (highlighted) {
    faceHL->draw(window);
  }
  nameBar->draw(window);
  hpBar->draw(window);
  atbBar->draw(window);
}

EnemyState::EnemyState(GlobalValues *global, Slot slot) : UnitState(global, slot) {
  position = enemySlotPositions(slot);
  atbBar = new EnemyATBBarObject(global, position + atbOffset, 5000, 50);
  global->logMalloc("enemy|atbbar");
  hpBar = new EnemyStatBarObject(global, position + hpOffset, 32168, 41658);
  global->logMalloc("enemy|hpbar");
  std::wstring name = L"Trap Weed A";
  if (slot == Slot::ENEMY_2) name = L"Trap Weed B";
  if (slot == Slot::ENEMY_3) name = L"Trap Weed C";
  if (slot == Slot::ENEMY_4) name = L"Trap Weed D";
  if (slot == Slot::ENEMY_5) name = L"Trap Weed E";
  if (slot == Slot::ENEMY_6) name = L"Trap Weed F";
  if (slot == Slot::ENEMY_7) name = L"Trap Weed G";
  if (slot == Slot::ENEMY_8) name = L"Trap Weed H";
  nameBar = new EnemyNameBarObject(
    global, position + nameOffset, name
  );
  global->logMalloc("enemy|namebar");
  std::string fname = "./img/Enemy_1F_TrapWeed.png";
  face = new SpriteObject(global, position, Alignment::BottomCenter, fname);
  global->logMalloc("enemy|facebar");
  std::string fnameHL = "./img/Enemy_1F_TrapWeed_HL.png";
  faceHL = new SpriteObject(global, position, Alignment::BottomCenter, fnameHL);
  global->logMalloc("character|faceHL");
  faceHL->setColor(sf::Color::Transparent);
}

EnemyState::~EnemyState() {
  if (atbBar) {
    delete atbBar;
    global->logFree("enemy|atbBar");
  }
  if (hpBar) {
    delete hpBar;
    global->logFree("enemy|hpBar");
  }
  if (face) {
    delete face;
    global->logFree("enemy|face");
  }
  if (faceHL) {
    delete faceHL;
    global->logFree("enemy|faceHL");
  }
  if (nameBar) {
    delete nameBar;
    global->logFree("enemy|nameBar");
  }
}
