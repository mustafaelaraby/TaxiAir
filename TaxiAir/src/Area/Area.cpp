#include "Area.h"

// Constructor
Area::Area() : ID(0), LN(0), distances(nullptr)
{
}

// Destructor (if needed)
Area::~Area()
{
    // Add necessary cleanup, e.g., deleting dynamic memory
    delete[] distances;
}

// Getters
int Area::getID() const
{
    return ID;
}

int Area::getLN() const
{
    return LN;
}

int* Area::getDistances() const
{
    return distances;
}

// Setters
void Area::setID(int newID)
{
    ID = newID;
}

void Area::setLN(int newLN)
{
    LN = newLN;
}

void Area::setDistances(int* newDistances)
{
    // Assuming you want to manage memory for distances
    // You might want to add more checks and memory management as needed
    delete[] distances;
    distances = newDistances;
}
