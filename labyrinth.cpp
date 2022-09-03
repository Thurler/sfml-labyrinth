#include <SFML/Graphics.hpp>
#include <iostream>

#include "global.h"
#include "objects/fpstext.h"
#include "objects/inputtext.h"

#include "states/battle/battle.h"

// g++ *.cpp objects/*.cpp objects/character/*.cpp objects/enemy/*.cpp states/battle/*.cpp -I C:\SFML-2.5.1\include -L C:\SFML-2.5.1\lib -lsfml-graphics -lsfml-window -lsfml-system -O2 -o shared.exe
// g++ *.cpp objects/*.cpp objects/character/*.cpp objects/enemy/*.cpp states/battle/*.cpp -DSFML_STATIC -I C:\SFML-2.5.1\include -L C:\SFML-2.5.1\lib -lsfml-graphics-s -lsfml-window-s -lsfml-system-s -lopengl32 -lfreetype -lgdi32 -lwinmm -O2 -o static.exe

int main() {
  sf::ContextSettings settings;
  settings.antialiasingLevel = 8;
  int style = (sf::Style::Titlebar | sf::Style::Close);
  sf::VideoMode video = sf::VideoMode(1280, 720);
  sf::RenderWindow window(video, "SFML works!", style, settings);
  window.setFramerateLimit(60);
  window.setKeyRepeatEnabled(false);

  GlobalValues *global = new GlobalValues();
  BattleState *test = new BattleState(global);

  while (window.isOpen()) {
    sf::Time time = global->restartTime();
    global->setElapsedTime(time.asMicroseconds() / 1000000.0);
    sf::Event event;
    while (window.pollEvent(event)) {
      switch (event.type) {
        case sf::Event::Closed:
          window.close();
          break;
        case sf::Event::LostFocus:
          global->setFocus(false);
          break;
        case sf::Event::GainedFocus:
          global->setFocus(true);
          global->restartTime();
          global->setElapsedTime(time.asMicroseconds() / 1000000.0);
          break;
      }
    }

    window.clear(sf::Color(100, 200, 100));

    // Update inputs, but only if focused
    if (global->hasFocus()) {
      // Do not update mouse if cursor is out of window boundary
      global->setKeyUp(sf::Keyboard::isKeyPressed(sf::Keyboard::Up));
      global->setKeyDown(sf::Keyboard::isKeyPressed(sf::Keyboard::Down));
      global->setKeyLeft(sf::Keyboard::isKeyPressed(sf::Keyboard::Left));
      global->setKeyRight(sf::Keyboard::isKeyPressed(sf::Keyboard::Right));
      global->setKeyConfirm(sf::Keyboard::isKeyPressed(sf::Keyboard::Z));
      global->setKeyCancel(sf::Keyboard::isKeyPressed(sf::Keyboard::X));
    }

    // Update states and objects
    test->update();

    // Render view
    test->draw(&window);

    window.display();
  }

  delete test;
  delete global;

  return 0;
}
