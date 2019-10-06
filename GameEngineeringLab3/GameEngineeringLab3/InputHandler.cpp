#include "InputHandler.h"

InputHandler::InputHandler(Player* player, std::vector<AnimatedSprite*> sprites)
{
	idleButton = new IdleCommand(player, sprites[0]);
	jumpButton = new JumpCommand(player, sprites[1]);
	climbButton = new ClimbingCommand(player, sprites[2]);

	idleButton->execute();

	macro = new MacroCommand();
}

InputHandler::~InputHandler() {}


void InputHandler::handleInput(SDL_Keycode event)
{

	switch (event)
	{
	case SDLK_UP:
		jumpButton->execute();
		macro->add(jumpButton);
		break;
	case SDLK_LEFT:
		climbButton->execute();
		macro->add(climbButton);
		break;
	case SDLK_DOWN:
		idleButton->execute();
		macro->add(idleButton);
	}

}


