#include "bridge.h"
#include "Game.h"

bridge::bridge(Game* r_pGame, point ref, double s, color fc, color bc) :GameObject(r_pGame, ref, s, fc, bc)
{
	//dumy numbers 
	width = 2353 * s;
	hight = 3245 * s;
}

void bridge::draw()const
{
	window* t = pGame->getWind();
	const int ix = RefPoint.x;
	const int iy = RefPoint.y;
	t->SetBrush(SLATEGREY);
	t->SetPen(BLACK);
	t->DrawRectangle(s * (ix), s * (iy), s * (ix + 600), s * (iy + 150));
	t->SetPen(YELLOW, 3);
	t->DrawLine(s * (ix), s * (iy + 75), s * (ix + 200), s * (iy + 75));
	t->DrawLine(s * (ix + 250), s * (iy + 75), s * (ix + 550), s * (iy + 75));
}
