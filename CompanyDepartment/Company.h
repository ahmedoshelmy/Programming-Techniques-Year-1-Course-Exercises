#pragma once
#include "Department.h"
#include <string>
class Company
{
	Department * Deps[300];
	int Num;
public:
	Company();
	void addDepartment();
	bool removeDepartment(int);
	float calcAverageIncome();
	void printBestDepartmenr();
	void PrintInfo();
	~Company();
};

