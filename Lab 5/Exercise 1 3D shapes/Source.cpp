#include <iostream>
#include "Cuboid.h"
#include "Shape3D.h"
#include "Sphere.h"

using namespace std;

int CountCuboid(Shape3D** Shapes, int size) {
	int cuboidCount = 0;
	Cuboid* PointertoCuboid;
	for (int i = 0; i < size; i++)
	{
		PointertoCuboid = dynamic_cast<Cuboid*>(Shapes[i]);
		if (PointertoCuboid != NULL) cuboidCount++;
	}
	return cuboidCount;
}
void PrintCuboid(Shape3D** Shapes, int size) {
	Cuboid* PointertoCuboid;
	for (int i = 0; i < size; i++)
	{
		PointertoCuboid = dynamic_cast<Cuboid*>(Shapes[i]);
		if (PointertoCuboid != NULL) Shapes[i]->PrintInfo();
	}
}
void PrintSphere(Shape3D** Shapes, int size) {
	Sphere* PointertoCuboid;
	for (int i = 0; i < size; i++)
	{
		PointertoCuboid = dynamic_cast<Sphere*>(Shapes[i]);
		if (PointertoCuboid != NULL) Shapes[i]->PrintInfo();
	}
}
int CountSphere(Shape3D** Shapes, int size) {
	int sphereCount = 0;
	Sphere* PointertoSphere;
	for (int i = 0; i < size; i++)
	{
		PointertoSphere = dynamic_cast<Sphere*>(Shapes[i]);
		if (PointertoSphere != NULL) sphereCount++;
	}
	return sphereCount;
}
int main() {
	Cuboid* Cuboid1 = new Cuboid(3,4,5,1,1,1);
	Cuboid* Cuboid2 = new Cuboid(2, 5, 7, 2, 3, 4);

	Sphere* Sphere1 = new Sphere(4,0,0,0);
	Sphere* Sphere2 = new Sphere(6, 0, 0, 0);
	Sphere* Sphere3 = new Sphere(10, 0, 0, 0);

	Shape3D* Shapes[5];
	Shapes[0] = Cuboid1;
	Shapes[1] = Cuboid2;
	Shapes[2] = Sphere1;
	Shapes[3] = Sphere2;
	Shapes[4] = Sphere3;

	double volumeofShape;

	//Calculating Volumes

	for (int i = 0; i < 5; i++)
	{
		volumeofShape = Shapes[i]->CalculateVolume();
		cout << volumeofShape << endl;
	}

	//Comparing Shapes

	int largestIndex = 0;
	int compare;
	for (int i = 0; i < 5; i++)
	{
		compare = Shapes[largestIndex]->Compare(Shapes[i]);
		if (compare == -1) {
			largestIndex = i;
		}

	}
	cout << "Largest Volume: \n";
	Shapes[largestIndex]->PrintInfo();

	// Calculating Areas

	double SurfaceArea;
	for (int i = 0; i < 5; i++)
	{
		SurfaceArea = Shapes[i]->CalculateArea();
		cout << SurfaceArea << endl;
	}

	//Calculating Number of Cuboids;

	int numberofCuboids = CountCuboid(Shapes, 5);
	cout << "Number of Cuboids: " << numberofCuboids << endl;

	//Calculating Number of Spheres;

	int numberofSpheres = CountSphere(Shapes, 5);
	cout << "Number of Spheres: " << numberofSpheres << endl;

	//Translating Shapes

	Cuboid1->TranslateShape(2,0,-1);
	Sphere2->TranslateShape(-2,1,2);

	//Printing Cuboids 
	
	PrintCuboid(Shapes, 5);


	//Printing Spheres 

	PrintSphere(Shapes, 5);

	//Translating all shapes;

	for (int i = 0; i < 5; i++)
	{
		Shapes[i]->TranslateShape(10, 20, 30);
	}
	//Printing Cuboids 

	PrintCuboid(Shapes, 5);


	//Printing Spheres 

	PrintSphere(Shapes, 5);
	
	//Deallocation

	for (int i = 0; i < 5; i++)
	{
		delete Shapes[i];
	}



}