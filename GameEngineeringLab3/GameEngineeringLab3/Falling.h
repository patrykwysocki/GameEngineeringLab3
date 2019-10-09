#pragma once

#include "State.h"
#include "Idle.h"

class Falling : public State
{
public:
	Falling() {};
	~Falling() {};
	void idle(Animation* a, SDL_Rect& destRect);

};