#line 1 "d:\\workspace\\sensor\\door_control\\Door.h"
#ifndef DOOR_H
#define DOOR_H

#pragma once
#include <Servo.h> 

class Door
{
public:
    Door();
    void open(Servo &servo);

private:

};

#endif