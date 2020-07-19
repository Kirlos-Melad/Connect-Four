#ifndef GAMEBOARDMANAGER_H_
#define GAMEBOARDMANAGER_H_

#include <bits/stdc++.h>
#include <SFML/Graphics.hpp>

//Game Board
#define ROW_COUNT 8
#define COLUMN_COUNT 8

//Information
#define FIRST_PLAYER 1
#define SECOND_PLAYER 2
#define EMPTY_SPOT 0

using namespace std;
using namespace sf;

class GameBoardManager {
#define INFORMATION_LEVEL 1

private: // Attributes
	int GameBoard[ROW_COUNT][COLUMN_COUNT][INFORMATION_LEVEL]; // player
	int checkplayer1 = 0, checkplayer2 = 0;
	bool player_1 = false, player_2 = false;
	vector<pair<int, int>> AvailablePositions;

private: // Methods
	//for console
	void Initialize_AvailablePositions();

	//find winner
	void Vertical_GameBoard_Check(); //Check the winner vertically.
	void Horizontal_GameBoard_Check(); //Check the winner horizontally.
	//Check the winner diagonally.
	void Diagonal1_1_GameBoard_Check();
	void Diagonal1_2_GameBoard_Check();
	void Diagonal2_GameBoard_Check();

public: //Methods
	GameBoardManager();
	void insertPieceAt(int k, int x);
	void redoInsertion(int x, int y);
	void Display_AvailablePositions();
	int getCurrentSpot(int x, int y);
	// for console
	void Display_GameBoard_Console();
	int AvailablePositionsCheck(int x);
	int findWinner();
	bool movesLeft(){ return !AvailablePositions.empty(); }
	~GameBoardManager();
};

#endif /* GAMEBOARDMANAGER_H_ */
