#pragma once
#include "Player.h"
class HumanPlayer : public Player
{
public:
	HumanPlayer(const string& name);
	HumanPlayer();
	~HumanPlayer();
};
