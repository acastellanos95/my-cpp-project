//============================================================================
// Name        : basic.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <SDL2/SDL.h>
using namespace std;

int main() {
	const int SCREEN_WIDTH = 800;
	const int SCREEN_HEIGHT = 600;
	if(SDL_Init(SDL_INIT_VIDEO)<0){
		cout << "SDL failed" << "\n";
		return 1;
	}
	SDL_Window* window = SDL_CreateWindow("interactive particles",
			SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
	if(window == nullptr){
		cout << "Could not create window: " << SDL_GetError();
		SDL_Quit();
		return 1;
	}

	bool quit = false;

	SDL_Event event;

	while(!quit){
		//update
		//draw
		//check for messages/ events

		while(SDL_PollEvent(&event)){
			if(event.type == SDL_QUIT){
				quit = true;
			}
		}

	}

	cout << "SDL Init success";
	SDL_DestroyWindow(window);
	SDL_Quit();
	return 0;
}
