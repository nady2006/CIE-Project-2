#include "GameObject.h"

GameObject::GameObject(Game* r_pGame, point ref, double opj_size, color fc, color bc) : Drawable (r_pGame, ref,opj_size,0,0)
{
	fillColor = fc;
	borderColor = bc;
}

void GameObject::setRefPoint(point p)
{
	RefPoint = p;	
}


// you should implement this function knowing that each game object has refPoint, width and height 
// for simplicity, you can consider all game objects are rectangles
bool GameObject::CollisionDetection(const GameObject& gObj)
{
	return false;
}
