#ifndef BATTLE_H
#define BATTLE_H

#include "HumanPlayer.h"
#include "AI.h"

enum SHOTRESULT { Miss, Hit, Kill };
class Battle
{
public:
	Battle();
	int battleStepsCount;
	void timerStertBattle();
	void timerMove();
	bool isOver();
	void startBattle();
	int getBattleStepsCount();
	void setBattleStepsCount(const int& battleStepsCount);
	~Battle();
private:
	HumanPlayer humanPlayer;
	AI aiPlayer;
	int battleStepsCount;
};


#endif //BATTLE_H
