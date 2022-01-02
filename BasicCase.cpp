#include <iostream>

using namespace std;

int main()
{// Get a character from user and asign it to a vriable
	char input;
	cout << "Please input your character ";
	cin >> input;
	
// First, make sure if user entered original value to give it back as it is and do not go through SWITCH
	if ((input >= '0' && input <= '9') || (input == '#' || input == '*')) {
		cout << "You entered " << input << endl;
// If user entered other character go through SWITCH
	}
	else {
		// uses toupper() to make letter in upper case, so that we don't have to create unnecessary cases
		// make sure to use BREAK statement to not do unnecessary comparisons
		switch (toupper(input)) 
		{
			// 33 = !, compare values and return 1 in case of conjunction
			case 33:
				cout << "You entered Number 1" << endl;
				break;
			// 65, 66, 67 = A, B, C, Compare values and return 2 in case of conjunction
			case 65:
			case 66:
			case 67:
				cout << "You entered Number 2 " << endl;
				break;
			// 68, 69, 70 = D, E, F, Compare values and return 3 in case of conjunction
			case 68:
			case 69:
			case 70:
				cout << "You entered Number 3" << endl;
				break;
			// 71, 72, 73 = G, H, I, Compare values and return 4 in case of conjunction
			case 71:
			case 72:
			case 73:
				cout << "You entered Number 4" << endl;
				break;
			// 74, 75, 76 = J, K, L, Compare values and return 5 in case of conjunction
			case 74:
			case 75:
			case 76:
				cout << "You entered Number 5" << endl;
				break;
			// 77, 78, 79 = M, N, O, Compare values and return 6 in case of conjunction
			case 77:
			case 78:
			case 79:
				cout << "You entered Number 6" << endl;
				break;
			// 80, 81, 82, 83 = P, Q, R, S, Compare values and return 7 in case of conjunction
			case 80:
			case 81:
			case 82:
			case 83:
				cout << "You entered Number 7" << endl;
				break;
			// 84, 85, 86 = T, U, V, Compare values and return 8 in case of conjunction
			case 84:
			case 85:
			case 86:
				cout << "You entered Number 8" << endl;
				break;
			// 87, 88, 89, 90 = W, X, Y, Z Compare values and return 9 in case of conjunction
			case 87:
			case 88:
			case 89:
			case 90:
				cout << "You entered Number 9" << endl;
				break;
			// If value cannot be found, print an error
			default:
				cout << "Invalid input" << endl;


		}
	}
	//make sure program ran correctly
	return 0;
}	


