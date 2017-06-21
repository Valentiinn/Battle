#ifndef BOARD_H
#define BOARD_H

#include <vector>

#include "Ship.h"

using std::vector;

class Board
{
public:
	Board();
	void printBoard(char board[10][10]);
	void clearBoard();
	void generatePrintShips();
	~Board();
private:
	char board_[10][10];
	vector<Ship> ships_;
};


#endif
