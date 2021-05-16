//
// Created by Lakshmi S Patel on 16/05/21.
//

#ifndef DESIGNPATTERNINCPP_DRIVER_H
#define DESIGNPATTERNINCPP_DRIVER_H

#include <iostream>
#include <string>
#include "../Manager.h"
using namespace std;

class Driver{
public:
        static void drive(){
            Manager manager("Mr. Akshat Patel", 100000);
            double totalTax = getTotalIncomeTax(manager);
            welcome();
            cout<< "Total tax: "<< totalTax;
        }
};

#endif //DESIGNPATTERNINCPP_DRIVER_H
