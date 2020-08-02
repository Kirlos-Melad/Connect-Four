//
// Created by kirlos on 7/30/20.
//

#include "Judge.h"

int Judge::horizontalCheck(SharedPointer<Array2D<int>> &myGameBoard) {
    for (int i = 0; i < ROW_COUNT; i++) {
        for (int j = 0; j < COLUMN_COUNT - 3; j++) {
            if ((*myGameBoard)[i][j] == FIRST_PLAYER && (*myGameBoard)[i][j + 1] == FIRST_PLAYER && (*myGameBoard)[i][j + 2] == FIRST_PLAYER && (*myGameBoard)[i][j + 3] == FIRST_PLAYER)
                return FIRST_PLAYER;
            else if ((*myGameBoard)[i][j] == SECOND_PLAYER && (*myGameBoard)[i][j + 1] == SECOND_PLAYER && (*myGameBoard)[i][j + 2] == SECOND_PLAYER && (*myGameBoard)[i][j + 3] == SECOND_PLAYER)
                return SECOND_PLAYER;
        }
    }
    return -1;
}

int Judge::verticalCheck(SharedPointer<Array2D<int>> &myGameBoard) {
    for (int i = 0; i < COLUMN_COUNT; i++) {
        for (int j = 0; j < ROW_COUNT - 3; j++) {
            if ((*myGameBoard)[j][i] == FIRST_PLAYER && (*myGameBoard)[j + 1][i] == FIRST_PLAYER && (*myGameBoard)[j + 2][i] == FIRST_PLAYER && (*myGameBoard)[j + 3][i] == FIRST_PLAYER)
                return FIRST_PLAYER;
            else if ((*myGameBoard)[j][i] == SECOND_PLAYER && (*myGameBoard)[j + 1][i] == SECOND_PLAYER && (*myGameBoard)[j + 2][i] == SECOND_PLAYER && (*myGameBoard)[j + 3][i] == SECOND_PLAYER)
                return SECOND_PLAYER;
        }
    }
    return -1;
}

int Judge::positiveSlopedDiagonal(SharedPointer<Array2D<int>> &myGameBoard) {
    for (int i = 0; i < ROW_COUNT - 3; i++) {
        for (int j = 0; j < COLUMN_COUNT - 3; j++) {
            if ((*myGameBoard)[i][j] == FIRST_PLAYER && (*myGameBoard)[i + 1][j + 1] == FIRST_PLAYER && (*myGameBoard)[i + 2][j + 2] == FIRST_PLAYER && (*myGameBoard)[i + 3][j + 3] == FIRST_PLAYER)
                return FIRST_PLAYER;
            else if ((*myGameBoard)[i][j] == SECOND_PLAYER && (*myGameBoard)[i + 1][j + 1] == SECOND_PLAYER && (*myGameBoard)[i + 2][j + 2] == SECOND_PLAYER && (*myGameBoard)[i + 3][j + 3] == SECOND_PLAYER)
                return SECOND_PLAYER;
        }
    }
    return -1;
}

int Judge::negativeSlopedDiagonal(SharedPointer<Array2D<int>> &myGameBoard) {
    for (int i = 3; i < ROW_COUNT; i++) {
        for (int j = 0; j < COLUMN_COUNT - 3; j++) {
            if ((*myGameBoard)[i][j] == FIRST_PLAYER && (*myGameBoard)[i - 1][j + 1] == FIRST_PLAYER && (*myGameBoard)[i - 2][j + 2] == FIRST_PLAYER && (*myGameBoard)[i - 3][j + 3] == FIRST_PLAYER)
                return FIRST_PLAYER;
            else if ((*myGameBoard)[i][j] == SECOND_PLAYER && (*myGameBoard)[i - 1][j + 1] == SECOND_PLAYER && (*myGameBoard)[i - 2][j + 2] == SECOND_PLAYER && (*myGameBoard)[i - 3][j + 3] == SECOND_PLAYER)
                return SECOND_PLAYER;
        }
    }
    return -1;
}

int Judge::getWinner(SharedPointer<Array2D<int>> myGameBoard) {
    int winner = horizontalCheck(myGameBoard);
    if(winner == -1)
        winner = verticalCheck(myGameBoard);
    if(winner == -1)
        winner = positiveSlopedDiagonal(myGameBoard);
    if(winner == -1)
        winner = negativeSlopedDiagonal(myGameBoard);
    return winner;
}
