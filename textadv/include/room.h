#ifndef ROOM_H
#define ROOM_H

#include <string>
using namespace std;

/*
A Game is a series of connected rooms. The player
will move through different rooms by using exits.

*/




class Room
{
    public:
        Room();                   // default constructor
        virtual ~Room();          // default destructor

        // Constructor -- takes all needed info on creation
        Room(string name, string description, int north, int south, int east, int west);

        // the public methods are what Game needs to interact
        // with individual rooms
        string getName();
        string getDescription();
        //vector<int> getExits();     // this is something we may do later
        int getExit(int direction);   // for now we'll get each exit individually

        // setting some constants -- it's convenient to
        // be able to refer to an exit as NORTH rather than 0,
        // for example
        static const int NORTH = 0;
        static const int SOUTH = 1;
        static const int EAST = 2;
        static const int WEST = 3;


    protected: // mid-way between public and private; discussed in future

    private:
        // using the principle of information hiding,
        // our variables are private.
        // If any specific info needs to be exposed to
        // another class, we'll add getters and setters.

        // every room has a name, description, and exits to other rooms
        string name;
        string description;
        int north;  // this contains the ID of the room this exit leads to
        int south;  // (or -1 if it's not a valid exit from this room)
        int east;
        int west;

};

#endif // ROOM_H
