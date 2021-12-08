#pragma once
class Customer
{
	const char* name; 
	int chaircnt;
public:
	Customer(const char*,int);
	void setName(const char*);
	void setCnt(int);
	const char* getName()const;
	int getChairs();
	void PrintInfo();

};

