#pragma once
#include "CMUgraphicsLib\CMUgraphics.h"

class Game;     //forward declaration

struct point
{
	int x, y;
};


class Drawable
{
protected:
	point RefPoint;		//Each game object must have a reference point
	double s=0;
	int width, hight;
	Game* pGame;        //pointer to game object

public:
	Drawable(Game* r_pGame, point r_point, double opject_size,int w,int h);
	virtual void draw() const =0;
};

