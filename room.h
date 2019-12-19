// header guard start
#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <vector>
#include <map>

using namespace std;

// class header for rooms

// create item struct to be used by room

struct Item {
  char* itemName;
  char* itemDescription;
  int itemID;
};

class Room {
 public:
  // constructor
  Room(char*,vector<Item*>*);
  
  // function prototypes
  char* getDescription();
  vector<Item*>* getItems();
  void setExits(map<char*,Room*>*);
  map<char*,Room*>* getExits();
  // variables
  char* description;
  vector<Item*>* items;
  map<char*,Room*>* exits;
};

// end header guard
#endif
