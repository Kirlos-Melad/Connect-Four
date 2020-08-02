//
// Created by kirlos on 7/30/20.
//

#ifndef CONNECT_FOUR_JUDGE_H
#define CONNECT_FOUR_JUDGE_H

#include "../../Headers/GameBoardBasic.h"
#include "../../Headers/FunctionalitiesIncludes.h"

class Judge {
private:
    int horizontalCheck(SharedPointer<Array2D<int>> &myGameBoard);
    int verticalCheck(SharedPointer<Array2D<int>> &myGameBoard);
    int positiveSlopedDiagonal(SharedPointer<Array2D<int>> &myGameBoard);
    int negativeSlopedDiagonal(SharedPointer<Array2D<int>> &myGameBoard);
public:
    int getWinner(SharedPointer<Array2D<int>> myGameBoard);
};


#endif //CONNECT_FOUR_JUDGE_H
