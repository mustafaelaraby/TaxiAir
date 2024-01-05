#pragma once

class Area
{
private:
    int ID, LN;
    int* distances;

public:
    // Constructor and Destructor (if needed)
    Area();
    ~Area();

    // Getters
    int getID() const;
    int getLN() const;
    int* getDistances() const;

    // Setters
    void setID(int newID);
    void setLN(int newLN);
    void setDistances(int* newDistances);
};
