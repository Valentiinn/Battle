#ifndef PLAYER_H
#define PLAYER_H

#include <vector>

#include "Ship.h"

using std::vector;
using std::string;

class Player
{
public:
	Player(const string& name);
	Player();
	void setName(const string& name);
	string getName()const;
	int getAliveShipCount()const;
	virtual void takeShot(char xCoordinate, int yCoordinate);
	~Player();
private:
	string name_;
	vector<Ship> ships_;
	int aliveShipsCount_;
};


#endif //PLAYER_H
