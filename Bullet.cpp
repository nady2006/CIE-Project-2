#include "Bullet.h"

Bullet::Bullet()
{
    isActive = false;
    x = 0;
    y = 0;
    prevY = 0;
}

void Bullet::BulletDraw(window& testWindow)
{
    testWindow.SetBrush(BLACK);
    testWindow.DrawRectangle(x, y, x + 5, y + 10);
}

void Bullet::BulletLaunch(window& testWindow)
{
    const int BULLET_SPEED = 10;
    const int PLANE_X = 225;
    const int PLANE_Y = 400;

    keytype ktInput;
    char cKeyData;

    testWindow.SetPen(BLACK);
    testWindow.DrawString(5, 70, "Press space to fire bullet");

    if (testWindow.GetKeyPress(cKeyData) == ASCII)
    {
        if (cKeyData == ' ' && !isActive)
        {
            x = PLANE_X;
            y = PLANE_Y;
            isActive = true;
            prevY = y;
        }
    }
    // Move the bullet if active
    if (isActive)
    {
        // Erase old bullet by drawing white over it
        testWindow.SetPen(WHITE);
        testWindow.SetBrush(WHITE);
        testWindow.DrawRectangle(x, prevY, x + 5, prevY + 10);

        prevY = y;
        y -= 10;
        if (y < 0)
        {
            isActive = false;
        }
}

