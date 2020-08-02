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

bool Player::isWinner() const {
    return winner;
}

void Player::setWinner(bool winner) {
    winner = winner;
}

std::string Player::getName() const {
    return name;
}

int Player::getTurn() const {
    return turn;
}

void Player::setTurn(int turn) {
    this->turn = turn;
}

