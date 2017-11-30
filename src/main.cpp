#include "settings.hpp"

int main(){

	Settings settings;

	settings.setFunction(settings.Rastrigin);

	vec x{0};

	std::cout << settings.objectiveFunction(x) << std::endl;
}