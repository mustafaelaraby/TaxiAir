#include "Lane.h"

// Constructor
Lane::Lane() : type('\0'), avt(0), MA(0), MT(0), AreaID(0), state('\0')
{
}

Lane::Lane(int newAreaID,char newType, int newAvt, int newMA, int newMT)
    : type(newType), avt(newAvt), MA(newMA), MT(newMT), AreaID(newAreaID)
{
}

// Destructor (if needed)
Lane::~Lane()
{
    // Add necessary cleanup, if any
}

// Getters
char Lane::getType() const
{
    return type;
}

int Lane::getAvt() const
{
    return avt;
}

int Lane::getMA() const
{
    return MA;
}

int Lane::getMT() const
{
    return MT;
}

int Lane::getAreaID() const
{
    return AreaID;
}

char Lane::getState() const
{
    return state;
}

// Setters
void Lane::setType(char newType)
{
    type = newType;
}

void Lane::setAvt(int newAvt)
{
    avt = newAvt;
}

void Lane::setMA(int newMA)
{
    MA = newMA;
}

void Lane::setMT(int newMT)
{
    MT = newMT;
}

void Lane::setAreaID(int newAreaID)
{
    AreaID = newAreaID;
}

void Lane::setState(char newState)
{
    state = newState;
}


void Lane::setAll(int newAreaID, char newType, int newAvt, int newMA, int newMT)
{
    type = newType;
    avt = newAvt;
    MA = newMA;
    MT = newMT;
    AreaID = newAreaID;
}