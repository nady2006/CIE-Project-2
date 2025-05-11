#include "ship.h"
#include "Game.h"

ship::ship(Game* r_pGame, point ref, double s, color fc, color bc) :GameObject(r_pGame, ref, s, fc, bc)
{
	//dumy numbers 
	width = 2353 * s;
	hight = 3245 * s;
}

void ship::draw()const
{
	window* t = pGame->getWind();
	const int ix = RefPoint.x;
	const int iy = RefPoint.y;
	t->SetPen(BLACK, 8);
	t->DrawLine(s * (ix + 1280), s * (iy + 370), s * (ix + 1370), s * (iy + 360), FRAME);
	t->DrawLine(s * (ix + 1530), s * (iy + 450), s * (ix + 1620), s * (iy + 435), FRAME);
	t->SetPen(BLACK, 1);
	t->SetBrush(SLATEGREY);
	t->DrawTriangle(s * (ix + 515), s * (iy + 160), s * (ix + 545), s * (iy + 260), s * (ix + 485), s * (iy + 260), FILLED);
	t->DrawTriangle(s * (ix + 850), s * (iy + 200), s * (ix + 880), s * (iy + 300), s * (ix + 825), s * (iy + 300), FILLED);
	t->DrawTriangle(s * (ix + 690), s * (iy + 45), s * (ix + 705), s * (iy + 220), s * (ix + 675), s * (iy + 220), FILLED);
	t->DrawRectangle(s * (ix + 1425), s * (iy + 470), s * (ix + 1525), s * (iy + 485));
	t->DrawRectangle(s * (ix + 1180), s * (iy + 390), s * (ix + 1270), s * (iy + 405));

	t->SetBrush(GREY);
	t->DrawRectangle(s * (ix + 470), s * (iy + 260), s * (ix + 560), s * (iy + 345));
	t->DrawRectangle(s * (ix + 650), s * (iy + 210), s * (ix + 735), s * (iy + 345));
	t->DrawRectangle(s * (ix + 810), s * (iy + 300), s * (ix + 895), s * (iy + 345));
	t->DrawRectangle(s * (ix + 605), s * (iy + 65), s * (ix + 780), s * (iy + 120));
	t->DrawRectangle(s * (ix + 1420), s * (iy + 440), s * (ix + 1530), s * (iy + 470));
	t->DrawRectangle(s * (ix + 1175), s * (iy + 360), s * (ix + 1285), s * (iy + 390));

	t->SetBrush(GREY);
	int XPoints6[] = { s * (ix + 1145), s * (ix + 1325), s * (ix + 1355),s * (ix + 1355), s * (ix + 1115),s * (ix + 1115) };
	int YPoints6[] = { s * (iy + 405), s * (iy + 405),s * (iy + 435), s * (iy + 490), s * (ix + 490),s * (ix + 435) };
	t->DrawPolygon(XPoints6, YPoints6, 6, FILLED);

	t->SetBrush(SLATEGREY);
	int XPoints5[] = { s * (ix + 465), s * (ix + 900), s * (ix + 925),s * (ix + 925), s * (ix + 445),s * (ix + 445) };
	int YPoints5[] = { s * (iy + 345), s * (iy + 345), s * (iy + 360), s * (iy + 410), s * (ix + 410),s * (ix + 360) };
	t->DrawPolygon(XPoints5, YPoints5, 6, FILLED);

	t->SetBrush(BLACK);
	t->DrawRectangle(s * (ix + 1000), s * (iy + 180), s * (ix + 1025), s * (iy + 450));
	t->DrawRectangle(s * (ix + 385), s * (iy + 410), s * (ix + 970), s * (iy + 455));

	t->SetBrush(GREY);
	int XPoints4[] = { s * (ix + 345), s * (ix + 1085), s * (ix + 1100),s * (ix + 285) };
	int YPoints4[] = { s * (iy + 440), s * (iy + 440), s * (iy + 490), s * (iy + 495) };
	t->DrawPolygon(XPoints4, YPoints4, 4, FILLED);

	t->SetBrush(BLACK);
	int XPoints1[] = { s * (ix + 20), s * (ix + 1890), s * (ix + 1860),s * (ix + 40) };
	int YPoints1[] = { s * (iy + 490), s * (iy + 465), s * (iy + 510), s * (iy + 530) };
	t->DrawPolygon(XPoints1, YPoints1, 4, FILLED);

	t->SetBrush(GREY);
	int XPoints2[] = { s * (ix + 40), s * (ix + 1860), s * (ix + 1825),s * (ix + 105) };
	int YPoints2[] = { s * (iy + 530), s * (iy + 510), s * (iy + 595), s * (iy + 590) };
	t->DrawPolygon(XPoints2, YPoints2, 4, FILLED);

	t->SetBrush(RED);
	int XPoints3[] = { s * (ix + 105), s * (ix + 1825), s * (ix + 1825),s * (ix + 210) };
	int YPoints3[] = { s * (iy + 590), s * (iy + 595), s * (iy + 640), s * (iy + 640) };
	t->DrawPolygon(XPoints3, YPoints3, 4, FILLED);

	t->SetBrush(BLACK);
	t->DrawCircle(s * (ix + 1730), s * (iy + 550), s * 30, FILLED);
}
