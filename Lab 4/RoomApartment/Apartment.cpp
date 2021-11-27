#include "Apartment.h"
#include <iostream>
using namespace std; 

Apartment::Apartment() {
	cout << "Apartment constructed!\n";
}

Apartment::~Apartment() {
	cout << "Apartment Destructed\n";
	for (int i = 0; i < num; i++)
	{
		delete rooms[i];
	}
}
void Apartment::setPrice(double x) {
	if (x < 0)x = 0;
	price = x;
}
void Apartment::ReadRooms(int n) {
	double d;
	cout << "Enter the Price:\n";
	cin >> d;
	setPrice(d);
	if (n < 0)n = 0;
	num = n;
	for (int i = 0; i < num; i++) {
		rooms[i] = new Room;
		rooms[i]->ReadData();
	}
}
void Apartment::PrintInfo() {
	cout << "Apartmment Info: \n";
	for (int i = 0; i < num; i++)
	{
		rooms[i]->PrintInfo();
	}
}

double Apartment::CalcSize() {
	double size = 0;
	for (int i = 0; i < num; i++)
	{
		size += rooms[i]->GetSize();
	}
	return size;
}


int Apartment::CompareSizes(Apartment *another) {
	if (CalcSize() == another->CalcSize()) {
		return 0;
	}
	else if (CalcSize() > another->CalcSize()) {
		return 1;
	}
	return -1;
}
void ::Apartment::PrintKitchens() {
	int kitchensnum = 0;
	for (int  i = 0; i < num; i++)
	{
		if (rooms[i]->GetType() == Kitchen) {
			kitchensnum++;
		}
	}
	cout << "No of kitchens: " << kitchensnum << endl;

}
