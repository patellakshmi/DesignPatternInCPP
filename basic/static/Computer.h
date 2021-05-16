//
// Created by Lakshmi S Patel on 16/05/21.
//

#ifndef DESIGNPATTERNINCPP_COMPUTER_H
#define DESIGNPATTERNINCPP_COMPUTER_H
#include <string>
#include <iostream>
using namespace std;

class Computer{
    static string cloudURL;
public:
    static string getCloudURL(){
        return cloudURL;
    }
};

string Computer::cloudURL;

#endif //DESIGNPATTERNINCPP_COMPUTER_H
