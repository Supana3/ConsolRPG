#include <iostream>
#include "Game.h"

int main() {
    try {
      Game game;
      game.run();
    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
return 0;
}
