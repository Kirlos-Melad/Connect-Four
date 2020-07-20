//
// Created by kirlos on 2020-07-20.
//

#include "GameBoard.h"

GameBoard::GameBoard() {
    sf::Texture textureGameBoard;
    if(!textureGameBoard.loadFromFile("../../Assets/GameBoard.png")){
        std::cout << "../../Assets/GameBoard.png not found.\nGame Board aborted.";
        //do some
    }
    GameBoard.setTexture(textureGameBoard);
}

void GameBoard::draw(sf::RenderWindow &window, sf::Sprite firstPlayer, sf::Sprite secondPlayer) {
    window.draw(GameBoard);

    for (int i = ROW_COUNT - 1; i >= 0; i--) {
        for (int j = 0; j < COLUMN_COUNT; j++) {
            if(GameBoard[i][j][2] == FIRST_PLAYER){
                firstPlayer.setPosition(GameBoard[i][j][0], GameBoard[i][j][1]);
                window.draw(firstPlayer);
            } else if(GameBoard[i][j][2] == SECOND_PLAYER){
                secondPlayer.setPosition(GameBoard[i][j][0], GameBoard[i][j][1]);
                window.draw(secondPlayer);
            }
        }
    }
}

GameBoard::~GameBoard() {

}
