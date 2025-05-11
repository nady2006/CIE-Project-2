#pragma once
#include "CMUgraphicsLib\CMUgraphics.h"
#include <string>

class Plane {
private:
    int x;              // X position
    int y;              // Y position
    double scale;       // Scale factor for drawing
    int width;          // Width of the plane
    int height;         // Height of the plane

public:
    // Constructor with position and scale
    Plane(int initialX, int initialY, double initialScale = 0.1);

    // Draw the plane at its current position
    void draw(window& kimo);

    // Move the plane left with boundary checking
    void moveLeft(int step, int leftBoundary);

    // Move the plane right with boundary checking
    void moveRight(int step, int rightBoundary);

    // Getter methods
    int getX() const;
    int getY() const;
    double getScale() const;
    int getWidth() const;
    int getHeight() const;
};
