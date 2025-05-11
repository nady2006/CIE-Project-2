#pragma once
#include "GameObject.h"
class EnemyJet :public GameObject
{
public:
    EnemyJet(Game* r_pGame, point ref, double s, color fc, color bc);
    void  draw() const override;
};

