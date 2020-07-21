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
    sf::CircleShape circle;
    sf::RectangleShape rectangle;
    int gameBoardPositions[ROW_COUNT][COLUMN_COUNT][2];
    int xOffSet, yOffSet;

public:
    GameBoard(const float &width, const float &height);
    ~GameBoard();
    void draw(sf::RenderWindow &window, int** gameboard);

    const int getXOffSet() const;
    const int getYOffSet() const;

private:
    void destroyPointer(int** gameboard);
};


#endif //CONNECT_FOUR_GAMEBOARD_H
