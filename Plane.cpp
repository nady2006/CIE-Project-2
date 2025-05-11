#include "Plane.h"
#include <string>

Plane::Plane(int initialX, int initialY, double initialScale)
    : x(initialX), y(initialY), scale(initialScale) {
    width = scale * 1200;  // plane width based on scale
    height = scale * 500;  // plane height based on scale
}

void Plane::draw(window& kimo) {
    // Main body (green)
    kimo.SetPen(BLACK);
    kimo.SetBrush(GREEN);
    int XPoints1[] = { scale * x, scale * (x + 215), scale * (x + 260), scale * (x + 595), scale * (x + 595), scale * (x + 560), scale * (x + 560), scale * (x + 225), scale * (x + 175), scale * x
                     , scale * (x - 175), scale * (x - 225), scale * (x - 560), scale * (x - 560), scale * (x - 595), scale * (x - 595), scale * (x - 260), scale * (x - 215) };
    int YPoints1[] = { scale * (y - 705), scale * (y - 500), scale * (y - 320), scale * (y), scale * (y + 100), scale * (y + 140), scale * (y + 20), scale * (y - 285), scale * (y - 465), scale * (y - 640)
                     , scale * (y - 465), scale * (y - 285), scale * (y + 20), scale * (y + 140), scale * (y + 100), scale * (y), scale * (y - 320), scale * (y - 500) };
    kimo.DrawPolygon(XPoints1, YPoints1, 18, FILLED);

    // Inner body (yellow-green)
    kimo.SetBrush(GREENYELLOW);
    int XPoints2[] = { scale * x, scale * (x + 175), scale * (x + 225), scale * (x + 560), scale * (x + 560), scale * (x + 535), scale * (x + 370), scale * (x + 240), scale * (x + 445), scale * (x + 405), scale * (x + 205), scale * x,
                        scale * (x - 240), scale * (x - 445), scale * (x - 405), scale * (x - 250),  scale * (x - 370), scale * (x - 535), scale * (x - 560), scale * (x - 560), scale * (x - 225), scale * (x - 175) };
    int YPoints2[] = { scale * (y - 640), scale * (y - 465), scale * (y - 285), scale * (y + 20), scale * (y + 140), scale * (y + 160), scale * (y + 205),	scale * (y + 130), scale * (y + 320), scale * (y + 415), scale * (y + 445),
        scale * (y - 340), scale * (y + 445), scale * (y + 415), scale * (y + 320), scale * (y + 130), scale * (y + 205), scale * (y + 160), scale * (y + 140), scale * (y + 20), scale * (y - 285), scale * (y - 465) };
    kimo.DrawPolygon(XPoints2, YPoints2, 22, FILLED);

    // Tail section (green)
    kimo.SetBrush(GREEN);
    int XPoints3[] = { scale * x, scale * (x + 35), scale * (x + 255), scale * (x + 215), scale * (x + 60), scale * x, scale * (x - 60), scale * (x - 215), scale * (x - 255), scale * (x - 35) };
    int YPoints3[] = { scale * (y - 825), scale * (y - 160), scale * (y + 25), scale * (y + 270), scale * (y + 270), scale * (y + 500), scale * (y + 270), scale * (y + 270), scale * (y + 25), scale * (y - 160) };
    kimo.DrawPolygon(XPoints3, YPoints3, 10, FILLED);

    // Tail inner section (yellow-green)
    kimo.SetBrush(GREENYELLOW);
    int XPoints4[] = { scale * (x + 70), scale * (x + 160), scale * (x + 145), scale * (x + 75), scale * (x + 60), scale * x, scale * (x - 60), scale * (x - 75), scale * (x - 145), scale * (x - 160), scale * (x - 70) };
    int YPoints4[] = { scale * (y - 825), scale * (y + 275), scale * (y + 360), scale * (y + 355), scale * (y + 275), scale * (y - 825), scale * (y + 275), scale * (y + 355), scale * (y + 360), scale * (y + 275), scale * (y - 825) };
    kimo.DrawPolygon(XPoints4, YPoints4, 11, FILLED);

    // Right landing gear (grey)
    kimo.SetBrush(GREY);
    int XPoints5[] = { scale * (x + 145), scale * (x + 140), scale * (x + 85), scale * (x + 75) };
    int YPoints5[] = { scale * (y + 360), scale * (y + 405), scale * (y + 405), scale * (y + 355) };
    kimo.DrawPolygon(XPoints5, YPoints5, 4, FILLED);

    // Left landing gear (grey)
    kimo.SetBrush(GREY);
    int XPoints6[] = { scale * (x - 75), scale * (x - 85), scale * (x - 140), scale * (x - 145) };
    int YPoints6[] = { scale * (y + 355), scale * (y + 405), scale * (y + 405), scale * (y + 360) };
    kimo.DrawPolygon(XPoints6, YPoints6, 4, FILLED);

    // Cockpit (grey)
    kimo.SetBrush(GREY);
    int XPoints7[] = { scale * x, scale * (x + 70), scale * (x - 70) };
    int YPoints7[] = { scale * (y - 1060), scale * (y - 825), scale * (y - 825) };
    kimo.DrawPolygon(XPoints7, YPoints7, 3, FILLED);

    // Lights (yellow)
    kimo.SetBrush(YELLOW);
    kimo.DrawCircle(scale * (x + 405), scale * (y + 60), scale * 2 * 35, FILLED);
    kimo.DrawCircle(scale * (x - 405), scale * (y + 60), scale * 2 * 35, FILLED);
    kimo.DrawCircle(scale * (x + 290), scale * (y + 330), scale * 2 * 20, FILLED);
    kimo.DrawCircle(scale * (x - 290), scale * (y + 330), scale * 2 * 20, FILLED);
}

void Plane::moveLeft(int step, int leftBoundary) {
    x -= step;
    // Prevent moving too far left (into the left green rectangle)
    if (x - 600 * scale < 595-leftBoundary / scale)
        x = leftBoundary / scale + 600 * scale;
}

void Plane::moveRight(int step, int rightBoundary) {
    x += step;
    // Prevent moving too far right (into the right green rectangle)
    if (x + 600 * scale > rightBoundary+595 / scale)
        x = rightBoundary / scale - 600 * scale;
}

int Plane::getX() const { return x; }
int Plane::getY() const { return y; }
double Plane::getScale() const { return scale; }
int Plane::getWidth() const { return width; }
int Plane::getHeight() const { return height; }

