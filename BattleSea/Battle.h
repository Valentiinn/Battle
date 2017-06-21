#pragma once

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
	void start();
	~Battle();
private:
	HumanPlayer humanPlayer;
	AI aiPlayer;
};

