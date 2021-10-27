#include "game.h"

using namespace std;

int main()
{
    cout << "Starting Text Adventure" << endl;

    // create Game object and start it going
    Game myGame = Game();

    myGame.runCommand("look");
    // make sure we can get to the other room
    myGame.runCommand("go north");
    myGame.runCommand("look");
    // now make sure we can get back to the start
    myGame.runCommand("go south");
    myGame.runCommand("look");


    cout << "Exiting... Thanks for playing." << endl;
    return 0;
}
