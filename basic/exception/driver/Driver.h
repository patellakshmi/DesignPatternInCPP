//
// Created by Lakshmi S Patel on 16/05/21.
//

#ifndef DESIGNPATTERNINCPP_DRIVER_H
#define DESIGNPATTERNINCPP_DRIVER_H

#include <iostream>
#include <string>
#include "../MyException.h"
using namespace std;

class Driver{
public:
        static void drive(){
                MyException myException;
                try{
                    myException.getCar();
                }catch (exception& e){
                    cout<< e.what();
                }
        }
};

#endif //DESIGNPATTERNINCPP_DRIVER_H
