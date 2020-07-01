#include "Patch.hpp"
#include <iostream>

Patch::Patch() {}

Patch::Patch(SDL_Texture *tex, int i)
{
    id = i; //id as passed in the constructor, by default 6 patches on the road.
    assets = tex;
    src = {141, 2613, 167, 94};
    setPos();
}

void Patch::setPos()
{
    mover.h = 10; //setting initial positions accroding to their ids.
    mover.x = 480;
    switch (id)
    {
    case (0):
        mover = {440, 400, 130, 10};
        break;
    case (1):
        mover = {420, 450, 180, 10};
        break;
    case (2):
        mover = {400, 500, 220, 10};
        break;
    case (3):
        mover = {380, 550, 260, 10};
        break;
    case (4):
        mover = {360, 600, 300, 10};
        break;
    case (5):
        mover = {340, 650, 340, 10};
        break;
    }
}

void Patch::updatePos()
{
    mover.y += 16; //updating position and increasing in size so they move towards the player,
    mover.x -= 10;
    mover.w += 20;
    if (mover.y > 700)
    {
        mover = {440, 400, 130, 10}; //reappears at top of the road once they escape from bottom.
    }
}
Patch ::~Patch() {}