#include "Tree.hpp"

Tree::Tree()
{
}
Tree::Tree(SDL_Texture *tex)
{
    assets = tex;
    type = rand() % 3; //random tree picked from the three.
    setSrc(); //setting src coordinates accordingly
    side = rand() % 2; //random side chosen (left or right of the road.)
    if (side == 0)
    {
        mover.x = rand() % 300; //random x coordinate for each side of the road.
    }
    else
    {
        mover.x = rand() % 100 + 600;
    }
    mover.y = 250;
    mover.w = 80;
    mover.h = 160;
}

void Tree::setSrc()
{
    switch (type) //assigns src coordinates according to type.
    {
    case 0:
    {
        src = {641, 1943, 347, 537};
        break;
    }
    case 1:
    {
        src = {1009, 1875, 557, 625};
        break;
    }
    case 2:
    {
        src = {1603, 1881, 383, 651};
        break;
    }
    }
}

void Tree::updatePos()
{ 
    mover.y += 5; //makes the trees go to the ends of the screen, so as to make the road appear as if it is moving backwards.
    if (side == 0)
    {
        mover.x -= 8;
    }
    else
    {
        mover.x += 6;
    }
    mover.w++;
    mover.h++;
}

Tree::~Tree() {}