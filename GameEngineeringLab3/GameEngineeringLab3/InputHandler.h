#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H

#include <vector>
#include "Command.h"
#include "MacroCommand.h"

class InputHandler
{
public:
	InputHandler(Player* player, std::vector<AnimatedSprite*> sprites);

	~InputHandler();

	void handleInput(SDL_Keycode event);

private:
	Command* idleButton;
	Command* jumpButton;
	Command* climbButton;

	MacroCommand* macro;
	std::vector<Command*> commands;
};
#endif
