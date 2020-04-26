//============================================================================
// Name        : basic.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <SDL2/SDL.h>
#include <math.h>
#include "Screen.h"
using namespace std;
using namespace project;

int main() {
	Screen screen;

	if(!screen.init()) cout << "Error initializing" << "\n";

	while(true){
		//update
		//draw
		int elapsed = SDL_GetTicks();
		unsigned char red= (unsigned char) ((1 + cos(elapsed*0.0001))*128);
		unsigned char green = (unsigned char) ((1 + sin(elapsed*0.0002))*128);
		unsigned char blue = (unsigned char) ((1 + sin(elapsed*0.0003))*128);
		for(int i=0; i<screen.SCREEN_HEIGHT; i++){
			for(int j=0; j<screen.SCREEN_WIDTH; j++){
				screen.setPixel(j,i,red,green,blue);
			}
		}
		screen.update();
		//check for messages/ events
		if(!screen.processEvents()){
			break;
		}
	}
	return 0;
}
