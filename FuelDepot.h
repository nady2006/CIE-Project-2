#pragma once
#include "PlaneMovement.h"
class FuelDepot :
    public PlaneMovement
{
public:
    void FuelDepotDraw(window& testwindow, int x, int y);
};

