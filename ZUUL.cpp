#include <iostream>
#include <string.h> // for strcmp() and strcpy()
#include <vector> // for vectors
#include <map> // for maps
#include "room.h" // for room class

using namespace std;

// name: rose hall
// date: 12.09.19
// project: Zuul! a fun adventure game with 15 rooms and 5 items and absolutely no cohesive narrative!

// char arrays to store function inputs for strcmp tests
char quitF[] = "QUIT";
char moveF[] = "MOVE";
char takeF[] = "TAKE";
char dropF[] = "DROP";

// function prototypes
void QUIT(bool* gameRunning);
void MOVE(Room** currentRoom);
void TAKE(Room* currentRoom, vector<Item*>* inv);
void DROP(Room* currentRoom, vector<Item*>* inv);

int main() { // main method

  // bool for game loop
  bool gameRunning = true;
  
  // char array to store which function has been called
  char* calledFunction = new char[5];

  // char arrays to store directions
  char* north = new char[6];
  strcpy(north,"NORTH\0");
  char* south = new char[6];
  strcpy(south,"SOUTH\0");
  char* west = new char[5];
  strcpy(west,"WEST\0");
  char* east = new char[5];
  strcpy(east,"EAST\0");
  
  // create player inventory
  vector<Item*>* inv = new vector<Item*>;

  // create rooms
  
  // room 1
  char* desc1 = new char[500]; // create description array
  strcpy(desc1,"You are in the Trostland landing zone. You can see a church tower and the ruins of buidlings."); // copy description to array
  vector<Item*>* roominv1 = new vector<Item*>(); // create vector inv for room
  Room* r1 = new Room(desc1,roominv1);
  
  // room 2
  char* desc2 = new char[500]; // create description array
  strcpy(desc2,"You are in the Trostland church tower. You can see steps leading up to the tower's top and a door into a system of tunnels underneath the church."); // copy description to array
  vector<Item*>* roominv2 = new vector<Item*>(); // create vector inv for room
  Room* r2 = new Room(desc2,roominv2);

  // room 3
  char* desc3 = new char[500]; // create description array
  strcpy(desc3,"You enter the Atrium lost sector. After dealing with a few dregs, the room becomes empty again."); // copy description to array
  vector<Item*>* roominv3 = new vector<Item*>(); // create vector inv for room
  Room* r3 = new Room(desc3,roominv3);

  // room 4
  char* desc4 = new char[500]; // create description array
  strcpy(desc4,"Devrim Kay greets you in his tower. 'Hello, Guardian! Got those supplies for me yet?'"); // copy description to array
  vector<Item*>* roominv4 = new vector<Item*>(); // create vector inv for room
  Room* r4 = new Room(desc4,roominv4);
  
  // room 5
  char* desc5 = new char[500]; // create description array
  strcpy(desc5,"You explore the ruins, coming to a courtyard near the tower. A garage door stands half open, just enough for you to squeeze under. Another door opens into an old mining area."); // copy description to array
  vector<Item*>* roominv5 = new vector<Item*>(); // create vector inv for room
  Room* r5 = new Room(desc5,roominv5);
  
  // room 6
  char* desc6 = new char[500]; // create description array
  strcpy(desc6,"The mines are difficult to traverse, but you fight off anything unfortunate enough to cross your path."); // copy description to array
  vector<Item*>* roominv6 = new vector<Item*>(); // create vector inv for room
  Room* r6 = new Room(desc6,roominv6);

  // room 7
  char* desc7 = new char[500]; // create description array
  strcpy(desc7,"You squeeze under the garage door and enter the Terminus East lost sector. Fallen come after you in swarms, but they're nothing to a Guardian of your prowess."); // copy description to array
  vector<Item*>* roominv7 = new vector<Item*>(); // create vector inv for room
  Room* r7 = new Room(desc7,roominv7);

  // room 8
  char* desc8 = new char[500]; // create description array
  strcpy(desc8,"You explore the ruins and come across what looks like ruined shops. You can enter, or move past them deeper into the city."); // copy description to array
  vector<Item*>* roominv8 = new vector<Item*>(); // create vector inv for room
  Room* r8 = new Room(desc8,roominv8);

  // room 9
  char* desc9 = new char[500]; // create description array
  strcpy(desc9,"You enter the ruined shops. A door is there that leads deeper into them, down a set of stairs."); // copy description to array
  vector<Item*>* roominv9 = new vector<Item*>(); // create vector inv for room
  Room* r9 = new Room(desc9,roominv9);

  // room 10
  char* desc10 = new char[500]; // create description array
  strcpy(desc10,"You enter the Widow's Walk lost sector. After dispatching a nightmarish Captain who seems to keep showing up, the sector clears out again."); // copy description to array
  vector<Item*>* roominv10 = new vector<Item*>(); // create vector inv for room
  Room* r10 = new Room(desc10,roominv10);

  // room 11
  char* desc11 = new char[500]; // create description array
  strcpy(desc11,"You stroll deeper into the city, down a winding road through tall, ruined structures."); // copy description to array
  vector<Item*>* roominv11 = new vector<Item*>(); // create vector inv for room
  Room* r11 = new Room(desc11,roominv11);

  // room 12
  char* desc12 = new char[500]; // create description array
  strcpy(desc12,"You arrive in what seems to be a ruined town square. Another ruined church stands near it, crumbling."); // copy description to array
  vector<Item*>* roominv12 = new vector<Item*>(); // create vector inv for room
  Room* r12 = new Room(desc12,roominv12);

  // room 13
  char* desc13 = new char[500]; // create description array
  strcpy(desc13,"A few Fallen try to jump you, but you easily fend them off and explore the ruined church."); // copy description to array
  vector<Item*>* roominv13 = new vector<Item*>(); // create vector inv for room
  Room* r13 = new Room(desc13,roominv13);

  // room 14
  char* desc14 = new char[500]; // create description array
  strcpy(desc14,"Stepping back from the landing zone a bit leads you to a sharp cliff. A ruined building off to the side seems to have partially fallen down the cliff."); // copy description to array
  vector<Item*>* roominv14 = new vector<Item*>(); // create vector inv for room
  Room* r14 = new Room(desc14,roominv14);

  // room 15
  char* desc15 = new char[500]; // create description array
  strcpy(desc15,"You climb around on the ruined building, but there doesn't seem to be anything of interest."); // copy description to array
  vector<Item*>* roominv15 = new vector<Item*>(); // create vector inv for room
  Room* r15 = new Room(desc15,roominv15);

  // create items

  // item 1
  // push to proper room inv
  // r3->getItems()->push_back(new Item());
  // add name
  // r3->getItems()->at(0)->itemName = new char[20];
  // strcpy(r3->getItems()->at(0)->itemName,"Atrium Cache");
  // add description
  // r3->getItems()->at(0)->itemDescription = new char[100];
  // strcpy(r3->getItems()->at(0)->itemDescription,"A supply cache full of glimmer.");
  // set id
  // r3->getItems()->at(0)->itemID = 1;
  
  // item 2
  // push to proper room inv
  // r6->getItems()->push_back(new Item());
  // add name
  // r6->getItems()->at(0)->itemName = new char[20];
  // strcpy(r6->getItems()->at(0)->itemName,"Signal Booster");
  // add description
  // r6->getItems()->at(0)->itemDescription = new char[100];
  // strcpy(r6->getItems()->at(0)->itemDescription,"A communicator signal booster.");
  // set id
  // r6->getItems()->at(0)->itemID = 2;
  
  // item 3
  // push to proper room inv
  // r7->getItems()->push_back(new Item());
  // add name
  // r7->getItems()->at(0)->itemName = new char[20];
  // strcpy(r7->getItems()->at(0)->itemName,"Terminus Cache");
  // add description
  // r7->getItems()->at(0)->itemDescription = new char[100];
  // strcpy(r7->getItems()->at(0)->itemDescription,"A supply cache full of weapons.");
  // set id
  // r7->getItems()->at(0)->itemID = 3;
  
  // item 4
  // push to proper room inv
  // r10->getItems()->push_back(new Item());
  // add name
  // r10->getItems()->at(0)->itemName = new char[20];
  // strcpy(r10->getItems()->at(0)->itemName,"Widow's Cache");
  // add description
  // r10->getItems()->at(0)->itemDescription = new char[100];
  // strcpy(r10->getItems()->at(0)->itemDescription,"A supply cache full of armor.");
  // set id
  // r10->getItems()->at(0)->itemID = 1;
  
  // item 5
  // push to proper room inv
  // r13->getItems()->push_back(new Item());
  // add name
  // r13->getItems()->at(0)->itemName = new char[20];
  // strcpy(r13->getItems()->at(0)->itemName,"Exotic Engram");
  // add description
  // r13->getItems()->at(0)->itemDescription = new char[100];
  // strcpy(r13->getItems()->at(0)->itemDescription,"An engram of exotic rarity.");
  // set id
  // r13->getItems()->at(0)->itemID = 1;
  
  
  // create maps

  // room 1 map
  map<char*,Room*>* map1 = new map<char*,Room*>();
  map1->insert(pair<char*,Room*>(north,r2));
  map1->insert(pair<char*,Room*>(south,r14));
  map1->insert(pair<char*,Room*>(west,r8));
  map1->insert(pair<char*,Room*>(east,r5));
  r1->setExits(map1);

  // room 2 map
  map<char*,Room*>* map2 = new map<char*,Room*>();
  map2->insert(pair<char*,Room*>(north,r3));
  map2->insert(pair<char*,Room*>(south,r1));
  map2->insert(pair<char*,Room*>(west,NULL));
  map2->insert(pair<char*,Room*>(east,r4));
  r2->setExits(map2);

  // room 3 map
  map<char*,Room*>* map3 = new map<char*,Room*>();
  map3->insert(pair<char*,Room*>(north,NULL));
  map3->insert(pair<char*,Room*>(south,r2));
  map3->insert(pair<char*,Room*>(west,NULL));
  map3->insert(pair<char*,Room*>(east,NULL));
  r3->setExits(map3);
  
  // room 4 map
  map<char*,Room*>* map4 = new map<char*,Room*>();
  map4->insert(pair<char*,Room*>(north,NULL));
  map4->insert(pair<char*,Room*>(south,NULL));
  map4->insert(pair<char*,Room*>(west,r2));
  map4->insert(pair<char*,Room*>(east,NULL));
  r4->setExits(map4);
  
  // room 5 map
  map<char*,Room*>* map5 = new map<char*,Room*>();
  map5->insert(pair<char*,Room*>(north,r6));
  map5->insert(pair<char*,Room*>(south,NULL));
  map5->insert(pair<char*,Room*>(west,r1));
  map5->insert(pair<char*,Room*>(east,r7));
  r5->setExits(map5);
  
  // room 6 map
  map<char*,Room*>* map6 = new map<char*,Room*>();
  map6->insert(pair<char*,Room*>(north,NULL));
  map6->insert(pair<char*,Room*>(south,r5));
  map6->insert(pair<char*,Room*>(west,NULL));
  map6->insert(pair<char*,Room*>(east,NULL));
  r6->setExits(map6);

  // room 7 map
  map<char*,Room*>* map7 = new map<char*,Room*>();
  map7->insert(pair<char*,Room*>(north,NULL));
  map7->insert(pair<char*,Room*>(south,NULL));
  map7->insert(pair<char*,Room*>(west,r5));
  map7->insert(pair<char*,Room*>(east,NULL));
  r7->setExits(map7);
  
  // room 8 map
  map<char*,Room*>* map8 = new map<char*,Room*>();
  map8->insert(pair<char*,Room*>(north,r9));
  map8->insert(pair<char*,Room*>(south,NULL));
  map8->insert(pair<char*,Room*>(west,r11));
  map8->insert(pair<char*,Room*>(east,r1));
  r8->setExits(map8);

  // room 9 map
  map<char*,Room*>* map9 = new map<char*,Room*>();
  map9->insert(pair<char*,Room*>(north,r10));
  map9->insert(pair<char*,Room*>(south,r8));
  map9->insert(pair<char*,Room*>(west,NULL));
  map9->insert(pair<char*,Room*>(east,NULL));
  r9->setExits(map9);

  // room 10 map
  map<char*,Room*>* map10 = new map<char*,Room*>();
  map10->insert(pair<char*,Room*>(north,NULL));
  map10->insert(pair<char*,Room*>(south,r9));
  map10->insert(pair<char*,Room*>(west,NULL));
  map10->insert(pair<char*,Room*>(east,NULL));
  r10->setExits(map10);

  // room 11 map
  map<char*,Room*>* map11 = new map<char*,Room*>();
  map11->insert(pair<char*,Room*>(north,NULL));
  map11->insert(pair<char*,Room*>(south,r12));
  map11->insert(pair<char*,Room*>(west,NULL));
  map11->insert(pair<char*,Room*>(east,r8));
  r11->setExits(map11);
  
  // room 12 map
  map<char*,Room*>* map12 = new map<char*,Room*>();
  map12->insert(pair<char*,Room*>(north,r11));
  map12->insert(pair<char*,Room*>(south,r13));
  map12->insert(pair<char*,Room*>(west,NULL));
  map12->insert(pair<char*,Room*>(east,NULL));
  r12->setExits(map12);

  // room 13 map
  map<char*,Room*>* map13 = new map<char*,Room*>();
  map13->insert(pair<char*,Room*>(north,r12));
  map13->insert(pair<char*,Room*>(south,NULL));
  map13->insert(pair<char*,Room*>(west,NULL));
  map13->insert(pair<char*,Room*>(east,NULL));
  r13->setExits(map13);

  // room 14 map
  map<char*,Room*>* map14 = new map<char*,Room*>();
  map14->insert(pair<char*,Room*>(north,r1));
  map14->insert(pair<char*,Room*>(south,NULL));
  map14->insert(pair<char*,Room*>(west,r15));
  map14->insert(pair<char*,Room*>(east,NULL));
  r14->setExits(map14);

  // room 15 map
  map<char*,Room*>* map15 = new map<char*,Room*>();
  map15->insert(pair<char*,Room*>(north,NULL));
  map15->insert(pair<char*,Room*>(south,NULL));
  map15->insert(pair<char*,Room*>(west,NULL));
  map15->insert(pair<char*,Room*>(east,r14));
  r15->setExits(map15);

  // sets default room

  Room* currentRoom = r1;

  // gives information about program and how to operate it
  cout << "this is a text-based adventure game, operated by commands!\nyou can type QUIT into the console to quit at any time.\nyou can type MOVE into the console to move in a direction between two rooms.\nyou can type TAKE into the console to pick up objects in a room if any are available.\nyou can type DROP into the console in order to drop an item into your current room." << endl;

  while (gameRunning == true) { // the game loop
    // provide information on current room
    // cout << currentRoom << endl;
    // cout << r3 << endl;
    cout << currentRoom->getDescription() << endl;
    if (currentRoom->getItems()->size() > 0) {
      cout << "current items in room:" << endl;
      vector<Item*>::iterator it;
      for (it = (currentRoom->getItems())->begin(); it != (currentRoom->getItems())->end(); it++) {
	cout << (*it)->itemName << ": " << (*it)->itemDescription << " (" << (*it)->itemID << ")" << endl;
      }
    }
    // prompt for input
    cout << "what would you like to do?" << endl;
    // take input to determine which function will be called
    cin >> calledFunction;
    cin.get();

    // if quit function is called
    if (strcmp(calledFunction,quitF) == 0) {
      // perform function
      QUIT(&gameRunning);
    }

    // if move function is called
    else if (strcmp(calledFunction,moveF) == 0) {
      // perform function
      MOVE(&currentRoom);
    }

    // if take function is called
    else if (strcmp(calledFunction,takeF) == 0) {
      // perform function
      TAKE(currentRoom,inv);
    }

    // if drop function is called
    else if (strcmp(calledFunction,dropF) == 0) {
      DROP(currentRoom,inv);
    }

    // if input is invalid, inform user
    else {
      cout << "the command you attempted to input does not exist! please try again." << endl;
    }
  }
}

// quit function
void QUIT(bool* gameRunning) {
  // break the game loop
  cout << "shutting down..." << endl;
  *gameRunning = false;
}

// move function
void MOVE(Room** currentRoom) {
  char* directionMoved;
  // prompt input for direction
  cout << "which direction would you like to move? (NORTH, SOUTH, EAST, WEST)" << endl;
  // take input for direction
  cin.getline(directionMoved,80);
  // create iterator
  map<char*,Room*>::iterator it;
  // move through iterator
  for (it = ((*currentRoom)->getExits())->begin(); it != ((*currentRoom)->getExits())->end(); it++) {
    // if the direction inputted works
    if(strcmp(directionMoved,(*it).first) == 0) {
      if ((*it).second != NULL) {
	// move to that room
	*currentRoom = (*it).second;
	// exit function
	// cout << currentRoom << endl;
	return;
      }
    }
    // otherwise
    else {
      // keep the loop going
      continue;
    }
  }
  // if the option inputted didn't work, inform the player.
  cout << "you can't move that direction! try again." << endl;
}

// take function
void TAKE(Room* currentRoom, vector<Item*>* inv) {
  /*
  // creates input int
  int idToTake;
  // if the room is empty
  if (currentRoom->getItems()->size() == 0) {
    // let the player know
    cout << "there is nothing to take!" << endl;
  }
  // otherwise
  else {
    // prompt user for input
    cout << "which item would you like to take? use the number in parentheses on the list." << endl;
    // take user input
    cin >> idToTake;
    // create an iterator
    vector<Item*>::iterator it;
    // run through items in room
    for (it = (currentRoom->getItems())->begin(); it != (currentRoom->getItems())->end(); it++) {
      // if idToTake matches
      if (idToTake == (*it)->itemID) {
	inv->push_back(*it);
	currentRoom->getItems()->erase(it);
	return;
      }
      else {
	continue;
      }
    }
    cout << "no item exists in this room with that ID!" << endl;
  }
  */
}

// drop function
void DROP(Room* currentRoom, vector<Item*>* inv) {
  // do the thing
}
