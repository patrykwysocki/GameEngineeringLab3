#include "Falling.h"

void Falling::idle(Animation* a, SDL_Rect& destRect)
{
	std::cout << "Going from Falling to Idling" << std::endl;
	a->setCurrent(new Idle());
	destRect.y = 0;
	delete this;
}
