#pragma once
#include "GameObject.h"
class ship :public GameObject
{
public:
    ship(Game* r_pGame, point ref, double s, color fc, color bc);
    void  draw() const override;
};
