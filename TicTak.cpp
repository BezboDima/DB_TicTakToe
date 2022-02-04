#include <iostream>

using namespace std;

//create constants for array size
const int SIZ_C = 3;
const int SIZ_R = 3;

void makee(char m[][SIZ_R], int nMov);
void displayBoard(char m[][SIZ_R]);
bool winControl(char m[][SIZ_R]);

//does not prevent player from mistakes
int main(){

	//create and intitialize array with whitespace char
	char matrix[SIZ_C][SIZ_R];

	for (int row = 0; row < SIZ_R; row++) {
		for (int col = 0; col < SIZ_C; col++) {
			matrix[row][col] = ' ';
		}
	}

	//while number of moves is less than 10, continue asking for a move 
	int moveN = 1;
	while (moveN < 10 && !winControl(matrix)) {
		displayBoard(matrix);
		makee(matrix, moveN);
		moveN++;
	}

	//if winControl is still not true, it is draw
	displayBoard(matrix);
	if (!winControl(matrix)) {
		cout << "it's a draw " << endl;
	}

	return 0;
}

//lets player make a move. If N move is odd, player X gets to move and the oppisite
void makee(char m[][SIZ_R], int nMov){
	
	int row;
	int col;

	//stores players move to a corresponding position
	if (nMov % 2 == 1) {
		cout << "Player X please make a move choosing row: ";
		cin >> row;
		cout << "Player X please make a move choosing column: ";
		cin >> col;

		m[row - 1][col - 1] = 'X';
	}
	else {
		cout << "Player O please make a move choosing row: ";
		cin >> row;
		cout << "Player O please make a move choosing column: ";
		cin >> col;

		m[row-1][col-1] = 'O';

	}

	


}

//displays current state ofthe board
void displayBoard(char m[][SIZ_R]){
	cout << "----------" << endl;
	cout << "| " << m[0][0] << "| " << m[0][1] << "| " << m[0][2] << "|" << endl;
	cout << "----------" << endl;
	cout << "| " << m[1][0] << "| " << m[1][1] << "| " << m[1][2] << "|" << endl;
	cout << "----------" << endl;
	cout << "| " << m[2][0] << "| " << m[2][1] << "| " << m[2][2] << '|' << endl;
	cout << "----------" << endl;
}

//returns true if found a winning line
bool winControl(char m[][SIZ_R]) {
	bool control = false;

	//goes thru rows
	for (int i = 0; i < 3; i++) {
		int sum = 0;
		for (int j = 0; j < 3; j++) {
			sum += m[i][j];
		}
		if (sum == 237) {
			cout << "O player won" << endl;
			control = true;
			break;
		}
		if (sum == 264) {
			cout << "X player won" << endl;
			control = true;
			break;
		}
	}
	
	//goes thru colums
	for (int i = 0; i < 3; i++) {
		int sum = 0;
		for (int j = 0; j < 3; j++) {
			sum += m[j][i];
		}
		if (sum == 237) {
			cout << "O player won" << endl;
			control = true;
			break;
		}
		if (sum ==264){
			cout << "X player won" << endl;
			control = true;
			break;
		}
	}

	//tries 2 diagonals
	if (m[0][0] + m[1][1] + m[2][2] == 237 || m[0][2] + m[1][1] + m[2][0] == 237) {
		cout << "O player won" << endl;
		control = true;
		
	}
	if (m[0][0] + m[1][1] + m[2][2] == 264 || m[0][2] + m[1][1] + m[2][0] == 264){
		cout << "X player won" << endl;
		control = true;

	}
	return control;
}

