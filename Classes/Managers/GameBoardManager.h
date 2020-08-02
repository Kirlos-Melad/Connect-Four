#ifndef GAMEBOARDMANAGER_H_
#define GAMEBOARDMANAGER_H_

#include "../../Headers/includes.h"
#include "../../Headers/GameBoardBasic.h"
#include "../../Headers/FunctionalitiesIncludes.h"
#include "../Players/Judge.h"

class GameBoardManager {

private: // Attributes
    //int GameBoard[ROW_COUNT][COLUMN_COUNT];
    Array2D<int> GameBoard = Array2D<int>(ROW_COUNT, COLUMN_COUNT);
    ConnectFourStructure positionsTracker;
    Judge judge;


public: //Methods
	GameBoardManager();
    int getAvailablePositionAt(int x);
    void insertPieceAt(int k, int x);
    SharedPointer<Array2D<int>> cloneGameBoard();
    bool isFull1() const { return positionsTracker.isFull1(); }
    //int getWinner() const { return judge.getWinner(cloneGameBoard()); }
    ~GameBoardManager();

};

#endif /* GAMEBOARDMANAGER_H_ */
