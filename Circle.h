#pragma once
class Circle
{
public:
	// functions for creating circle
	Circle();
	Circle(double);
	Circle(double, double, double);

	// functions to set the values of the circle 
	void setX(double);
	void setY(double);
	void setRadius(double);

	// functions to get values of the circle 
	double getX();
	double getY();
	double getRadius();

	// get area of the circle 
	double getArea();

	// check if two circles collide
	bool collisionDetection(Circle);


// private values are radius y and x coordinate
private:
	double radius;
	double x;
	double y;

};

