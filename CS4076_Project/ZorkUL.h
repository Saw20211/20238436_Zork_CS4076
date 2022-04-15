#ifndef ZORKUL_H_
#define ZORKUL_H_

#include "Command.h"
#include "Parser.h"
#include "Room.h"
#include "item.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;



class ZorkUL  {
private:
    vector <Room> rooms;
    Room *currentRoom;
    void createRooms();
    //bool processCommand(Command command);

    void createItems();
    string displayItems();
    Room& liveRoom = *currentRoom;
     void teleport(string direction);
      static Parser *parser;

public:
    ZorkUL();
    //void play();
    string goToRoom(string direction);
    string welcomeMessage();
    string printHelp();
    string teleport();
    string showMap();

    void play();
    string go(string direction);

    Room getCurrentRoom();
    //void goRoom(Command command);
 void setParser(Parser* parser);
 Parser* getParser();
};

#endif /*ZORKUL_H_*/
