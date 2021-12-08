#include "Memory.h"
#include <iostream>
using namespace std;

Memory::Memory(double si,double v) {
	cout << "Memory Constructor is called\n";
	setSpeed(v);
	setSize(si);
}
Memory::~Memory() {
	cout << "Memory Destructor is called\n";
}
void Memory::PrintInfo() {
	cout << "Memory Info\n";
	cout << "Speed: " << getSpeed();
}
void Memory::ReadData() {
	cout << "Enter Speed and Size;\n";
	double v;
	cin >> v; 
	setSpeed(v);
	cin >> v;
	setSize(v);
}
void Memory::setSize(double s) {
	if (s < 0) {
		s = 0;
	}
	Size = s;

}
void Memory::setSpeed(double s) {
	if (s < 0) {
		s = 0;
	}
	Speed = s;
}
double Memory::getSize() {
	return Size;
}
double Memory::getSpeed() {
	return Speed;
}