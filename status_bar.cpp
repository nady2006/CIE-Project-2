#include <status_bar.h>
status::status(int x = 4, int width = 50, int height = 50) {
    size = x;
    MenuItems = new string[size];
    MenuItems[0] = "images\\life.jpg";
    MenuItems[1] = "images\\fuel.jpg";
    MenuItems[2] = "images\\speed.jpg";
    MenuItems[3] = "images\\xp.jpg";
    n = new int[size];
    n[0] = 5;
    n[1] = 50;
    n[2] = 5;
    n[3] = 0;
    colors = new color[size];
    colors[0] = RED;
    colors[1] = GREEN;
    colors[2] = YELLOW;
    colors[3] = BLUE;
    s = new string[size];
    s[0] = "life";
    s[1] = "fuel";
    s[2] = "speed";
    s[3] = "xp";
    this->Height = height;
    MenuItemWidth = width;

}
status::set_images(int i, string y) {
    MenuItems[i] = y;
}
status::set_status(int i, int x) {
    n[i] = x;

}
status::DrawMenuDemo(window& w)
{
    // Draw bar icon one image at a time
    for (int i = 0; i < size; i++) {
        w.DrawImage(MenuItems[i], (i * MenuItemWidth) + (200 * i), w.GetHeight() - Height - 30, MenuItemWidth, Height);
        //Draw status text 
        w.SetPen(colors[i]);
        w.SetFont(20, BOLD, MODERN);
        w.DrawString((i * MenuItemWidth) + (200 * i) + (MenuItemWidth), w.GetHeight() - Height, s[i]);
        //Draw status numbers 
        int xi, yi;
        w.SetPen(BLACK);
        w.GetStringSize(xi, yi, s[i]);
        w.DrawInteger((i * MenuItemWidth) + (200 * i) + (MenuItemWidth + xi + 20), w.GetHeight() - Height, n[i]);

    }

    // Draw a line under the toolbar
    w.SetPen(RED, 3);
    w.DrawLine(0, w.GetHeight() - 20, w.GetWidth(), w.GetHeight() - 20);
    w.DrawLine(0, w.GetHeight() - (Height + 30), w.GetWidth(), w.GetHeight() - (Height + 30));

}
status::~status(){
    delete [] MenuItems;
    delete [] s;
    delete [] n;
    delete [] colors;
}
