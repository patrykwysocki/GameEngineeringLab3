#include "MacroCommand.h"

MacroCommand::MacroCommand()
{

}

MacroCommand::~MacroCommand()
{
	std::cout << "deconstructing" << std::endl;
}

void MacroCommand::add(Command*c)
{
	commands.push_back(c);
	redoCommands.clear();
}

void MacroCommand::remove(Command*c)
{
	commands.remove(c);
}
void MacroCommand::execute()
{
	std::cout << "\n" << std::endl;
	std::cout << "executing" << std::endl;
	std::list<Command*>::iterator iter;

	for (iter = commands.begin(); iter != commands.end(); ++iter)
	{
		(*iter)->execute();
	}

	std::cout << "executed" << std::endl;
}
//void MacroCommand::undo()
//{
//	std::cout << "\n" << std::endl;
//	if (commands.size() > 0) {
//
//		(*commands.rbegin())->undo();
//		redoCommands.push_back(*commands.rbegin());
//		commands.pop_back();
//	}
//	else {
//		std::cout << "Command List Empty" << std::endl;
//	}
//
//}
//
//void MacroCommand::redo()
//{
//	std::cout << "\n" << std::endl;
//	if (redoCommands.size() > 0) {
//
//		(*redoCommands.rbegin())->redo();
//		commands.push_back(*redoCommands.rbegin());
//		redoCommands.pop_back();
//	}
//	else {
//		std::cout << "No more commands to Redo" << std::endl;
//	}
//
//
//}