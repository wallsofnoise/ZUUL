#include <iostream>
#include <string.h> // for strcmp()
#include <vectors> // for vectors

using namespace std;

// name: rose hall
// date: 12.09.19
// project: Zuul! a fun adventure game with 15 rooms and 5 items and absolutely no cohesive narrative!

// bool for game loop
bool gameRunning = true;

// char array to store which function has been called
char* calledFunction = new char[4];

// char arrays to store function inputs for strcmp tests
char quitF[] = "QUIT";
char moveF[] = "MOVE";
char takeF[] = "TAKE";
char dropF[] = "DROP";

// function prototypes
void QUIT(void);
void MOVE(void);
void TAKE(void);
void DROP(void);

int main() { // main method
  // gives information about program and how to operate it
  cout << "this is a text-based adventure game, operated by commands!\nyou can type QUIT into the console to quit at any time.\nyou can type MOVE into the console to move in a direction between two rooms.\nyou can type TAKE into the console to pick up objects in a room if any are available.\nyou can type DROP into the console in order to drop an item into your current room." << endl;
  while (gameRunning == true) { // the game loop
    // insert current room and info about current room here
    // prompt for input
    cout << "what would you like to do?" << endl;
    // take input to determine which function will be called
    cin >> calledFunction;
    cin.get();
    // if quit function is called
    if (strcmp(calledFunction,quitF) == 0) {
      // perform function
      QUIT();
    }
    // if move function is called
    else if (strcmp(calledFunction,moveF) == 0) {
      // perform function
      MOVE();
    }
    // if take function is called
    else if (strcmp(calledFunction,takeF) == 0) {
      // perform function
      TAKE();
    }
    // if drop function is called
    else if (strcmp(calledFunction,dropF) == 0) {
      DROP();
    }
    // if input is invalid, inform user
    else {
      cout << "the command you attempted to input does not exist! please try again." << endl;
    }
  }
}
