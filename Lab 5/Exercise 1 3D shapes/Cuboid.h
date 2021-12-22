#pragma once

#include "Shape3D.h"
class Cuboid : public Shape3D
{
	double Length;
	double Width;
	double Height;

public:
	Cuboid(double,double,double, double, double, double);
	double CalculateArea() const;
	double CalculateVolume() const;
	double getLength() const;
	double getWidth()const;
	double getHeight()const;
	void setLength(double);
	void setWidth(double);
	void setHeight(double);
	void PrintInfo()const;

};

