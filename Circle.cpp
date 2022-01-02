#include "Circle.h"
#include <cmath>

// in case if coordinates weren't mentioned define them as 0
Circle::Circle() 
{
	radius = 1;
	x = 0;
	y = 0;
}

Circle::Circle(double radius)
{
	this->radius = radius;
	x = 0;
	y = 0;
	
}

// recive values and define them in a object
Circle::Circle(double rad, double x, double y) 
{
	this->radius = rad;
	this->x = x;
	this->y = y;

}

// set the radius(in case if radius <= 0 ignore)
void Circle::setRadius(double radius)
{
	if (radius > 0) {
		this->radius = radius;
	}

}

// set x-coordinate
void Circle::setX(double x)
{
	this->x = x;
}

// set y-coordinate
void Circle::setY(double y)
{
	this->y = y;
}

// return radius of an object
double Circle::getRadius()
{
	return radius;
}

// return x-coordinate of an object
double Circle::getX()
{
	return x;
}

// return y-coordinate of an object
double Circle::getY()
{
	return y;
}

// calculate the area of circle and return it
double Circle::getArea()
{
	return radius * radius * 3.14159265;
}

// check if 2 circles collide
bool Circle::collisionDetection(Circle secCircle)
{
	// define distances between coordinates and control value, which will be returned
	double distanceBetweenX;
	double distanceBetweenY;
	bool control = false;

	// check which x-coordinate is bigger and subtract smaller one from bigger to get the distance 
	if (x > secCircle.getX())
	{
		distanceBetweenX = x - secCircle.getX();
	}
	else
	{
		distanceBetweenX = secCircle.getX() - x;
	}

	// check which y-coordinate is bigger and subtract smaller one from bigger to get the distance 
	if (y > secCircle.getY())
	{
		distanceBetweenY = y - secCircle.getY();
	}
	else
	{
		distanceBetweenY = secCircle.getY() - y;
	}
	
	// define the variable distance, which will calculate the distance between centers of the circles
	double distance = sqrt((distanceBetweenY * distanceBetweenY) + (distanceBetweenX * distanceBetweenX));

	// sumOfRudius sums the radius' of circles
	double sumOfRadius = radius + secCircle.getRadius();

	// in case if sumOfRadius is bigger that or equal to the deistance between centers - circles collide which makes control value true
	if (sumOfRadius >= distance) 
	{
		control = true;
	}

	// return the answer
	return control;
}
