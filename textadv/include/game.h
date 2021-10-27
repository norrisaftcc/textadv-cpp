#ifndef GAME_H
#define GAME_H

// dependencies:
// I/O, strings
#include <iostream>
#include <string>
// vectors
#include <vector>
// other classes we work with in this project
#include "room.h"

using namespace std;

/*
This is the main Game class for the project.
main.cpp is only responsible for creating
a Game and starting it up.
*/

class Game
{
    public:
        Game();
        virtual ~Game();

        // lets us test the game; this will probably be private later on.
        void runCommand(string cmd);

    protected:

    private:
        // member variables used only by the game itself
        // if any of this information should be available
        // to other classes, we would add getters/setters
        // just for the accessible variables.
        // (Generally this is "information hiding.")

        // rooms are organized by ID#, which is their index in the vector
        vector<Room> rooms;

        // player information
        int playerLoc;     // which room the player is in



};

#endif // GAME_H
