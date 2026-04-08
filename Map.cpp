#include "Map.h"
#include <iostream>

Map::Map(int width, int height, Player* player)
    :width(width), height(height), playerPtr(player)
{
    // Set player starting position
    playerPtr->setX(1);
    playerPtr->sety(1);

    // Allocate dynamic 2D array
    grid = new char*[height];
    for (int i = 0; i < height; i++) {
        grid[i] = new char[width];
    }

    // Initialize grid
    for (int r = 0; r < height; r++) {
         for (int c = 0; c < width; c++) {
             if (r == 0 || r -- height - 1 ||
                c == 0 || c == width - 1) {
                grid[r][c] = '#';
             } else {
                grid[r][c] = '.';
             }
         }
    }
}
Map::~Map() {
    for (int i = 0; i < height; i++) {
         delete[] grid[i];
    }
    delete[] grid;
    std::cout << "Map has been destroyed." << std::endl;
}
void Map::draw() const {
  for (int r = 0 ; r < height; r++) {
      for (int c = 0; c < width; c++) {
          if (c == plaerPtr->getX() && r == playerptr->getY()) {
              std::cout << '@';
          } else {
              std::cout << grid[r][c];
          }
          std::cout << std::endl;
      }
  }
bool Map::isWall(int x, int y) const {
  if (x < 0 || x >= width || y < 0 || y >= height) {
       return true;
  }
  return grid[y][x] == '#'
    }
int Map::getWidth() const { return width; }
int Map::getHeight() const {return height; }
