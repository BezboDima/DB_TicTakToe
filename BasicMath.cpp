#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;

// Define the constant PI
const double PI = 3.14159265358979323846;

int main()
{
	// Ask user for a length of a line and asign it to a variable
	double line;
	cout << "Enter the length of your line ";
	cin >> line;

	// Ask user for a degreeof a lina and asign it to a variable
	float degree;
	cout << "Enter the degree of the line ";
	cin >> degree;

	// Convert degrees into a radians for cos and sin functions
	double radian = degree * (PI / 180);

	// Calculate X-coordinate by using cos() function and Y-coordinate by using sin() function
	double X_coor = cos(radian) * line;
	double Y_coor = sin(radian) * line;

	// Give back X and Y coordinates to the user by using 'fixed' to avoid scientific notations
	cout << "X coordinate of a line is " << fixed << setprecision(2) << X_coor << endl;
	cout << "Y coordinate of a line is " << fixed << setprecision(2) << Y_coor << endl;

	// Make sure programm runs correctly returning 0
	return 0;
}