/*
 * Swarm.h
 *
 *  Created on: Apr 12, 2020
 *      Author: andre
 */

#ifndef SWARM_H_
#define SWARM_H_

#include "Particle.h"

namespace project {

class Swarm {
private:
	Particle* m_pParticles;
	int m_last_time;

public:
	const static int NPARTICLES = 5000;
	const Particle* const getParticles(){return m_pParticles;}
	void update(int elapsed);
	Swarm();
	virtual ~Swarm();
};

} /* namespace project */

#endif /* SWARM_H_ */
