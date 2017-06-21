#include "Player.h"



Player::Player(const string& name) : name_(name)
{

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