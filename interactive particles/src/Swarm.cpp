/*
 * Swarm.cpp
 *
 *  Created on: Apr 12, 2020
 *      Author: andre
 */

#include "Swarm.h"

namespace project {

void Swarm::update(int elapsed){
	int interval  = elapsed - m_last_time;
	for(int i = 0; i<Swarm::NPARTICLES; i++){
		m_pParticles[i].update(interval);
	}
	m_last_time = elapsed;
}

Swarm::Swarm() : m_last_time(0){
	// TODO Auto-generated constructor stub
	m_pParticles = new Particle[NPARTICLES];

}

Swarm::~Swarm() {
	// TODO Auto-generated destructor stub
	delete [] m_pParticles;
}

} /* namespace project */
