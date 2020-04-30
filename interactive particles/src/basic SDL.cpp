//============================================================================
// Name        : basic.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description :
//============================================================================

#include <iostream>
#include <SDL2/SDL.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "Screen.h"
#include "Swarm.h"
using namespace std;
using namespace project;

int main() {

	srand(time(nullptr));

	Screen screen;

	if(!screen.init()) cout << "Error initializing" << "\n";

	Swarm swarm;

	while(true){
		//update
		//draw
		int elapsed = SDL_GetTicks();
<<<<<<< HEAD

		screen.clear();
		swarm.update();

		unsigned char red= (unsigned char) ((1 + sin(elapsed*0.0001))*128);
		unsigned char green = (unsigned char) ((1 + sin(elapsed*0.0002))*128);
		unsigned char blue = (unsigned char) ((1 + cos(elapsed*0.0003))*128);

		const Particle * const pParticles = swarm.getParticles();

		for(int i = 0; i<Swarm::NPARTICLES; i++){
			Particle particle = pParticles[i];

			int x = (particle.m_x + 1) * Screen::SCREEN_WIDTH / 2;
			int y = (particle.m_y + 1) * Screen::SCREEN_HEIGHT / 2;

			screen.setPixel(x, y, red, green, blue);
=======
		unsigned char red= (unsigned char) ((1 + cos(elapsed*0.0001))*128);
		unsigned char green = (unsigned char) ((1 + sin(elapsed*0.0002))*128);
		unsigned char blue = (unsigned char) ((1 + sin(elapsed*0.0003))*128);
		for(int i=0; i<screen.SCREEN_HEIGHT; i++){
			for(int j=0; j<screen.SCREEN_WIDTH; j++){
				screen.setPixel(j,i,red,green,blue);
			}
>>>>>>> f60c25e73169e21578fb35fcc321c0e8526255c8
		}

		screen.update();

		//check for messages/ events
		if(!screen.processEvents()){
			break;
		}
	}

	screen.close();

	return 0;
}
