#pragma once
#include "CMUgraphicsLib\CMUgraphics.h"
#include "Background.h"
#include "Plane.h"
#include "Toolbar.h"
#include "GameConfig.h"

class Game
{
private:
	Toolbar* gameToolbar;
	point intialPoint = { 0,0 };      // refrence to the toolbar intial point
	window* pWind;     // Reference to the main window
	Background background;  // Background object
	Plane* plane;           // Pointer to the plane object
	Toolbar toolbar;        // Toolbar object
	int windowWidth;        // Window width
	int windowHeight;       // Window height
	int moveStep;           // Movement size
	bool isRunning;         // To control the game loop

public:
	Game();
	~Game();
	void run();
	window* getWind() const;		//returns a pointer to the graphics window
	window* Game::CreateWind(int w, int h, int x, int y) const;


	clicktype getMouseClick(int& x, int& y) const; //Get coordinate where user clicks and returns click type (left/right)
	string getSrting() const;	 //Returns a string entered by the user

	void createToolbar();
	void clearStatusBar() const;	//Clears the status bar


	void printMessage(string msg) const;	//Print a message on Status bar
};

