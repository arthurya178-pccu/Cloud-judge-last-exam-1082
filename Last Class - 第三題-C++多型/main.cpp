#include <iostream>
#include <iomanip>
#include <string>
//class
#include "Cubiod.h"
#include "Sphere.h"
#include "Shape.h"
using namespace std;

void display(Shape &obj)
{
	cout << obj.toString() << "," << fixed << setprecision(1) << obj.getVolume() << ","
		<< obj.getColor() << endl;
}
int main()
{
	//setting
	string Color1, Color2;
	double radius, length, width, height;
	//input value
	cin >> radius >> Color1;
	cin >> length >> width >> height >> Color2;
	
	//creat obj sphere and cubiod
	Sphere sphere(radius, Color1);
	Cubiod cubiod(length, width, height, Color2);

	// output

	//cout Sphere obj
	display(sphere);

	cout << fixed << setprecision(0);
	//cout cubiod obj
	display(cubiod);
}