/*
 * Particle.h
 *
 *  Created on: Apr 12, 2020
 *      Author: andre
 */

#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace project {

struct Particle {
	double m_xspeed;
	double m_yspeed;
	double m_x;
	double m_y;
	void update();
	Particle();
	virtual ~Particle();

};

} /* namespace project */

#endif /* PARTICLE_H_ */
