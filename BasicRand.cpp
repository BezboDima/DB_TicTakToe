#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

// use prototype of the function
int recSumDigits(long n);

int main() {

	// use time as seed for random numbers
	srand(time(0));

	// define nariable for numbers to convert and the sum
	long number;
	int sum;

	// create a loof to create 20 numbers and computate sum of their digits
	for (int i = 0; i < 20; i++) {

		// create a rundom number with 5 or less digits and sum their digits
		number = rand() % 100000;
		sum = recSumDigits(number);

		// print the answer to the user
		cout << number << " sum of digits is " << sum << endl;
	}

	// make sure program runs correctly


	
	return 0;
}

// create a recursive function which takes long and returns integer
int recSumDigits(long n) {

	// in case if number is 1 digit return itself
	if (n < 10) {

		return n;
	}
	else {

		// create variable for last digit of number(i) and for number excluding last digit(partDig)
		int i = n % 10;
		long partDig = n / 10;

		// return sum of last digit and call function for a leftover number
		return i + recSumDigits(partDig);
	}
	

}
