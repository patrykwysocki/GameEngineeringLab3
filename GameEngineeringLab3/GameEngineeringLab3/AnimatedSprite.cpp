#include "AnimatedSprite.h"

AnimatedSprite::AnimatedSprite() 
{
	m_current_frame = 0;
}

AnimatedSprite::AnimatedSprite(const SDL_Texture & t) : Sprite(t), m_current_frame(0), m_time(seconds(0.5f)) {}

AnimatedSprite::AnimatedSprite(const SDL_Texture & t, const SDL_Rect & rect) : Sprite(t), m_current_frame(0), m_time(seconds(0.5f)) {
	m_frames.push_back(rect);
}

AnimatedSprite::~AnimatedSprite() {}

//const sf::Clock& AnimatedSprite::getClock() {
//	return m_clock;
//}
//
//const sf::Time& AnimatedSprite::getTime() {
//	return m_time;
//}

const vector<SDL_Rect>& AnimatedSprite::getFrames() {
	return m_frames;
}

const SDL_Rect& AnimatedSprite::getFrame(int n) {
	return m_frames[n];
}

void AnimatedSprite::addFrame(SDL_Rect & frame) {
	m_frames.push_back(frame);
}

const int AnimatedSprite::getCurrentFrame() {
	return m_current_frame;
}

void AnimatedSprite::update()
{
	m_currentTime = SDL_GetTicks();
	m_deltaTime = m_currentTime - m_lastTime;
	m_lastTime = m_currentTime;
	m_timePlayingFrame += m_deltaTime;
	if (m_timePlayingFrame > m_framePerSecond) {
		if (m_frames.size() > m_current_frame + 1)
		{
			m_current_frame++;
		}
		else {
			m_current_frame = 0;
		}
		m_timePlayingFrame = 0;
	}
}

