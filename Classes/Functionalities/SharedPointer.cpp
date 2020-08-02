//
// Created by kirlos on 7/30/20.
//

#include "SharedPointer.h"
template<typename T>
SharedPointer<T>::SharedPointer(T *ptr) {
    pointer = ptr;
    counter = new unsigned int(0);
    if(pointer)
        (*counter)++;
}

template<typename T>
SharedPointer<T>::SharedPointer(SharedPointer &copy) {
    pointer = copy.pointer;
    counter = copy.counter;
    (*counter)++;
}

template<typename T>
unsigned int SharedPointer<T>::getCounter() const {
    return *counter;
}

template<typename T>
T &SharedPointer<T>::operator*() {
    return *pointer;
}

template<typename T>
T *SharedPointer<T>::operator->() {
    return pointer;
}

template<typename T>
SharedPointer<T>::~SharedPointer() {
    (*counter)--;
    if(!(*counter)){
        delete pointer;
        delete counter;
    }
}
