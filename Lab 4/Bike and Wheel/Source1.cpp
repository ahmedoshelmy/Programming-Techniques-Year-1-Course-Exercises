#include <iostream>
#include "Bike.h"
using namespace std;


int CompareWith(Bike B1, Bike B2) {
	if (B1.getSpeed() > B2.getSpeed() ){
		return 1;
	}
	else if (B1.getSpeed() == B2.getSpeed()) {
		if (B1.getRadius() > B2.getRadius()) {
			return 1;
		}
		else if (B1.getRadius() == B2.getRadius()) {
			return 0;
		}
		else {
			return -1;
		}
	}
	else {
		return -1;
	}
}


int main() {
	Bike Bike1;
	Bike* pBike;
	pBike = new Bike(1, 10);
	Bike1.printInfo();
	pBike->printInfo();
	int comp = Bike1.CompareWith(*pBike);
	if (comp == 0) {
		cout<<"Are equal\n";
	}
	else {
		if (comp == 1) {
			Bike1.printInfo();
		}
		else {
			pBike->printInfo();
		}
	}
	pBike->setRadius(1.5);
	comp = Bike1.CompareWith(*pBike);
	if (comp == 0) {
		cout << "Are equal\n";
	}
	else {
		if (comp == 1) {
			Bike1.printInfo();
		}
		else {
			pBike->printInfo();
		}
	}
	pBike->increaseSpeed(15);
	comp = Bike1.CompareWith(*pBike);
	if (comp == 0) {
		cout << "Are equal\n";
	}
	else {
		if (comp == 1) {
			Bike1.printInfo();
		}
		else {
			pBike->printInfo();
		}
	}
	bool answer = CompareWith(Bike1, *pBike);
	cout <<endl<< answer;
	delete pBike;
}