#pragma once
#include <string>
#include "Inventory.h"

class Player {
private:
    std::string name;
    int health;
    Inventory inventory;

public:
    Player (std::string name, int health);
    ~Player();
    std::string getName() const;
    int getHealth() const;
    void display() const;
    void showInventory() const;
    void addItem(const Item& item);
};

