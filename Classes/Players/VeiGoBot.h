/*
 * VeiGoBot.h
 *
 *  Created on: Mar 15, 2020
 *      Author: kirlos
 */
#ifndef VEIGOBOT_H_
#define VEIGOBOT_H_

#include "Player.h"
#include "../../Headers/FunctionalitiesIncludes.h"
#include "Judge.h"

class VeiGoBot : public Player{
private: // Attributes
	const int INF = 2e9;
    ConnectFourStructure positionsTracker;
    Judge judge;
private: // Methods
	int minimax(SharedPointer<Array2D<int>> myGameBoard, int depth, bool bot, int alpha, int beta);
	int getBestMove(SharedPointer<Array2D<int>> myGameBoard);
	int evaluate(const int sliceArr[4]);
	int getTotalScore(SharedPointer<Array2D<int>> myGameBoard);
public:
	VeiGoBot();
	int veigoPlay(SharedPointer<Array2D<int>> myGameBoard);
	~VeiGoBot();
};

#endif /* VEIGOBOT_H_ */
