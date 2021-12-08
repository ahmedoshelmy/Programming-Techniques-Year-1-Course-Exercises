#pragma once
class Memory
{
	double Size;
	double Speed;
public: 
	void ReadData();
	void PrintInfo();
	Memory(double,double);
	~Memory();
	double getSpeed();
	double getSize();
	void setSpeed(double);
	void setSize(double);
	
};

