#include "Walking.h"
#include "Jumping.h"

void Walking::idle(Animation* a, SDL_Rect& destRect)
{
	std::cout << "Going from Walking to Idling" << std::endl;
	a->setCurrent(new Idle());
	destRect.y = 0;
	delete this;
}
void Walking::jumping(Animation* a, SDL_Rect& destRect)
{
	std::cout << "Going from Walking to Idling" << std::endl;
	a->setCurrent(new Jumping());
	destRect.y = 85;
	delete this;
}
