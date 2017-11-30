#include "swarm.hpp"

Swarm::Swarm(Settings* settings):
settings_ptr{settings}
{
    for(int i = 0; i < settings_ptr->numberParticles; ++i)
    {
        Particle particle(settings_ptr, this);
        particles.push_back(particle);
    }
}

void Swarm::updateSwarm(){

    for(auto& particle : particles){
        particle.updateVelocity();
        particle.updatePosition();
        particle.updateFitness();
    }
    updateGlobalBest();
}

void Swarm::updateGlobalBest(){


}