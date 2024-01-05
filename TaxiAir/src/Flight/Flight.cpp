#include "Flight.h"

// Default Constructor
Flight::Flight() : ID(0), TS(0), DA(0), AA(0), passengers(0), WT(0), ST(0), FT(0), step_count(0), type('\0'), state('\0')
{
}

// Parameterized Constructor
Flight::Flight(int newID, int newTS, int newDA, int newAA, int newPassengers, char newType, char newState)
    : ID(newID), TS(newTS), DA(newDA), AA(newAA), passengers(newPassengers),
    WT(0), ST(0), FT(0), step_count(0), type(newType), state(newState)
{}

// Getters
int Flight::getID() const
{
    return ID;
}

int Flight::getTS() const
{
    return TS;
}

int Flight::getDA() const
{
    return DA;
}

int Flight::getAA() const
{
    return AA;
}

int Flight::getPassengers() const
{
    return passengers;
}

int Flight::getWT() const
{
    return WT;
}

int Flight::getST() const
{
    return ST;
}

int Flight::getFT() const
{
    return FT;
}

int Flight::getStepCount() const
{
    return step_count;
}

char Flight::getType() const
{
    return type;
}

char Flight::getState() const
{
    return state;
}

// Setters
void Flight::setID(int newID)
{
    ID = newID;
}

void Flight::setTS(int newTS)
{
    TS = newTS;
}

void Flight::setDA(int newDA)
{
    DA = newDA;
}

void Flight::setAA(int newAA)
{
    AA = newAA;
}

void Flight::setPassengers(int newPassengers)
{
    passengers = newPassengers;
}

void Flight::setWT(int newWT)
{
    WT = newWT;
}

void Flight::setST(int newST)
{
    ST = newST;
}

void Flight::setFT(int newFT)
{
    FT = newFT;
}

void Flight::setStepCount(int newStepCount)
{
    step_count = newStepCount;
}

void Flight::setType(char newType)
{
    type = newType;
}

void Flight::setState(char newState)
{
    state = newState;
}
