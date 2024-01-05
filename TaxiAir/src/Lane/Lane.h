#pragma once

class Lane
{
private:
    char type;
    int avt, MA, MT, AreaID;
    char state;

public:
    // Constructor and Destructor (if needed)
    Lane();
    Lane(int newAreaID, char newType, int newAvt, int newMA, int newMT);
    ~Lane();

    // Getters
    char getType() const;
    int getAvt() const;
    int getMA() const;
    int getMT() const;
    int getAreaID() const;
    char getState() const;

    // Setters
    void setType(char newType);
    void setAvt(int newAvt);
    void setMA(int newMA);
    void setMT(int newMT);
    void setAreaID(int newAreaID);
    void setState(char newState);
    void setAll(int newAreaID, char newType, int newAvt, int newMA, int newMT);
};
