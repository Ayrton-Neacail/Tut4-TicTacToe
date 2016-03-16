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