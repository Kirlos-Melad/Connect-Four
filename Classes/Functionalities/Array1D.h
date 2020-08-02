//
// Created by kirlos on 7/30/20.
//

#ifndef CONNECT_FOUR_ARRAY1D_H
#define CONNECT_FOUR_ARRAY1D_H

template<typename T>
class Array1D {
private:
    T* head;
    const unsigned int size;
public:
    Array1D(unsigned int size);
    ~Array1D();

    T& operator[](unsigned int i);
    unsigned int getSize() { return size; }
};


#endif //CONNECT_FOUR_ARRAY1D_H
