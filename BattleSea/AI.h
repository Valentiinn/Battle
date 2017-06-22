#ifndef AI_H
#define AI_H

#include "Player.h"
class AI :public Player
{
public:
	static AI& getInstance() {}
	void takeShot(char xCoordinate, int yCoordinate) override;
private:
	AI() {}
	~AI() {}
	AI(AI const&) = delete;
	AI& operator= (AI const&) = delete;
};


#endif //AI_H
