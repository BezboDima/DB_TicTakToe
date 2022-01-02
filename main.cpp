#include <iostream>
#include "Sphere.h"

using namespace std;

int main() {

	// create 3 spheres
	Sphere sphere1(2);
	Sphere sphere2(1, 3.4, 2, 4);
	Sphere sphere3(5, 6.8, 2, 1);

	// call collitionDetection function. print the answer according to the result
	if (sphere1.collisionDetection(sphere2))
	{
		cout << "Spheres 1 and 2 collide" << endl;
	}
	else 
	{
		cout << "Spheres 1 and 2 do not collide" << endl;
	}

	// call collitionDetection function. print the answer according to the result
	if (sphere2.collisionDetection(sphere3))
	{
		cout << "Spheres 2 and 3 collide" << endl;
	}
	else 
	{
		cout << "Spheres 2 and 3 do not collide" << endl;
	}

	// make sure program runs correctly
	return 0;
}

