//
// Created by Lakshmi S Patel on 16/05/21.
//

#ifndef DESIGNPATTERNINCPP_COUNTER_H
#define DESIGNPATTERNINCPP_COUNTER_H

#include <iostream>
#include <ostream>
using namespace std;

class Counter {
private:
    int count;
public:

    Counter(): count(0){};

    Counter(const Counter&) = delete;
    Counter& operator=(const Counter&) = delete;

    int getCount(){
        this->count;
    }

    int setCount(int count){
        this->count = count;
    }

    void operator++(){
        count++;
    }

    void operator++(int)
    {
        count++;
    }

    void operator--(){
        count--;
    }

    void operator--(int)
    {
        count--;
    }

    friend ostream& operator<<(ostream& os,
                               const Counter& counter)
    {
        os << "Counter Value : " << counter.count
           << endl;
        return os;
    }


};


#endif //DESIGNPATTERNINCPP_COUNTER_H
