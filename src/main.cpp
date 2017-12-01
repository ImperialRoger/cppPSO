#include "settings.hpp"
#include "swarm.hpp"
#include "particle.hpp"
#include "solution.hpp"

int main(){

	Settings settings;

	Solution solution;

	settings.setFunction(settings.Rastrigin);

	Swarm swarm(&settings, &solution);

	for(int i = 0; i < 100; ++i){
		swarm.updateSwarm();
	}
	std::cout << solution.bestFitness << std::endl;
	for(auto& x : solution.bestPosition){
		std::cout << x << std::endl;
	}
}