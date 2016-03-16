#include <iostream>
#include <string>
#include "TicTac.h"


using namespace std;

int main()
{
	int player = 1;
	int n = 0;
	TICTAC toe;




	toe.print();//print the grid to screen

	for (int i = 1; i <= 9; i++)
	{
		if (i>4)
			cout << "Game is still on" << endl;

		int row, col;
		bool m;
		char sp;
		cout << "to start a new game enter 5" << endl;
		cout << "Player " << player << ": Enter co-ordinates (row,col):";
		cin >> row >> sp >> col;
		if (row == 5)
		{
			i = 1;
			toe.reset();
			continue;
		}


		m = toe.move(row, col, player); //for move to be made
		while (!m)
		{
			cout << "Invalid selection! try again" << endl;
			cout << "Player " << player << ": Enter co-ordinates (row,col):";
			cin >> row >> sp >> col;
			m = toe.move(row, col, player);
		}

		if (i > 4)
		{
			int res;
			res = toe.over();
			if (res != 0 && res != 3)
			{
				system("CLS");
				cout << "Player: " << res << "won the game" << endl;
				toe.print();
				exit(1);
			}
			else if (!res)
				cout << "game was a draw" << endl;;
		}

		if (player == 1)
			player = 2;
		else
			player = 1;

		system("CLS");
		toe.print();
	};
}