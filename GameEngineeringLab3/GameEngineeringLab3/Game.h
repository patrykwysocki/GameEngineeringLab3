#ifndef GAME
#define GAME

#include <SDL.h>
#include <SDL_timer.h>
#include <SDL_image.h>
#include <stdlib.h>
#include <iostream>
#include "Player.h"
#include "InputHandler.h"

using namespace std;

class Game {

public:
	Game();
	~Game();

	void run();

private:

	void processEvents();
	void update();
	void render();
	void setup();
	SDL_Window *m_window;
	SDL_Renderer *m_renderer;

	bool m_exitGame;

	SDL_Texture* idleTexture;
	SDL_Texture* jumpTexture;
	SDL_Texture* climbTexture;
	Player* player;
	InputHandler* handler;
	AnimatedSprite* animatedSpriteIdle;
	AnimatedSprite* animatedSpriteJump;
	AnimatedSprite* animatedSpriteClimb;
	std::vector<AnimatedSprite*> m_Sprites;
	SDL_Rect bounds = {0,0,88,88};
	std::vector<SDL_Rect> rects;
};



#endif // !GAME
