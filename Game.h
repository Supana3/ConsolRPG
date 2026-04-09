#pragma once
#include "Player.h"
#include "Map.h"

class Game {
private:
   Player player;
   Map gameMap;
   bool running;

  void processInput();
public:
  Game();
  ~Game();
  void run();
};
