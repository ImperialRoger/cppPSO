#ifndef SETTINGS
#define SETTINGS

#include <functional>
#include <iostream>
#include <vector>
#include <random>
#include <numeric>

typedef std::vector<double> vec;
typedef std::uniform_real_distribution<double> dist;

class Settings{

public:

	// Constuctor
	Settings();

	// Random Number Generation
	std::mt19937_64 generator;
	dist positionDist;
	dist velocityDist;
	dist updateDist;

	// Simulation constants

	int dimensions;
	int iterations;
	int numberParticles;
	double constant1;
	double constant2;


	// Test Functions

	enum Function{
		Rastrigin,
		Ackley,
		Sphere,
		Rosenbrock,
		Beale,
		Goldstein_Price
	};

	void setFunction(int functionChoice);
	std::function<double (vec &x, int dim)> objectiveFunction;



private:
	
	void loadSimulationDefaults();

	static double rastrigin(vec &x, int dim);
	static double ackley(vec &x, int dim);
	static double sphere(vec &x, int dim);
	static double rosenbrock(vec &x, int dim);
	static double beale(vec &x, int dim);
	static double goldsteinPrice(vec &x, int dim);

	void rastriginDefaults();
	void ackleyDefaults();
	void sphereDefaults();
	void rosenbrockDefaults();
	void bealeDefaults();
	void goldsteinPriceDefaults();

	void defaultSettings();


};

#endif //SETTINGS