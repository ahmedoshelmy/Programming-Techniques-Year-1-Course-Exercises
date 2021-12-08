#include "Processor.h"
#include <iostream>
using namespace std;
Processor::Processor(double v,char * n) {
	cout << "Processor Constructor is called\n";
	int s =strlen(n);
	setName(n);
	setSpeed(v);
}

Processor::~Processor() {
	cout << "Processor Destructor is called\n";
}
char *Processor::getName() {
	return name;
}
double Processor::getSpeed() {
	return Speed;
}
void Processor::setName(char* n) {
	name = n;
}

void Processor::setSpeed(double n) {
	if (n < 0) n = 0;
		Speed = n;
}
void Processor::PrintInfo() {
	cout << "Processor Info\n";
	cout << "Speed: " << getSpeed();
	cout << "Name: " << name;
}