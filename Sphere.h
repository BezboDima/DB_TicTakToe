#pragma once
#include "Circle.h"

// sphere is sub-class of circle
class Sphere : public Circle
{
public:
	// create overloaded class definitions
	Sphere();
	Sphere(double);
	Sphere(double , double , double , double);

	// set z-coordinate
	void setZ(double);

	// get z-coordinate
	double getZ();

	// functions for area, volume of the sphere
	double getArea();
	double getVolume();

	// get distance between 2 spheres
	double getDistance(Sphere);

	// return bool value if circles collide
	bool collisionDetection(Sphere);
	


	// private value of z(height)
private:
	double z;

};
