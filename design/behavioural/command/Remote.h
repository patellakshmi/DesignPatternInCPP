//
// Created by Lakshmi S Patel on 16/05/21.
//

#ifndef DESIGNPATTERNINCPP_REMOTE_H
#define DESIGNPATTERNINCPP_REMOTE_H

#include "Command.h"

class Remote{
private:
    Command *lightOffCommand;
    Command *lightOnCommand;
public:
    Remote(Command *lightOffCommand, Command *lightOnCommand){
        this->lightOffCommand = lightOffCommand;
        this->lightOnCommand = lightOnCommand;
    }

    void turnOff(){
        lightOffCommand->execute();
    }

    void turnOn(){
        lightOnCommand->execute();
    }

};

#endif //DESIGNPATTERNINCPP_REMOTE_H
