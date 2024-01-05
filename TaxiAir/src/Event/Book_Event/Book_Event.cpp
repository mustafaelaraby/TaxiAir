#include "Book_Event.h"


// Parameterized Constructor
Book_Event::Book_Event(char newFlightType, int newTimeStamp, int newID,  int newPassengers)
    : Event(newTimeStamp, newID), Flight_Type(newFlightType), passengers(newPassengers)
{
}


// Getters

int Book_Event::getTimeStamp() const
{
    return time_stamp;
}


int Book_Event::getID()const
{
    return ID;
}

char Book_Event::getFlightType() const
{
    return Flight_Type;
}

int Book_Event::getPassengers() const
{
    return passengers;
}

// Setters

void Book_Event::setFlightType(char newFlightType)
{
    Flight_Type = newFlightType;
}

void Book_Event::setPassengers(int newPassengers)
{
    passengers = newPassengers;
}
