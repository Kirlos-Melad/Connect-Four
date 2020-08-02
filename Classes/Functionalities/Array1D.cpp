//
// Created by kirlos on 7/30/20.
//

#include "Array1D.h"

template<typename T>
Array1D<T>::Array1D(unsigned int size) : size(size){
    head = new T[size];
}

template<typename T>
T &Array1D<T>::operator[](unsigned int i){
    return head[i];
}

template<typename T>
Array1D<T>::~Array1D() {
    delete [] head;
}