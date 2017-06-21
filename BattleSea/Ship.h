#pragma once

const int SHIPS_COUNT = 10;
const int SHIP_4_COUNT = 1;
const int SHIP_3_COUNT = 2;
const int SHIP_2_COUNT = 3;
const int SHIP_1_COUNT = 4;

enum SHIP_SIZE { SHIP_1 = 1, SHIP_2, SHIP_3, SHIP_4 };
class Ship
{
public:
	int coordinateBeginX;	
	int coordinateBeginY;
	int coordinateEndX;
	int coordinateEndY;

	bool isAlive;
	Ship() {}
	Ship(int beginX, int beginY, int endX, int endY, bool isDead)
	{
		coordinateBeginX = beginX;
		coordinateBeginY = beginY;
		coordinateEndX = endX;
		coordinateEndY = endY;
		isAlive = true;
	}
	~Ship() {}
};

