#ifndef PARTICLE
#define PARTICLE

#include "settings.hpp"

class Swarm;

class Particle{

private:

	vec position;
	vec velocity;
	vec bestPosition;
	double fitness;
	

	
	
	void initPosition();
	void initVelocity();
	void initBestPosition();

public:

	Particle(Settings* settings, Swarm* swarm);
	void updateVelocity();
	void updatePosition();
	void updateFitness();

	double bestFitness;

	Settings* settings_ptr;
	Swarm* swarm_ptr;
};

#endif