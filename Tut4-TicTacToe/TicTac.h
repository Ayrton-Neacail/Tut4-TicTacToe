#pragma once
#ifndef TicTac_h
#define TicTac_H

#include<string>

using namespace std;


class TICTAC{

private:

	char grid[3][3];




public:
	TICTAC();
	~TICTAC();


	void reset();
	bool move(int,int,int);
	void print();
	int over();






}; 


#endif