#include "Player.h"
#include <string>
#include <iostream>
using namespace std;

Player::Player() {
	name = "";
}
Player::~Player() {}
void Player::Name() {
	cin >> name;
}
string Player::getName() {
	return name;
}

