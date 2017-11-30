#ifndef SWARM
#define SWARM

#include <vector>
#include <algorithm>
#include "settings.hpp"
#include "particle.hpp"

class Swarm{ 

public:

    Swarm(Settings* settings);

    void updateSwarm();

    double globalBestFitness;

private:

    void updateGlobalBest();
    
    std::vector<Particle> particles;
    Settings* settings_ptr;
    vec globalBestPosition;
    

};

#endif  //SWARM