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
	double bestFitness;

	Settings* settings_ptr;
	Swarm* swarm_ptr;


	void updateVelocity();
	void updatePosition();

	void initPosition();
	void initVelocity();
	void initBestPosition();

public:

	Particle(Settings* settings, Swarm* swarm);
	void updateParticle();

};

#endif