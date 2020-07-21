#ifndef PLAYER_H_
#define PLAYER_H_

#include "../../Headers/includes.h"

class Player {
private:
	const std::string name;
	char color; // red(r) or blue(b)
	int turn;
	bool winner;
public:
	Player(std::string name);
	~Player();

	bool isWinner() const {
		return winner;
	}

	void setWinner(bool winner) {
		this->winner = winner;
	}

	char getColor() const {
		return color;
	}

	std::string getName() const {
		return name;
	}

	int getTurn() const {
		return turn;
	}

	void setColor(char color) {
		this->color = color;
	}

	void setTurn(int turn) {
		this->turn = turn;
	}
};

#endif /* PLAYER_H_ */
