/*
 * VeiGoBot.h
 *
 *  Created on: Mar 15, 2020
 *      Author: kirlos
 */
#ifndef VEIGOBOT_H_
#define VEIGOBOT_H_

#include "Player.h"
#include "../Managers/GameBoardManager.h"

class VeiGoBot : public Player{
private: // Attributes
	const int INF = 2e9;
    GameBoardManager *myGBManager;
private: // Methods
	int minimax(int depth, bool bot, int alpha, int beta);
	int getBestMove();
	int evaluate(int sliceArr[4]);
	int getTotalScore();
public:
	VeiGoBot() : Player("VeiGo"){}
	void veigoPlay(GameBoardManager &gbManager);
	~VeiGoBot(){}
};

#endif /* VEIGOBOT_H_ */
