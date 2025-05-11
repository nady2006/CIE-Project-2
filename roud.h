#pragma once
#include "GameObject.h"
class roud :public GameObject
{
public:
    roud(Game* r_pGame, point ref, double s, color fc, color bc);
    void  draw() const override;
};
