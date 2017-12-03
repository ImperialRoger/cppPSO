#include "swarm.hpp"

Swarm::Swarm(Settings* settings, Solution* solution):
settings_ptr{settings},
solution_ptr{solution}
{
    for(int i = 0; i < settings_ptr->numberParticles; ++i)
    {
        Particle particle(settings_ptr, solution_ptr);
        particles.push_back(particle);
    }
    solution_ptr->solutionCount = 0;
    solution_ptr->bestFitness = particles[0].fitness;
    solution_ptr->bestPosition = particles[0].position;
    updateGlobalBest();
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

    std::vector<double> tempVec;

    for(auto& particle : particles){
        tempVec.push_back(particle.fitness);
    }

    auto ptr = std::min_element(tempVec.begin(), tempVec.end());
    if(*ptr < solution_ptr->bestFitness){
        solution_ptr->bestFitness = *ptr;
        int index = std::distance(tempVec.begin(), ptr);
        solution_ptr->bestPosition = particles[index].position;
    }else{
        solution_ptr->solutionCount++;
    }

    if(solution_ptr->solutionCount > 2){
        settings_ptr->constant1 = settings_ptr->constant1/1.2;
        settings_ptr->constant2 = settings_ptr->constant2/1.2;
        solution_ptr->solutionCount = 0;
        }


}