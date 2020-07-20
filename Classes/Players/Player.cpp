/*
 * Players.cpp
 *
 *  Created on: Mar 15, 2020
 *      Author: kirlos
 */

#include "Player.h"

Player::Player(std::string name) : name(name) {
	turn = 0;
	winner = false;
	//color = '';
}

Player::~Player() {
	// TODO Auto-generated destructor stub
}

