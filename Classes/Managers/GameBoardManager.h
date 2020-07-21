#ifndef GAMEBOARDMANAGER_H_
#define GAMEBOARDMANAGER_H_

#include "../../Headers/includes.h"
#include "../../Headers/GameBoardBasic.h"

class GameBoardManager {

private: // Attributes
    int GameBoard[ROW_COUNT][COLUMN_COUNT];

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
    int** getBoardCopy();
    ~GameBoardManager();

    //Try to get rid of them
	void insertPieceAt(int k, int x);
	void redoInsertion(int x, int y);
    int getCurrentSpot(int x, int y);

    //Maybe use or not
    int AvailablePositionsCheck(int x);
    bool movesLeft(){ return !AvailablePositions.empty(); }
};

#endif /* GAMEBOARDMANAGER_H_ */
