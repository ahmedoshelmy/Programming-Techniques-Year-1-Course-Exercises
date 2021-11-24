#include "Company.h"
#include <iostream>
using namespace std;

Company::Company() {
	cout << "Company constructor is called \n";
	Num = 0;
}
Company::~Company() {
	cout << "Company Destructor is called\n";
	for (int i = 0; i < Num; i++) {
		delete Deps[i];
	}
}
void Company::PrintInfo() {
	cout << "---------------------------------------------------\n";
	cout << "Company Info: \n";
	for (int i = 0; i < Num; i++) {
		Deps[i]->PrintInfo();
	}
	cout << "---------------------------------------------------\n";
}
float Company::calcAverageIncome() {
	float sum = 0;
	for (int i = 0; i < Num; i++) {
		sum += Deps[i]->getIncome();
	}
	float average = sum / Num;
	return average;
}
void Company::printBestDepartmenr() {
	Department* bestDepartment = new Department();
	for (int i = 0; i < Num; i++)
	{
		int maxIncome = 0;
		if (maxIncome < Deps[i]->getIncome()) {
			bestDepartment = Deps[i];
		}
	}
	cout << "The Info of the best department :\n";
	bestDepartment->PrintInfo();
}
void Company::addDepartment() {
	
	Department *newDepartment = new Department();
	newDepartment->ReadData();
	if (Num < 300) {
		Deps[Num] = new Department();
			Deps[Num]=newDepartment;
		Num++;	
		cout << "Added Department " << newDepartment->getCode() << endl;

	}
	else {
		cout << "Company is full\n";
	}
}
bool Company::removeDepartment(int c) {
	bool found = false;
	for (int i = 0; i < Num; i++) {
		if (Deps[i]->getCode() == c) {
			found = true; 
			delete Deps[i];
			Deps[i] = Deps[Num - 1];
			Deps[Num - 1] = NULL;
			Num--;
		}
	}
	return found;
}
