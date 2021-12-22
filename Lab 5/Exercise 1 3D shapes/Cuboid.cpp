#include "Cuboid.h"
#include <iostream> 
using namespace std;

Cuboid::Cuboid(double l, double w, double h,double x,double y,double z):Shape3D(x,y,z) {
	cout << "Cuboid constructed \n";
	setHeight(h);
	setLength(l);
	setWidth(w);
}
void Cuboid::setHeight(double h) {
	if (h <= 0) h = 1;
	Height = h;
}
void Cuboid::setLength(double l) {
	if (l <= 0) l = 1;
	Length = l;
}
void Cuboid::setWidth(double w) {
	if (w <= 0) w = 1;
	Width = w;
}
double Cuboid::getWidth()const {
	return Width;
}
double Cuboid::getHeight() const{
	return Height;
}
double Cuboid::getLength() const{
	return Length;
}
void Cuboid::PrintInfo()const {
	Shape3D::PrintInfo();
	cout << "Printing Cuboid Info: ";
	cout << "Length: " << getLength() << " Width: " << getWidth() << " Height: " << getHeight() << endl;
}
double Cuboid::CalculateVolume()const {
	return Length * Width * Height;
}
double Cuboid::CalculateArea()const {
	return 2 * (Length * Width) + 2 * (Width * Height) + 2 * (Length * Height);
}