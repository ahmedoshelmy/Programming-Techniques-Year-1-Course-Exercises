#include "Department.h"
#include <iostream>
using namespace std;

Department::Department() {
	cout << "Department COnstructor is called\n";
}
int Department::getCode() {
	return Code;
}
char Department::getName() {
	return Name;
}
float Department::getIncome() {
	return Income;
}
void Department::setCode(int c) {
	Code = c;
}
void Department::setIncome(float i) {
	if (i < 0) {
		Income = 0;
	}
	else Income =i;
}
void Department::setName(char n) {
	Name = n;
}
void Department::ReadData() {
	int c;
	char n;
	int i;
	cout << "Enter the code\n";
	cin >> c;
	cout << "Enter the name\n";
	cin >> n;
	cout << "Enter the income\n";
	cin >> i;
	setName(n);
	setCode(c);
	setIncome(i);
}

Department:: ~Department() {
	cout << "Department Destructor is called\n";
}
void Department::PrintInfo() {
	cout << "///////////////////////////////////////////////\n";
	cout << "Department Info:\n";
	cout << "Name: " << Name << endl;
	cout << "Code: " << Code << endl;
	cout << "Income: " << Income << endl;
	cout << "///////////////////////////////////////////////\n";
}
