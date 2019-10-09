#include "InputHandler.h"

InputHandler::InputHandler()
{
	fsm = new Animation();
	m_current = IDLE;
}

InputHandler::~InputHandler()
{

}
void InputHandler::setCurrent(Action a) {
	m_current = a;
}

InputHandler::Action InputHandler::getCurrent() {
	return m_current;
}



void InputHandler::handleInput(SDL_Event & event, SDL_Rect &destRect)
{

	switch (event.type)
	{
	case SDL_KEYDOWN:
		switch (event.key.keysym.sym)
		{
		case SDLK_1:
			fsm->idle(destRect);
			break;
		case SDLK_2:
			fsm->walking(destRect);
			break;
		case SDLK_3:
			fsm->jumping(destRect);
			break;
		case SDLK_4:
			fsm->falling(destRect);
			break;
		case SDLK_5:
			fsm->climbing(destRect);
			break;
	
		}

	}
	
}