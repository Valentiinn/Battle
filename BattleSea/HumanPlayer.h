#ifndef HUMANPLAYER_H
#define UMANPLAYER_H

#include "Player.h"

class HumanPlayer : public Player
{
public:
	static HumanPlayer * getInstance() {
		if (instance)
			instance = new HumanPlayer();
		return instance;
	}
	void takeShot(char xCoordinate, int yCoordinate) override;
private:
	static HumanPlayer * instance;
	HumanPlayer() {}
	HumanPlayer(const HumanPlayer&);
	HumanPlayer& operator=(HumanPlayer&);
	
};
#endif //HUMANPLAYER_H
