#ifndef ANIMATED_SPRITE_H
#define ANIMATED_SPRITE_H

#include <SDL.h>
#include <SDL_image.h>
#include "Debug.h"
#include <vector>

using namespace std;

class AnimatedSprite
{
public:
	AnimatedSprite();
	AnimatedSprite(const SDL_Texture&);
	AnimatedSprite(const SDL_Texture&, const SDL_Rect&);
	~AnimatedSprite();

	//const Clock& getClock();
	//const Time& getTime();
	const vector<SDL_Rect>& getFrames();
	const SDL_Rect& getFrame(int);
	void addFrame(SDL_Rect&);
	const int getCurrentFrame();
	void update();
	
private:
	vector<SDL_Rect> m_frames;
	int m_current_frame;

	Uint32 m_currentTime;
	Uint32 m_deltaTime;
	Uint32 m_lastTime;
	Uint32 m_framePerSecond;
	Uint32 m_timePlayingFrame;

};

#endif // !ANIMATED_SPRITE_H
