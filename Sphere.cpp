#include "Sphere.h"
#include <cmath>

// creates a sphere, where no-parameters are added. At origin with radius of 1
Sphere::Sphere() 
{
	z = 0;
	setX(0);
	setY(0);
	setRadius(1);
}

// creates a sphere, where radius is added at origin
Sphere::Sphere(double radius) 
{
	z = 0;
	setX(0);
	setY(0);
	setRadius(radius);

}

// creates a sphere, where all parameters are passed
Sphere::Sphere(double x, double y, double z, double radius)
{
	this-> z = z;
	setX(x);
	setY(y);
	setRadius(radius);
}

// set z-coordinate for a sphere
void Sphere::setZ(double z)
{
	this->z = z;
}

// get z-coordinate of a sphere
double Sphere::getZ() 
{
	return z;
}

// get area of the sphere as a double by using basic formula
double Sphere::getArea()
{
	double answer = getRadius() * getRadius() * 4 * 3.141592;
	return answer;
}

// gives back distance between two spheres' origins
double Sphere::getDistance(Sphere secSphere) {
	
	// calculate distance between x-coordinates
	double distanceBetweenX = getX() - secSphere.getX();
	
	// calculate distance between y-coordinates
	double distanceBetweenY = getY() - secSphere.getY();

	// calculate distance between z-coordinates
	double distanceBetweenZ = z - secSphere.getZ();
	
	// calculate distance between origins using formula
	double distanceF = sqrt((distanceBetweenX * distanceBetweenX) + (distanceBetweenY * distanceBetweenY) + (distanceBetweenZ * distanceBetweenZ));

	return distanceF;
}

// return bool value identifying if 2 spheres collide or not
bool Sphere::collisionDetection(Sphere secSphere) 
{
	// set control value as false
	bool control = false;

	// in case if distance is less than sum of spheres' radiuses, change control to true and return it
	if (getDistance(secSphere) <= (getRadius() + secSphere.getRadius())) 
	{
		control = true;
	}
	return control;
}

// get sphere volume using basic formula
double Sphere::getVolume()
{
	double answer = (4.0 / 3) * getRadius() * getRadius() * getRadius() * 3.141592;
	return answer;
}
