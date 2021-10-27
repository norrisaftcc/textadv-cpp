#include "room.h"

Room::Room()
{
    //default constructor
}

Room::Room(string theName, string theDescription, int northExit, int southExit, int eastExit, int westExit)
{
    // set basic info.
    // the weirdness of variable names like "theName" is because i have a member variable (in the object)
    // and a passed-in parameter, and they can't have identical names
    name = theName;
    description = theDescription;

    // now set all four exits
    north = northExit;
    south = southExit;
    east = eastExit;
    west = westExit;
}

Room::~Room()
{
    //destructor
}

string Room::getName() {
    return name;
}

string Room::getDescription() {
    return description;
}

int Room::getExit(int direction) {
    // returns the room ID that a given exit points to.
    // example of use (moving north from oldRoom)
    // newRoomId = oldRoomId.direction(NORTH)

    /* see Room.h for the constants (repeated here):
    public static const int NORTH = 0;
    public static const int SOUTH = 1;
    public static const int EAST = 2;
    public static const int WEST = 3; */

    switch(direction) {
        case NORTH:
            return north;
        case SOUTH:
            return south;
        case EAST:
            return east;
        case WEST:
            return west;

    }

}
