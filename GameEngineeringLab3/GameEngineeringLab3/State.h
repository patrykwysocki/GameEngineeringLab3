#pragma once

#include "Animation.h"
#include <SDL.h>
#include  <iostream>

class State
{
public:
	virtual void idle(Animation* a, SDL_Rect &destRect)
	{
		std::cout << "State::Idling" << std::endl;
	}

	virtual void jumping(Animation* a, SDL_Rect &destRect)
	{
		std::cout << "State::Jumping" << std::endl;
	}

	virtual void climbing(Animation* a, SDL_Rect &destRect)
	{
		std::cout << "State::Climbing" << std::endl;
	}
	virtual void falling(Animation* a, SDL_Rect& destRect)
	{
		std::cout << "State::Falling" << std::endl;
	}
	virtual void walking (Animation* a, SDL_Rect& destRect)
	{
		std::cout << "State::Walking" << std::endl;
	}
};
