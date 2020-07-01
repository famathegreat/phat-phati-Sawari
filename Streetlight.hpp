#pragma once
#include "SDL.h"
#include "unit.hpp"
#include <iostream>

class Streetlight :public Unit
{
    int side;
    int id;
    public:
    Streetlight();
    Streetlight(SDL_Texture* , int, int);
    void setPos();
    void updatePos();
    ~Streetlight();
};