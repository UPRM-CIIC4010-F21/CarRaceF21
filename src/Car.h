
#pragma once

#include "Vehicle.h"

class Car : public Vehicle {

    public:

    Car(double x, double y, int d, ofColor c) : Vehicle(x,y,d,c) {}

    Car() : Vehicle(0,0,1,ofColor(255,255,255)){}

    virtual void draw();
};
