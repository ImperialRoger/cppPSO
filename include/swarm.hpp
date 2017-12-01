#ifndef SWARM
#define SWARM

#include <vector>
#include <algorithm>
#include "settings.hpp"
#include "solution.hpp"
#include "particle.hpp"


class Swarm{ 

public:

    Swarm(Settings* settings, Solution* solution);

    void updateSwarm();



private:

    void updateGlobalBest();
    
    std::vector<Particle> particles;
    Settings* settings_ptr;
    Solution* solution_ptr;
    
};

#endif  //SWARM