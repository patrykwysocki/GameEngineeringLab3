#include "Idle.h"
#include "Climbing.h"
#include "Jumping.h"
#include "Walking.h"

void Idle::walking(Animation* a, SDL_Rect& destRect)
{
	std::cout << "Walking" << std::endl;
	a->setCurrent(new Walking());
	destRect.y = 340;
	delete this;
}

void Idle::jumping(Animation* a,SDL_Rect &destRect)
{
	std::cout << "Jumping" << std::endl;
	a->setCurrent(new Jumping());
	destRect.y = 85;
	delete this;
}

void Idle::climbing(Animation * a, SDL_Rect &destRect)
{
	std::cout << "Climbing" << std::endl;
	a->setCurrent(new Climbing());
	destRect.y = 170;
	delete this;
}