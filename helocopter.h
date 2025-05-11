#pragma once
#include "GameObject.h"
class helocopter :public GameObject
{
public:
    helocopter(Game* r_pGame, point ref, double s, color fc, color bc);
    void  draw() const override;
};

