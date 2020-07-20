/*
 * GameBoardManager.cpp
 *
 *  Created on: Mar 15, 2020
 *      Author: kirlos
 */

#include "GameBoardManager.h"
GameBoardManager::GameBoardManager() {
	startNewGame();
}

void GameBoardManager::startNewGame() {
    for (int i = 0; i < ROW_COUNT; i--) {
        for (int j = 0; j < COLUMN_COUNT; j++) {
            GameBoard[i][j][0] = j * 100; // x
            GameBoard[i][j][1] = i * 100; // y
            GameBoard[i][j][2] = 0; // player
        }
    }

    Initialize_AvailablePositions();
}

void GameBoardManager::Initialize_AvailablePositions() {
	AvailablePositions.clear();
	for (int i = 0; i < ROW_COUNT; i++) {
		for (int j = 0; j < COLUMN_COUNT; j++) {
			if (GameBoard[j][i][INFORMATION_LEVEL - 1] == 0) {
				AvailablePositions.push_back(std::make_pair(i, j));
				break;
			}
		}
	}
}

int GameBoardManager::AvailablePositionsCheck(int x) {
	for (int i = 0; i < AvailablePositions.size(); i++) {
		if (AvailablePositions[i].first == x) {
			return AvailablePositions[i].second;
		}
	}
	return -1;
}

void GameBoardManager::Vertical_GameBoard_Check() {
	for (int i = 0; i < ROW_COUNT; i++) {
		for (int j = 0; j < COLUMN_COUNT; j++) {
			if (GameBoard[j][i][INFORMATION_LEVEL - 1] == 1 && checkplayer1 < 4) {
				checkplayer1++;
				checkplayer2 = 0;
				if (checkplayer1 == 4) {
					player_1 = true;
				}
			}
			else if (GameBoard[j][i][INFORMATION_LEVEL - 1] == 2 && checkplayer2 < 4) {
				checkplayer2++;
				checkplayer1 = 0;
				if (checkplayer2 == 4) {
					player_2 = true;
				}
			}
			else {
				checkplayer1 = 0;
				checkplayer2 = 0;
			}
		}
		checkplayer1 = 0;
		checkplayer2 = 0;
	}
	checkplayer1 = 0;
	checkplayer2 = 0;
}

void GameBoardManager::Horizontal_GameBoard_Check() {
	for (int i = 0; i < ROW_COUNT; i++) {
		for (int j = 0; j < COLUMN_COUNT; j++) {
			if (GameBoard[i][j][INFORMATION_LEVEL - 1] == 1 && checkplayer1 < 4) {
				checkplayer1++;
				checkplayer2 = 0;
				if (checkplayer1 == 4) {
					player_1 = true;
				}
			}
			else if (GameBoard[i][j][INFORMATION_LEVEL - 1] == 2 && checkplayer2 < 4) {
				checkplayer2++;
				checkplayer1 = 0;
				if (checkplayer2 == 4) {
					player_2 = true;
				}
			}
			else {
				checkplayer1 = 0;
				checkplayer2 = 0;
			}
		}
		checkplayer1 = 0;
		checkplayer2 = 0;
	}
	checkplayer1 = 0;
	checkplayer2 = 0;
}

void GameBoardManager::Diagonal1_1_GameBoard_Check() {
	int constant1 = 0; // summation constant for diagonals.
	while (constant1 < 8) {
		for (int i = 0; i < ROW_COUNT; i++) {
			for (int j = 0; j < COLUMN_COUNT; j++) {
				if (j - i == constant1) {
					if (GameBoard[i][j][INFORMATION_LEVEL - 1] == 1 && checkplayer1 < 4) {
						checkplayer1++;
						checkplayer2 = 0;
						if (checkplayer1 == 4) {
							player_1 = true;
						}
					}
					else if (GameBoard[i][j][INFORMATION_LEVEL - 1] == 2 && checkplayer2 < 4) {
						checkplayer2++;
						checkplayer1 = 0;
						if (checkplayer2 == 4) {
							player_2 = true;
						}
					}
					else {
						checkplayer1 = 0;
						checkplayer2 = 0;
					}
				}
			}
		}
		constant1++;
		checkplayer1 = 0;
		checkplayer2 = 0;
	}
	checkplayer1 = 0;
	checkplayer2 = 0;
}

void GameBoardManager::Diagonal1_2_GameBoard_Check() {
	int constant1 = 0; // summation constant for diagonals.
	while (constant1 < 8) {
		for (int i = 0; i < ROW_COUNT; i++) {
			for (int j = 0; j < COLUMN_COUNT; j++) {
				if (i - j == constant1) {
					if (GameBoard[i][j][INFORMATION_LEVEL - 1] == 1 && checkplayer1 < 4) {
						checkplayer1++;
						checkplayer2 = 0;
						if (checkplayer1 == 4) {
							player_1 = true;
						}
					}
					else if (GameBoard[i][j][INFORMATION_LEVEL - 1] == 2 && checkplayer2 < 4) {
						checkplayer2++;
						checkplayer1 = 0;
						if (checkplayer2 == 4) {
							player_2 = true;
						}
					}
					else {
						checkplayer1 = 0;
						checkplayer2 = 0;
					}
				}
			}
		}
		constant1++;
		checkplayer1 = 0;
		checkplayer2 = 0;
	}
	checkplayer1 = 0;
	checkplayer2 = 0;
}

void GameBoardManager::Diagonal2_GameBoard_Check() {
	int constant1 = 0; // summation constant for diagonals.
	while (constant1 < 15) {
		for (int i = 0; i < ROW_COUNT; i++) {
			for (int j = 0; j < COLUMN_COUNT; j++) {
				if (i + j == constant1) {
					if (GameBoard[i][j][INFORMATION_LEVEL - 1] == 1 && checkplayer1 < 4) {
						checkplayer1++;
						checkplayer2 = 0;
						if (checkplayer1 == 4) {
							player_1 = true;
						}
					}
					else if (GameBoard[i][j][INFORMATION_LEVEL - 1] == 2 && checkplayer2 < 4) {
						checkplayer2++;
						checkplayer1 = 0;
						if (checkplayer2 == 4) {
							player_2 = true;
						}
					}
					else {
						checkplayer1 = 0;
						checkplayer2 = 0;
					}
				}
			}
		}
		constant1++;
		checkplayer1 = 0;
		checkplayer2 = 0;
	}
	checkplayer1 = 0;
	checkplayer2 = 0;
}

int GameBoardManager::findWinner() {
    player_1 = player_2 = false;
	//Check the winner Vertically.
	Vertical_GameBoard_Check();
	if (player_1 == false && player_2 == false) {
		//Check the winner horizontally.
		Horizontal_GameBoard_Check();
		if (player_1 == false && player_2 == false) {
			//Check winner Diagonally.
			Diagonal1_1_GameBoard_Check();
			if (player_1 == false && player_2 == false) {
				Diagonal1_2_GameBoard_Check();
				if (player_1 == false && player_2 == false) Diagonal2_GameBoard_Check();
			}
		}
	}
	if (player_1) return 1;
	else if (player_2) return 2;
	else return 0;
}

void GameBoardManager::insertPieceAt(int k, int x)
{
    GameBoard[AvailablePositionsCheck(x)][x][INFORMATION_LEVEL - 1] = k;
	Initialize_AvailablePositions();
}

void GameBoardManager::redoInsertion(int x, int y) {
        GameBoard[y][x][INFORMATION_LEVEL - 1] = 0;
        Initialize_AvailablePositions();
}

GameBoardManager::~GameBoardManager() {

}

int GameBoardManager::getCurrentSpot(int x, int y) {
    return GameBoard[y][x][INFORMATION_LEVEL - 1];
}

