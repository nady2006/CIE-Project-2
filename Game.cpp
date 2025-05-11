#include "Game.h"
#include "GameConfig.h"
#include "plane.h"

Game::Game() : moveStep(50), isRunning(true), toolbar(this, intialPoint, config.windWidth, config.toolBarHeight) {
	//1 - Create the main window
	pWind = CreateWind(config.windWidth, config.windHeight, config.wx, config.wy);
	// Initialize window dimensions
	windowWidth = pWind->GetWidth();
	windowHeight = pWind->GetHeight();

	// Initialize background
	background = Background(150);


	// Initialize toolbar
	//toolbar = Toolbar();

	// Calculate plane initial position
	double planeScale = 0.1;
	int planeY = (windowHeight - planeScale * 500 - 20) / planeScale;
	int planeX = (windowWidth) / (2 * planeScale);

	// Create plane
	plane = new Plane(planeX, planeY, planeScale);
}
/*
Game::Game()
{
	//1 - Create the main window
	pWind = CreateWind(config.windWidth, config.windHeight, config.wx, config.wy);

	//2 - create and draw the toolbar
	createToolbar();

	//3 - create and draw the backgroundPlayingArea
	plane player1;


	//4- Create the Plane
	//TODO: Add code to create and draw the Plane

	//5- Create the Bullet
	//TODO: Add code to create and draw the Bullet

	//6- Create the enemies
	//TODO: Add code to create and draw enemies in random places

	//7- Create and clear the status bar
	clearStatusBar();
}*/

Game::~Game()
{
	delete plane;
}

clicktype Game::getMouseClick(int& x, int& y) const
{
	return pWind->WaitMouseClick(x, y);	//Wait for mouse click

}

string Game::getSrting() const
{
	string Label;
	char Key;
	keytype ktype;
	pWind->FlushKeyQueue();
	while (1)
	{
		ktype = pWind->WaitKeyPress(Key);
		if (ktype == ESCAPE)	//ESCAPE key is pressed
			return "";	//returns nothing as user has cancelled label
		if (Key == 13)	//ENTER key is pressed
			return Label;
		if (Key == 8)	//BackSpace is pressed
			if (Label.size() > 0)
				Label.resize(Label.size() - 1);
			else
				Key = '\0';
		else
			Label += Key;
		printMessage(Label);
	}
}

window* Game::CreateWind(int w, int h, int x, int y) const
{
	window* pW = new window(w, h, x, y);
	pW->SetBrush(config.bkGrndColor);
	pW->SetPen(config.bkGrndColor, 1);
	pW->DrawRectangle(0, 0, w, h);
	return pW;
}

void Game::createToolbar() 
{

	gameToolbar = new Toolbar(this, config.r_Point, 0, config.toolBarHeight);
	gameToolbar->draw();
}

void Game::clearStatusBar() const
{
	//Clear Status bar by drawing a filled rectangle
	pWind->SetPen(config.statusBarColor, 1);
	pWind->SetBrush(config.statusBarColor);
	pWind->DrawRectangle(0, config.windHeight - config.statusBarHeight, config.windWidth, config.windHeight);
}

void Game::printMessage(string msg) const
{
	clearStatusBar();	//First clear the status bar

	pWind->SetPen(config.penColor, 50);
	pWind->SetFont(24, BOLD, BY_NAME, "Arial");
	pWind->DrawString(10, config.windHeight - (int)(0.85 * config.statusBarHeight), msg);

}

window* Game::getWind() const
{
	return pWind;
}

void Game::run() {
	pWind->FlushKeyQueue();
	pWind->SetBuffering(true);

	char cKeyData;
	keytype kType;

	// Game loop
	while (isRunning) {
		// Handle input
		kType = pWind->GetKeyPress(cKeyData);

		if (kType == ASCII) {
			switch (cKeyData) {
			case 'a':
			case 'A':  // A key - move left
				plane->moveLeft(moveStep, background.getGreenRectWidth());
				break;
			case 'd':
			case 'D':  // D key - move right
				plane->moveRight(moveStep, windowWidth - background.getGreenRectWidth());
				break;
			case 27:   // ESC key - exit game
				isRunning = false;
				break;
			}
		}

		// Draw game elements background first to not hide plane
		background.draw_motion(*pWind);
		plane->draw(*pWind);
		toolbar.draw();
		// Update screen
		pWind->UpdateBuffer();
	}

	pWind->SetBuffering(false);
}
/*
void Game::go() const
{
	//This function reads the position where the user clicks to determine the desired operation
	int x, y;
	bool isExit = false;

	//Change the title
	pWind->ChangeTitle("- - - - - - - - - - River Raid (CIE101-project) - - - - - - - - - -");

	do
	{
		printMessage("Ready...");
		getMouseClick(x, y);	//Get the coordinates of the user click
		//if (gameMode == MODE_DSIGN)		//Game is in the Desgin mode
		//{
			//[1] If user clicks on the Toolbar
		if (y >= 0 && y < config.toolBarHeight)
		{
			isExit = gameToolbar->handleClick(x, y);
		}
		//}

	} while (!isExit);
}*/


