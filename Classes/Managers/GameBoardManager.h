#ifndef GAMEBOARDMANAGER_H_
#define GAMEBOARDMANAGER_H_

#include "../headers.h"

//Game Board
#define ROW_COUNT 8
#define COLUMN_COUNT 8

//Information
#define FIRST_PLAYER 1
#define SECOND_PLAYER 2
#define EMPTY_SPOT 0

class GameBoardManager {
#define INFORMATION_LEVEL 3 // level 0 = x in the img, level 1 = y in the img, level 2 = player turn

private: // Attributes
	int GameBoard[ROW_COUNT][COLUMN_COUNT][INFORMATION_LEVEL];
    //Maybe use of not
    std::vector<std::pair<int, int>> AvailablePositions;

    //Try to get rid of them
    int checkplayer1 = 0, checkplayer2 = 0;
	bool player_1 = false, player_2 = false;

private: // Methods
	void Initialize_AvailablePositions();

	//find winner NEEDS TO BE OPTIMIZED
	void Vertical_GameBoard_Check(); //Check the winner vertically.
	void Horizontal_GameBoard_Check(); //Check the winner horizontally.
	//Check the winner diagonally.
	void Diagonal1_1_GameBoard_Check();
	void Diagonal1_2_GameBoard_Check();
	void Diagonal2_GameBoard_Check();

public: //Methods
	GameBoardManager();
	void startNewGame();
    int findWinner();
    bool movesLeft(){ return !AvailablePositions.empty(); }
    ~GameBoardManager();

    //Try to get rid of them
	void insertPieceAt(int k, int x);
	void redoInsertion(int x, int y);
    int getCurrentSpot(int x, int y);

    //Maybe use of not
    int AvailablePositionsCheck(int x);
};

#endif /* GAMEBOARDMANAGER_H_ */
