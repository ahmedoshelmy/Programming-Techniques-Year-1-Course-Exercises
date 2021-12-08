#pragma once
class Processor
{
	char* name;
	double Speed;//GHz
public:
	Processor(double, char*);
	~Processor();
	void PrintInfo();
	double getSpeed();
	char* getName();
	void setSpeed(double);
	void setName(char *);
};

