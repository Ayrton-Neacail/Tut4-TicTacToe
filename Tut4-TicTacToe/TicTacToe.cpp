#include "TicTac.h"
#include <string>
#include <iostream>

using namespace std;

 TICTAC::TICTAC()         //initializes grid for new play
{
	for (int i = 1; i <= 3; i++)
		for (int j = 1; j <= 3; j++)
			grid[i][j] = '-';
};

 TICTAC::~TICTAC()
 {
	 //DEFAULT destructor
 };

 void TICTAC::reset() //resets the game grid
 {
	 for (int i = 1; i <= 3; i++)
		 for (int j = 1; j <= 3; j++)
			 grid[i][j] = '-';
 };
 bool TICTAC::move(int row, int col, int player)
 {
	 bool flag = 0;
	 if (row <= 3 && col <= 3 && row > 0 && col > 0)
	 {
		 if (grid[row][col] == '-')//checks if the space available
		 {
			 flag = 1;
			 if (player == 1)
				 grid[row][col] = 'x';
			 else
				 grid[row][col] = 'o';
		 };
	 };
	 return flag;
 };


 void TICTAC::print()
 {
	 for (int i = 1; i <= 3; i++)
	 {
		 for (int j = 1; j <= 3; j++)
			 cout << grid[i][j] << "\t";
		 cout << "\n";
	 };
 };

 int TICTAC::over()
 {
	 int ckpnt1 = 0, ckpnt2 = 0, inPlay = 0;

	 //method to check rows
	 for (int i = 1; i <= 3; i++)
	 {
		 ckpnt1 = 0, ckpnt2 = 0;
		 for (int j = 1; j <= 3; j++)
		 {
			 if (grid[i][j] == 'x')
				 ckpnt1++;
			 if (grid[i][j] == 'o')
				 ckpnt2++;
		 };
		 if (ckpnt1 == 3)
			 return 1;
		 if (ckpnt2 == 3)
			 return 2;
	 };
	 ckpnt1 = 0, ckpnt2 = 0;

	 //method to check columns
	 for (int i = 1; i <= 3; i++)
	 {
		 ckpnt1 = 0, ckpnt2 = 0;
		 for (int j = 1; j <= 3; j++)
		 {
			 if (grid[j][i] == 'x')
				 ckpnt1++;
			 if (grid[j][i] == 'o')
				 ckpnt2++;
			 if (grid[j][i] == '-')
				 inPlay = 1;
		 };
		 if (ckpnt1 == 3)
			 return 1;
		 if (ckpnt2 == 3)
			 return 2;
	 };
	 ckpnt1 = 0, ckpnt2 = 0;

	 //checking along 1st diagnol for winner
	 for (int i = 1; i <= 3; i++)
	 {
		 if (grid[i][i] == 'x')
			 ckpnt1++;
		 if (grid[i][i] == 'o')
			 ckpnt2++;
	 };
	 if (ckpnt1 == 3)
		 return 1;
	 if (ckpnt2 == 3)
		 return 2;

	 ckpnt1 = 0, ckpnt2 = 0;

	 //checking along 2nd diagnol for winner
	 int t = 1;
	 for (int j = 3; j >= 1; j--)
	 {
		 if (grid[t][j] == 'x')
			 ckpnt1++;
		 if (grid[t][j] == 'o')
			 ckpnt2++;
		 t++;
	 }
	 if (ckpnt1 == 3)
		 return 1;
	 if (ckpnt2 == 3)
		 return 2;

	 if (inPlay = 1)
		 return 3;
	 else
		 return 0;
 };
