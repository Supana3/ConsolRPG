#include <iostream>
#include "Player.h"
#include "Item.h"

int main() {
  Player hero ("Hero", 100);

  Item sword("Sword", 10);
  Item sheild("Sheild", 15);
  Item potion("Potion", 5); //This one will NOT be added

  std::cout << "\n---Hero's Inventory ---" << std::endl;
  hero.showInventory();

  std::cout << "\nTotal items added to inventories:"
            << Item::getTotalItem() << std::endl;
return 0;
}
