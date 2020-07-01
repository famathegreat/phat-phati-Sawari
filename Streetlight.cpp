#include "Streetlight.hpp"

Streetlight::Streetlight() {}

Streetlight::Streetlight(SDL_Texture *tex, int s, int i)
{
    side = s; //alots side(left or right) and id, (8 lights at each side), as taken by the constructor as argument
    id = i;
    assets = tex;
    setPos();
}

void Streetlight::setPos(){
    switch (side) // sets the initial position of the lights, on the roadsides according to their sides and ids.
    {
    case (0):
    {
        src = {146, 1925, 172, 535};
        switch (id)
        {
        case (0):
            mover = {410, 300, 50, 100};
            break;
        case (1):
            mover = {368, 350, 50, 100};
            break;
        case (2):
            mover = {326, 400, 50, 100};
            break;
        case (3):
            mover = {284, 450, 50, 100};
            break;
        case (4):
            mover = {242, 500, 50, 100};
            break;
        case (5):
            mover = {200, 550, 50, 100};
            break;
        case (6):
            mover = {200, 600, 50, 100};
            break;
        case (7):
            mover = {200, 650, 50, 100};
            break;
        }
        break;
    }
    case (1):
    {
        src = {394, 1925, 172, 535};
        switch (id)
        {
        case (0):
            mover = {565, 300, 50, 100};
            break;
        case (1):
            mover = {607, 350, 50, 100};
            break;
        case (2):
            mover = {649, 400, 50, 100};
            break;
        case (3):
            mover = {691, 450, 50, 100};
            break;
        case (4):
            mover = {733, 500, 50, 100};
            break;
        case (5):
            mover = {775, 550, 50, 100};
            break;
        case (6):
            mover = {817, 600, 50, 100};
            break;
        case (7):
            mover = {859, 650, 50, 100};
            break;
        }
        break;
    }
    }
}

void Streetlight::updatePos()
{
    mover.y += 20; //the streetlights at both sides move down the road and reappear from the top once they dissapear from the bottom.
    switch (side)
    {
    case (0):
        mover.x -= 16;
        if (mover.y > 700)
        {
            mover = {410, 300, 50, 100};
        }
        break;
    case (1):
        mover.x += 16;
        if (mover.y > 700)
        {
            mover = {565, 300, 50, 100};
        }
        break;
    }
}
Streetlight::~Streetlight() {}
