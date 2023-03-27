// areaCirculo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const double PI = 3.14;
const double RADIUS = 5.4;

int main()
{

	float area;  //deinition of the area of the circle.

	float circumference;  //Definition of circumference

	circumference = 2 * PI * RADIUS;  //Computacion de circunferencia

	area = PI *( RADIUS*RADIUS);   //computes area.

	cout << "La circunferencia es de" << circumference << endl;

	return 0;


}
