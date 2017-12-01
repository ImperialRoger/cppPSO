#include "particle.hpp"

Particle::Particle(Settings* settings, Solution* solution):
settings_ptr{settings},
solution_ptr{solution}
{
    initPosition();
    initVelocity();
    fitness = settings_ptr->objectiveFunction(position, settings_ptr->dimensions);
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
    for (int i = 0; i < settings_ptr->dimensions; ++i)
    {
        double value = settings_ptr->velocityDist(settings_ptr->generator);
        velocity.push_back(value);
    }
}

void Particle::updateFitness()
{
    fitness = settings_ptr->objectiveFunction(position, settings_ptr->dimensions);
}

void Particle::updateVelocity(){

    for(auto v = velocity.begin(); v != velocity.end(); ++v){
        int index = std::distance(velocity.begin(), v);
        double localTerm = settings_ptr->constant1*randomNo()*(solution_ptr->bestPosition[index] - position[index]);
        
        int globalTerm = settings_ptr->constant2*randomNo()*
            (solution_ptr->bestPosition[index] - position[index]);

        (*v) = *v + localTerm + globalTerm;
    }
}

void Particle::updatePosition(){
    for(auto p = position.begin(); p != position.end(); ++p){
        int index = std::distance(position.begin(), p);
        *p = *p + velocity[index];
    }
}

double Particle::randomNo(){

    return settings_ptr->updateDist(settings_ptr->generator);
}
