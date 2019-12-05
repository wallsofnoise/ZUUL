#include <iostream>

using namespace std;

// name: rose hall
// date: 12.09.19
// project: Zuul! a fun adventure game with 15 rooms and 5 items and absolutely no cohesive narrative!

// bool for game loop
bool gameRunning = true;

// function prototypes
void QUIT(void);
void MOVE(void);
void PICK_UP(void);
void DROP(void);

int main() { // main method
  // gives information about program and how to operate it
  cout << "this is a text-based adventure game, operated by commands!\nyou can type QUIT into the console to quit at any time.\nyou can type MOVE into the console to move in a direction between two rooms.\nyou can type PICK_UP into the console to pick up objects in a room if any are available.\nyou can type DROP into the console in order to drop an item into your current room." << endl;
}
