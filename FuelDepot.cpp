#include "FuelDepot.h"

void FuelDepot::FuelDepotDraw(window& testwindow, int x, int y)
{
    testwindow.SetBrush(RED);
    testwindow.DrawRectangle(x, y + 15, x + 40, y + 30);
    testwindow.SetBrush(BLUE);
    testwindow.DrawRectangle(x, y, x + 40, y + 15);
    testwindow.SetBrush(BLUE);
    testwindow.DrawRectangle(x, y + 30, x + 40, y + 45);
    testwindow.SetBrush(RED);
    testwindow.DrawRectangle(x, y + 45, x + 40, y + 60);
    testwindow.SetPen(BLACK);
    testwindow.DrawString(x + 10, y + 30, "FUEL");
}
