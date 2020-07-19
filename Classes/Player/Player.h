#ifndef PLAYER_H_
#define PLAYER_H_

#include <bits/stdc++.h>
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

class Player {
private:
	const string name;
	char color; // red(r) or blue(b)
	int turn; // 1 or 2
	bool winner;
public:
	Player(string name);
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

	string getName() const {
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
