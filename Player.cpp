#include "Player.h"
#include <iostream>

Player::Player(std::string name, int health)
   :name(name), health(health), inventory(10)
{
   std::cout << "Default constructor called for Player." << std::endl;
}
Player::~Player() {
   std::cout << "Player" << name << "has been destroyed." <<std::endl;
}
std::string Player::getName() const {
  return name;
}
int Player::getHealth() const {
  return health;
}
void Player::display() const {
  std::cout << "Player;" << name << " | Health: " << health <<std::endl;
}
void Player::showInventory() const {
  inventory.display();
}
void Player::addItem(const Item& item) {
  bool added = innventory.addItem(item);
  if (added) {
      std::cout << "An item was added: "<< item.getName() <<std::endl;
      std::cout << "Hero found a [" << item.getName()
                << "] (Value; " << item.getValue() << ")" << std::endl;
  } else {
       std::cout << "Inventory is full! Could not add: " << item.getName() << std::endl;
  }
}
