#pragma once
#include "PlaneMovement.h"
class Bullet :
    public PlaneMovement
{
    int x;
    int y;
    bool isActive;
    int prevY;
public:
    Bullet();


    void BulletLaunch(window& testWindow);
    void BulletDraw(window& testWindow);
};

