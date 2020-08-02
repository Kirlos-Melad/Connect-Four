//
// Created by kirlos on 7/29/20.
//

#include "ConnectFourStructure.h"

ConnectFourStructure::ConnectFourStructure() {
    positions = new int[COLUMN_COUNT]{0};
    isFull = false;
}

int ConnectFourStructure::getAvailablePositionAt(int x) {
    return positions[x];
}

void ConnectFourStructure::updatePositions(SharedPointer<Array2D < int>> gameboard) {
    isFull = true;
    for (int i = 0; i < ROW_COUNT; i++) {
        bool found = false;
        for (int j = 0; j < COLUMN_COUNT && !found; j++) {
            if ((*gameboard)[j][i] == 0) {
                positions[i] = j;
                isFull = false;
                found = true;
            }
        }
        if(!found)
            positions[i] = -1;
    }
}

bool ConnectFourStructure::isFull1() const {
    return isFull;
}

ConnectFourStructure::~ConnectFourStructure() {
    delete [] positions;
}
