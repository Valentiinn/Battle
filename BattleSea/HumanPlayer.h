#ifndef HUMANPLAYER_H
#define HUMANPLAYER_H

#include "Player.h"

class HumanPlayer : public Player
{
public:
	static HumanPlayer& getInstance() {}
	static getInstance();
	void takeShot(const char xCoordinate, int yCoordinate) override;
private:
	HumanPlayer() {}
	~HumanPlayer() {}
	HumanPlayer(HumanPlayer const&) = delete;
	HumanPlayer& operator= (HumanPlayer const&) = delete;
};


#endif //HUMANPLAYER_H
