// Name: Saori Kojima
// Program Description: Tic-Tac-Toe
// Date: 1/15/2023

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// **************************************
// This is a class
// **************************************

class TicTacToe {
private:
	
	// position of Noughts and Crosses
	char p[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

	// user's choice
	int choice; // choice as a number
	char pos;	// position of the gameboard

public:

	void start() {

	// title
		title();

	// select order
		cout << "1. Play first" << endl;
		cout << "2. Draw first" << endl;
		cout << "3. Exit" << endl;

		choice = getChoice(3);

		// exit game
		if (choice == 3)
		{
			cout << "Exit Successfully . . ." << endl;
			exit(0);
		}

	// show the gameboard
		title();
		showGameboard();

	// play first ( user's turn )

		if (choice == 1)
		{
			getPositionYOU();
			title();
			showGameboard();
		}

	// enemy's turn

	// player's turn

	}

	// ---------
	// Output
	// ---------

	void title() {
		system("cls");

		cout << "--- Tic Tac Toe ---" << endl;
		cout << endl;
		cout << "YOU ... o" << endl;
		cout << "COM ... x" << endl;
		cout << endl;

		cout << "Make a horizontal, vertical, or diagonal line by noughts to win!" << endl;
		cout << "If the enemy(COM) make the line first, you lose pspspspspspspsps" << endl;
		cout << endl;
	}

	void showGameboard() {

		// output to the screen
		cout << "--------------------" << endl << endl;
		for (int i = 0; i < 3; i++)
			cout << p[i][0] << " " << p[i][1] << " " << p[i][2] << endl;
		
		cout << endl;
	}

	// ---------
	// Operation
	// ---------

	int getChoice(int size) {
		
		bool error = false;

		do {

		// get choice
		cout << "--------------------" << endl;
		cout << "Choose your option by the number." << endl;
		cout << ">> ";
		cin >> choice;

		// check error
		error = rangeError(size);

		} while(error == true);

		return choice;
	}

	void getPositionYOU() {

		bool error = false;

		// index of position
		int row;	
		int column;

		// get choice
		cout << "--------------------" << endl;
		cout << "Choose the position by the number." << endl;

		do
		{
		cout << ">> ";
		cin >> choice;

		// check error
		error = rangeError(9);
		
		if (error == false)
		{
			// change the data type to char
			choice = (char)pos;

			error = overwriteError(row, column);
		}

		} while (error == true);

		// replace the number to "o"
		p[row][column] = 'o';

	}

	int getPositionCOM() {

	}


	//Error Check

	bool rangeError(int size) {
		if (choice > size || choice <= 0)
		{
			cout << "*Out of Range*" << endl;
			cout << "Please enter the valid number." << endl;
			return true;
		}
		else
			return false;
	}

	bool overwriteError(int &row, int &column) {
		// Find the position of choice
		row = -1;
		column = -1;

		// p[a][b]
		for(int a = 0; a < 3; a++)
		{
			for (int b = 0; b < 3; b++)
			{
				if (pos == p[a][b])
				{
					row = a;
					column = b;
					return false;

					break;
				}
			}
		}

		// Show Overwrite Error
		if (row == -1 && column == -1)
		{
			cout << "*Invalid Position*" << endl;
			cout << "This position is already selected." << endl;
			cout << "Please select a valid number." << endl;

			return true;
		}
	}

};


// **************************************
// This is a main function
// **************************************

int main()
{
	TicTacToe game;

	game.start();
}
