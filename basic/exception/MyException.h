//
// Created by Lakshmi S Patel on 17/05/21.
//

#ifndef DESIGNPATTERNINCPP_MYEXCEPTION_H
#define DESIGNPATTERNINCPP_MYEXCEPTION_H

#include <iostream>
#include <string>
#include <exception>
using namespace std;

class MyException{

public:
    void getCar(){
        throw runtime_error("hi");
    }

};
#endif //DESIGNPATTERNINCPP_MYEXCEPTION_H
