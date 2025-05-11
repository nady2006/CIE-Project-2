#include "PlaneMovement.h"

void PlaneMovement::MovingVertically(window& testWindow, int& plane_y, int& speed)
{
    keytype ktInput;
    char cKeyData;

    testWindow.SetPen(BLACK);
    testWindow.DrawString(5, 30, "Press 'W' or Up Arrow to increase speed");
    testWindow.DrawString(5, 50, "Press 'S' or Down Arrow to decrease speed");

    ktInput = testWindow.GetKeyPress(cKeyData);

    if (ktInput == ASCII)
    {
        if (cKeyData == 'w')
        {
            speed += 1;
            plane_y -= 1;
        }
        else if (cKeyData == 's')
        {
            speed -= 1;
            plane_y += 1;
        }
    }
    else if (ktInput == ARROW)
    {
        // Up Arrow
        if (cKeyData == 8)
        {
            speed += 1;
            plane_y -= 1;
        }
        // Down Arrow
        else if (cKeyData == 2)
        {
            speed -= 1;
            plane_y += 1;
        }
    }
}
