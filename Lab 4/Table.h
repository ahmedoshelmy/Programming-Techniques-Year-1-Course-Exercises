#pragma once
#include "Customer.h"
class Table
{
	int Chairscnt;
	bool isReserved; 
	Customer* tableCustomer;
public:
	Table();
	~Table();
	void setChairs(int);
	bool getisReserved();
	int getChairs();
	Customer *getCustomer();
	void reserveTable(Customer*);
	void leaveTable();
	void ReadData();
	void PrintInformation();
};

