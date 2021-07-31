/*
 * Particle.h
 *
 *  Created on: Jul 21, 2021
 *      Author: varun
 */

#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace bvv {

struct Particle {
	double m_x;
	double m_y;

private:
	double m_speed;
	double m_direction;

private:
	void init();

public:
	Particle();
	virtual ~Particle();
	void update(int interval);
};

} /* namespace bvv */

#endif /* PARTICLE_H_ */
