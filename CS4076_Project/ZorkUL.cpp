#include <iostream>
#include "ZorkUL.h"
#include "Room.h"
#include "Dialogues.h"

using namespace std;
Parser *ZorkUL::parser;
/*
int main(int argc, char argv[]) {
    ZorkUL temp;
    temp.play();
    return 0;
}
*/

// Use of Global variable
string map;


ZorkUL::ZorkUL()
{
    createRooms();
}

// Inline Function for pointer array
inline void ZorkUL::createRooms()
{

    string starR;
    starR = "A. Starting Room";
    Room *a, *b, *c, *d, *e, *f, *g, *h, *i, *j;

        a = new Room(starR);
        rooms.push_back(*a);

        b = new Room("B. You are in the deep end Keep trying");
        rooms.push_back(*b);

        c = new Room("C. I can smell the elden ring");
        rooms.push_back(*c);

        d = new Room("D. I'm scared take me home");
        rooms.push_back(*d);

        e = new Room("E. Ah whats this!");
        rooms.push_back(*e);

        f = new Room("F. Theres a wall ahead");
        rooms.push_back(*f);

        g = new Room("G. I love this game!");
        rooms.push_back(*g);

        h = new Room("H. i am now lost *cries");
        rooms.push_back(*h);

        i = new Room("I. Ooo this place is lit");
        rooms.push_back(*i);

        j = new Room("J. No way ahead, I should go back...");
        rooms.push_back(*j);

//             (North,  East,   South,  West)
            a->setExits(f, b, d, c);
            b->setExits(NULL, NULL, NULL, a);
            c->setExits(NULL, a, NULL, NULL);
            d->setExits(a, e, j, i);
            e->setExits(NULL, NULL, NULL, d);
            f->setExits(NULL, g, a, h);
            g->setExits(NULL, NULL, NULL, f);
            h->setExits(NULL, f, NULL, NULL);
            i->setExits(NULL, d, NULL, NULL);
            j->setExits(d, NULL, NULL, NULL);

    currentRoom = a; // starting room will be "a"
}

string ZorkUL::showMap()
{
    extern string map;
    map =   "Map:                \n"
            "[h] --- [f] --- [g] \n"
            "              |          \n"
            "[c] --- [a] --- [b] \n"
            "              |          \n"
            "[i] ---  [d] --- [e] \n"
            "              |          \n"
            "            [j]         \n"
            "\n Follow the map to find the Elden Ring \n";

    return map + "\n";
}


// Function to welcome the player to the game
string ZorkUL::welcomeMessage()
{
    return "\nWelcome to Elden Ring Zork Version \n"
           "In this game you must find the Elden Ring and become Elden Lord \n"
           "Become the RPG Hero you always wanted to be. \n"
            " \n"
            "If YOU! Require any help, there is a [Help!] & [MAP] button to guide you!\n"


           "\nCurrent Room: \n" + currentRoom->longDescription();
}


// Function to display the instructions on how to use the controls
string ZorkUL::printHelp(){

    //string output ="";
   // output += "Valid inputs are: ";

    return "The Goal of the game is to find the Elden Ring and become Elden Lord \n"
            "Move around the map and until you find the ring \n"
            "There is a map to guide you, just click the button";

}

// Function for teleporting the player to a random room
string ZorkUL::teleport()
{
    //needs more work,
    currentRoom = &rooms.at((int) rand() % rooms.size());
        return currentRoom->longDescription() +
            "\n You are now trapped, the only way to get to another room is to use teleport \n";
}


//list items
string ZorkUL::displayItems()
{
    return currentRoom->displayItem();
}


//moving other room function
string ZorkUL::goToRoom(string direction)
{
    Room* nextRoom = currentRoom->nextRoom(direction);
    if (nextRoom == NULL) {
        return "There is nothing in this room, turn back and continue your journey! ";
    } else {
        //continue command
        currentRoom = nextRoom;
        return currentRoom->longDescription();
    }
}

// A get fucntion to tell the player the room they are currently in.
Room ZorkUL::getCurrentRoom()
{
    return liveRoom;
}

/*
 * void ZorkUL::teleport(string room){
    if (room.compare("rand") == 0){
        unsigned int roomSize = rooms.size();
        unsigned int randRoom = rand() % roomSize;
        currentRoom = rooms[randRoom];
    }
    else{
        for (unsigned int i = 0; i < rooms.size(); i++)
        {
            if (rooms[i]->shortDescription().compare(room) == 0)
                currentRoom = rooms[i];
        }
    }

}
 */
