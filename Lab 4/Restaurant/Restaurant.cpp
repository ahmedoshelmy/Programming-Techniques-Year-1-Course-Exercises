#include "Restaurant.h"
#include <iostream>
using namespace std; 

int Restaurant::getTablecnt() {
	return tablesCnt;
}
 Restaurant::Restaurant() {
	 cout << "Restaurant constructed\n";
	 tablesCnt = 0;
}
void Restaurant::setTablecnt(int c) {
	if (c < 0) {
		c = 0;
	}
	tablesCnt = c;
	Tables = new Table  [tablesCnt];
}
void Restaurant::LeaveTable(Customer* C) {
	for (int i = 0; i < tablesCnt; i++)
	{
		if (Tables[i].getCustomer()->getName() == C->getName()) {
			Tables[i].leaveTable();
			break;
		}
	}
}
void Restaurant::ReadTables() {
	for (int i = 0; i < tablesCnt; i++) {
		Tables[i].ReadData();
	}
}
void Restaurant::PrintInformation() {
	cout << "Restaurant Info:\n";
	for (int i = 0; i < tablesCnt; i++)
	{
		Tables[i].PrintInformation();
	}
}
void Restaurant::ReservesTable(Customer * C) {
	bool full = true;
	for (int i = 0; i < tablesCnt&&full; i++)
	{
		if (!Tables[i].getisReserved()) {
			Tables[i].reserveTable(C);
			full = false;
		}
	}
	if (full) {
		cout << "No more tables!\n";
	}
}
Restaurant::~Restaurant() {
	cout << "Restaurant is destructed\n";
	delete[] Tables;
}


