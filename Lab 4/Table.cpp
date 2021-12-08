#include "Table.h"
#include <iostream>
using namespace std;
Table::Table() {
	cout << "Table is constructed!\n";	
	setChairs(0);
	tableCustomer = NULL;
	isReserved = false;
}
Table::~Table() {
	cout << "Table is destructed\n";
}
void Table::setChairs(int c) {
	if (c < 0) c = 0;
	Chairscnt = c;
}
void Table::ReadData() {
	int c;
	cin >> c;
	setChairs(c);
}
void Table::reserveTable(Customer * C) {
	if (isReserved == true) {
		cout << "Already Resereved\n";
	}
	else {
		tableCustomer = C;
		isReserved = true;
	}
}
int Table::getChairs() {
	return Chairscnt;
}
void Table::leaveTable() {
	tableCustomer = NULL;
	isReserved = false;
}
void Table::PrintInformation() {
	cout << "Table Info: \nChairs: "<<Chairscnt<<"  \n";
	(isReserved)? cout << "Is reserved\n" : cout << "Not reserved\n";
}
Customer* Table::getCustomer() {
	return tableCustomer;
}
bool Table::getisReserved() {
	return isReserved;
}