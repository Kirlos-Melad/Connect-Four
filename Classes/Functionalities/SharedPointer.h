//
// Created by kirlos on 7/30/20.
//

#ifndef CONNECT_FOUR_SHAREDPOINTER_H
#define CONNECT_FOUR_SHAREDPOINTER_H

#include <bits/stdc++.h>

template <typename T>
class SharedPointer {
private:
    T *pointer;
    unsigned int *counter;
public:
    explicit SharedPointer(T *ptr = nullptr);
    SharedPointer(SharedPointer &copy);
    ~SharedPointer();

    unsigned int getCounter() const;
    T& operator*();
    T* operator->();
};


#endif //CONNECT_FOUR_SHAREDPOINTER_H
