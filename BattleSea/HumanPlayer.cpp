#include <iostream>

#include "HumanPlayer.h"

using std::cout;
using std::cin;

HumanPlayer* HumanPlayer::instance;

void HumanPlayer::takeShot(char xCoordinate, int yCoordinate) {
	bool isValidChar(const char* xCord){
		if (xCord == 'A' || 'B' || 'C' || 'D' || 'E' || 'F' || 'G' || 'H' || 'I' || 'J') {
			return true;
		}
		return false;
	}
}