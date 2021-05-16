//
// Created by Lakshmi S Patel on 16/05/21.
//

#ifndef DESIGNPATTERNINCPP_MANAGER_H
#define DESIGNPATTERNINCPP_MANAGER_H
#include <iostream>
#include <string>
using namespace std;

class Manager{

    string name;
    double salary;

public:
    Manager(string name, double salary){
        this->name = name;
        this->salary = salary;
    }

    friend double getTotalIncomeTax(Manager manager);
    friend void welcome();

};

double getTotalIncomeTax(Manager manager){
    double tax = manager.salary*30/100;
    return tax;
}

void welcome(){
    cout<< "Welcome...";
}

#endif //DESIGNPATTERNINCPP_MANAGER_H
