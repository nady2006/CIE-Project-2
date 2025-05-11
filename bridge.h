#pragma once
#include "GameObject.h"
class bridge :public GameObject
{
public:
    bridge(Game* r_pGame, point ref,double s, color fc, color bc);
    void  draw() const override;
};

