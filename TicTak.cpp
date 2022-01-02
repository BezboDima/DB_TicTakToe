#include <iostream>

using namespace std;

const int SIZ_c = 3;
const int SIZ_r = 3;
void makee(char m[][SIZ_r], int nMov);
void displayBoard(char m[][SIZ_r]);
bool winControl(char m[][SIZ_r]);

//does not prevent player from mistakes
int main(){
	char matrix[SIZ_c][SIZ_r];

	for (int row = 0; row < SIZ_r; row++) {
		for (int col = 0; col < SIZ_c; col++) {
			matrix[row][col] = ' ';
		}
	}
	int moveN = 1;
	while (moveN < 10 &&!winControl(matrix)) {
		displayBoard(matrix);
		makee(matrix, moveN);
		moveN++;
	}

	displayBoard(matrix);
	if (moveN == 9) {
		cout << "it's a draw " << endl;
	}

	return 0;
}

void makee(char m[][SIZ_r], int nMov){
	int row;
	int col;
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

void displayBoard(char m[][SIZ_r]){
	cout << "----------" << endl;
	cout << "| " << m[0][0] << "| " << m[0][1] << "| " << m[0][2] << "|" << endl;
	cout << "----------" << endl;
	cout << "| " << m[1][0] << "| " << m[1][1] << "| " << m[1][2] << "|" << endl;
	cout << "----------" << endl;
	cout << "| " << m[2][0] << "| " << m[2][1] << "| " << m[2][2] << '|' << endl;
	cout << "----------" << endl;
}

bool winControl(char m[][SIZ_r]) {
	bool control = false;
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