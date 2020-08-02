/*
 * GameBoardManager.cpp
 *
 *  Created on: Mar 15, 2020
 *      Author: kirlos
 */

#include "GameBoardManager.h"
GameBoardManager::GameBoardManager() {

    for (int i = 0; i < ROW_COUNT; i++) {
        for (int j = 0; j < COLUMN_COUNT; j++) {
            GameBoard[i][j] = EMPTY_SPOT; // player
        }
    }
}

int GameBoardManager::getAvailablePositionAt(int x) {
	return positionsTracker.getAvailablePositionAt(x);
}

void GameBoardManager::insertPieceAt(int k, int x)
{
    GameBoard[positionsTracker.getAvailablePositionAt(x)][x] = k;
    positionsTracker.updatePositions(this->cloneGameBoard());
}

SharedPointer<Array2D<int>> GameBoardManager::cloneGameBoard() {
    SharedPointer<Array2D<int>> copy(new Array2D<int>(ROW_COUNT, COLUMN_COUNT));

    for(int i = 0; i < ROW_COUNT; i++){
        for(int j = 0; j < COLUMN_COUNT; j++){
            (*copy)[i][j] = GameBoard[i][j];
        }
    }

    return copy;
}

GameBoardManager::~GameBoardManager() {

}

