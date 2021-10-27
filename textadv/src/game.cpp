#include "game.h"

Game::Game()
{
    // constructor. Set up all
    // necessary info for getting started.

    // For now, we just make a two room game for testing.
    rooms.resize(2);

    // Create rooms to go into the game
    // Room #0
    Room livingRoom = Room("Living Room", "There's a sofa and TV here.", 1, -1, -1, -1);
    rooms[0] = livingRoom;

    // Room #1
    Room kitchen = Room("Kitchen", "Fridge, oven, all the usual stuff.", -1, 0, -1, -1);
    rooms[1] = kitchen;

    playerLoc = 0; // start player in living room

}

Game::~Game()
{
    // destructor. If we have allocated some
    // resources in the constructor, we'll want
    // to dispose of them (deallocate) here.
}

void Game::runCommand(string cmd) {

    // parse the command and determine what to do next.
    // for now, it's just if statements.

    if ( cmd == "look" ) {
        string name = rooms[playerLoc].getName();
        string desc = rooms[playerLoc].getDescription();
        cout << name << endl << desc << endl;
        cout << "Exits: ";
        string exitsText = rooms[playerLoc].getExitDesc();
        cout << exitsText << endl;
    }
    else if (cmd == "go north") {
        int newPlayerLoc;
        newPlayerLoc = rooms[playerLoc].getExit(0);
        if (newPlayerLoc != -1) {
            playerLoc = newPlayerLoc;
            cout << "Moved to room #" << newPlayerLoc << endl;
        } else {
            cout << "Can't go that way." << endl;
        }

    }
    else if (cmd == "go south") {
        int newPlayerLoc;
        newPlayerLoc = rooms[playerLoc].getExit(1);
        if (newPlayerLoc != -1) {
            playerLoc = newPlayerLoc;
            cout << "Moved to room #" << newPlayerLoc << endl;
        } else {
            cout << "Can't go that way." << endl;
        }

    }
    else {
        cout << "Command not implemented." << endl;
    }



}
