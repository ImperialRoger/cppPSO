#include "particle.hpp"

Particle::Particle(Settings* settings, Swarm* swarm):
settings_ptr{settings},
swarm_ptr{swarm}
{
    initPosition();
    initVelocity();
    bestPosition = position;
    fitness = settings->objectiveFunction(position);
    bestFitness = fitness;
}

void Particle::initPosition()
{
    for(int i = 0; i < settings_ptr->dimensions; ++i)
    {
        double value = settings_ptr->positionDist(settings_ptr->generator);
        position.push_back(value);
    }
}

void Particle::initVelocity()
{


}
