#include "Cancel_Event.h"

// Constructors
Cancel_Event::Cancel_Event(int newTimeStamp, int newID) : Event(newTimeStamp, newID) {}


// Member function to get time stamp
int Cancel_Event::getTimeStamp() const
{
    return time_stamp;
}

// Member function to get ID
int Cancel_Event::getID() const
{
    return ID;
}

// Member function to perform cancellation
void Cancel_Event::cancel()
{
    // Add your cancellation logic here, using the provided reason if needed
    // For example, you might want to update the state of the event or perform other actions
    // ...
}
