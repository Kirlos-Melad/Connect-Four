//
// Created by kirlos on 7/30/20.
//

#include "Array2D.h"
template<typename T>
Array2D<T>::Array2D(unsigned int row, unsigned int col) : size(row){
    head = new Array1D<T>*[size];
    for(int i = 0; i < size; i++)
        head[i] = new Array1D<T>(col);
}

template<typename T>
Array1D<T> &Array2D<T>::operator[](unsigned int i){
    return *head[i];
}

template<typename T>
Array2D<T>::~Array2D() {
    for(int i = 0; i < size; i++)
        delete head[i];
    delete [] head;
}