//
// Created by kirlos on 7/30/20.
//

#ifndef CONNECT_FOUR_ARRAY2D_H
#define CONNECT_FOUR_ARRAY2D_H

#include "Array1D.h"

template<typename T>
class Array2D {
private:
    Array1D<T>** head;
    const unsigned int size;
public:
    Array2D(unsigned int row, unsigned int col);
    ~Array2D();

    Array1D<T>& operator[](unsigned int i);
    unsigned int getSize() { return size; }
};


#endif //CONNECT_FOUR_ARRAY2D_H
