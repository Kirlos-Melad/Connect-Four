/*
 * VeiGoBot.cpp
 *
 *  Created on: Mar 26, 2020
 *      Author: kirlos
 */

#include "VeiGoBot.h"

void VeiGoBot::veigoPlay(GameBoardManager &gbManager) {
    myGBManager = &gbManager;
	int x = getBestMove();
	myGBManager->insertPieceAt(getTurn(), x);
	//delete myGBManager;
	myGBManager = nullptr;
}

int VeiGoBot::getBestMove() {
	int bestMove = -1;
	int bestVal = -INF;
	for(int i = 0; i < COLUMN_COUNT; i++)
	{
	    int y = myGBManager->AvailablePositionsCheck(i);
		if (y != -1) {
			//do
			myGBManager->insertPieceAt(getTurn(), i);
			//call
			int moveVal = minimax(5, false, -INF, INF);
			//undo
			myGBManager->redoInsertion(i, y);
			if (moveVal > bestVal) {
				bestVal = moveVal;
				bestMove = i;
			}
		}
	}
	return bestMove;
}

int VeiGoBot::minimax(int depth, bool bot, int alpha, int beta) {
	//base cases
	int player = myGBManager->findWinner();
	if (player == getTurn()) return INF;
	else if (player == 3 - getTurn()) return -INF;
    else if (!myGBManager->movesLeft()) return 0;
	else if (depth == 0) return getTotalScore();
	//recursive cases
	if (bot) {
		int bestVal = -INF;
        for(int i = 0; i < COLUMN_COUNT; i++)
		{
		    int y = myGBManager->AvailablePositionsCheck(i);
			if (y != -1) {
				//do
				myGBManager->insertPieceAt(getTurn(), i);
				//call
				bestVal = std::max(bestVal, minimax(depth - 1, false, alpha, beta));
				alpha = std::max(alpha, bestVal);
				//undo
                myGBManager->redoInsertion(i, y);
				if (alpha >= beta) break;
			}
		}
		return bestVal;
	}
	else {
		int bestVal = INF;
        for(int i = 0; i < COLUMN_COUNT; i++)
		{
		    int y = myGBManager->AvailablePositionsCheck(i);
			if (y != -1) {
				//do
				myGBManager->insertPieceAt(3 - getTurn(), i);
				//call
				bestVal = std::min(bestVal, minimax(depth - 1, true, alpha, beta));
				beta = std::min(beta, bestVal);
				//undo
                myGBManager->redoInsertion(i, y);
				if (alpha >= beta) break;
			}
		}
		return bestVal;
	}
}

int VeiGoBot::evaluate(int sliceArr[4]) {
    int score = 0, empty = 0, aiCount = 0, opponentCount = 0;

    for(int i = 0; i < 4; i++){
        if(sliceArr[i] == this->getTurn())
            aiCount++;
        else if(sliceArr[i] == EMPTY_SPOT)
            empty++;
        else
            opponentCount++;
    }

    if(aiCount == 3 && empty == 1)
        score += 5;
    else if(aiCount == 2 && empty == 2)
        score += 2;

    if(opponentCount == 3 && empty == 1)
        score -= 4;
    else if(opponentCount == 2 && empty == 2)
       score -= 1;

    return score;
}

int VeiGoBot::getTotalScore() {
    int score = 0, sliceArr[4];

    //Center Column Score
    int centerCount = 0;
    for(int i = 0; i < ROW_COUNT; i++){
        if(myGBManager->getCurrentSpot(floor(COLUMN_COUNT / 2), i) == this->getTurn())
            centerCount++;
    }
    score += centerCount * 3;

    //Horizontal Score
    for(int i = 0; i < ROW_COUNT; i++){
        for(int j = 0; j < COLUMN_COUNT - 3; j++){
            for(int k =  0; k < 4; k++){
                sliceArr[k] = myGBManager->getCurrentSpot(j + k, i);
            }
            score += evaluate(sliceArr);
        }
    }

    //Vertical Score
    for(int i = 0; i < COLUMN_COUNT; i++){
        for(int j = 0; j < ROW_COUNT - 3; j++){
            for(int k =  0; k < 4; k++){
                sliceArr[k] = myGBManager->getCurrentSpot(i, j + k);
            }
            score += evaluate(sliceArr);
        }
    }

    //Positive Slope Diagonal
    for(int i = 0; i < ROW_COUNT - 3; i++){
        for(int j = 0; j < COLUMN_COUNT - 3; j++){
            for(int k =  0; k < 4; k++){
                sliceArr[k] = myGBManager->getCurrentSpot(j + k, i + k);
            }
            score += evaluate(sliceArr);
        }
    }

    //Negative Slope Diagonal
    for(int i = 3; i < ROW_COUNT; i++){
        for(int j = 0; j < COLUMN_COUNT - 3; j++){
            for(int k =  0; k < 4; k++){
                sliceArr[k] = myGBManager->getCurrentSpot(j + k, i - k);
            }
            score += evaluate(sliceArr);
        }
    }

    return score;
}

