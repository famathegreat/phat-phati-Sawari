#include "vehicle.hpp"

vehicle::vehicle(){};

vehicle::vehicle(SDL_Texture *tex)
{
    s = 30;
    type = rand() % 3; //gives random type from rickshaw car and vehile
    setVehicle(); //sets the source coordinates from the assets, for the selected type.
    lane = rand() % 4; //gives random lane to the created object.
    setPosition(); //sets the mover cooradinates for the selected lane.
    assets = tex;
}

vehicle::~vehicle()
{
}

void vehicle::setVehicle()
{
    switch (type) //assigning source based on type.
    {
    case 0:
        src = {27, 330, 298, 246};
        break;
    case 1:
        src = {67, 638, 206, 294};
        break;
    case 2:
        src = {439, 322, 298, 246};
        break;
    }
}

void vehicle::changeSrc()
{
    src = {1144, 3256, 229, 229}; // changing source for when vehicle collides with enemy bomb to display explosion.
}

bool vehicle::getCollided()
{
    return bullet_collided; //returns if the vehicle has been collided with any emeny bomb.
}

void vehicle::setCollided()
{
    if (collided == 0) //timer for displaying explosion on screen.
    {
        //explosion displayed for one frame
        collided++; 
    }
    else
    {
        mover.y = 700; //sets y coordinate such that the vehicle gets deleted from vector.
        bullet_collided = true;
    }
}
