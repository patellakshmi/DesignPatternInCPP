//
// Created by Lakshmi S Patel on 16/05/21.
//

#ifndef DESIGNPATTERNINCPP_OFFCOMMAND_H
#define DESIGNPATTERNINCPP_OFFCOMMAND_H
#include "Command.h"
#include <iostream>
using namespace std;

class LightOffCommand : public Command{
private:
    Light light;
public:
    LightOffCommand(Light &light){
        this->light = light;
    }

    void execute() override{
        cout<< "Off command executed...";
    }
};

#endif //DESIGNPATTERNINCPP_OFFCOMMAND_H
