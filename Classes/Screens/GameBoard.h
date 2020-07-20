//
// Created by kirlos on 2020-07-20.
//

#ifndef CONNECT_FOUR_GAMEBOARD_H
#define CONNECT_FOUR_GAMEBOARD_H

#include "../headers.h"

class GameBoard {
private:
    sf::Sprite GameBoard;
public:
    GameBoard();
    ~GameBoard();
    void draw(sf::RenderWindow &window, sf::Sprite firstPlayer, sf::Sprite secondPlayer);
};


#endif //CONNECT_FOUR_GAMEBOARD_H
