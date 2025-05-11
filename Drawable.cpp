#include "Drawable.h"

Drawable::Drawable(Game* r_pGame, point r_point, double opject_size,int w=0,int h=0)
{
	pGame = r_pGame;
	RefPoint = r_point;
	s = opject_size;
	
}
