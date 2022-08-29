#include "battle.h"

void BattleState::update() {
  bool filledATB = false;
  for (unsigned int i = 0; i < playerSlots; i++) {
    characters[i]->update();
    filledATB = filledATB || characters[i]->isAtbFilled();
  }
  for (unsigned int i = 0; i < enemySlots; i++) {
    enemies[i]->update();
    filledATB = filledATB || enemies[i]->isAtbFilled();
  }
  if (filledATB) {
    for (unsigned int i = 0; i < playerSlots; i++) {
      characters[i]->setAtbActive(false);
    }
    for (unsigned int i = 0; i < enemySlots; i++) {
      enemies[i]->setAtbActive(false);
    }
  }
}

void BattleState::draw(sf::RenderWindow *window) {
  panorama->draw(window);
  background->setShaderArg("shift", 0);
  background->draw(window);
  for (unsigned int i = 0; i < playerSlots; i++) {
    characters[i]->draw(window);
  }
  for (unsigned int i = 0; i < enemySlots; i++) {
    enemies[i]->draw(window);
  }
}

BattleState::BattleState(GlobalValues *global) : CommonState(global) {
  for (unsigned int i = 0; i < playerSlots; i++) {
    Slot s = static_cast<Slot>(i);
    characters[i] = new CharacterState(global, s);
    global->logMalloc("test|character-" + std::to_string(i));
  }
  for (unsigned int i = 0; i < enemySlots; i++) {
    Slot s = static_cast<Slot>(i + Slot::ENEMY_1);
    enemies[i] = new EnemyState(global, s);
    global->logMalloc("test|enemy-" + std::to_string(i));
  }
  background = new ShadedSpriteObject(
    global, sf::Vector2f(0, 0), Alignment::TopLeft,
    "./img/Battle_Background.png", "./shaders/hueshift.frag"
  );
  global->logMalloc("test|background");
  panorama = new SpriteObject(
    global, sf::Vector2f(40, 0), Alignment::TopLeft, "./img/Battle_Panorama_1F.png"
  );
  global->logMalloc("test|panorama");
}

BattleState::~BattleState() {
  for (unsigned int i = 0; i < playerSlots; i++) {
    if (characters[i]) {
      delete characters[i];
      global->logFree("test|character-" + std::to_string(i));
    }
  }
  for (unsigned int i = 0; i < enemySlots; i++) {
    if (enemies[i]) {
      delete enemies[i];
      global->logFree("test|enemy-" + std::to_string(i));
    }
  }
  if (background) {
    delete background;
    global->logFree("test|background");
  }
  if (panorama) {
    delete panorama;
    global->logFree("test|panorama");
  }
}
