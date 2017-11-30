#include <settings.hpp>

Settings::Settings():
positionDist(-5.0, 5.0),
velocityDist(-1.0, 1.0),
updateDist(0.0, 1.0)
{

}

void Settings::setFunction(int functionChoice){

	switch(functionChoice)
	{

		case Rastrigin: objectiveFunction = rastrigin; break;
		case Ackley: objectiveFunction = ackley; break;
		case Sphere: objectiveFunction = sphere; break;
		case Rosenbrock: objectiveFunction = rosenbrock; break;
		case Beale: objectiveFunction = beale; break;
		case Goldstein_Price: objectiveFunction = goldsteinPrice; break;
		default: objectiveFunction = rastrigin; break;
	}
}

double Settings::rastrigin(vec &x){

	return 2.0;

}

double Settings::ackley(vec &x){

	return 2.0;

}

double Settings::sphere(vec &x){

	return 2.0;

}

double Settings::rosenbrock(vec &x){

	return 2.0;
}

double Settings::beale(vec &x){

	return 2.0;

}

double Settings::goldsteinPrice(vec &x){

	return 2.0;


}

