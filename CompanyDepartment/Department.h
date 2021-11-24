#pragma once
class Department
{
	char Name;
	int Code;
	float Income;
public:
	Department();
	char getName();
	int getCode();
	float getIncome();
	void setName(char);
	void setCode(int );
	void setIncome(float );
	void ReadData();
	void PrintInfo();
	~Department();
};

