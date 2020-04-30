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
public:
	double m_x;
	double m_y;

	void update(int interval);
	Particle();
	virtual ~Particle();
private:
	double m_speed;
	double m_direction;
	void init();
};

} /* namespace project */

#endif /* PARTICLE_H_ */
