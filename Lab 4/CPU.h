#pragma once
#include "Processor.h"
#include "Memory.h"
class CPU
{
	Processor Proc;
	Memory** Cache;
	int CacheN;
	Memory* RAM;
public:
	CPU(int, double v, char* n);
	~CPU();
	void ReadCacheData();
	void SetProcessor(double v, char* n);
	void ConnectRam(Memory*);
	void DisconnectRam();
	void SwapRams(CPU *);
	void PrintInfo();

};

