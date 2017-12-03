#include <settings.hpp>
#include <cmath>
#include <chrono>

Settings::Settings():
generator{static_cast<long unsigned int>(std::chrono::high_resolution_clock::now().time_since_epoch().count())},
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

double Settings::rastrigin(vec &x, int dim){

	std::vector<double> tempVec;

	for(const auto val : x){
		double temp = std::pow(val, 2.0) - 10.0*std::cos(2*M_PI*val);
		tempVec.push_back(temp);
	}

	double answer = 10*dim + std::accumulate(tempVec.begin(), tempVec.end(), 0.0);

	return answer;
}

double Settings::ackley(vec &x, int dim){

	return 2.0;
}

double Settings::sphere(vec &x, int dim){

	return 2.0;
}

double Settings::rosenbrock(vec &x, int dim){

	return 2.0;
}

double Settings::beale(vec &x, int dim){

	return 2.0;
}

double Settings::goldsteinPrice(vec &x, int dim){

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
	constant1 = 2.0;
	constant2 = 2.0;

}

