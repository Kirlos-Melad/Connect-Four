//
// Created by kirlos on 2020-07-20.
//

#include "GameBoard.h"

GameBoard::GameBoard(const float &width, const float &height, const Player &player1, const Player &player2) {

    if(!gameboardTexture.loadFromFile("../Assets/GameBoard.png")){
        std::cout << "../../Assets/GameBoard.png not found.\nGame Board aborted.";
        //do some
    }
    if(!redPieceTexture.loadFromFile("../Assets/redPiece.png")){
        std::cout << "../../Assets/GameBoard.png not found.\nGame Board aborted.";
        //do some
    }
    if(!bluePieceTexture.loadFromFile("../Assets/bluePiece.png")){
        std::cout << "../../Assets/GameBoard.png not found.\nGame Board aborted.";
        //do some
    }

    imgGameBoard.setTexture(gameboardTexture);
    imgGameBoard.setPosition(width / 2 - 400, height / 2 - 400);

    if(player1.getTurn() == FIRST_PLAYER){
        if(player1.getColor() == 'r'){
            firstPlayer.setTexture(redPieceTexture);
            secondPlayer.setTexture(bluePieceTexture);
        }else{
            firstPlayer.setTexture(bluePieceTexture);
            secondPlayer.setTexture(redPieceTexture);
        }
    }else {
        if(player2.getColor() == 'r'){
            firstPlayer.setTexture(redPieceTexture);
            secondPlayer.setTexture(bluePieceTexture);
        }else{
            firstPlayer.setTexture(bluePieceTexture);
            secondPlayer.setTexture(redPieceTexture);
        }
    }



    for (int i = ROW_COUNT - 1; i >= 0; i--) {
        for (int j = 0; j < COLUMN_COUNT; j++) {
            gameBoardPositions[i][j][0] = j * 100;
            gameBoardPositions[i][j][1] = i * 100;
        }
    }
}

void GameBoard::draw(sf::RenderWindow &window, int** gameboard) {
    window.draw(imgGameBoard);

    for (int i = ROW_COUNT - 1; i >= 0; i--) {
        for (int j = 0; j < COLUMN_COUNT; j++) {
            if(gameboard[i][j] == FIRST_PLAYER){
                firstPlayer.setPosition(gameBoardPositions[i][j][0], gameBoardPositions[i][j][1]);
                window.draw(firstPlayer);
            } else if(gameboard[i][j] == SECOND_PLAYER){
                secondPlayer.setPosition(gameBoardPositions[i][j][0], gameBoardPositions[i][j][1]);
                window.draw(secondPlayer);
            }
        }
    }

    destroyPointer(gameboard);
}

void GameBoard::destroyPointer(int **gameboard) {
    for (int i = ROW_COUNT - 1; i >= 0; i--) {
        delete [] gameboard[i];
    }

    delete [] gameboard;
}

GameBoard::~GameBoard() {

}
