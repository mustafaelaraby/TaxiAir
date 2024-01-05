#include "Promote_Event.h"

// Constructors
Promote_Event::Promote_Event(int newTimeStamp, int newID) : Event(newTimeStamp, newID) {}


// Member function to get time stamp
int Promote_Event::getTimeStamp() const
{
    return time_stamp;
}

// Member function to get ID
int Promote_Event::getID() const
{
    return ID;
}

// Member function to perform cancellation
void Promote_Event::promote()
{
    // Add your cancellation logic here, using the provided reason if needed
    // For example, you might want to update the state of the event or perform other actions
    // ...
}
