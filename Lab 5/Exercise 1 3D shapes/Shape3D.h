#pragma once
class Shape3D
{
	double X_ref;
	double Y_ref;
	double Z_ref;
public:
	 Shape3D(double, double, double);
	 virtual double CalculateArea() const = 0;
	 virtual double CalculateVolume() const = 0;
	 int Compare(Shape3D*)const;
	 void TranslateShape(double, double, double);
	 virtual void PrintInfo() const;
};

