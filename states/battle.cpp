#include "battle.h"

bool BattleState::checkActiveATBs() {
  bool filledATB = false;
  unsigned int maxAtb = 0;
  // Look for filled ATBs, store one with highest value
  for (unsigned int i = 0; i < playerSlots; i++) {
    CharacterState *character = characters[i];
    if (character->isAtbFilled()) {
      unsigned int atb = character->getAtbValue();
      if (atb > maxAtb) {
        turnTarget = character;
        maxAtb = atb;
        filledATB = true;
      }
    }
  }
  return filledATB;
}

void BattleState::setIncrementATBs(bool value) {
  for (unsigned int i = 0; i < playerSlots; i++) {
    characters[i]->setAtbActive(value);
  }
  for (unsigned int i = 0; i < enemySlots; i++) {
    enemies[i]->setAtbActive(value);
  }
}

void BattleState::update() {
  switch (state) {
    case BattleMode::IDLE: {
      for (unsigned int i = 0; i < playerSlots; i++) {
        characters[i]->update();
      }
      for (unsigned int i = 0; i < enemySlots; i++) {
        enemies[i]->update();
      }
      // If someone has a filled ATB, stop everyone's ATB
      bool filledATB = checkActiveATBs();
      if (filledATB) {
        setIncrementATBs(false);
        state = BattleMode::PLAYER_TURN;
      }
      break;
    }
    case BattleMode::PLAYER_TURN: {
      bool confirm = global->getKeyConfirm();
      if (confirm && !previousConfirm) {
        turnTarget->setAtbValue(0);
        bool filledATB = checkActiveATBs();
        if (!filledATB) {
          setIncrementATBs(true);
          state = BattleMode::IDLE;
        }
      }
      previousConfirm = confirm;
      break;
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
