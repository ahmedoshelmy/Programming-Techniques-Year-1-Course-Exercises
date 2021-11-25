#include "Bike.h"
#include <iostream>
using namespace std;


Bike::Bike() :W1(1.5),W2(1.5),speed(10){
	cout << "Default Bike Constructor is Called\n";
};

Bike::Bike(double r, double s):W1(r),W2(r),speed(s) {
	cout<<"Non-Default Bike Constructor is Called\n";
}
double Bike::getSpeed() {
	return speed;
}
double Bike::getRadius() {
	return W1.getRadius();
}

void Bike::printInfo() {
	W1.printInfo();
	W2.printInfo();
	cout << "Speed: " << speed<<endl;
}

void Bike::setRadius(double r) {
	W1.setRadius(r);
	W2.setRadius(r);
}
void Bike::increaseSpeed(double value) {
	speed = speed + value;
}
 Bike::~Bike() {
	cout << "Bike Destructor is Called\n";
}
 int Bike::CompareWith(Bike another) {
	 if (speed > another.speed) {
		 return 1;
	 }
	 else if (speed = another.speed){
		 if (W1.getRadius() > another.W1.getRadius()) {
			 return 1;
		 }
		 else if (W1.getRadius() == another.W1.getRadius()) {
			 return 0;
		 }
		 else {
			 return - 1;
		 }
 }
	 else {
		 return -1;
	 }
 }
 


