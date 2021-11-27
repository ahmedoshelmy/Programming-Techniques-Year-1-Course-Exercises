#pragma once
#include"Room.h"
class Apartment
{
	int num;
	Room* rooms[300];
	double price;
public:
	void PrintKitchens();
	Apartment();
	void ReadRooms(int);
	void setPrice(double);
	double CalcSize();
	int CompareSizes(Apartment* a);
	void PrintInfo();
	~Apartment();

};

