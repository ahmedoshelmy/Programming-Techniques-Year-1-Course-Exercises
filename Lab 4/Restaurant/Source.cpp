#include <iostream>
#include "Restaurant.h"
#include "Customer.h"
#include "Table.h"
using namespace std;

int main() {
	Restaurant R1;
	int tables;
	cin >> tables;
	R1.setTablecnt(tables);
	R1.ReadTables();
	Customer C1("Ahmed",2);
	R1.ReservesTable(&C1);
	R1.PrintInformation();
	R1.LeaveTable(&C1);
	R1.PrintInformation();
	Customer C2("Yousef", 3), C3("Zaki", 4), C4("Said", 1), C5("Hamza", 4);
	R1.ReservesTable(&C2);
	R1.ReservesTable(&C3);
	R1.ReservesTable(&C4);
	R1.ReservesTable(&C5);
	R1.PrintInformation();
	R1.ReservesTable(&C1);
	R1.LeaveTable(&C3);
	R1.ReservesTable(&C1);
	R1.PrintInformation();


}