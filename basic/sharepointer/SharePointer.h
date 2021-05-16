//
// Created by Lakshmi S Patel on 16/05/21.
//



#ifndef DESIGNPATTERNINCPP_SHAREPOINTER_H
#define DESIGNPATTERNINCPP_SHAREPOINTER_H

#include <iostream>
#include <ostream>
#include "Counter.h"

using namespace std;

template <typename T>
class SharePointer{

private:
    Counter *counter;
    T *ptr;

public:
    explicit SharePointer(T *ptr = nullptr){
        this->ptr = ptr;
        counter = new Counter();
        if( ptr ){
            (*counter)++;
        }
    }

    SharePointer(SharePointer<T> &refPtr){
        this->ptr = refPtr.ptr;
        this->counter = refPtr.counter;
        (*counter)++;

    }

    unsigned int useCount(){ return counter->getCount();  }


    T* get(){ return ptr;}

    T& operator*(){ return *ptr; }

    T* operator->(){ return ptr; }

    friend ostream& operator<<(ostream& os,
                               SharePointer<T>& sp)
    {
        os << "Address pointed : " << sp.get() << endl;
        os << *(sp.counter) << endl;
        return os;
    }

};

#endif //DESIGNPATTERNINCPP_SHAREPOINTER_H
