// header guard start
#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <vector>

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
  Room(char*,vector<Item*>);
  
  // function prototypes
  char* getDescription();
  vector<Item*> getItems();

  // variables
  char* description;
  vector<Item*> items;
};

// end header guard
#endif
