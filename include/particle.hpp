#ifndef PARTICLE
#define PARTICLE

#include "settings.hpp"

class Particle{

private:

	vec position;
	vec velocity;
	vec bestPosition;
	double fitness;
	double bestFitness;

	Settings *settings;

	void updateVelocity();
	void updatePosition();

public:

	Particle();

};




#endif