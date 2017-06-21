#pragma once

#include <vector>

#include "Ship.h"

using std::vector;

class Board
{
public:
	Board();
	void printBoard(char board[10][10]);
	void clearBoard();
	~Board();
private:
	char board_[10][10];
	vector<Ship> ships_;
};

