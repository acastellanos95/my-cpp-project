/*
 * Screen.h
 *
 *  Created on: Apr 11, 2020
 *      Author: andre
 */

#ifndef SCREEN_H_
#define SCREEN_H_

#include <SDL2/SDL.h>

namespace project {

class Screen {
private:
	SDL_Window* m_window;
	SDL_Renderer* m_renderer;
	SDL_Texture* m_texture;
	Uint32* m_buffer;
public:
	const static int SCREEN_WIDTH = 800;
	const static int SCREEN_HEIGHT = 600;
	bool init();
	void update();
	void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
	bool processEvents();
	void close();
	Screen();
	virtual ~Screen();
};

} /* namespace project */

#endif /* SCREEN_H_ */
