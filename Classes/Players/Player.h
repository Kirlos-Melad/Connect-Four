#ifndef PLAYER_H_
#define PLAYER_H_

#include "../../Headers/includes.h"

class Player {
private:
	const std::string name;
	sf::Color color;
	int turn;
	bool winner;
public:
	Player(std::string name);
	~Player();

	bool isWinner() const;

	void setWinner(bool winner);

	std::string getName() const;

	int getTurn() const;

	void setTurn(int turn);
};

#endif /* PLAYER_H_ */
