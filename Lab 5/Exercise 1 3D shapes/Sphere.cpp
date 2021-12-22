#include "Sphere.h"
#include <iostream>
using namespace std;
#define pi 3.14
Sphere::Sphere(double r,double x,double y,double z):Shape3D(x,y,z) {
	cout << "Sphere constructed \n";
	setRadius(r);
}
void Sphere::setRadius(double r) {
	if (r <= 0) r = 1;
	Radius = r;
}
double Sphere::getRadius()const {
	return Radius;
}
void Sphere::PrintInfo() const {
	Shape3D::PrintInfo();
	cout << "Printing Shpere Info\n";
	cout << "Radius: " << getRadius()<<endl;
}
double Sphere::CalculateArea()const {
	return 4 * pi * getRadius() * getRadius();
}
double Sphere::CalculateVolume()const {
	return CalculateArea() / 3 * getRadius();
}