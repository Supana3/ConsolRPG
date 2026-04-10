#include "Game.h"
#include <iostream>  

Game::Game()
  : player("Hero",100),
  gameMap(30, 15, &player),
  running(true)
{
  player.addItem(Item("Sword", 10));
  player.addItem(Item("Shield", 5));
  std::count << "Welcome to Console RPG!" << std::endl;
}

Game::~Game() {
  std::cout << "Game over!" << std::endl;
}

void Game::run() {
  while (running) {
    // Clear screen
    for (int i = 0; i < 50; i++) {
        std::cout << std::endl;
    }
  std::cout << "\u2261 Console RPG \u2261" << std::endl;
  gameMap.draw();
  player.display();
  std::cout << "Move (WASD) or Q to quit: ";

  processInput();
  }
}
void Game::processInput() {
  char input;
  std::cin >> input;
  input = toupper(input);

  int newX = player.getX();
  int newY = player.getY();

  if (input == 'W' ) newY--;
  else if (input == 'S') newY++;
  else if (input == 'A') newX--;
  else if (input == 'D') newX++;
  else if (input == 'Q') {
      running = false;
      return;
  }

  if (!gameMap.isWall(newX, newY)) {
      player.setX(newX);
      player.setY(newY);
  }
}
