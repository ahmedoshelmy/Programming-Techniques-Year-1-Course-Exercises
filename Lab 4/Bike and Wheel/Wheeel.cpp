#include "Wheeel.h"
#include <iostream>
using namespace std;

	Wheel::Wheel(double r) {
		setRadius(r);
		cout << "Wheel Constructor is Called\n";
	};
	void Wheel:: setRadius(double r) {
		if (r < 0) Radius = 0;
		else Radius = r;
	};
	Wheel :: ~Wheel() {
		cout << "Wheel Destructor is Called\n";
	}
	void Wheel::printInfo() {
		cout << "Radius: " << getRadius()<<endl;
	}
	double Wheel::getRadius() const  {
		return Radius;
	}





