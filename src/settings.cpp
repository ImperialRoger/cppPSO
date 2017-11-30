#include <settings.hpp>

Settings::Settings():
generator(),
positionDist(-5.0, 5.0),
velocityDist(-1.0, 1.0),
updateDist(0.0, 1.0)

{
	defaultSettings();
}

void Settings::setFunction(int functionChoice){

	switch(functionChoice)
	{

		case Rastrigin: 
			objectiveFunction = rastrigin; 
			rastriginDefaults();
			break;
		case Ackley:
			objectiveFunction = ackley;
			ackleyDefaults();
			break;
		case Sphere: 
			objectiveFunction = sphere;
			sphereDefaults();
			break;
		case Rosenbrock: 
			objectiveFunction = rosenbrock;
			rosenbrockDefaults();
			break;
		case Beale: 
			objectiveFunction = beale;
			bealeDefaults();
			break;
		case Goldstein_Price: 
			objectiveFunction = goldsteinPrice;
			goldsteinPriceDefaults();
			break;
		default: 
			objectiveFunction = rastrigin;
			rastriginDefaults();
			break;
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

void Settings::rastriginDefaults(){

}

void Settings::ackleyDefaults(){

}

void Settings::sphereDefaults(){

}

void Settings::rosenbrockDefaults(){

}

void Settings::goldsteinPriceDefaults(){

}

void Settings::bealeDefaults(){

}

void Settings::defaultSettings(){

	dimensions = 2;
	iterations = 100;
	numberParticles = 30;
}

