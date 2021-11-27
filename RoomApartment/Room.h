#pragma once
enum Type
{
	Bedroom, Bathroom, Kitchen, Balcony, Livingroom, Diningroom
};
class Room
{
	double Size;
	Type RoomType;
	
public:
	Room();
	void SetSize(double);
	void SetType(Type);
	void ReadData();
	Type GetType();
	void PrintInfo();
	double GetSize();
	~Room();
};

