#include "helocopter.h"
#include "Game.h"

helocopter::helocopter(Game* r_pGame, point ref, double s, color fc, color bc) :GameObject(r_pGame, ref, s, fc, bc)
{
	//dumy numbers 
	width = 2353 * s;
	hight = 3245 * s;
}

void helocopter::draw()const
{
	window* t = pGame->getWind();
	const int ix = RefPoint.x;
	const int iy = RefPoint.y;
	t->SetPen(BLACK, 1);
	t->SetBrush(MEDIUMSEAGREEN);
	int XPoints3[] = { s * (ix + 110), s * (ix + 185), s * (ix + 435),s * (ix + 460), s * (ix + 495),
						s * (ix + 500), s * (ix + 715), s * (ix + 755),s * (ix + 790), s * (ix + 845),
						s * (ix + 865), s * (ix + 865), s * (ix + 910),s * (ix + 910), s * (ix + 790),
						s * (ix + 520), s * (ix + 410), s * (ix + 365),s * (ix + 85), s * (ix + 75) };
	int YPoints3[] = { s * (iy + 165), s * (iy + 240), s * (iy + 245), s * (iy + 220), s * (iy + 220),
						s * (iy + 215), s * (iy + 215), s * (iy + 240), s * (iy + 240), s * (iy + 295),
						s * (iy + 295), s * (iy + 360), s * (iy + 360), s * (iy + 380), s * (iy + 400),
						s * (iy + 380), s * (iy + 310), s * (iy + 310), s * (iy + 270), s * (iy + 180) };
	t->DrawPolygon(XPoints3, YPoints3, 20, FILLED);

	t->SetPen(DARKGREEN, 8);
	t->DrawLine(s * (ix + 580), s * (iy + 200), s * (ix + 580), s * (iy + 65), FRAME);
	t->DrawLine(s * (ix + 555), s * (iy + 135), s * (ix + 605), s * (iy + 135), FRAME);
	t->SetPen(DARKGREEN, 12);
	t->DrawLine(s * (ix + 125), s * (iy + 200), s * (ix + 165), s * (iy + 130), FRAME);
	t->DrawLine(s * (ix + 120), s * (iy + 220), s * (ix + 185), s * (iy + 260), FRAME);
	t->DrawLine(s * (ix + 95), s * (iy + 215), s * (ix + 55), s * (iy + 285), FRAME);
	t->DrawLine(s * (ix + 100), s * (iy + 195), s * (ix + 30), s * (iy + 150), FRAME);

	t->SetPen(BLACK, 1);
	t->SetBrush(BLACK);
	t->DrawCircle(s * (ix + 570), s * (iy + 420), s * 40, FILLED);
	t->DrawCircle(s * (ix + 865), s * (iy + 405), s * 30, FILLED);
	t->DrawCircle(s * (ix + 110), s * (iy + 207), s * 30, FILLED);

	t->SetBrush(GREEN);
	t->DrawCircle(s * (ix + 110), s * (iy + 207), s * 10, FILLED);


	t->SetBrush(DARKGREEN);
	int XPoints4[] = { s * (ix + 500), s * (ix + 650), s * (ix + 625),s * (ix + 510) };
	int YPoints4[] = { s * (iy + 215), s * (iy + 215), s * (iy + 195), s * (iy + 195) };
	t->DrawPolygon(XPoints4, YPoints4, 4, FILLED);

	t->SetBrush(DARKGREEN);
	int XPoints5[] = { s * (ix + 865), s * (ix + 910), s * (ix + 910),s * (ix + 865) };
	int YPoints5[] = { s * (iy + 295), s * (iy + 330), s * (iy + 360), s * (iy + 360) };
	t->DrawPolygon(XPoints5, YPoints5, 4, FILLED);

	t->SetBrush(BLACK);
	int XPoints6[] = { s * (ix + 365), s * (ix + 410), s * (ix + 520),s * (ix + 790),s * (ix + 490) };
	int YPoints6[] = { s * (iy + 310), s * (iy + 310), s * (iy + 380), s * (iy + 400),s * (iy + 400) };
	t->DrawPolygon(XPoints6, YPoints6, 5, FILLED);


	t->SetBrush(DARKGREEN);
	int XPoints1[] = { s * (ix + 560), s * (ix + 600), s * (ix + 600),s * (ix + 580), s * (ix + 560) };
	int YPoints1[] = { s * (iy + 75), s * (iy + 75), s * (iy + 90), s * (iy + 100), s * (iy + 90) };
	t->DrawPolygon(XPoints1, YPoints1, 5, FILLED);

	t->SetBrush(GREEN);
	int XPoints2[] = { s * (ix + 90), s * (ix + 580), s * (ix + 1065),s * (ix + 1050), s * (ix + 655),s * (ix + 645), s * (ix + 580), s * (ix + 510),s * (ix + 505), s * (ix + 105) };
	int YPoints2[] = { s * (iy + 85), s * (iy + 110), s * (iy + 170), s * (iy + 190), s * (iy + 140),s * (iy + 130), s * (iy + 115), s * (iy + 115), s * (iy + 125), s * (iy + 110) };
	t->DrawPolygon(XPoints2, YPoints2, 10, FILLED);

	t->SetBrush(PALEGREEN);
	int XPoints7[] = { s * (ix + 650), s * (ix + 715), s * (ix + 755), s * (ix + 755),s * (ix + 650) };
	int YPoints7[] = { s * (iy + 215), s * (iy + 215), s * (iy + 240), s * (iy + 360), s * (iy + 360) };
	t->DrawPolygon(XPoints7, YPoints7, 5, FILLED);

	t->SetBrush(SKYBLUE);
	int XPoints8[] = { s * (ix + 770), s * (ix + 795), s * (ix + 835), s * (ix + 765) };
	int YPoints8[] = { s * (iy + 250), s * (iy + 250), s * (iy + 290), s * (iy + 290) };
	t->DrawPolygon(XPoints8, YPoints8, 4, FILLED);
	t->DrawRectangle(s * (ix + 560), s * (iy + 250), s * (ix + 640), s * (iy + 290));
	t->DrawRectangle(s * (ix + 665), s * (iy + 250), s * (ix + 745), s * (iy + 290));
}


