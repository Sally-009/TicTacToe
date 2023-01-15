// Name: Saori Kojima
// Program Description: Tic Tac Toe
// Date: 1/15/2023

#include <iostream>
#include <string>

using namespace std;

// ************************************
// This is Class
// ************************************

class Player :public Gameboard{

private:

public:

	void selectPosition() {

	}

	void setSymbol()
	{

	}

protected:

};

class Com : public Player {

private:

public:

	void selectPosition() {

	}

protected:

};

class Gameboard {

private:

public:

	// make each space empty
	void resetGridValue() 
	{
		for (int a = 0; a < 3; a++)
		{
			for (int b = 0; b < 3; b++)
			{
				grid[a][b] = ' ';
			}
		}
	}

	// show gameboard on the screen
	void outputGameboard() 
	{
		cout << "  1 2 3 " << endl;
		for (int a = 0; a < 3; a++)
		{
			cout << a + 1 << " ";

			for (int b = 0; b < 3; b++)
			{
				cout << grid[a][b] << " ";
			}

			cout << endl;
		}
	}

protected:

	char grid[3][3];

};

// ************************************
// This is Main
// ************************************

int main()
{
	// Create Objects
	Gameboard gameboard;

	// Reset
	gameboard.resetGridValue();
	gameboard.outputGameboard();
}
