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

    std::vector<double> best;

    for(auto& particle : particles){
        best.push_back(particle.bestFitness);
    }

    globalBestFitness = *(std::min_element(best.begin(), best.end()));
}