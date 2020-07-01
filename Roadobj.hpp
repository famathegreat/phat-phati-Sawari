#pragma once
#include "Unit.hpp"

class RoadObj : public Unit
{//parent class for money, boosters and vehicles.
protected:
    int lane;
    int type;
    int s;
    float speed = 5;
    float size_inc = 1;
    bool stationary = false; //boolian variable introduced for objects created to show the status of the current active boosters the player has on the top left of the screen. update position does not work for them.
public:
    RoadObj();
    void updatePos();
    void setPosition();
    int getType();
    ~RoadObj();
};