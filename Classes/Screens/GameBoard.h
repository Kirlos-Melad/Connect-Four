//
// Created by kirlos on 2020-07-20.
//

#ifndef CONNECT_FOUR_GAMEBOARD_H
#define CONNECT_FOUR_GAMEBOARD_H

#include "../../Headers/includes.h"
#include "../../Headers/GameBoardBasic.h"
#include "../Managers/GameBoardManager.h"
#include "../Players/Player.h"

class GameBoard{
private:
    sf::Sprite imgGameBoard, firstPlayer, secondPlayer;
    sf::Texture gameboardTexture, redPieceTexture, bluePieceTexture;
    int gameBoardPositions[ROW_COUNT][COLUMN_COUNT][2];

public:
    GameBoard(const float &width, const float &height, const Player &player1, const Player &player2);
    ~GameBoard();
    void draw(sf::RenderWindow &window, int** gameboard);

private:
    void destroyPointer(int** gameboard);
};


#endif //CONNECT_FOUR_GAMEBOARD_H
