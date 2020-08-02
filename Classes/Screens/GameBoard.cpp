//
// Created by kirlos on 2020-07-20.
//

#include "GameBoard.h"

GameBoard::GameBoard(const float &width, const float &height) {
    rectangle.setSize(sf::Vector2f(width, height));
    rectangle.setFillColor(sf::Color::Blue);
    rectangle.setPosition(0,0);

    circle.setRadius(40);
    circle.setFillColor(sf::Color::White);
    circle.setPosition(0,0);

    xOffSet = width / 2 - (110 * 4);
    yOffSet = height / 2 - (110 * 4);

    for (int i = 0; i < ROW_COUNT; i++) {
        for (int j = 0; j < COLUMN_COUNT; j++) {
            gameBoardPositions[i][j][0] = j * 110 + xOffSet;
            gameBoardPositions[i][j][1] = (ROW_COUNT - i - 1) * 110 + yOffSet;
        }
    }
}

void GameBoard::draw(sf::RenderWindow &window, SharedPointer<Array2D<int>> gameboard) {
    window.draw(rectangle);

    for (int i = 0; i < ROW_COUNT; i++) {
        for (int j = 0; j < COLUMN_COUNT; j++) {
            circle.setPosition(gameBoardPositions[i][j][0], gameBoardPositions[i][j][1]);

            if((*gameboard)[i][j] == FIRST_PLAYER){
                circle.setFillColor(sf::Color::Red);
                circle.setOutlineThickness(5);
            } else if((*gameboard)[i][j] == SECOND_PLAYER){
                circle.setFillColor(sf::Color::Yellow);
                circle.setOutlineThickness(5);
            } else if((*gameboard)[i][j] == EMPTY_SPOT){
                circle.setFillColor(sf::Color::White);
                circle.setOutlineThickness(0);
            }

            window.draw(circle);
        }
    }
}

const int GameBoard::getXOffSet() const {
    return xOffSet;
}

const int GameBoard::getYOffSet() const {
    return yOffSet;
}

GameBoard::~GameBoard() {

}
