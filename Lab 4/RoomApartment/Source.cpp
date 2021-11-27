#include <iostream>
#include "Apartment.h"
using namespace std; 

int main() {
	Apartment P1;
	P1.ReadRooms(11);
	P1.PrintInfo();
	P1.PrintKitchens();
	Apartment P2;
	P2.ReadRooms(6);
	P2.PrintInfo();
	int comp =P1.CompareSizes(&P2);
	if (comp == 1) {
		cout << "The first is the larger\n";
	}
	else if (comp == 0) {
		"They're the same\n";
	}
	else {
		cout << "The second is larger\n";
	}

}