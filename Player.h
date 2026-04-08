#pragma once
#include <string>
#include "Inventory.h"

class Player {
private:
    std::string name;
    int health;
    Inventory inventory;
    int x;
    int y;

public:
    Player (std::string name, int health);
    ~Player();
    std::string getName() const;
    int getHealth() const;
    int getX() const;
    int getY() const;
    void setX(int x);
    void setY(int y);
    void display() const;
    void showInventory() const;
    void addItem(const Item& item);
};

