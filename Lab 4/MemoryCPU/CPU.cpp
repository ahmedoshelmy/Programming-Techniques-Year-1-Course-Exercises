#include "CPU.h"
#include <iostream>
using namespace std;

CPU::CPU(int CacheNum, double v, char * n):Proc(v,n){
	cout << "CPU Constructor is caleed\n";
	Cache = new Memory* [CacheNum];
}
CPU::~CPU() {
	cout << "CPU Destructor is caleed\n";
	for (int i = 0; i < CacheN; i++)
	{
		delete Cache[i];
	}
}
void CPU::PrintInfo() {
	cout << "CPU Info:\n";
	for (int i = 0; i < CacheN; i++) {
		Cache[i]->PrintInfo();
	}
	Proc.PrintInfo();
	RAM->PrintInfo();
}
void CPU::ConnectRam(Memory * r) {
	RAM = r;
}
void CPU::DisconnectRam() {
	RAM = NULL;
}
void CPU::SwapRams(CPU* C) {
	C->ConnectRam( this->RAM);
	ConnectRam(C->RAM);
}
void CPU::SetProcessor(double v, char* n) {
	Proc.setName(n);
	Proc.setSpeed(v);
}
void CPU::ReadCacheData() {
	for (int i = 0; i < CacheN; i++)
	{
		Cache[i] = new Memory(0, 0);
		Cache[i]->ReadData();
	}
}