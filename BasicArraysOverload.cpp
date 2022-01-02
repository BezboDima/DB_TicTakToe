#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

// set constant for lenght of an array
const int ARRAY_LENGHT = 10;

// write all of the function prototypes
void asignVal(int[]);
void asignVal(float[]);
void asignVal(double[]);

void printArray(int[]);
void printArray(float[]);
void printArray(double[]);

void calcSumAvarage(int[]);
void calcSumAvarage(float[]);
void calcSumAvarage(double[]);

void infoArray(int[]);
void infoArray(float[]);
void infoArray(double[]);


int main() {

	// define 3 different arrays 
	int intArray[ARRAY_LENGHT];
	float floatArray[ARRAY_LENGHT];
	double doubleArray[ARRAY_LENGHT];

	// set random seed 
	srand(time(0));

	// asign values to each of an arrays
	asignVal(intArray);
	asignVal(floatArray);
	asignVal(doubleArray);

	// call infoArray to print information about arrays
	infoArray(intArray);
	infoArray(floatArray);
	infoArray(doubleArray);

	// make sure program runs correctly
	return 0;
}

// function to asign values for integer array
void asignVal(int arr[]) {

	// set a loop to give random 2 digit numbers
	for (int i = 0; i < ARRAY_LENGHT; i++) {

		// asign value to corresponding index of array
		int valToAs = rand() % 100;
		arr[i] = valToAs;

	}

}

// function to asign values for float array
void asignVal(float arr[]) {

	// set a loop to give random numbers
	for (int i = 0; i < ARRAY_LENGHT; i++) {

		// create intToAs for whole numbers from 0 to 9
		float intToAs = rand() % 10;

		// create decimalToAs for decimal numbers from 0.00 to 0.99
		float decimalToAs = (rand() % 100) / 100.0;

		// add them together to create an INTERESTING number
		arr[i] = intToAs + decimalToAs;

	}

}

// function to asign values for double array
void asignVal(double arr[]) {

	// set a loop to give random numbers
	for (int i = 0; i < ARRAY_LENGHT; i++) {

		// create intToAs for whole numbers from 0 to 9
		double intToAs = rand() % 10;

		// create decimalToAs for decimal numbers from 0.00 to 0.99
		double decimalToAs = (rand() % 100) / 100.0;

		// add them together to create an INTERESTING number
		arr[i] = intToAs + decimalToAs;

	}

}
// create a function to give info about int array
void infoArray(int arr[]) {

	printArray(arr);
	calcSumAvarage(arr);

}
// create a function to give info about float array
void infoArray(float arr[]) {

	printArray(arr);
	calcSumAvarage(arr);

}
// create a function to give info about double array
void infoArray(double arr[]) {

	printArray(arr);
	calcSumAvarage(arr);

}

// create a function to print values of int array
void printArray(int arr[]) {

	// print the begining
	cout << "Array is: (";

	// print middle elements using loop
	for (int i = 0; i < ARRAY_LENGHT - 1; i++) {

		cout << arr[i] << ", ";
	}

	// print last element and close it to make it look nice
	cout << arr[ARRAY_LENGHT - 1] << ")" << endl;
}

// create a function to print values of float array
void printArray(float arr[]) {

	// print the begining
	cout << "Array is: (";

	// print middle elements using loop
	for (int i = 0; i < ARRAY_LENGHT - 1; i++) {

		cout << arr[i] << ", ";
	}

	// print last element and close it to make it look nice
	cout << arr[ARRAY_LENGHT - 1] << ")" << endl;
}

// create a function to print values of double array
void printArray(double arr[]) {

	// print the begining
	cout << "Array is: (";

	// print middle elements using loop
	for (int i = 0; i < ARRAY_LENGHT - 1; i++) {

		cout << arr[i] << ", ";
	}

	// print last element and close it to make it look nice
	cout << arr[ARRAY_LENGHT - 1] << ")" << endl;
}

// create a function to calculate and display avarage and sum of an int array
void calcSumAvarage(int arr[]) {

	// create a sum var and go through loop, summing all values of an array
	int sum = 0;
	for (int i = 0; i < ARRAY_LENGHT; i++) {
		sum += arr[i];
	}

	// calculate avarage of an array
	double avar = double(sum) / ARRAY_LENGHT;

	// print sum and avarage using setprecision to show it with 2 decimal points
	cout << "Sum of Array is: " << sum << endl;
	cout << "Avarage of Array is: " << fixed << setprecision(2) << avar << endl;
}

// create a function to calculate and display avarage and sum of an float array
void calcSumAvarage(float arr[]) {

	// create a sum var and go through loop, summing all values of an array
	float sum = 0;
	for (int i = 0; i < ARRAY_LENGHT; i++) {
		sum += arr[i];
	}

	// calculate avarage of an array
	double avar = sum / ARRAY_LENGHT;

	// print sum and avarage using setprecision to show it with 2 decimal points
	cout << "Sum of Array is: " << sum << endl;
	cout << "Avarage of Array is: " << fixed << setprecision(2) << avar << endl;
}

// create a function to calculate and display avarage and sum of an float array
void calcSumAvarage(double arr[]) {

	// create a sum var and go through loop, summing all values of an array
	double sum = 0;
	for (int i = 0; i < ARRAY_LENGHT; i++) {
		sum += arr[i];
	}

	// calculate avarage of an array
	double avar = sum / ARRAY_LENGHT;

	// print sum and avarage using setprecision to show it with 2 decimal points
	cout << "Sum of Array is: " << sum << endl;
	cout << "Avarage of Array is: " << fixed << setprecision(2) << avar << endl;
}