#include <iostream>

#include "HumanPlayer.h"

using std::cout;
using std::cin;

//static HumanPlayer::getInstance(){
//	static HumanPlayer humanPlayer;
//	return humanPlayer;
//}

void HumanPlayer::takeShot(char xCoordinate, int yCoordinate) {
	if (checkXcoordinate&&checkYcoordinate) {
		
	}
	else
		cout << "Incorrect input!";
}

bool checkXcoordinate(char xCord) 
{
	if (xCord != 'A' || 'B' || 'C' || 'D' || 'E' || 'F' || 'G' || 'H' || 'I' || 'J') {
		return false;
	}else
	return true;
}

bool checkYcoordinate(int yCord)
{
	if (yCord < 0||yCord>10) {
		return false;
	}
	else
		return true;
}

