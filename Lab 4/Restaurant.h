#pragma once
#include "Table.h"
class Restaurant
{
	int tablesCnt; 
	Table* Tables;
public:
	Restaurant();
	~Restaurant();
	void ReadTables();
	void ReservesTable(Customer *);
	void setTablecnt(int);
	int getTablecnt();
	void LeaveTable(Customer *);
	void PrintInformation(); 
};

