#include <iostream>
#include <vector> // for vectors
#include "room.h" // header file

using namespace std;

// class for rooms

// constructor
Room::Room(char* newDescription, vector<Item*> newItems) {
  description = newDescription;
  items = newItems;
}

// getDescription function
char* Room::getDescription() {
  return description;
}

// getItems function
vector<Item*> Room::getItems() {
  return items;
}

// setExits function
void Room::setExits(map<char*,Room*>* roomMap) {
  exits = roomMap;
}
