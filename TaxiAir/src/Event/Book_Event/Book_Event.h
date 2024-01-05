#pragma once
#include "../Event.h"
#include "../../Flight/Flight.h"

class Book_Event : public Event
{
private:
    char Flight_Type;
    int passengers;

public:
    // Constructors
    Book_Event(char newFlightType, int newTimeStamp, int newID, int newPassengers);

    // Getters
    int getTimeStamp() const;
    int getID() const;
    char getFlightType() const;
    int getPassengers() const;
    

    // Setters
    void setFlightType(char newFlightType);
    void setPassengers(int newPassengers);


    Flight* book();

};
