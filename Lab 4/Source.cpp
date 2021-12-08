#include <iostream>
using namespace std; 
#include "Processor.h"
#include "Memory.h"
#include "CPU.h"
int main() {
	Memory Ram1(4, 800);
	Memory Ram2(2, 400);
	//
	char name[6] = "Intel";
	CPU CPU1(3, 1.7, name);
	CPU1.ReadCacheData();
	//
	char name2[4] = "AMD";
	CPU *pCPU2 = new CPU(2, 2, name2);
	pCPU2->ReadCacheData();
	//
	pCPU2->ConnectRam(&Ram1);
	pCPU2->PrintInfo();
	delete pCPU2;
	//
	CPU1.ConnectRam(&Ram1);
	CPU1.PrintInfo();
	CPU CPU3(1, 2.7, name2);
	pCPU2 = &CPU3;
	pCPU2->ReadCacheData();
	//
	pCPU2->ConnectRam(&Ram2);
	pCPU2->PrintInfo();
	CPU1.SwapRams(pCPU2);
	CPU1.PrintInfo();
	pCPU2->PrintInfo();
	// 
}