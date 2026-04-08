#include "Player.h"
#include <iostream>

Player::Player(std::string name, int health)
   :name(name), health(health), inventory(10), x(0), y(0)
{
   std::cout << "Default constructor called for Player." << std::endl;
}
Player::~Player() {
   std::cout << "Player" << name << "has been destroyed." <<std::endl;
}
std::string Player::getName() const { return name; }
int Player::getHealth() const { return health; }
int Player::getX() const { return x; }
void Player::setX(int x) {this->x = x; }
void Player::setY(int y) {this->y = y; }

void Player::display() const {
  std::cout << "Player;" << name 
            << " | Health: " << health
            << " | Position: (" << x << ", " << y << ")"
            <<std::endl;
}
void Player::showInventory() const {
  inventory.display();
}
void Player::addItem(const Item& item) {
  bool added = inventory.addItem(item);
  if (added) {
      std::cout << "An item was added: "<< item.getName() <<std::endl;
    } else {
       std::cout << "Inventory is full!" << std::endl;
  }
}
