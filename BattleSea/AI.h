#ifndef AI_H
#define AI_H

#include "Player.h"
class AI :public Player
{
public:
	static AI * getInstance() {
		if (instance)
			instance = new AI();
		return instance;
	}
	void takeShot(int x, int y) override;
private:
	static AI * instance;
	AI() {}
	AI(const AI&);
	AI& operator=(AI&);

};


#endif //AI_H
