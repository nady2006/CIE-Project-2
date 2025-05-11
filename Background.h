#pragma once
#include "CMUgraphicsLib\CMUgraphics.h"

class Background {
private:
    int greenRectWidth;  // Width of the green rectangles on the sides

public:
    Background(int width = 150);

    // Draw the background and return the green rectangle width
    int draw(window* kimo, int windowWidth, int windowHeight);

    // Getter for green rectangle width
    int getGreenRectWidth() const;
    void draw_motion(window& w); //animation 
};
