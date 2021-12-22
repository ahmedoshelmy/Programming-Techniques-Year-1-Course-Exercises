#include "Shape3D.h"
#include <iostream>

using namespace std;

Shape3D::Shape3D(double x,double y,double z) {
	X_ref = x;
	Y_ref = y;
	Z_ref = z;
}

void Shape3D::PrintInfo()const {
	cout << "Printing info of the 3D shape \n";
	cout << "Reference Point: " << "( " << X_ref << " , " << Y_ref << " , " << Z_ref << " ) \n";
}

int Shape3D::Compare(Shape3D* AnotherShape)const {
	if (AnotherShape->CalculateVolume() > this->CalculateVolume()) {
		return -1;
	}
	else if(AnotherShape->CalculateVolume() < this->CalculateVolume())
	{
		return 1;
	}
	else {
		return 0;
	}
}
void Shape3D::TranslateShape(double dx, double dy, double dz) {
	X_ref += dx;
	Y_ref += dy;
	Z_ref += dz;
}
