#include "Climbing.h"
#include "Falling.h"
void Climbing::idle(Animation* a, SDL_Rect &destRect)
{
	std::cout << "Going from Climbing to Idling" << std::endl;
	a->setCurrent(new Idle());
	destRect.y = 0;
	delete this;
}

void Climbing::falling(Animation* a, SDL_Rect& destRect)
{
	std::cout << "Going from Climbing to Falling" << std::endl;
	a->setCurrent(new Falling());
	destRect.y = 255;
	delete this;
}
