#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	// Ask user for a numerator and asign it to a variable
	double Num1;
	cout << "Please enter a numerator ";
	cin >> Num1;

	// Ask user for a denominator and asign it to a variable
	double Num2;
	cout << "Please enter a denominator ";
	cin >> Num2;

	// Create a text file named divide.txt to store an answer
	ofstream out;
	out.open("divide.txt");

	// Calculate an answer and store it to a variable
	double answer = Num1 / Num2;

	// Store an aswer to a file using "fixed" and "setpercision" to cut a number leaving 2 decimals and close a file
	out << fixed << setprecision(2) << answer << endl;
	out.close();

	// Make sure programm runs correctly returning 0
	return 0;
}
