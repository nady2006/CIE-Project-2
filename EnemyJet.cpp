#include "EnemyJet.h"
#include "Game.h"

EnemyJet::EnemyJet(Game* r_pGame, point ref, double s, color fc, color bc) :GameObject(r_pGame, ref, s, fc, bc)
{
	//dumy numbers 
	width = 2353 * s;
	hight = 3245 * s;
}

void EnemyJet::draw()const
{
	window* t = pGame->getWind();
	const int ix = RefPoint.x;
	const int iy = RefPoint.y;
	t->SetPen(BLACK);
	t->SetBrush(SADDLEBROWN);
	int XPoints5[] = { s * (ix + 460), s * (ix + 490), s * (ix + 510),s * (ix + 545), s * (ix + 590),s * (ix + 505),s * (ix + 470) };
	int YPoints5[] = { s * (iy + 375), s * (iy + 370), s * (iy + 365), s * (iy + 370), s * (iy + 385),s * (iy + 390),s * (iy + 385) };
	t->DrawPolygon(XPoints5, YPoints5, 7, FILLED);
	t->SetBrush(BROWN);
	int XPoints1[] = { s * (ix + 115), s * (ix + 350), s * (ix + 460),s * (ix + 590), s * (ix + 620),s * (ix + 605), s * (ix + 610), s * (ix + 255),s * (ix + 115) };
	int YPoints1[] = { s * (iy + 395), s * (iy + 375), s * (iy + 375), s * (iy + 385), s * (iy + 395),s * (iy + 415), s * (iy + 435), s * (iy + 440), s * (iy + 425) };
	t->DrawPolygon(XPoints1, YPoints1, 9, FILLED);
	t->SetBrush(DARKORANGE);
	int XPoints2[] = { s * (ix + 620), s * (ix + 605), s * (ix + 610),s * (ix + 725), s * (ix + 725) };
	int YPoints2[] = { s * (iy + 395), s * (iy + 415), s * (iy + 435), s * (iy + 435), s * (iy + 425) };
	t->DrawPolygon(XPoints2, YPoints2, 5, FILLED);
	t->SetBrush(SADDLEBROWN);
	int XPoints3[] = { s * (ix + 160), s * (ix + 195), s * (ix + 225),s * (ix + 265), s * (ix + 180),s * (ix + 150) };
	int YPoints3[] = { s * (iy + 390), s * (iy + 400), s * (iy + 400), s * (iy + 390), s * (iy + 305),s * (iy + 320) };
	t->DrawPolygon(XPoints3, YPoints3, 6, FILLED);

	t->SetPen(SADDLEBROWN, 15);
	t->DrawLine(s * (ix + 540), s * (iy + 440), s * (ix + 505), s * (iy + 480), FRAME);
	t->DrawLine(s * (ix + 315), s * (iy + 465), s * (ix + 330), s * (iy + 465), FRAME);
	t->SetPen(SADDLEBROWN, 10);
	t->DrawLine(s * (ix + 465), s * (iy + 435), s * (ix + 505), s * (iy + 480), FRAME);

	t->SetBrush(SANDYBROWN);
	int XPoints4[] = { s * (ix + 80), s * (ix + 135), s * (ix + 195),s * (ix + 135) };
	int YPoints4[] = { s * (iy + 410), s * (iy + 405), s * (iy + 410), s * (iy + 415) };
	t->DrawPolygon(XPoints4, YPoints4, 4, FILLED);
	int XPoints6[] = { s * (ix + 505), s * (ix + 580), s * (ix + 570),s * (ix + 515) };
	int YPoints6[] = { s * (iy + 435), s * (iy + 435), s * (iy + 450), s * (iy + 450) };
	t->DrawPolygon(XPoints6, YPoints6, 4, FILLED);

	t->SetPen(BLACK, 1);
	t->SetBrush(BLACK);
	t->DrawCircle(s * (ix + 505), s * (iy + 480), s * 20, FILLED);
	t->SetBrush(LIGHTGRAY);
	t->DrawCircle(s * (ix + 505), s * (iy + 480), s * 13, FILLED);
	t->SetBrush(GREY);
	t->DrawCircle(s * (ix + 505), s * (iy + 480), s * 7, FILLED);

	t->SetBrush(BLACK);
	t->DrawCircle(s * (ix + 300), s * (iy + 470), s * 40, FILLED);
	t->SetBrush(LIGHTGRAY);
	t->DrawCircle(s * (ix + 300), s * (iy + 470), s * 26, FILLED);
	t->SetBrush(GREY);
	t->DrawCircle(s * (ix + 300), s * (iy + 470), s * 14, FILLED);

	t->SetBrush(LIGHTGOLDENRODYELLOW);
	t->DrawEllipse(s * (ix + 470), s * (iy + 430), s * (ix + 330), s * (iy + 470));
	t->SetBrush(YELLOW);
	t->DrawEllipse(s * (ix + 245), s * (iy + 430), s * (ix + 420), s * (iy + 470));

}
