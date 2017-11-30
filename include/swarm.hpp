#ifndef SWARM
#define SWARM

#include <vector>
#include "settings.hpp"
#include "particle.hpp"

class Swarm{ 

public:

    Swarm(Settings* settings);

    void updateSwarm();

 

private:

    std::vector<Particle> particles;
    Settings* settings_ptr;
    vec globalBestPosition;
    double globalBestFitness;

};

#endif  //SWARM