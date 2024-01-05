#pragma once

class Event
{
protected:
    int time_stamp, ID;

public:
    // Constructors
    Event();
    Event(int newTimeStamp, int newID) 
    {
        time_stamp = newTimeStamp;
        ID = newID;
    }
    virtual ~Event() {}; // Declare the destructor as virtual for an abstract class

    // Getters
    virtual int getTimeStamp() const =0;
    virtual int getID() const =0;
};
