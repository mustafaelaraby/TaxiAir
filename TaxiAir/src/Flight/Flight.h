#pragma once

class Flight
{
private:
    int ID, TS, DA, AA, passengers, WT, ST, FT, step_count;
    char type, state;

public:
    // Constructors
    Flight();
    Flight(int ID, int TS, int DA, int AA, int passengers, char type, char state);

    // Getters
    int getID() const;
    int getTS() const;
    int getDA() const;
    int getAA() const;
    int getPassengers() const;
    int getWT() const;
    int getST() const;
    int getFT() const;
    int getStepCount() const;
    char getType() const;
    char getState() const;

    // Setters
    void setID(int newID);
    void setTS(int newTS);
    void setDA(int newDA);
    void setAA(int newAA);
    void setPassengers(int newPassengers);
    void setWT(int newWT);
    void setST(int newST);
    void setFT(int newFT);
    void setStepCount(int newStepCount);
    void setType(char newType);
    void setState(char newState);
};
