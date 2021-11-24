#include <iostream>
using namespace std;
#include "Company.h"
#include "Department.h"

void PrintHighest(int arraySize, Company * Companies[] ){
	float maxAverageIncome = 0;
	Company* highestCompany = new Company();
	for (int i = 0; i < arraySize; i++)
	{
		if (maxAverageIncome < Companies[i]->calcAverageIncome()) {
			highestCompany = Companies[i];
		}
	}
	cout << "The info of the company with the highest average income:\n";
	highestCompany->PrintInfo();
}
int main() {
	Company C1;
	Company* PC2 = new Company();
	Company* PC3 = new Company();

	C1.addDepartment();
	C1.addDepartment();

	PC2->addDepartment();
	PC2->addDepartment();
	PC2->addDepartment();

	PC3->addDepartment();
	PC3->addDepartment();

	int searchCode1,searchCode2;
	cin >> searchCode1 >> searchCode2;
	bool found = PC2->removeDepartment(searchCode1);
	if (found) {
		cout << "Department found and deleted\n";
	}
	else {
		cout << "Department not found\n";
	}
	 found = PC2->removeDepartment(searchCode1);
	if (found) {
		cout << "Department found and deleted\n";
	}
	else {
		cout << "Department not found\n";
	}
	Company* arrayCompanies[3];
		arrayCompanies[0] = &C1;
		arrayCompanies[1] = PC2;
		arrayCompanies[2] = PC3;

		PrintHighest(3,arrayCompanies);

		for (int i = 1; i < 3; i++) {
			delete arrayCompanies[i];
		}
}