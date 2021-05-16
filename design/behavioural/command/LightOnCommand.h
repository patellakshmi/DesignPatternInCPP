//
// Created by Lakshmi S Patel on 16/05/21.
//

#ifndef DESIGNPATTERNINCPP_LIGHTONCOMMAND_H
#define DESIGNPATTERNINCPP_LIGHTONCOMMAND_H

#include "Command.h"
#include <iostream>
using namespace std;

class LightOnCommand : public Command{
private:
    Light light;
public:
    LightOnCommand(Light &light){
        this->light = light;
    }

    void execute() override{
        cout<< "Off command executed...";
    }
};

#endif //DESIGNPATTERNINCPP_LIGHTONCOMMAND_H
