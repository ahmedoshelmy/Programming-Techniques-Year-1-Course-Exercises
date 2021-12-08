#include "Customer.h"
#include <iostream>
using namespace std;

Customer::Customer(const char* N, int ChNum) :name(N)
{
	setCnt(ChNum);
}
int Customer::getChairs() {
	return chaircnt;
}
const char * Customer::getName()const {
	return name;
}
void Customer::PrintInfo() {
	cout << name<<endl;
	cout << chaircnt<<endl;
}

void Customer::setCnt(int c) {
	if (c < 0)c = 0;
	chaircnt = c;
}

