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