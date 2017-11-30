#ifndef SETTINGS
#define SETTINGS

#include <functional>
#include <iostream>
#include <vector>
#include <random>

typedef std::vector<double> vec;
typedef std::uniform_real_distribution<double> dist;


class Settings{

public:

	Settings();

	std::mt19937_64 generator;
	dist positionDist;
	dist velocityDist;
	dist updateDist;

	enum Function{
		Rastrigin,
		Ackley,
		Sphere,
		Rosenbrock,
		Beale,
		Goldstein_Price
	};

	void setFunction(int functionChoice);


	std::function<double (vec &x)> objectiveFunction;






private:
	


	static double rastrigin(vec &x);
	static double ackley(vec &x);
	static double sphere(vec &x);
	static double rosenbrock(vec &x);
	static double beale(vec &x);
	static double goldsteinPrice(vec &x);


};

#endif //SETTINGS