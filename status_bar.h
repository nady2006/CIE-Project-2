#pragma once
class status{
    string * MenuItems;
    string* s;
    int* n;
    color* colors;
    int size;
    int MenuItemWidth;
    int Height;
    window w;
public:
    status(int x = 4, int width = 50, int height = 50); 
    void set_images(int i, string y); 
    void set_status(int i, int x); 
    void DrawMenuDemo(window& w);
    ~status();
};
