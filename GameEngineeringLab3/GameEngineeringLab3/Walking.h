#pragma once

#include "State.h"
#include "Idle.h"

class Walking : public State
{
public:
	Walking() {};
	~Walking() {};
	void idle(Animation* a, SDL_Rect& destRect);
	void jumping(Animation* a, SDL_Rect& destRect);
};