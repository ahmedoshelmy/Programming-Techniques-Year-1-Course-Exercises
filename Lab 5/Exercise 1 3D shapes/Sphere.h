#pragma once
#include "Shape3D.h"
class Sphere : public Shape3D
{
	double Radius;
public:
	Sphere(double,double,double,double);
	double CalculateArea()const;
	double CalculateVolume()const;
	double getRadius()const;
	void setRadius(double);
	void PrintInfo()const;
};

