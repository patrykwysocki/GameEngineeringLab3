#include "Jumping.h"
#include "Falling.h"

void Jumping::idle(Animation*a, SDL_Rect &destRect)
{
	std::cout << "Going from Jumping to Idling" << std::endl;
	a->setCurrent(new Idle());
	destRect.y = 340;
	delete this;
}

void Jumping::falling(Animation* a, SDL_Rect& destRect)
{
	std::cout << "Going from Jumping to Falling" << std::endl;
	a->setCurrent(new Falling());
	destRect.y = 255;
	delete this;
}
