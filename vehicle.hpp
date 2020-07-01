#pragma once
#include "SDL.h"
#include "unit.hpp"
#include "Roadobj.hpp"
#include <iostream>

class vehicle : public RoadObj
{
    // SDL_Texture *assets;
    // SDL_Rect src;
    // SDL_Rect mover;
    // int lane;
    // int type;
    bool bullet_collided = false;
    int collided = 0;

public:
    vehicle();
    vehicle(SDL_Texture *);
    //void draw(SDL_Renderer *);
    // void updatePos();
    // void setPosition();
    void setVehicle();
    void changeSrc();
    bool getCollided();
    void setCollided();
    //int getY();
    ~vehicle();
};
