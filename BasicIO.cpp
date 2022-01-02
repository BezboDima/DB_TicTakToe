#include <iostream>
using namespace std;

int main()
{
	// create a C variable
	double C_value;

	// get a value of Celsius from a user and asign it to a variable C
	cout << "Please enter temperature in Celsius to cenvert to Fahrenheit:";
	cin >> C_value;

	// Convert temperature from C to F and asigh to a variable
	// Make sure to devide with a float to make an answer, which is float
	double F_value = (9.0/5) * C_value + 32;

	// show the answer to the user
	cout << C_value << " in Celsius is " << F_value << " in Fahrenheit!" << endl;

	//Make sure that programm is working with no errors
	return 0;
}