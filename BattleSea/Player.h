#pragma once

#include <vector>

#include "Ship.h"

using std::vector;
using std::string;

class Player
{
public:
	Player(const string& name);
	void setName(const string& name);
	string getName();
	int getAliveShipCount();
	void makeShot(int x, int y);
	~Player();
private:
	string name_;
	vector<Ship> ships_;
	int aliveShipsCount_;
};

