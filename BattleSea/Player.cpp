#include "Player.h"



Player::Player(const string& name) : name_(name)
{
	aliveShipsCount_ = 10;
}


Player::~Player()
{
}

string Player::getName() const {
	return name_;
}

void Player::setName(const string& name) {
	name_ = name;
}

const vector<Ship>& Player::getShip() const {
	return ships_;
}