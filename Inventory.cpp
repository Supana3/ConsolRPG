#include "Inventory.h"
#include <iostream>

Inventory::Inventory(int capacity)
   :items(new Item[capacity]),
    capacity(capacity),
    itemCount(0)
{
}
Inventory::~Inventory() {
   delete[] items;
   std::cout << "Inventory for Hero has been destroyred." << std::endl;
}
bool Inventory::addItem(const Item& item) {
    if (itemCount >= capacity) {
        return false;
    }
   items[itemCount] = item;
   itemCount++;
   Item::incrementTotalItems();
   return true;
}
void Inventory:: display() const {
   std::cout << "Inventory (" << itemCount << "/" << capacity << "):" << std::endl;
   for (int i = 0; i < itemCount; i++) {
       std::cout << " ";
       items[i].display();
   }
}
  
