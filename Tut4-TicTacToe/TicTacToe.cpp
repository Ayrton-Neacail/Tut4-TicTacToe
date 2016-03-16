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
		 if (grid[row][ccol] == '-')//checks if the space available
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
