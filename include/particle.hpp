#ifndef PARTICLE
#define PARTICLE

#include "settings.hpp"
#include "solution.hpp"
#include <iterator>

class Particle{

private:

	
	vec velocity;
	vec bestPosition;

	double globalBestFitness;

    vec globalBestPositionVector;

	
	void initPosition();
	void initVelocity();
	void initBestPosition();
	double randomNo();

public:

	Particle(Settings* settings, Solution* solution);
	void updateVelocity();
	void updatePosition();
	void updateFitness();

	double bestFitness;
	double fitness;

	vec position;

	Settings* settings_ptr;
	Solution* solution_ptr;

};

#endif