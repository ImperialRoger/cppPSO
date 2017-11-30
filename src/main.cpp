#include "settings.hpp"
#include "swarm.hpp"

int main(){

	Settings settings;

	settings.setFunction(settings.Rastrigin);

	Swarm swarm(&settings);

	swarm.updateSwarm();

	std::cout << swarm.globalBestFitness  << std::endl;

}