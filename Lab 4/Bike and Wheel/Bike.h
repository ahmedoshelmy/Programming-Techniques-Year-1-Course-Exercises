#pragma once
#include "Wheeel.h"
class Bike
{
private:
	Wheel W1;
	Wheel W2;
	double speed;
public:
	Bike();
	double getRadius();
	Bike(double,double);
	void setRadius(double);
	void printInfo();
	double getSpeed();
	void increaseSpeed(double);
	int CompareWith(Bike);
	~Bike();
};

