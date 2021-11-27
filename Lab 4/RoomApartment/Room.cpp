#include "Room.h"
#include <iostream>
using namespace std;
Room::Room() {
	cout << "Room constructed!\n";
}
Room::~Room() {
	cout << "Room destructed!\n";
}
Type Room::GetType() {
	return RoomType;
}
void Room::SetType(Type t) {
	RoomType = t;
}
void Room::SetSize(double s) {
	if (s < 0)s = 0;
	Size = s;
}
double Room::GetSize() {
	return Size;
}
void Room::ReadData() {
	int x;
	cout << "Enter the room type:\n 0: Bedroom, 1: Bathroom, 2: Kitchen, 3 : Balcony, 4: Livingroom, 5: Diningroom\n";
	cin >> x;
	SetType((Type)x);
	double inputSize; 
	cin >> inputSize;
	SetSize(inputSize);
}

void Room::PrintInfo() {
	cout << "Room Info: \n";
	cout << "Size: " << Size<<endl;
	string stringRoomType;
	switch (RoomType) {
	case Kitchen:
		stringRoomType = "Kitchen";
		break;
	case Balcony:
		stringRoomType = "Balcony";
		break;
	case Bathroom:
		stringRoomType = "Bathroom";
		break;
	case Livingroom:
		stringRoomType = "Living Room";
		break;
	case Diningroom: 
		stringRoomType = "Dinning Room";
	case Bedroom:
		stringRoomType = "Bed Room";
	}
	cout << "Room Type: "<<stringRoomType<<endl;

}