/*
 * Swarm.cpp
 *
 *  Created on: Apr 12, 2020
 *      Author: andre
 */

#include "Swarm.h"

namespace project {

void Swarm::update(){
	for(int i = 0; i<Swarm::NPARTICLES; i++){
		m_pParticles[i].update();
	}
}

Swarm::Swarm() {
	// TODO Auto-generated constructor stub
	m_pParticles = new Particle[NPARTICLES];

}

Swarm::~Swarm() {
	// TODO Auto-generated destructor stub
	delete [] m_pParticles;
}

} /* namespace project */
