//
// Created by kirlos on 7/29/20.
//

#ifndef CONNECT_FOUR_CONNECTFOURSTRUCTURE_H
#define CONNECT_FOUR_CONNECTFOURSTRUCTURE_H

#include <bits/stdc++.h>
#include "../../Headers/GameBoardBasic.h"
#include "SharedPointer.h"
#include "Array2D.h"

class ConnectFourStructure {
private:
   int *positions;
   bool isFull;
public:
    ConnectFourStructure();
    void updatePositions(SharedPointer<Array2D<int>> gameboard);
    int getAvailablePositionAt(int x);
    bool isFull1() const;
    ~ConnectFourStructure();
};


#endif //CONNECT_FOUR_CONNECTFOURSTRUCTURE_H
